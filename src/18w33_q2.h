//
//  18w33_q2.h
//  ex
//
//  Created by 戴硕 on 2018/8/14.
//

#ifndef _8w33_q2_h
#define _8w33_q2_h

/*
 实现宏 MEMBER_OFFSET，使程序输出：
 16
 24
 0
 8
 
 #include <iostream>
 
 struct point { double x, y; };
 struct rect { point origin; double width, height; };
 int main() {
     std::cout << MEMBER_OFFSET(rect, width) << std::endl;
     std::cout << MEMBER_OFFSET(rect, height) << std::endl;
     std::cout << MEMBER_OFFSET(rect, origin) << std::endl;
     std::cout << MEMBER_OFFSET(rect, origin.y) << std::endl;
     return 0;
 }
 
 */

#include <iostream>

namespace ns_18w33q2 {

    struct point { double x, y; };
    struct rect { point origin; double width, height; };

#define MEMBER_OFFSET(S, F)  (size_t)(uintptr_t)&(((S*)0)->F)

    int main() {
        std::cout << MEMBER_OFFSET(rect, width) << std::endl;
        std::cout << MEMBER_OFFSET(rect, height) << std::endl;
        std::cout << MEMBER_OFFSET(rect, origin) << std::endl;
        std::cout << MEMBER_OFFSET(rect, origin.y) << std::endl;
        return 0;
    }

}

#endif /* _8w33_q2_h */
