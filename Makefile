# Set dir of Makefile to a variable to use later
MAKEPATH := $(abspath $(lastword $(MAKEFILE_LIST)))
BASEDIR := $(patsubst %/,%,$(dir $(MAKEPATH)))

# Cross platform make declarations
# \
!ifndef 0 # \
# nmake code here \
MKDIR=mkdir # \
RMRF=del /f /s /q # \
!else
# make code here
MKDIR=mkdir -p
RMRF=rm -rf
# \
!endif

# Where are we going to configure cmake to run
BUILDDIR ?= $(BASEDIR)/build ## cmake build directory
BUILD_TESTS ?= OFF ## cmake enable tests
LINT_TESTS ?= OFF ## cmake enable checks

# define your personal overides for above variables in here
-include PrivateRules.mak

.PHONY: vars help cmake test clean build run
.DEFAULT_GOAL := help

vars: ## cmake variables
	@echo "BASEDIR: $(BASEDIR)"
	@echo "BUILDDIR: $(BUILDDIR)"

cmake: vars ## bootstrap git submodules and cmake in BUILDDIR
# \
!ifndef 0 # \
	!IF !EXISTS($(BUILDDIR)) # \
	!ERROR Unable to locate $(BUILDDIR) # \
	!ENDIF # \
!else
	@if [ -d "$(BUILDDIR)" ]; then \
	  echo "BUILDDIR already exists - aborting"; \
		exit 1; \
	fi
# \
!endif
	git submodule update --init --recursive
	$(MKDIR) $(BUILDDIR)
	cd $(BUILDDIR) && cmake -DBUILD_TESTS=$(BUILD_TESTS) -DLINT_TESTS=$(LINT_TESTS) $(BASEDIR)

build: cmake ## build HelloWorld
	cd $(BUILDDIR) && $(MAKE)

run: build ## run HelloWorld
	cd $(BUILDDIR)/src/apps && ./HelloWorld

lint: ## lint HelloWorld
	$(MAKE) build LINT_TESTS=ON
	cd $(BUILDDIR) && $(MAKE) lint

test: ## test HelloWorld
	$(MAKE) build BUILD_TESTS=ON
	cd $(BUILDDIR) && $(MAKE) test

clean: ## clean (remove) BUILDDIR
	$(RMRF) $(BUILDDIR)

help:  ## show this help.
	@echo "$(MAKE) targets:"
	@grep -E '^[0-9a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ": .*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'
	@echo ""; echo "make vars (+defaults):"
	@grep -E '^[0-9a-zA-Z_-]+ \?=.*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = " \\?\\= | ## "}; {printf "\033[36m%-30s\033[0m %-20s %-30s\n", $$1, $$2, $$3}'
