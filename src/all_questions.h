//
//  all_questions.h
//  ex
//
//  Created by 戴硕 on 2018/8/1.
//  Copyright © 2018年 cmcm. All rights reserved.
//

#ifndef all_questions_h
#define all_questions_h

#include "18w30_q1.h"
#include "18w30_q2.h"
#include "18w30_q3.h"
#include "18w30_q4.h"
#include "18w30_q5.h"
#include "18w31_q1.h"
#include "18w31_q2.h"
#include "18w31_q3.h"
#include "18w31_q4.h"
#include "18w31_q5.h"
#include "18w32_q1.h"
#include "18w32_q2.h"
#include "18w32_q3.h"
#include "18w32_q4.h"
#include "18w32_q5.h"
#include "18w33_q1.h"
#include "18w33_q2.h"
#include "18w33_q3.h"
#include "18w33_q4.h"
#include "18w33_q5.h"
#include "18w35_q1.h"
#include "18w35_q2.h"
#include "18w35_q3.h"
#include "18w35_q4.h"
#include "18w35_q5.h"
#include "18w36_q1.h"
#include "18w36_q2.h"
#include "18w36_q3.h"
#include "18w36_q4.h"
#include "18w36_q5.h"
#include "18w37_q1.h"
#include "18w37_q2.h"
#include "18w37_q3.h"
#include "18w38_q1.h"
#include "18w38_q2.h"
#include "18w38_q3.h"
#include "18w39_q1.h"
#include "18w39_q2.h"
#include "18w39_q3.h"

#include <iostream>
#include <boost/preprocessor.hpp>

#define RUN_ANSWER(R,D,Q)       \
    do {\
        std::cout << "<<< " BOOST_PP_STRINGIZE(Q) " >>>" << std::endl;\
        BOOST_PP_CAT(ns_, Q)::main();\
        std::cout << std::endl;\
    } while(false);

#define RUN_ANSWERS(SEQ)    BOOST_PP_SEQ_FOR_EACH( RUN_ANSWER, _, SEQ )

#define RUN_ALL_ANSWERS     \
    RUN_ANSWERS(\
        (18w30q1)\
        (18w30q2)\
        (18w30q3)\
        (18w30q4)\
        (18w30q5)\
        (18w31q1)\
        (18w31q2)\
        (18w31q3)\
        (18w31q4)\
        (18w31q5)\
        (18w32q1)\
        (18w32q2)\
        (18w32q3)\
        (18w32q4)\
        (18w32q5)\
        (18w33q1)\
        (18w33q2)\
        (18w33q3)\
        (18w33q4)\
        (18w33q5)\
        (18w35q1)\
        (18w35q2)\
        (18w35q3)\
        (18w35q4)\
        (18w35q5)\
        (18w36q1)\
        (18w36q2)\
        (18w36q3)\
        (18w36q4)\
        (18w36q5)\
        (18w37q1)\
        (18w37q2)\
        (18w37q3)\
        (18w38q1)\
        (18w38q2)\
        (18w38q3)\
        (18w39q1)\
        (18w39q2)\
        (18w39q3)\
    )

#endif /* all_questions_h */
