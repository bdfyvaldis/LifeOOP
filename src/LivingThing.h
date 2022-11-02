#pragma once

class LivingThing
{
  public:
    int get_row();
    int get_column();
    
private:
    int row_;
    int column_;
};