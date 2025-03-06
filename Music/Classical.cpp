#include <iostream>
#include "Classical.h"

Classical::Classical()
{
  orchestra = false;
}
Classical::~Classical()
{
}

bool Classical::get_orchestra()
{
  return orchestra;
}

void Classical::set_orchestra(bool orch)
{
  orchestra = orch;
}


ostream& operator<<(ostream& o, Classical& ins)
{
  cout << "This instrument is classical\n";
  if (ins.get_orchestra() == true)
    o << "Musical Instrument: " << ins.get_name() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, Classical& ins)
{
  char name[256];
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument:";
  i >> name;
  cout << "Enter the count of the musical instruments:";
  i >> count;
  cout << "Is this instrument in orchestra?";
  i >> orch;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  return i;
}