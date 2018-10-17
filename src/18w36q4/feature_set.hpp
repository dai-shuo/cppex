#pragma once

#include <set>

using feature_func = void(*)();
using feature_set = std::set<feature_func>;

class feature_register {
public:
    feature_register(feature_func feature);
    static feature_set& get_set();
};

#define REGISTER_FEATURE(F)  static feature_register __feat_((F));
