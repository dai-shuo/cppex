//
//  18w39_q2.h
//  ex
//
//  Created by 戴硕 on 2018/9/26.
//

#ifndef _8w39_q2_h
#define _8w39_q2_h

#include <iostream>

/*
 附件18w39q2.zip是一个c++工程代码，但存在下面问题：
 1, 编译有warning: deleting pointer to incomplete type 'foo' may cause undefined behavior
 2, 输出不符合预期，预期输出是：
 hi
 nice to meet you
 i have to go
 bye
 miss you
 
 修改bar.hpp，解决上面两个问题。
 */

namespace ns_18w39q2 {
    
    int main() {
        std::cout << "see 18w39q2/bar.hpp.patch" << std::endl;
        return 0;
    }
}

#endif /* _8w39_q2_h */
