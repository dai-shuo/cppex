//
//  18w30_q1.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w30_q1_h
#define _8w30_q1_h

/*
 实现 check<T> 判断 T 是否为struct/class: 如果 T 是struct/class, 那么check<T>::result == 1，否则check<T>::result == 0
 */

#include <iostream>

namespace ns_18w30q1 {
    
    template <typename T>
    struct check {
        
        template <typename C> static char test(int C::*);
        template <typename> static float test(...);
        
        enum { result = sizeof(test<T>(0)) == sizeof(char) };
        
    };
    
    void main() {
        
        struct foo;
        class bar;
        
        std::cout << check<char>::result << std::endl;
        std::cout << check<int>::result << std::endl;
        std::cout << check<float>::result << std::endl;
        std::cout << check<const double&>::result << std::endl;
        std::cout << check<foo>::result << std::endl;
        std::cout << check<bar>::result << std::endl;
        
    }
}

#endif /* _8w30_q1_h */
