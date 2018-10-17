//
//  18w32_q4.h
//  ex
//
//  Created by 戴硕 on 2018/8/8.
//

#ifndef _8w32_q4_h
#define _8w32_q4_h

/*
 补全A,B,C，使程序输出:
 111
 000
 
 #include <iostream>
 
 bool compare_ptr(void *p1, void *p2) {
    return p1 == p2;
 }
 
 int main() {
     A *a;
     B *b;
     C *c;
 
     a = (A*)false;
     b = (B*)(a);
     c = (C*)(a);
     std::cout << compare_ptr(a, b) << compare_ptr(a, c) << compare_ptr(b, c) << std::endl;
 
     a = (A*)true;
     b = (B*)(a);
     c = (C*)(a);
     std::cout << compare_ptr(a, b) << compare_ptr(a, c) << compare_ptr(b, c) << std::endl;
 
     return 0;
 }
 */

#include <iostream>

namespace ns_18w32q4 {

    struct X { int x; };
    struct B { int b; };
    struct C { int c; };
    struct A: X,B,C {};

    bool compare_ptr(void *p1, void *p2) {
        return p1 == p2;
    }
    
    int main() {
        A *a;
        B *b;
        C *c;

        a = (A*)false;
        b = (B*)(a);
        c = (C*)(a);
        std::cout << compare_ptr(a, b) << compare_ptr(a, c) << compare_ptr(b, c) << std::endl;

        a = (A*)true;
        b = (B*)(a);
        c = (C*)(a);
        std::cout << compare_ptr(a, b) << compare_ptr(a, c) << compare_ptr(b, c) << std::endl;
        
        return 0;
    }
}

#endif /* _8w32_q4_h */
