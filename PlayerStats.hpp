#pragma once
#include <SFML/Graphics.hpp>

const float BAR_WIDTH = 200.f, BAR_HEIGHT = 40.f;

class PlayerStats {
public:
	enum UpgradeType {
		maxHp,
		fireRate,
		projsVelocity,
		upgrade_types_amount
	};
protected:
	sf::RectangleShape hp_bar = 
	sf::RectangleShape(sf::Vector2f(BAR_WIDTH, BAR_HEIGHT));
	sf::Text text;
	sf::RectangleShape rectangle;

	int funds = 0;

	float cooldown = 0;

	float			  hp =   100;
	bool  was_reinforced = false;

	float upgradable_stats[upgrade_types_amount]={100,100,100};
	int    upgrades_levels[upgrade_types_amount]={  1,  1,  1};
	
	void heal_up();

public:
	PlayerStats();

	void blast();

	bool is_able_to_blast();

	void tick();

	void draw();
	void draw_funds();
	void draw_upgrades();
	void draw_values();
	void draw_notations();
	void draw_hp();

	void asteroid_destoyed();
	int get_funds();

	void hit(float dmg);

	float       get_hp();
	bool is_reinforced();

	float	   get_fire_rate();
	float get_projs_velocity();

	bool					   heal();
	bool				  reinforce();
	bool  upgrade(UpgradeType type);

};