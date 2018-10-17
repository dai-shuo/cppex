//
//  18w35_q2.h
//  ex
//
//  Created by 戴硕 on 2018/8/29.
//

#ifndef _8w35_q2_h
#define _8w35_q2_h

/*
 实现 DECAY_TYPE 宏，使程序输出: 11111111
 
 #include <type_traits>
 #include <iostream>
 
 int main() {
     int a = 1;
     int &b = a;
     int *c = &a;
     volatile const float d = 3.14;
     volatile const float& e = d;
     double f[] = { 0, 1, 2, 3 };
     enum { red, green, blue } g = green;
 
     std::cout << std::is_same< DECAY_TYPE(a), int >::value
               << std::is_same< DECAY_TYPE(b), int >::value
               << std::is_same< DECAY_TYPE(c), int* >::value
               << std::is_same< DECAY_TYPE(d), float >::value
               << std::is_same< DECAY_TYPE(e), float >::value
               << std::is_same< DECAY_TYPE(f), double* >::value
               << std::is_same< DECAY_TYPE(g), int >::value
               << std::is_same< DECAY_TYPE(main), int(*)() >::value
               << std::endl;
 
     return 0;
 }
 */


#include <type_traits>
#include <iostream>

#define DECAY_TYPE(val)  decltype(+val)
//#define DECAY_TYPE(val)  std::decay<decltype(val)>::type

namespace ns_18w35q2 {
    
    int main() {
        int a = 1;
        int &b = a;
        int *c = &a;
        volatile const float d = 3.14;
        volatile const float& e = d;
        double f[] = { 0, 1, 2, 3 };
        enum { red, green, blue } g = green;
        
        std::cout << std::is_same< DECAY_TYPE(a), int >::value
                  << std::is_same< DECAY_TYPE(b), int >::value
                  << std::is_same< DECAY_TYPE(c), int* >::value
                  << std::is_same< DECAY_TYPE(d), float >::value
                  << std::is_same< DECAY_TYPE(e), float >::value
                  << std::is_same< DECAY_TYPE(f), double* >::value
                  << std::is_same< DECAY_TYPE(g), int >::value
                  << std::is_same< DECAY_TYPE(main), int(*)() >::value
                  << std::endl;
        
        return 0;
    }
    
}

#endif /* _8w35_q2_h */
