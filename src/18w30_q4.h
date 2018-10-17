//
//  18w30_q4.h
//  ex
//
//  Created by 戴硕 on 2018/7/28.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef _8w30_q4_h
#define _8w30_q4_h

/*
 实现下面程序中的HEHE1, HEHE2, HEHE3。
 
 int main() {
 
     std::cout << HEHE1( (1)(2)(3) ) << std::endl;
     std::cout << HEHE1( (A)(B) ) << std::endl;
     std::cout << HEHE2( (1)(2), (A)(B) ) << std::endl;
     std::cout << HEHE2( (1)(2)(3), (A)(B)(C) ) << std::endl;
     std::cout << HEHE3( (1)(2), (A)(B) ) << std::endl;
     std::cout << HEHE3( (1)(2)(3), (A)(B)(C) ) << std::endl;
 
 return 0;
 }
 
 ////
 outputs:
 
 123
 AB
 (1, A)(1, B)(2, A)(2, B)
 (1, A)(1, B)(1, C)(2, A)(2, B)(2, C)(3, A)(3, B)(3, C)
 (1, A)(2, B)
 (1, A)(2, B)(3, C)
 */

#include <iostream>
#include <boost/preprocessor.hpp>

#define HEHE1(S)            BOOST_PP_STRINGIZE( BOOST_PP_SEQ_CAT(S) )

#define _HEHE2(R, P)        BOOST_PP_STRINGIZE( BOOST_PP_SEQ_TO_TUPLE(P) )
#define HEHE2(S1, S2)       BOOST_PP_SEQ_FOR_EACH_PRODUCT( _HEHE2, (S1)(S2) )

#define _HEHE3(R, S, I, E)  BOOST_PP_STRINGIZE( BOOST_PP_SEQ_TO_TUPLE( (BOOST_PP_SEQ_ELEM(I, S))(E) ) )
#define HEHE3(S1, S2)       BOOST_PP_SEQ_FOR_EACH_I(_HEHE3, S1, S2)

namespace ns_18w30q4 {
    
    int main() {
        std::cout << HEHE1( (1)(2)(3) ) << std::endl;
        std::cout << HEHE1( (A)(B) ) << std::endl;
        std::cout << HEHE2( (1)(2), (A)(B) ) << std::endl;
        std::cout << HEHE2( (1)(2)(3), (A)(B)(C) ) << std::endl;
        std::cout << HEHE3( (1)(2), (A)(B) ) << std::endl;
        std::cout << HEHE3( (1)(2)(3), (A)(B)(C) ) << std::endl;
    
        return 0;
    }
    
}

#endif /* _8w30_q4_h */
