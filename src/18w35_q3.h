//
//  18w35_q3.h
//  ex
//
//  Created by 戴硕 on 2018/8/29.
//

#ifndef _8w35_q3_h
#define _8w35_q3_h

/*
 实现 const_is_useless 方法，使程序输出: 100
 
 #include <iostream>
 
 class foo {
 public:
    foo(int x = 0) : _x(x) { }
 
    int get() const { return _x; }
    void set(int x) { _x = x; }
 
    void const_is_useless(int x) const { XXXXXXXX }
 
 private:
    int _x;
 };
 
 int main() {
     const foo bar(8);
     bar.const_is_useless(100);
     std::cout << bar.get() << std::endl;
     return 0;
 }
 */

#include <iostream>

namespace ns_18w35q3 {
    
    class foo {
    public:
        foo(int x = 0) : _x(x) { }
        
        int get() const { return _x; }
        void set(int x) { _x = x; }
        
        void const_is_useless(int x) const {
            *const_cast<int*>(&_x) = x;
        }
        
    private:
        int _x;
    };
    
    int main() {
        const foo bar(8);
        bar.const_is_useless(100);
        std::cout << bar.get() << std::endl;
        return 0;
    }

}

#endif /* _8w35_q3_h */
