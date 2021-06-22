#include "PlayerStats.hpp"
#include "environment.hpp"
#include <sstream>

const float UPGRADES_X = 1090.f, UPGRADES_Y = 305.f;
const float SPACE_UPGRDS_X = 140.f, SPACE_UPGRDS_Y = 80.f;

std::string str_from(float x) {
	std::ostringstream sstream;
	sstream << x;
	return sstream.str();
}

void PlayerStats::draw_upgrades() {
	text.setCharacterSize(24u);
	float velocity = upgrades_levels[projsVelocity];
	text.setPosition(UPGRADES_X, UPGRADES_Y);
	text.setString(str_from(velocity));
	window.draw(text);
	float fire_rate = upgrades_levels[fireRate];
	text.setPosition(UPGRADES_X+SPACE_UPGRDS_X, UPGRADES_Y);
	text.setString(str_from(fire_rate));
	window.draw(text);
	float max_hp = upgrades_levels[maxHp];
	text.setPosition(UPGRADES_X, UPGRADES_Y+SPACE_UPGRDS_Y);
	text.setString(str_from(max_hp));
	window.draw(text);

}