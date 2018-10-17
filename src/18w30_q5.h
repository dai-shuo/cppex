//
//  18w30_q5.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w30_q5_h
#define _8w30_q5_h

/*
 实现宏X，使程序编译通过。
 
 template <typename T>
 constexpr bool foo(T x) {
     return x == ***********************x
         && x == *******&*&***&*&*******x
         && x == *****&*****&*****&*****x
         && x == ****&*************&****x
         && x == ****&*************&****x
         && x == *****&***********&*****x
         && x == *******&*******&*******x
         && x == **********&*&**********x
         && x == ***********&***********x;
 }
 
 int main() {
    static_assert(foo(X), "oops!");
    return 0;
 }
 */

namespace ns_18w30q5 {
    
    template <typename T>
    constexpr bool foo(T x) {
        return x == ***********************x
            && x == *******&*&***&*&*******x
            && x == *****&*****&*****&*****x
            && x == ****&*************&****x
            && x == ****&*************&****x
            && x == *****&***********&*****x
            && x == *******&*******&*******x
            && x == **********&*&**********x
            && x == ***********&***********x;
    }
    
#define X main
    
    int main() {
        static_assert(foo(X), "oops!");
        return 0;
    }
}

#endif /* _8w30_q5_h */
