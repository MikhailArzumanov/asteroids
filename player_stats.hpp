#pragma once
#include "upgrade_type.hpp"
#include "asteroid_type.hpp"
#include "projectile_type.hpp"

class PlayerStats {
private:
	float cooldown;
	float		hp;
	int		 funds;

	int  upgrade_levels[upgradeTypesAmount];
	bool was_reinforced;

	void heal_up();
public:
	ProjectileType current_projectile;

	PlayerStats();
	
	void on_blast();
	void  on_tick();
	void on_asteroid_destroyed(AsteroidType type);

	void hit(float dmg);

	bool is_able_to_blast();

	bool heal();
	bool reinforce();
	bool upgrade(UpgradeType type);

	float get_hp();
	float get_proj_velocity();
	float get_self_velocity();

};