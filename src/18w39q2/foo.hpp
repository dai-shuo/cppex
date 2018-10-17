#ifndef __18W39Q2_FOO_HPP__
#define __18W39Q2_FOO_HPP__

#include <cstddef>

struct foo {
	foo();
	virtual ~foo();
	void* operator new(std::size_t);
  void operator delete(void*);
};

#endif
