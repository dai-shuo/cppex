//
//  18w36_q5.h
//  ex
//
//  Created by 戴硕 on 2018/9/9.
//

#ifndef _8w36_q5_h
#define _8w36_q5_h

/*
 补全程序，使程序输出：
 2
 3
 2
 100
 
 #include <iostream>
 
 void f(int x = 1) {
    std::cout << x << std::endl;
 }
 
 int main() {
    f();
    {
       f();
    }
    f();
    f(100);
    return 0;
 }
 */


#include <iostream>

namespace ns_18w36q5 {
    
    void f(int x = 1) {
        std::cout << x << std::endl;
    }

    int main() {
        void f(int = 2);
        f();
        {
            void f(int = 3);
            f();
        }
        f();
        f(100);
        return 0;
    }
}
#endif /* _8w36_q5_h */
