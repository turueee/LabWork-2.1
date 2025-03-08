#pragma once
#include <Electrical.h>

class Original final:private Electrical
{
private:
  int year_of_made;
public:
  Original();
  Original(Original& ins);
  ~Original();
  int get_year_of_made();
  void set_year_of_made(int year);
  friend ostream& operator<<(ostream& o, Original& ins);
  friend istream& operator>>(istream& i, Original& ins);
};