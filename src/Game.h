#pragma once
#include "Carrot.h"
#include "Hare.h"
#include "Wolf.h"
#include <set>

class Game
{
    public:
    std::set<LivingThing*> things;
    std::set<Carrot*> carrots;
    std::set<Hare*> hares;
    std::set<Wolf*> wolfs;
};