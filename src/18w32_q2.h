//
//  18w32_q2.h
//  ex
//
//  Created by 戴硕 on 2018/8/6.
//

#ifndef _8w32_q2_h
#define _8w32_q2_h

/*
 补全程序，使之运行输出：
 10 9 8 7 6 5 4 3 2 1
 1 2 3 4 5 6 7 8 9 10
 11 10 9 8 7 6 5 4 3 2
 2 3 4 5 6 7 8 9 10 11
 
 #include <iostream>
 #include <functional>
 #include <algorithm>
 
 template <typename C>
 void print(C& c) {
    for (auto x: c) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
 }
 
 void main() {
     container c;
     container_view cv;
 
     for (int i = 0; i < 10; i++) {
         c.push_back(10 - i);
         cv.push_back(c.back());
     }
     std::sort(cv.begin(), cv.end());
     print(c);
     print(cv);
 
     std::for_each(c.begin(), c.end(), [](int &x) { x += 1; });
     print(c);
     print(cv);
 }
 
 */

#include <iostream>
#include <functional>
#include <algorithm>
#include <list>

namespace ns_18w32q2 {

    // program would crash if your container used a vector instead of a list.
    // when you keep pushing data into a vector, it will reallocate and invalidate references of its elements.
    using container = std::list<int>;
    using container_view = std::vector<std::reference_wrapper<int>>;
    
    template <typename C>
    void print(C& c) {
        for (auto x: c) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    
    void main() {
        container c;
        container_view cv;
        
        for (int i = 0; i < 10; i++) {
            c.push_back(10 - i);
            cv.push_back(c.back());
        }
        std::sort(cv.begin(), cv.end());
        print(c);
        print(cv);

        std::for_each(c.begin(), c.end(), [](int &x) { x += 1; });
        print(c);
        print(cv);
    }
}

#endif /* _8w32_q2_h */
