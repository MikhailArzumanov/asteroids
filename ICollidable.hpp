#pragma once
class ICollidable {
public:
	virtual bool isCollidesWith(ICollidable* another) = 0;
};