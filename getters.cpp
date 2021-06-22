#include "PlayerStats.hpp"

int   PlayerStats::get_funds(){return funds;}

float PlayerStats::get_hp()   {return hp;}

float PlayerStats::get_fire_rate()     {return		upgradable_stats[fireRate];}
float PlayerStats::get_projs_velocity(){return upgradable_stats[projsVelocity];}
bool  PlayerStats::is_reinforced()	   {return					was_reinforced;}