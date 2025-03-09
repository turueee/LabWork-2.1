#include "Electrical.h"

Electrical::Electrical()
{
  orchestra = false;
}


Electrical::Electrical(int count_) :Electrical::Electrical()
{
  if (count_ < 0)
  {
    throw(1);
  }
  else
    count = count_;
}
Electrical::Electrical(Electrical& ins)
{
  count = ins.get_count();
  name = new char[256];
  int i = 0;
  while (ins.get_name()[i] != '\0')
  {
    name[i] = ins.get_name()[i];
    ++i;
  }
  name[i] = '\0';
  orchestra = ins.get_orchestra();
}
Electrical::~Electrical()
{
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
  cout << "This instrument is electrical\n";
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
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  return i;
}