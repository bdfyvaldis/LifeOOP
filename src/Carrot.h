#pragma once
#include "LivingThing.h"

class Carrot: public LivingThing
{
    public:
    int get_age();
    private:
    int age_;
};