#include "PlayerStats.hpp"

bool PlayerStats::heal() {
	if (funds >= 50) {
		heal_up();
		funds -= 50;
		return true;
	}
	return false;
}