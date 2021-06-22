#include "Spacecraft.hpp"
#include "environment.hpp"

bool Spacecraft::is_dead() {
	bool hp_condition = stats.get_hp()<=0;
	was_dead = Entity::is_dead() || hp_condition;
	return was_dead;

}