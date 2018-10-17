//
//  18w31_q3.h
//  ex
//
//  Created by 戴硕 on 2018/7/30.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w31_q3_h
#define _8w31_q3_h

/*
 实现宏 LALALA ，使程序编译通过并输出1。
 
 #include <iostream>
 
 void main() {
     char a[10];
     const char *b = "hello";
     float *c = nullptr;
 
     bool check = true;
     for (int i = -100; i < 100; i++) {
         check = check && LALALA(a, [i]) == LALALA(i, [a]);
         check = check && LALALA(b, [i]) == LALALA(i, [b]);
         check = check && LALALA(c, [i]) == LALALA(i, [c]);
     }
     std::cout << check << std::endl;
 }
 
 */

#include <iostream>

namespace ns_18w31q3 {
    
#define LALALA(A, B)   &(A B)
    
    void main() {
        char a[10];
        const char *b = "hello";
        float *c = nullptr;
        
        bool check = true;
        for (int i = -100; i < 100; i++) {
            check = check && LALALA(a, [i]) == LALALA(i, [a]);
            check = check && LALALA(b, [i]) == LALALA(i, [b]);
            check = check && LALALA(c, [i]) == LALALA(i, [c]);
        }
        std::cout << check << std::endl;
    }
    
}


#endif /* _8w31_q3_h */
