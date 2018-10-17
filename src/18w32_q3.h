//
//  18w32_q3.h
//  ex
//
//  Created by 戴硕 on 2018/8/7.
//

#ifndef _8w32_q3_h
#define _8w32_q3_h
/*
 补全 XXXXX 和 YYYYYY，使得程序输出:
 call fun1: 1 mask:100
 call fun2: 2 mask:100
 call fun3: 3 mask:100
 
 // Example program
 #include <iostream>
 #include <string>
 
 class base_cls {
 public:
     virtual void fun1(long n) = 0;
     virtual void fun2(long n) = 0;
     virtual void fun3(long n) = 0;
 };
 
 class derived_cls : public base_cls{
 public:
     virtual void fun1(long n){
        std::cout << "call fun1: " << n << " mask:" << m_mask << std::endl;
     }
 
     virtual void fun2(long n){
        std::cout << "call fun2: " << n << " mask:" << m_mask << std::endl;
     }
 
     virtual void fun3(long n){
        std::cout << "call fun3: "<< n << " mask:" << m_mask << std::endl;
     }
 
 public:
     long m_v1;
     long m_v2;
     long m_v3;
 
     long m_mask;
 };
 
 static void fn_caller(void* cls, long value){}
 
 void main() {
     derived_cls obj;
     obj.m_v1 = 1;
     obj.m_v2 = 2;
     obj.m_v3 = 3;
     obj.m_mask = 100;
 
     decltype( &fn_caller ) fun_ptr;
     long* cls_ptr     = XXXXXXXXX;
     long* vtable_ptr  = YYYYYYYYYY;
     {
         fun_ptr = (decltype( fun_ptr ))vtable_ptr[0];
         fun_ptr( cls_ptr , cls_ptr[1] );
     }
     {
         fun_ptr = (decltype( fun_ptr ))vtable_ptr[1];
         fun_ptr( cls_ptr , cls_ptr[2] );
     }
     {
         fun_ptr = (decltype( fun_ptr ))vtable_ptr[2];
         fun_ptr( cls_ptr , cls_ptr[3] );
     }
 }
 */

#include <iostream>
#include <string>

namespace ns_18w32q3 {
    
    class base_cls {
    public:
        virtual void fun1(long n) = 0;
        virtual void fun2(long n) = 0;
        virtual void fun3(long n) = 0;
    };
    
    class derived_cls : public base_cls{
    public:
        virtual void fun1(long n){
            std::cout << "call fun1: " << n << " mask:" << m_mask << std::endl;
        }
        
        virtual void fun2(long n){
            std::cout << "call fun2: " << n << " mask:" << m_mask << std::endl;
        }
        
        virtual void fun3(long n){
            std::cout << "call fun3: "<< n << " mask:" << m_mask << std::endl;
        }
        
    public:
        long m_v1;
        long m_v2;
        long m_v3;
        
        long m_mask;
    };
    
    static inline void fn_caller(void* cls, long value){}
    
    void main() {
        derived_cls obj;
        obj.m_v1 = 1;
        obj.m_v2 = 2;
        obj.m_v3 = 3;
        obj.m_mask = 100;
        
        decltype( &fn_caller ) fun_ptr;
        long* cls_ptr     = (long*)&obj;
        long* vtable_ptr  = *(long**)&obj;
        {
            fun_ptr = (decltype( fun_ptr ))vtable_ptr[0];
            fun_ptr( cls_ptr , cls_ptr[1] );
        }
        {
            fun_ptr = (decltype( fun_ptr ))vtable_ptr[1];
            fun_ptr( cls_ptr , cls_ptr[2] );
        }
        {
            fun_ptr = (decltype( fun_ptr ))vtable_ptr[2];
            fun_ptr( cls_ptr , cls_ptr[3] );
        }
    }

}

#endif /* _8w32_q3_h */
