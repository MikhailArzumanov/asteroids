#include "PlayerStats.hpp"
#include "environment.hpp"
#include "environment_functions.hpp"

const float UPGRADES_X = 1100.f, UPGRADES_Y = 305.f;
const float SPACE_UPGRDS_X = 140.f, SPACE_UPGRDS_Y = 80.f;
const float NOTATION_WIDTH = 61.f, NOTATION_Y_TILT = 12.f;

void draw_upgrade_text(float x, float y, std::string value, sf::Text& text) {
	text.setPosition(x, y);
	text.setString(value);
	window.draw(text);
}

void PlayerStats::draw_values() {
	text.setCharacterSize(24u);
	int velocity = upgrades_levels[projsVelocity];
	draw_upgrade_text(UPGRADES_X, UPGRADES_Y, str_from(velocity), text);
	int fire_rate = upgrades_levels[fireRate];
	draw_upgrade_text(UPGRADES_X + SPACE_UPGRDS_X, UPGRADES_Y, str_from(fire_rate), text);
	int max_hp = upgrades_levels[maxHp];
	draw_upgrade_text(UPGRADES_X, UPGRADES_Y + SPACE_UPGRDS_Y, str_from(max_hp), text);
	rectangle.setPosition(UPGRADES_X + SPACE_UPGRDS_X, UPGRADES_Y + SPACE_UPGRDS_Y);
	rectangle.setFillColor(was_reinforced ? sf::Color::Green : sf::Color::Red);
	window.draw(rectangle);
}

void PlayerStats::draw_notations() {
	text.setCharacterSize(12u);
	draw_upgrade_text(UPGRADES_X - NOTATION_WIDTH, UPGRADES_Y + NOTATION_Y_TILT,"Velocity:", text);
	draw_upgrade_text(UPGRADES_X + SPACE_UPGRDS_X - NOTATION_WIDTH - 7.f, UPGRADES_Y + NOTATION_Y_TILT,"Fire rate:",text);
	draw_upgrade_text(UPGRADES_X - NOTATION_WIDTH, UPGRADES_Y + SPACE_UPGRDS_Y + NOTATION_Y_TILT, "Max HP:", text);
	draw_upgrade_text(UPGRADES_X + SPACE_UPGRDS_X - NOTATION_WIDTH - 34.f, UPGRADES_Y + SPACE_UPGRDS_Y + NOTATION_Y_TILT, "Reinforcement:", text);
}

void PlayerStats::draw_upgrades() {
	draw_notations();
	draw_values();

}