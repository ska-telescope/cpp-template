#
# include makefile to pick up the standard Make targets, e.g., 'make build'
# build, 'make push' docker push procedure, etc. The other Make targets
# ('make interactive', 'make test', etc.) are defined in this file.
#
-include .make/base.mk
-include .make/deb.mk

# define private rules and additional makefiles
-include ../PrivateRules.mak