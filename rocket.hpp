#pragma once
#include "projectile.hpp"

class Rocket : public Projectile {
	void draw();
	bool is_living();
};