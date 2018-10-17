//
//  18w39_q3.h
//  ex
//
//  Created by 戴硕 on 2018/9/27.
//

#ifndef _8w39_q3_h
#define _8w39_q3_h

/*
 实现程序中的 add, 使程序输出：
 3
 6.5
 hello,world
 wahaha
 
 #include <iostream>
 
 int main() {
 
     std::cout << add(1, 2) << std::endl;
     std::cout << add(4, 2.5) << std::endl;
     std::cout << add(std::string("hello,"), std::string("world")) << std::endl;
     std::cout << add(std::string("wahah"), 'a') << std::endl;
 
     return 0;
 }
 */

namespace ns_18w39q3 {

#include <iostream>
    
//    template<typename T1, typename T2>
//    auto add(const T1& lhs, const T2& rhs) {
//        return lhs + rhs;
//    }
    
    int main() {
        auto add = [](auto a, auto b) { return a + b; };
        std::cout << add(1, 2) << std::endl;
        std::cout << add(4, 2.5) << std::endl;
        std::cout << add(std::string("hello,"), std::string("world")) << std::endl;
        std::cout << add(std::string("wahah"), 'a') << std::endl;
        return 0;
    }
}

#endif /* _8w39_q3_h */
