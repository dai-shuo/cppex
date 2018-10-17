//
//  18w36_q3.h
//  ex
//
//  Created by 戴硕 on 2018/9/3.
//

#ifndef _8w36_q3_h
#define _8w36_q3_h

/*
 补全 type_name 函数的实现代码，使程序输出：11
 
 #include <iostream>
 #include <typeinfo>
 
 struct c1 { virtual void m1() {  } };
 struct c2 { virtual void m2() {  } };
 
 const char *type_name(const void *obj_ptr) {
    return ((const char****)obj_ptr)[XXXX][YYYY][ZZZZ];
 }
 
 int main() {
    c1 obj1;
    c2 obj2;
    std::cout << (type_name(&obj1) == typeid(c1).name())
              << (type_name(&obj2) == typeid(c2).name())
              << std::endl;
    return 0;
 }
 */

#include <iostream>
#include <typeinfo>

namespace ns_18w36q3 {
    
    struct c1 { virtual void m1() {  } };
    struct c2 { virtual void m2() {  } };
    
    const char *type_name(const void *obj_ptr) {
        return ((const char****)obj_ptr)[0][-1][1];
    }
    
    int main() {
        c1 obj1;
        c2 obj2;
        std::cout << (type_name(&obj1) == typeid(c1).name())
                  << (type_name(&obj2) == typeid(c2).name())
                  << std::endl;

        return 0;
    }
}

#endif /* _8w36_q3_h */
