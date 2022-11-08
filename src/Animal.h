#pragma once
#include "LivingThing.h"

class Animal : public LivingThing {
public:
  Animal();
  float get_hunger();

private:
  float hunger_;
};