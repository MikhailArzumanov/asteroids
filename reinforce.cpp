#include "PlayerStats.hpp"

bool PlayerStats::reinforce() {
	if (was_reinforced) return false;
	if (funds >= 300) {
		funds -= 300;
		was_reinforced = true;
		return true;
	}
	return false;
}