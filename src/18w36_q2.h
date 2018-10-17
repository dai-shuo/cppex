//
//  18w36_q2.h
//  ex
//
//  Created by 戴硕 on 2018/9/3.
//

#ifndef _8w36_q2_h
#define _8w36_q2_h

/*
 结构体S1, S2, S3都有且仅有8个数据成员(int8_t, int16_t, int32_t, int64_t各2个)。
 补全S1, S2, S3的定义，使程序输出：32,40,48
 
 #include <iostream>
 
 int main() {
    std::cout << sizeof(S1) << "," << sizeof(S2) << "," << sizeof(S3) << std::endl;
    return 0;
 }
 */

#include <iostream>

namespace ns_18w36q2 {
    
    // 2 * (sizeof(int8_t) + sizeof(int16_t) + sizeof(int32_t) + sizeof(int64_t)) = 30
    // alignof(S1) == alignof(S2) == alignof(S3) == alignof(int64_t) == 8
    
    struct S1 {
        int8_t i8_1;        // 0
        int8_t i8_2;        // 1
        int16_t i16_1;      // 2
        int16_t i16_2;      // 4
        int32_t i32_1;      // 8  (+2)
        int32_t i32_2;      // 12
        int64_t i64_1;      // 16
        int64_t i64_2;      // 24
    };
    // size = 30 + 2 = 32
    
    struct S2 {
        int8_t i8_1;        // 0
        int64_t i64_1;      // 8  (+7)
        int8_t i8_2;        // 16
        int16_t i16_1;      // 18 (+1)
        int16_t i16_2;      // 20
        int32_t i32_1;      // 24 (+2)
        int32_t i32_2;      // 28
        int64_t i64_2;      // 32
    };
    // size = 30 + 7 + 1 + 2 = 40
    
    struct S3 {
        int8_t i8_1;        // 0
        int64_t i64_1;      // 8  (+7)
        int8_t i8_2;        // 16
        int64_t i64_2;      // 24 (+7)
        int16_t i16_1;      // 32
        int16_t i16_2;      // 34
        int32_t i32_1;      // 40 (+4)
        int32_t i32_2;      // 44
    };
    // size = 30 + 7 + 7 + 4 = 48
    
    int main() {
        std::cout << sizeof(S1) << "," << sizeof(S2) << "," << sizeof(S3) << std::endl;
        return 0;
    }

}

#endif /* _8w36_q2_h */
