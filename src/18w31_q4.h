//
//  18w31_q4.h
//  ex
//
//  Created by 戴硕 on 2018/8/1.
//

#ifndef _8w31_q4_h
#define _8w31_q4_h

/*
 使用三种方案补全 XXXXXXXXXXXXXXXXXXXX，使得编译通过输出 8。
 
 #include <iostream>
 #include <string>
 
 class my_int_str{
 public:
     my_int_str(int n){
        m_value = n;
     }
 
 XXXXXXXXXXXXXXXXXXXX
 
 private:
    int m_value;
 };
 
 void main()
 {
     my_int_str obj(8);
     std::string name;
     name = obj;
     std::cout << name << "\n";
 }
 */

#include <boost/preprocessor.hpp>

namespace ns_18w31q4 {
    
    namespace solution1 {
        
        class my_int_str {
        public:
            my_int_str(int n){
                m_value = n;
            }
            operator std::string() {  return std::to_string(m_value); }
    
        private:
            int m_value;
        };
        
        void main() {
            my_int_str obj(8);
            std::string name;
            name = obj;
            std::cout << name << "\n";
        }
    }
    
    namespace solution2 {
        
        class my_int_str {
        public:
            my_int_str(int n){
                m_value = n;
            }
            
            std::string tmp_str;
            operator const char*() {
                tmp_str = std::to_string(m_value);
                return tmp_str.c_str();
            }
            
        private:
            int m_value;
        };
        
        void main() {
            my_int_str obj(8);
            std::string name;
            name = obj;
            std::cout << name << "\n";
        }
    }
    
    // NOT a general solution
    namespace solution3 {
        
        class my_int_str {
        public:
            my_int_str(int n){
                m_value = n;
            }
            operator char() {
                return std::to_string(m_value)[0];
            }
            
        private:
            int m_value;
        };
        
        void main() {
            my_int_str obj(8);
            std::string name;
            name = obj;
            std::cout << name << "\n";
        }
    }
    
    // general but tricky...
    namespace solution4 {
        
        class my_int_str {
        public:
            my_int_str(int n){
                m_value = n;
            }
            
            struct my_str : public std::string {
                my_str(int n) : basic_string(std::to_string(n)) { }
            };
            #define my_int_str my_int_str::my_str
            
        private:
            int m_value;
        };
        
        void main() {
            my_int_str obj(8);
            std::string name;
            name = obj;
            std::cout << name << "\n";
        }
    }
    
    void main() {
        solution1::main();
        solution2::main();
        solution3::main();
        solution4::main();
    }
}

#endif /* _8w31_q4_h */
