#include "feature_set.hpp"

feature_register::feature_register(feature_func feature) {
    get_set().insert(feature);
}

feature_set& feature_register::get_set() {
    static feature_set the_set;
    return the_set;
}
