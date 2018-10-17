//
//  18w38_q2.h
//  ex
//
//  Created by 戴硕 on 2018/9/18.
//

#ifndef _8w38_q2_h
#define _8w38_q2_h

/*
 补全程序，使程序输出：1
 
 #include <iostream>
 #include <vector>
 
 template <typename T>
 size_t occupied(const std::vector<T>& v) {
    return sizeof(v) + sizeof(T) * v.capacity();
 }
 
 int main() {
     std::vector<int> v;
     for (int i = 0; i < 1000000; i++) {
        v.push_back(i);
     }
     v.clear();
 
     XXXXXXXXXXX
 
     std::cout << ( occupied(v) == sizeof(v) ) << std::endl;
     return 0;
 }
 */

namespace ns_18w38q2 {
    
#include <iostream>
#include <vector>
    
    template <typename T>
    size_t occupied(const std::vector<T>& v) {
        return sizeof(v) + sizeof(T) * v.capacity();
    }
    
    int main() {
        std::vector<int> v;
        for (int i = 0; i < 1000000; i++) {
            v.push_back(i);
        }
        v.clear();
        v.shrink_to_fit();  // std::vector<int>().swap(v);
        std::cout << ( occupied(v) == sizeof(v) ) << std::endl;
        return 0;
    }
}

#endif /* _8w38_q2_h */
