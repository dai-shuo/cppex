//
//  18w33_q3.h
//  ex
//
//  Created by 戴硕 on 2018/8/14.
//

#ifndef _8w33_q3_h
#define _8w33_q3_h

/*
 补全XXXXXXX/YYYYYY的函数定义和ZZZZZZZ/WWWWWW处的函数调用，使得程序输出
 
 call in my_cls::int_str 1024
 101
 
 #include <iostream>
 class my_cls{
 public:
     virtual std::string int_str( long value ){
         std::cout << "call in my_cls::int_str " << mask << std::endl;
         return std::to_string(value);
     }
 
     int mask;
 };
 
 void int_str_type(XXXXXXX, YYYYYY, long value){}
 
 int main() {
     auto fn_ptr = &int_str_type;
     my_cls obj;
     obj.mask = 1024;
     fn_ptr = (decltype(fn_ptr)) (**(long**) &obj);
     std::string res;
     fn_ptr( ZZZZZZZ, WWWWWW, 101);
     std::cout << res << std::endl;
 return 0;
 }
 */

#include <iostream>
#include <string>

namespace ns_18w33q3 {

    class my_cls{
    public:
        virtual std::string int_str( long value ){
            std::cout << "call in my_cls::int_str " << mask << std::endl;
            return std::to_string(value);
        }
        
        int mask;
    };
    
    void int_str_type(void*, void*, long value){}
    
    int main() {
        auto fn_ptr = &int_str_type;
        my_cls obj;
        obj.mask = 1024;
        fn_ptr = (decltype(fn_ptr)) (**(long**) &obj);
        std::string res;
        fn_ptr(&res, &obj, 101);
        std::cout << res << std::endl;
        return 0;
    }
}

#endif /* _8w33_q3_h */
