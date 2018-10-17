//
//  18w32_q1.h
//  ex
//
//  Created by 戴硕 on 2018/8/6.
//

#ifndef _8w32_q1_h
#define _8w32_q1_h

/*
 实现size 和 PI，使程序运行输出：
 1
 4
 8
 3
 3.14159265358979
 3.14159
 
 #include <iostream>
 #include <iomanip>
 
 void main() {
     std::cout << size<char> << std::endl;
     std::cout << size<int32_t> << std::endl;
     std::cout << size<double> << std::endl;
 
     std::cout << PI<int> << std::endl;
     std::cout << std::setprecision(15) << PI<double> << std::endl;
     std::cout << std::setprecision(6) << PI<float> << std::endl;
 }
 */

#include <iostream>
#include <iomanip>

namespace ns_18w32q1 {

    template<typename T>
    constexpr size_t size = sizeof(T);
    
    template<typename T>
    constexpr T PI = (T)(3.1415926535897932L);
    
    void main() {
        std::cout << size<char> << std::endl;
        std::cout << size<int32_t> << std::endl;
        std::cout << size<double> << std::endl;
        
        std::cout << PI<int> << std::endl;
        std::cout << std::setprecision(15) << PI<double> << std::endl;
        std::cout << std::setprecision(6) << PI<float> << std::endl;
    }
}

#endif /* _8w32_q1_h */
