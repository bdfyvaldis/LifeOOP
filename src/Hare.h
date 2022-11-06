#pragma once
#include "LivingThing.h"

class Hare: public LivingThing
{
public:
    float get_hunger();
private:
    float hunger_;
};