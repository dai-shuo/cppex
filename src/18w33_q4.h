//
//  18w33_q4.h
//  ex
//
//  Created by 戴硕 on 2018/8/15.
//

#ifndef _8w33_q4_h
#define _8w33_q4_h
/*
 补全XXXXXXXXX 的函数定义，使得程序正常运行输出 success
 
 #include <iostream>
 void call_object_param(std::string str){
    str = "456";
 }
 
 void call_object_param_ref_type( XXXXXXXXX  ){}
 
 int main() {
 
    std::string  var("123");
 
     // 普通的实参调用无法修改参数的值
     call_object_param(var);
     assert( var == "123" );
 
 
     // 编译之后本质上没有什么对象实参调用
     // 对象作为参数全是指针在传递
     // 只不过临时对象参数开辟在调用者的栈区
 
     auto fn_ptr = (decltype( &call_object_param_ref_type )) &call_object_param;
     fn_ptr( var );
     assert( var != "123" );
 
     std::cout << "success" << std::endl;
 
     return 0;
 }
 */

#include <iostream>
#include <string>

namespace ns_18w33q4 {
    
    void call_object_param(std::string str){
        str = "456";
    }
    
    void call_object_param_ref_type( std::string& ){}
    
    int main() {
        
        std::string  var("123");
        
        // 普通的实参调用无法修改参数的值
        call_object_param(var);
        assert( var == "123" );
        
        
        // 编译之后本质上没有什么对象实参调用
        // 对象作为参数全是指针在传递
        // 只不过临时对象参数开辟在调用者的栈区
        
        auto fn_ptr = (decltype( &call_object_param_ref_type )) &call_object_param;
        fn_ptr( var );
        assert( var != "123" );
        
        std::cout << "success" << std::endl;
        
        return 0;
    }
}

#endif /* _8w33_q4_h */
