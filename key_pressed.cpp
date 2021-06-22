#include "environment_functions.hpp"
#include "environment.hpp"


void key_pressed(sf::Keyboard::Key key_code) {
	bool res = false;
	if (stats.get_hp() == 0) 
		return;

	PlayerStats::UpgradeType type;
	switch (key_code) {
	case sf::Keyboard::H:
		res = stats.heal();
		break;
	case sf::Keyboard::R:
		res = stats.reinforce();
		break;
	case sf::Keyboard::V:
		type = PlayerStats::UpgradeType::projsVelocity;
		res = stats.upgrade(type);
		break;
	case sf::Keyboard::Y:
		type = PlayerStats::UpgradeType::fireRate;
		res = stats.upgrade(type);
		break;
	case sf::Keyboard::M:
		type = PlayerStats::UpgradeType::maxHp;
		res = stats.upgrade(type);
		break;
	}
	if (res) draw_buy_success();
	else draw_buy_error();
}