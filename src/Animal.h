#pragma once
#include "LivingThing.h"

class Animal : public LivingThing {
public:
  float get_hunger();

private:
  float hunger_;
};