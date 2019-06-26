#include<iostream>
#include "HelloWorldConfig.h"
#include "top/nested/hello.h"
#include "top/nested/wave.h"

int main() {

	top::nested::wave theHello;
       	
	std::cout << "Hello world version: " << HelloWorld_VERSION_MAJOR << ":" 
		  << HelloWorld_VERSION_MINOR << ":"
	          << HelloWorld_VERSION_PATCH <<  std::endl;

	theHello.greeting();
	
	return EXIT_SUCCESS;
}
