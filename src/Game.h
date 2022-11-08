#pragma once
#include "Carrot.h"
#include "Hare.h"
#include "Wolf.h"
#include <set>

class Game
{
    public:
    std::set<LivingThing*> things_;
    std::set<Carrot*> carrots_;
    std::set<Hare*> hares_;
    std::set<Wolf*> wolfs_;
    
    Game();
};