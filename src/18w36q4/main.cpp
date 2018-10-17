#include "event.hpp"
#include "feature_set.hpp"

int main() {
  kLogInfo("started.");
  for(auto f : feature_register::get_set()) {
    f();
  }
  kLogInfo("done.");
	return 0;
}
