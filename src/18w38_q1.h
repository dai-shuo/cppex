//
//  18w38_q1.h
//  ex
//
//  Created by 戴硕 on 2018/9/12.
//

#ifndef _8w38_q1_h
#define _8w38_q1_h

/*
 补全代码中的XXXXXXXX, YYYYYYYY，使程序编译通过并输出：100
 
 #include <iostream>
 
 class Base {
 public:
    Base(int v) : _x(v) { }
 protected:
    int _x;
 };
 
 class Derived: public Base {
 public:
     using XXXXXXXX;
     using YYYYYYYY;
 
     Derived(int v1, int v2): Base(v1) {
        _y = v2;
     }
 private:
    int _y = 0;
 };
 
 int main() {
     std::cout << Derived(100)._x << std::endl;
     return 0;
 }
 */

namespace ns_18w38q1 {
    
#include <iostream>
    
    class Base {
    public:
        Base(int v) : _x(v) { }
    protected:
        int _x;
    };
    
    class Derived: public Base {
    public:
        using Base::Base;
        using Base::_x;
        
        Derived(int v1, int v2): Base(v1) {
            _y = v2;
        }
    private:
        int _y = 0;
    };
    
    int main() {
        std::cout << Derived(100)._x << std::endl;
        return 0;
    }

}

#endif /* _8w38_q1_h */
