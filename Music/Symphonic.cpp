#include "Symphonic.h"

Symphonic::Symphonic()
{
  standart_count_in_orchestra = 0;
}


Symphonic::~Symphonic()
{
}


int Symphonic::get_standart_count_in_orchestra()
{
  return standart_count_in_orchestra;
}


void Symphonic::set_standart_count_in_orchestra(int scount)
{
  if (scount < 0)
    scount = 0;
  standart_count_in_orchestra = scount;
}


ostream& operator<<(ostream& o, Symphonic& ins)
{
  cout << "This instrument is symphonic\n";
  if (ins.get_orchestra() == true)
    o << "Musical Instrument: " << ins.get_name() << "\nStandart count in orchestra" << ins.get_standart_count_in_orchestra() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\nStandart count in orchestra" << ins.get_standart_count_in_orchestra() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}


istream& operator>>(istream& i, Symphonic& ins)
{
  char name[256];
  int scount;
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the standart count in orchestra: ";
  i >> scount;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  ins.set_standart_count_in_orchestra(scount);
  return i;
}