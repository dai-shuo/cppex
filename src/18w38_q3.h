//
//  18w38_q3.h
//  ex
//
//  Created by 戴硕 on 2018/9/18.
//

#ifndef _8w38_q3_h
#define _8w38_q3_h

/*
 补全程序中XXXXXXXX位置的代码，使程序输出：
 someone is coming.
 alice created.
 someone is coming.
 bob created.
 3 people are coming.
 nobody created.
 nobody created.
 nobody created.
 alice destroyed.
 someone has gone.
 bob destroyed.
 someone has gone.
 nobody destroyed.
 nobody destroyed.
 nobody destroyed.
 3 people have gone.

 #include <iostream>
 
 struct Human {
     Human(const std::string& name = "nobody") {
         _name = new std::string(name);
         std::cout << *_name << " created.\n";
     }
     ~Human() {
         std::cout << *_name << " destroyed.\n";
         delete _name;
     }
     std::string *_name;
 
     XXXXXXXX
 };
 
 int main() {
     Human *alice = new Human("alice");
     Human *bob = new Human("bob");
     Human *group = new Human[3];
     delete alice;
     delete bob;
     delete[] group;
     return 0;
 }
 */

namespace ns_18w38q3 {

#include <iostream>
    
    struct Human {
        Human(const std::string& name = "nobody") {
            _name = new std::string(name);
            std::cout << *_name << " created.\n";
        }
        ~Human() {
            std::cout << *_name << " destroyed.\n";
            delete _name;
        }
        std::string *_name;
        
        static void * operator new(std::size_t size) {
            std::cout << "someone is coming.\n";
            return ::operator new(size);
        }
        static void * operator new [] (std::size_t size) {
            std::cout << (size - sizeof(std::size_t)) / sizeof(Human) << " people are coming.\n";
            return ::operator new[](size);
        }
        static void operator delete(void *ptr) {
            std::cout << "someone has gone.\n";
            return ::operator delete(ptr);
        }
        static void operator delete [] (void *ptr) {
            std::cout << *(std::size_t*)ptr << " people have gone.\n";
            return ::operator delete[](ptr);
        }
    };
    
    int main() {
        Human *alice = new Human("alice");
        Human *bob = new Human("bob");
        Human *group = new Human[3];
        delete alice;
        delete bob;
        delete[] group;
        return 0;
    }

}

#endif /* _8w38_q3_h */
