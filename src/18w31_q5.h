//
//  18w31_q5.h
//  ex
//
//  Created by 戴硕 on 2018/8/1.
//

#ifndef _8w31_q5_h
#define _8w31_q5_h

/*
 找到下面程序对 shared_ptr 的错误使用方式，说明错误的原因并改正。找出3处。
 
 #include <iostream>
 #include <memory>
 #include <vector>
 
 struct human {
     human(std::string name) : _name(name) {}
 
     std::shared_ptr<human> my_shared_ptr() {
        return std::shared_ptr<human>(this);
     }
 
     std::string _name;
 };
 
 struct student : public human {
    student(std::string name, std::shared_ptr<human> teacher) : human(name), _teacher(teacher) { }
    std::shared_ptr<human> _teacher;
 };
 
 std::vector<student> get_students() {
     std::vector<student> students;
     human smith("smith");
     for (std::string name: { "alice", "bob", "charlie" }) {
        students.emplace_back( name, std::shared_ptr<human>(&smith)->my_shared_ptr() );
    }
    return students;
 }
 
 human *get_human(std::string name) {
    return std::make_shared<human>(name).get();
 }
 
 void main() {
    human *tom = get_human("tom");
    get_human("jerry");
    std::cout << tom->_name << std::endl;
 
    for (student s: get_students()) {
        std::cout << s._name << ", " << s._teacher->_name << std::endl;
    }
 }
 */

#include <iostream>
#include <memory>
#include <vector>

namespace ns_18w31q5 {
    
    struct human : std::enable_shared_from_this<human> {
        human(std::string name) : _name(name) {}
        
        std::shared_ptr<human> my_shared_ptr() {
            /*
            // DANGER: my_shared_ptr() 返回的shared_ptr都会造成this释放。用std::enable_shared_from_this。
            return std::shared_ptr<human>(this);
            */
            return shared_from_this();
        }
        
        std::string _name;
    };
    
    struct student : public human {
        student(std::string name, std::shared_ptr<human> teacher) : human(name), _teacher(teacher) { }
        std::shared_ptr<human> _teacher;
    };
    
    std::vector<student> get_students() {
        std::vector<student> students;
        /*
        // DANGER: smith是栈上对象，下面shared_ptr(&smith)取了栈地址，函数退出即失效。fix: 用shared_ptr。
        human smith("smith");
        */
        std::shared_ptr<human> smith = std::make_shared<human>("smith");
        for (std::string name: { "alice", "bob", "charlie" }) {
//            students.emplace_back( name, std::shared_ptr<human>(&smith)->my_shared_ptr() );
            students.emplace_back( name, std::shared_ptr<human>(smith)->my_shared_ptr() );
        }
        return students;
    }
    
    std::shared_ptr<human> get_human(std::string name) {
        /*
        // DANGER: 返回失效的raw指针。fix: 返回shared_ptr。
        return std::make_shared<human>(name).get();
         */
        return std::make_shared<human>(name);
    }

    void main() {
//        human *tom = get_human("tom");
        std::shared_ptr<human> tom = get_human("tom");
        get_human("jerry");
        std::cout << tom->_name << std::endl;
        
        for (student s: get_students()) {
            std::cout << s._name << ", " << s._teacher->_name << std::endl;
        }
    }
}

#endif /* _8w31_q5_h */
