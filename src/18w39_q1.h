//
//  18w39_q1.h
//  ex
//
//  Created by 戴硕 on 2018/9/26.
//

#ifndef _8w39_q1_h
#define _8w39_q1_h

/*
 补全程序中XXXXXXXX处的代码，使程序输出：
 7+3=10
 10
 9+4=13
 13

 #include <iostream>
 
 int main() {
     int x = 7, y = 9, *z = &y;
     auto lambda = [&](int a) {
         std::cout << x << "+" << a << "=" << x + a << "\n";
         x += a;
     };
 
     int (*func)(void*, int) = nullptr;
 
     XXXXXXXX
 
     lambda(3);
     std::cout << x << std::endl;
     func(&z, 4);
     std::cout << y << std::endl;
 
     return 0;
 }
 */

namespace ns_18w39q1 {
    
#include <iostream>
    
    int main() {
        int x = 7, y = 9, *z = &y;
        auto lambda = [&](int a) {
            std::cout << x << "+" << a << "=" << x + a << "\n";
            x += a;
        };
        
        int (*func)(void*, int) = nullptr;
        auto m = &decltype(lambda)::operator();
        union { decltype(m) member_ptr; decltype(func) func_ptr; } c;
        c.member_ptr = m;
        func = c.func_ptr;
        
        lambda(3);
        std::cout << x << std::endl;
        func(&z, 4);
        std::cout << y << std::endl;
        
        return 0;
    }

}

#endif /* _8w39_q1_h */
