#pragma once
#include "Classical.h"

class Folk final:private Classical
{
private:
  char* country;
public:
  Folk();
  Folk(Folk& ins);
  ~Folk();
  char* get_country();
  void set_country(char* name_of_parent_);
  friend ostream& operator<<(ostream& o,Folk& ins);
  friend istream& operator>>(istream& i, Folk& ins);
};