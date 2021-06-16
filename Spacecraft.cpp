#include "environment.hpp"
Spacecraft::Spacecraft() {
	p = point{ 0,0 };
	v = point{ 0,0 };
	a = point{ 0,0 };
	r = 25.f; tilt_alpha = 0;
	sprite = &(sprites[spccraft]);
}
Spacecraft::Spacecraft(point p_start) {
	p = p_start;
	v = point{ 0,0 };
	a = point{ 0,0 };
	r = 25.f; tilt_alpha = 0;
	sprite = &(sprites[spccraft]);
}

void Spacecraft::draw() {
	sprite->setRotation(tilt_alpha);
	sprite->setPosition(p.x-r, p.y-r);
	window.draw(*sprite);
	for (int i = 0; i < directions_amount; i++)
		if (is_thrust[i]) {
			sf::Sprite& thrust = sprites[thrust_right + i];
			thrust.setPosition(p.x - r, p.y - r);
			window.draw(thrust);
		}
}

void Spacecraft::move() {
	float K = 1 / 60.f;
	float kF = -1 / 20.f;

	p.x += K * v.x; p.y += K * v.y;
	v.x += K * a.x; v.y += K * a.y;
	v.x += kF* v.x; v.y += kF* v.y;
	a.x = 0; a.y = 0;

	for(int direction=0; direction <directions_amount; direction++)
		is_thrust[direction] = false;
}

void Spacecraft::thrust(int direction) {
	float thrust_power = 200.f;
	is_thrust[direction] = true;
	if (direction % 2 == 0)
		 a.x = (direction / 2 == 0) ? thrust_power : -thrust_power;
	else a.y = (direction / 2 == 0) ? thrust_power : -thrust_power;
}

void Spacecraft::collide(Entity* collidable) {
	//TODO
}