//
//  18w37_q3.h
//  ex
//
//  Created by 戴硕 on 2018/9/10.
//

#ifndef _8w37_q3_h
#define _8w37_q3_h

/*
 补全程序中的XXXXXXX, YYYYYYY，使程序输出：101
 
 #include <iostream>
 #include <memory>
 
 struct Foo {
     Foo(int a = 0, int b = 0): _x(a), _y(b) { }
     bool addressable() { return this == &(*this); }
     bool is_my_address(void *p) { return this == p; }
 
     XXXXXXX
 
     int _x, _y;
 };
 
 template <typename T>
 T* address_of(T& obj) {
    YYYYYYY
 }
 
 int main() {
     volatile int a;
     Foo bar(3,4);
     std::cout << (address_of(a) == &a)
               << bar.addressable()
               << bar.is_my_address( address_of(bar) )
               << std::endl;
     return 0;
 }
 */

namespace ns_18w37q3 {
    
#include <iostream>
#include <memory>

    struct Foo {
        Foo(int a = 0, int b = 0): _x(a), _y(b) { }
        bool addressable() { return this == &(*this); }
        bool is_my_address(void *p) { return this == p; }
        void *operator& () { return &_y; }
        
        int _x, _y;
    };
    
    template <typename T>
    T* address_of(T& obj) {
        return std::addressof(obj);
    }
    
    int main() {
        volatile int a;
        Foo bar(3,4);
        std::cout << (address_of(a) == &a)
                  << bar.addressable()
                  << bar.is_my_address( address_of(bar) )
                  << std::endl;
        return 0;
    }
}

#endif /* _8w37_q3_h */
