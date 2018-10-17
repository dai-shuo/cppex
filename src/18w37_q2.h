//
//  18w37_q2.h
//  ex
//
//  Created by 戴硕 on 2018/9/9.
//

#ifndef _8w37_q2_h
#define _8w37_q2_h

/*
 补全代码，使程序输出:
 GoodGoodStudyDayDayUp
 1 2 4 5 7 8
 
 #include <iostream>
 #include <algorithm>
 #include <iterator>
 #include <string>
 #include <vector>
 
 int main() {
     std::string s = "Good Good Study Day Day Up";
     // 删除所有空格
     s.erase( XXXXXXXXXXX );
     std::cout << s << std::endl;
 
     std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
     // 删除所有3的倍数
     v.erase( YYYYYYYYYY );
     std::copy( v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " ") );
 
     std::cout << std::endl;
     return 0;
 }
 */

namespace ns_18w37q2 {

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
    
    int main() {
        std::string s = "Good Good Study Day Day Up";
        // 删除所有空格
        s.erase( std::remove(s.begin(), s.end(), ' '), s.end() );
        std::cout << s << std::endl;
        
        std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
        // 删除所有3的倍数
        v.erase( std::remove_if(v.begin(), v.end(), [](const int x) { return x % 3 == 0; }), v.end() );
        std::copy( v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " ") );
        
        std::cout << std::endl;
        return 0;
    }

}

#endif /* _8w37_q2_h */
