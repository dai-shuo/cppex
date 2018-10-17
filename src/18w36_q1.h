//
//  18w36_q1.h
//  ex
//
//  Created by 戴硕 on 2018/9/3.
//

#ifndef _8w36_q1_h
#define _8w36_q1_h

/*
 补全函数模板 add 的代码，使程序输出:
 (L, L) 1
 (L, R) 2
 (R, L) 2
 (R, R) 3
 
 #include <iostream>
 
 std::string f(int&, int&)   { return "(L, L)"; }
 std::string f(int&, int&&)  { return "(L, R)"; }
 std::string f(int&&, int&)  { return "(R, L)"; }
 std::string f(int&&, int&&) { return "(R, R)"; }
 
 template <typename T1, typename T2>
 void add(T1&& a, T2&& b)
 {
    XXXXXXXXXXXXXX
 }
 
 int main() {
     int x = 0, y = 1;
     add(x, y);
     add(x, y + 1);
     add(x + 1, y);
     add(x + 1, y + 1);
 
     return 0;
 }
 */

#include <iostream>

namespace ns_18w36q1 {
    
    std::string f(int&, int&)   { return "(L, L)"; }
    std::string f(int&, int&&)  { return "(L, R)"; }
    std::string f(int&&, int&)  { return "(R, L)"; }
    std::string f(int&&, int&&) { return "(R, R)"; }
    
    template <typename T1, typename T2>
    void add(T1&& a, T2&& b) {
        std::cout << f(std::forward<T1>(a), std::forward<T2>(b)) << " " << (a + b) << std::endl;
    }
    
    int main() {
        int x = 0, y = 1;
        add(x, y);
        add(x, y + 1);
        add(x + 1, y);
        add(x + 1, y + 1);
        
        return 0;
    }

}

#endif /* _8w36_q1_h */
