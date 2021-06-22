#include "PlayerStats.hpp"

bool PlayerStats::upgrade(PlayerStats::UpgradeType type) {
	int price = upgrades_levels[type] * 100;
	if (funds >= price) {
		upgradable_stats[type] += 100;
		upgrades_levels[type]++;
		funds -= price;
		return true;
	}
	return false;
}