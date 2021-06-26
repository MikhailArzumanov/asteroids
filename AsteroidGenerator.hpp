#pragma once


class AsteroidGenerator {
protected:
	float elapsed_time = 0.f;
	int   counter	   = 0  ;
	int border_counter = 0;
public:
	AsteroidGenerator();
	void create_asteroid();
	void create_borders();
};