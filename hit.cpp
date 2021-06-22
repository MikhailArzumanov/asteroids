#include "PlayerStats.hpp"

void PlayerStats::hit(float dmg) {
	hp -= dmg;
	if (hp < 0) hp = 0;
}