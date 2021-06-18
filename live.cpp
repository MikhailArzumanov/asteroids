#include "environment.hpp"
#include "environment_functions.hpp"

void live() {
	for (auto itr = beings.begin(); (beings.size() > 1) && (itr < beings.end()); itr++) {
		auto& being = *itr;
		if (being->is_dead()) {
			delete being;
			beings.erase(itr);
		}
	}
}