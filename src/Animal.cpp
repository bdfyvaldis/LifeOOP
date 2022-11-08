#include "Animal.h"

float Animal::get_hunger()
{
    return hunger_; 
}

Animal::Animal()
{
    hunger_ = 1;
}