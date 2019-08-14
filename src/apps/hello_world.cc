#include <iostream>

#include "ska/helloworld/config.h"
#include "ska/helloworld/hello.h"
#include "ska/helloworld/wave.h"

int main() {

	ska::helloworld::wave theHello;

	std::cout << "Hello world version: " << HelloWorld_VERSION_MAJOR << ":"
	          << HelloWorld_VERSION_MINOR << ":"
	          << HelloWorld_VERSION_PATCH <<  std::endl;

	theHello.greeting();

	return 0;
}
