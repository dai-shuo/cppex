//
//  18w30_q3.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w30_q3_h
#define _8w30_q3_h

/*
 实现ARGS_COUNT，获取类方法或函数的参数个数。如：
 
 struct C {
     void m1(int);
     void m2(int, char);
 };
 void f4(int, void*, int, char);
 
 ARGS_COUNT(C::m1) == 1
 ARGS_COUNT(C::m2) == 2
 ARGS_COUNT(f4) == 4
 */

#include <iostream>

namespace ns_18w30q3 {
    
    struct C {
        void m1(int);
        void m2(int, char);
    };
    void f4(int, void*, int, char);
    
    /////////////////////
    
    template<typename> struct arg_count;
    
    template<typename R, typename...Args>
    struct arg_count<R(*)(Args...)> {
        enum { count = sizeof...(Args) };
    };
    
    template<typename R, typename Cls, typename...Args>
    struct arg_count<R(Cls::*)(Args...)> {
        enum { count = sizeof...(Args) };
    };
    
#define ARGS_COUNT(F)  (arg_count<decltype(&F)>::count)
    
    void main() {
        std::cout << ARGS_COUNT(C::m1) << std::endl;
        std::cout << ARGS_COUNT(C::m2) << std::endl;
        std::cout << ARGS_COUNT(f4) << std::endl;
    }
}

#endif /* _8w30_q3_h */
