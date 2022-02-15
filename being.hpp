#pragma once

#include "circle.hpp"
#include "ILiving.hpp"
#include "IDrawable.hpp"
#include "being_type.hpp"
#include <SFML/Graphics/Sprite.hpp>

class Being : public Circle, 
			  public ILiving, 
			  public IDrawable {
protected:
	float angle;
	BeingType b_type;
	sf::Sprite* sprite;

public:
	virtual bool is_living();
	virtual void draw();

	virtual void tick() = 0;
	virtual void collide(Being* collidable) = 0;
};