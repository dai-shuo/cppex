//
//  18w32_q5.h
//  ex
//
//  Created by 戴硕 on 2018/8/9.
//

#ifndef _8w32_q5_h
#define _8w32_q5_h

/*
 补全XXXXXXXXXXX, 使程序编译通过并输出：1。
 
 #include <iostream>
 
 struct my_int {
     my_int(int x = 0): _x(x) <%%>
 
     XXXXXXXXXXX
 
     int _x;
 };
 
 int main() {
     int s = 0, loops = 1000;
     for (int i = 0; i < loops; i++) {
         my_int a(i);
         int x = my_int(i), y = a;
         s += x - y;
     }
     std::cout << not (s xor loops) << std::endl;
     return 0;
 }
 
 */

#include <iostream>

namespace ns_18w32q5 {
    
    struct my_int {
        my_int(int x = 0): _x(x) <%%>

        operator int() const & { return _x; }
        operator int() const &&  { return _x + 1; }

        int _x;
    };
    
    int main() {
        int s = 0, loops = 1000;
        for (int i = 0; i < loops; i++) {
            my_int a(i);
            int x = my_int(i), y = a;
            s += x - y;
        }
        std::cout << not (s xor loops) << std::endl;
        return 0;
    }
}

#endif /* _8w32_q5_h */
