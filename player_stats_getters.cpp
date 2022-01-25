#include "player_stats.hpp"
const float self_v_scale = 50.f;
float PlayerStats::get_hp() { return hp; }
float PlayerStats::get_proj_velocity(){
	switch (current_projectile) {
	case rocket:
		return upgrade_levels[projVelocity]*100;
	}
}
float PlayerStats::get_self_velocity(){
	return upgrade_levels[selfVelocity]*self_v_scale;
}