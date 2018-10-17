#ifndef __18W39Q2_BAR_HPP__
#define __18W39Q2_BAR_HPP__

struct foo;

struct bar {
	bar();
	~bar() {
		if (_foo) delete _foo;
	}
	
	foo *_foo = nullptr;
};

#endif
