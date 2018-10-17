//
//  18w33_q1.h
//  ex
//
//  Created by 戴硕 on 2018/8/12.
//

#ifndef _8w33_q1_h
#define _8w33_q1_h

/*
 定义宏ADD_MUL, 使程序运行输出：
 3+4=7
 3*4=12
 6+7=13
 6*7=42

 请在ADD_MUL宏中调用add(), mul()来输出内容。
 不要修改题目的其他代码。

 #include <iostream>
 
 void add(int a, int b) {
    std::cout << a << "+" << b << "=" << a+b << std::endl;
 }
 
 void mul(int a, int b) {
    std::cout << a << "*" << b << "=" << a*b << std::endl;
 }
 
 int main() {
     int x = 3, y = 4;
     ADD_MUL(x, y);
     if (x > y)
        ADD_MUL(x + 1, y + 1);
     if (x == y)
        ADD_MUL(x + 2, y + 2);
     else
        ADD_MUL(x + 3, y + 3);
     return 0;
 }
 */

#include <iostream>

namespace ns_18w33q1 {
    
    #define ADD_MUL(a, b)   do { add(a, b); mul(a, b); } while(0)
    
    void add(int a, int b) {
        std::cout << a << "+" << b << "=" << a+b << std::endl;
    }
    
    void mul(int a, int b) {
        std::cout << a << "*" << b << "=" << a*b << std::endl;
    }

    int main() {
        int x = 3, y = 4;
        ADD_MUL(x, y);
        if (x > y)
            ADD_MUL(x + 1, y + 1);
        if (x == y)
            ADD_MUL(x + 2, y + 2);
        else
            ADD_MUL(x + 3, y + 3);
        return 0;
    }
}

#endif /* _8w33_q1_h */
