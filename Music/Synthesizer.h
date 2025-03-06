#pragma once
#include <iostream>
#include "Electrical.h"

class Synthesizer :public Electrical
{
protected:
  char* name_of_parent;
public:
  Synthesizer();
  ~Synthesizer();
  char* get_name_of_parent();
  void set_name_of_parent(char* name_of_parent_);
  friend ostream& operator<<(ostream& o, Synthesizer& ins);
  friend istream& operator>>(istream& i, Synthesizer& ins);
};