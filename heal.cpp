#include "PlayerStats.hpp"

bool PlayerStats::heal() {
	if (funds >= 100) {
		heal_up();
		funds -= 100;
		return true;
	}
	return false;
}