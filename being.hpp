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
};