//
//  18w31_q1.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w31_q1_h
#define _8w31_q1_h

/*
 实现 GREET 宏，使程序编译运行，并输出：
 nihao
 yamete
 bonjour
 hello

 #include <iostream>
 #include <string>
 
 namespace asia {
     struct chinese {};
     struct japanese {};
 
     std::string greet(const chinese&) { return "nihao"; }
     std::string greet(const japanese&) { return "yamete"; }
 }
 namespace europe {
     struct french {};
     struct british {};
 
     std::string greet(const french&) { return "bonjour"; }
     std::string greet(const british&) { return "hello"; }
 }
 
 template <typename T>
     std::string greet2(const T& x) {
     return GREET(x);
 }
 
 void main() {
     std::cout << greet2( asia::chinese()   ) << std::endl;
     std::cout << greet2( asia::japanese()  ) << std::endl;
     std::cout << greet2( europe::french()  ) << std::endl;
     std::cout << greet2( europe::british() ) << std::endl;
 }
 
 */

#include <iostream>
#include <string>

namespace ns_18w31q1 {
    
    namespace asia {
        struct chinese {};
        struct japanese {};
        
        std::string greet(const chinese&) { return "nihao"; }
        std::string greet(const japanese&) { return "yamete"; }
    }
    namespace europe {
        struct french {};
        struct british {};
        
        std::string greet(const french&) { return "bonjour"; }
        std::string greet(const british&) { return "hello"; }
    }

#define GREET   greet
    
    template <typename T>
    std::string greet2(const T& x) {
        return GREET(x);
    }
    
    void main() {
        std::cout << greet2( asia::chinese()   ) << std::endl;
        std::cout << greet2( asia::japanese()  ) << std::endl;
        std::cout << greet2( europe::french()  ) << std::endl;
        std::cout << greet2( europe::british() ) << std::endl;
    }
}

#endif /* _8w31_q1_h */
