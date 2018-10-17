//
//  18w31_q2.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w31_q2_h
#define _8w31_q2_h

/*
 实现宏 DEFINE_UNITS ，使程序编译通过并正确进行 米/厘米 <-> 英尺/英寸 换算。
 
 #include <iostream>
 
 DEFINE_UNITS
 
 void main() {
     auto YM = 2_m + 29_cm;
     auto MJ = 6_ft + 6_in;
     std::cout << YM / 1_ft << " ft " << YM % 1_ft / 1_in << " in " << std::endl;
     std::cout << MJ / 1_m << " m " << MJ % 1_m / 1_cm << " cm " << std::endl;
 }
 
 // outputs:
 7 ft 6 in
 1 m 98 cm
 
 */

#include <iostream>

namespace ns_18w31q2 {

#define DEFINE_UNITS \
    unsigned long long operator"" _cm(unsigned long long cm) { return cm * 100; } \
    unsigned long long operator"" _m(unsigned long long m) { return m *  100 *100; } \
    unsigned long long operator"" _in(unsigned long long inch) { return inch * 254; } \
    unsigned long long operator"" _ft(unsigned long long foot) { return foot * 254 * 12; }

    DEFINE_UNITS
    
    void main() {
        auto YM = 2_m + 29_cm;
        auto MJ = 6_ft + 6_in;
        std::cout << YM / 1_ft << " ft " << YM % 1_ft / 1_in << " in " << std::endl;
        std::cout << MJ / 1_m << " m " << MJ % 1_m / 1_cm << " cm " << std::endl;
    }
}

#endif /* _8w31_q2_h */
