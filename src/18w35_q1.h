//
//  18w35_q1.h
//  ex
//
//  Created by 戴硕 on 2018/8/27.
//

#ifndef _8w35_q1_h
#define _8w35_q1_h
/*
 补全程序 (不要修改main函数)，输出：
 i'm fine.
 thank you.
 and you?
 
 #include <iostream>
 
 int main() {
     std::cout << "thank you." << std::endl;
     return 0;
 }
 */

#include <iostream>

namespace ns_18w35q1 {

    int main() {
        std::cout << "thank you." << std::endl;
        return 0;
    }
    
    struct foo {
        foo() { std::cout << "i'm fine." << std::endl; }
        ~foo() { std::cout << "and you?" << std::endl; }
    };
    volatile foo bar;

}

#endif /* _8w35_q1_h */
