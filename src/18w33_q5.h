//
//  18w33_q5.h
//  ex
//
//  Created by 戴硕 on 2018/8/15.
//

#ifndef _8w33_q5_h
#define _8w33_q5_h

/*
 在sub_fun中添加实现，使得程序正常运行输出 success
 
 
 #include <iostream>
 #include <assert.h>
 
 #define MAGIC_NUMBER    0x12344321
 
 
 // search_and_modify_callers_stack_local_variable_value
 void sub_fun(long* ptr){
    XXXXXXXXXXX
 }
 
 
 int main() {
     volatile long  value_mask1    = 0x101;
     volatile long  modify_value   = MAGIC_NUMBER;
     volatile long  value_mask2    = 0x102;
 
     long           values[10]  = {8};
 
     sub_fun(values);
 
     assert( modify_value    == MAGIC_NUMBER+1 );
     assert( value_mask1     == 0x101 );
     assert( value_mask2     == 0x102 );
 
     std::cout << "success" << std::endl;
 
     return 0;
 }
 */

#include <iostream>
#include <assert.h>

namespace ns_18w33q5 {

#define MAGIC_NUMBER    0x12344321
    
    // search_and_modify_callers_stack_local_variable_value
    void sub_fun(long* ptr){
        for (int i = -1; i > -10; i--) {
            if (ptr[i] == MAGIC_NUMBER) {
                ptr[i]++;
                return;
            }
        }
        ptr = ptr + 10;
        for (int i = 0; i < 10; i++) {
            if (ptr[i] == MAGIC_NUMBER) {
                ptr[i]++;
                return;
            }
        }
    }

    int main() {
        volatile long  value_mask1    = 0x101;
        volatile long  modify_value   = MAGIC_NUMBER;
        volatile long  value_mask2    = 0x102;
        
        long           values[10]  = {8};
        
        sub_fun(values);
        
        assert( modify_value    == MAGIC_NUMBER+1 );
        assert( value_mask1     == 0x101 );
        assert( value_mask2     == 0x102 );
        
        std::cout << "success" << std::endl;
        
        return 0;
    }
}

#endif /* _8w33_q5_h */
