//
//  18w35_q4.h
//  ex
//
//  Created by 戴硕 on 2018/8/29.
//

#ifndef _8w35_q4_h
#define _8w35_q4_h

/*
 实现 is_container<T> 模板类，使程序输出：000111110
 当 T 是容器时，is_container<T>::value = true, 否则 is_container<T>::value = false。
 T 是容器，当且仅当下面条件都成立：
 1, 存在类型定义 T::value_type, T::iterator, T::size_type
 2, T 可以默认构造，即可以无参构造。如: T obj;
 
 #include <iostream>
 #include <type_traits>
 #include <string>
 #include <vector>
 #include <list>
 #include <boost/container/deque.hpp>
 
 // 符合容器条件
 struct my_float_vector : std::vector<float> {
    my_float_vector(size_t s = 10) { reserve(s); }
 };
 
 // 不符合容器条件，因为没有无参的默认构造方法
 struct my_float_vector2 : std::vector<float> {
    my_float_vector2(size_t s) { reserve(s); }
 };
 
 int main() {
     std::cout << is_container< int >::value
               << is_container< int[2] >::value
               << is_container< decltype(main) >::value
               << is_container< std::string >::value
               << is_container< std::vector<int> >::value
               << is_container< std::list<std::vector<std::string>> >::value
               << is_container< boost::container::deque<short> >::value
               << is_container< my_float_vector >::value
               << is_container< my_float_vector2 >::value
               << std::endl;
     return 0;
 }
 
 */


#include <iostream>
#include <type_traits>
#include <string>
#include <vector>
#include <list>
#include <boost/container/deque.hpp>

namespace ns_18w35q4 {

    template <typename T>
    struct is_container {
        template <typename>
        static std::false_type type_check(...);
        
        template <typename C>
        static std::true_type type_check(
                                   typename C::value_type*,
                                   typename C::iterator*,
                                   typename C::size_type
                                   );
        
        static constexpr bool value = decltype(type_check<T>(0, 0, 0))::value
                                   && std::is_default_constructible<T>::value;
    };
    
    struct my_float_vector : std::vector<float> {
        my_float_vector(size_t s = 10) { reserve(s); }
    };
    
    struct my_float_vector2 : std::vector<float> {
        my_float_vector2(size_t s) { reserve(s); }
    };
    
    int main() {
        std::cout << is_container< int >::value
                  << is_container< int[2] >::value
                  << is_container< decltype(main) >::value
                  << is_container< std::string >::value
                  << is_container< std::vector<int> >::value
                  << is_container< std::list<std::vector<std::string>> >::value
                  << is_container< boost::container::deque<short> >::value
                  << is_container< my_float_vector >::value
                  << is_container< my_float_vector2 >::value
                  << std::endl;
        return 0;
    }
}

#endif /* _8w35_q4_h */
