#include "PlayerStats.hpp"

bool PlayerStats::is_able_to_blast() {
	float fire_rate = upgradable_stats[fireRate];
	return cooldown >= 3000.f/fire_rate;
}