#include "foo.hpp"
#include <iostream>

foo::foo() {
    std::cout << "nice to meet you\n";
}

foo::~foo() {
    std::cout << "bye\n";
}

void* foo::operator new(std::size_t size) {
    std::cout << "hi\n";
    return ::operator new(size);
}

void foo::operator delete(void *ptr) {
    std::cout << "miss you\n";
    return ::operator delete(ptr);
}
