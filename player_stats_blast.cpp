#include "PlayerStats.hpp"

void PlayerStats::blast() {
	float fire_rate = upgradable_stats[fireRate];
	cooldown -= 3000.f / fire_rate;
}