#include <iostream>

#include "HelloWorldConfig.h"
#include "ska/nested/hello.h"
#include "ska/nested/wave.h"

int main() {

	ska::nested::wave theHello;

	std::cout << "Hello world version: " << HelloWorld_VERSION_MAJOR << ":"
	          << HelloWorld_VERSION_MINOR << ":"
	          << HelloWorld_VERSION_PATCH <<  std::endl;

	theHello.greeting();

	return 0;
}
