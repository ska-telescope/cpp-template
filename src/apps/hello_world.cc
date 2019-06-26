#include<iostream>
#include "HelloWorldConfig.h"

int main() {
	std::cout << "Hello world version: " << HelloWord_VERSION_MAJOR << ":" 
		  << HelloWorld_VERSION_MINOR << ":"
	          << HelloWorld_VERSION_PATCH <<  std::endl;

	return EXIT_SUCCESS;
}
