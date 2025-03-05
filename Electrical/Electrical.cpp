#include <iostream>
#include "Electrical.h"

Electrical::Electrical()
{
  orchestra = false;
}
Electrical::~Electrical()
{
  cout << "Delete";
}

bool Electrical::get_orchestra()
{
  return orchestra;
}

void Electrical::set_orchestra(bool orch)
{
  orchestra = orch;
}


ostream& operator<<(ostream& o, Electrical& ins)
{
  if (ins.get_orchestra() == true)
    o << "Musical Instrument: " << ins.get_name() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, Electrical& ins)
{
  char name[256];
  int count = 0;
  bool orch;
  i >> count >> name >> orch;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  return i;
}