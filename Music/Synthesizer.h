#pragma once
#include "Electrical.h"

class Synthesizer final:private Electrical
{
private:
  char* name_of_parent;
public:
  Synthesizer();
  Synthesizer(Synthesizer& ins);
  ~Synthesizer();
  char* get_name_of_parent();
  void set_name_of_parent(char* name_of_parent_);
  friend ostream& operator<<(ostream& o, Synthesizer& ins);
  friend istream& operator>>(istream& i, Synthesizer& ins);
};