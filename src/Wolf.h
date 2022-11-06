#pragma once
#include "LivingThing.h"

class Wolf: public LivingThing
{
public:
    float get_hunger();
private:
    float hunger_;
};