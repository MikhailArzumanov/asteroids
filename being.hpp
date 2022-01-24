#pragma once
#include "circle.hpp"
#include "ILiving.hpp"
#include "IDrawable.hpp"

class Being : public Circle, public ILiving, public IDrawable {

};