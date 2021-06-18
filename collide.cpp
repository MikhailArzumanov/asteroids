#include "environment_functions.hpp"
#include "environment.hpp"

#define in :

void collide() {
	for (auto being in beings)
	for (auto another_being in beings)
		being->collide(another_being);
}