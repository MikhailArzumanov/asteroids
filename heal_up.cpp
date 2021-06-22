#include "PlayerStats.hpp"

void PlayerStats::heal_up() {
	hp += 50;
	float max_hp = upgradable_stats[maxHp];
	if (hp > max_hp)
		hp = max_hp;
}