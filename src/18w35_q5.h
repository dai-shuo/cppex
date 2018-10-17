//
//  18w35_q5.h
//  ex
//
//  Created by 戴硕 on 2018/8/30.
//

#ifndef _8w35_q5_h
#define _8w35_q5_h

/*
 补全程序，实现可以序列化数组的函数模板 stringize_array，使程序输出：
 [h,e,l,l,o]
 [1,2,3]
 [alice,bob,charlie]
 [[[1,2],[3,4]],[[5,6],[7,8]]]
 
 #include <iostream>
 
 int main() {
     float c[][2][2] = { {{1,2},{3,4}}, {{5,6},{7,8}} };
     std::cout << stringize_array( (char[]){'h','e','l','l','o'} ) << std::endl;
     std::cout << stringize_array( (int[]){1,2,3} ) << std::endl;
     std::cout << stringize_array( (std::string[]){"alice","bob","charlie"} ) << std::endl;
     std::cout << stringize_array( c ) << std::endl;
     return 0;
 }
 */

#include <iostream>
#include <type_traits>
#include <sstream>

namespace ns_18w35q5 {
    
    template<typename T>
    std::string stringize_array(const T& v);
    
    template<bool is_array = false>
    struct if_array {
        template <typename T>
        static std::string to_string(const T& v) {
            std::stringstream ss;
            ss << v;
            return ss.str();
        }
    };
    
    template<>
    struct if_array<true> {
        template <typename T>
        static std::string to_string(const T& v) {
            using ele_type = typename std::remove_extent<T>::type;
            ele_type *arr = (ele_type*)&v;
            std::string s = "[";
            for (int i = 0; i < std::extent<T>::value; i++) {
                s += (i? "," : "") + stringize_array(arr[i]);
            }
            s += "]";
            return s;
        }
    };
    
    template<typename T>
    std::string stringize_array(const T& v) {
        return if_array<std::is_array<T>::value>::to_string(v);
    }

    int main() {
        float c[][2][2] = { {{1,2},{3,4}}, {{5,6},{7,8}} };
        std::cout << stringize_array( (char[]){'h','e','l','l','o'} ) << std::endl;
        std::cout << stringize_array( (int[]){1,2,3} ) << std::endl;
        std::cout << stringize_array( (std::string[]){"alice","bob","charlie"} ) << std::endl;
        std::cout << stringize_array( c ) << std::endl;
        return 0;
    }

}

#endif /* _8w35_q5_h */
