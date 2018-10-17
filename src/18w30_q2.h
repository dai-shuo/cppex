//
//  18w30_q2.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w30_q2_h
#define _8w30_q2_h

/*
 写一个 class index_count<T>, T 是multi_index_container 类型，
 如account_index、comment_vote_index 等，
 要求： index_count<T>::count = T中定义的index个数。
 */

#include <iostream>
#include <string>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/member.hpp>

using namespace boost::multi_index;

namespace ns_18w30q2 {
    
    struct employee
    {
        int id;
        std::string name;
        bool operator<(const employee& e) const { return id < e.id; }
    };
    
    typedef multi_index_container <
        employee,
        indexed_by<
            ordered_unique< identity<employee> >,
            ordered_non_unique< member<employee, std::string, &employee::name> >
        >
    > employee_set;
    
    template <typename container>
    struct index_count {
        enum { count = container::index_type_list::size::value };
    };
    
    void main() {
        std::cout << index_count<employee_set>::count << std::endl;
    }
}


#endif /* _8w30_q2_h */
