#include "PlayerStats.hpp"
#include "environment.hpp"


void PlayerStats::draw_hp() {
	hp_bar.setScale(1.f, 1.f);
	hp_bar.setFillColor(sf::Color::Red);
	window.draw(hp_bar);

	float max_hp = upgradable_stats[maxHp];
	float hp_ratio = hp / max_hp;

	hp_bar.setScale(hp_ratio, 1.f);
	hp_bar.setFillColor(sf::Color::Green);
	window.draw(hp_bar);

}