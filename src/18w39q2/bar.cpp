#include "bar.hpp"
#include "foo.hpp"
#include <iostream>

struct my_foo: foo {
	virtual ~my_foo() {
		std::cout << "i have to go\n";
	}
};

bar::bar() {
	_foo = new my_foo();
}
