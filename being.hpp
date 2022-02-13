#pragma once
#include "circle.hpp"
#include "ILiving.hpp"
#include "IDrawable.hpp"
#include <SFML/Graphics/Sprite.hpp>
class Being : public Circle, public ILiving, public IDrawable {
protected:
	float angle;
	sf::Sprite* sprite;
public:
	virtual bool is_living();
	virtual void draw();
	virtual void tick() = 0;
	virtual void collide(Being* collidable) = 0;
};