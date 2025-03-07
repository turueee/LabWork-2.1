#include "Original.h"

Original::Original()
{
  year_of_made = 1901;
}


Original::~Original()
{
}


int Original::get_year_of_made()
{
  return year_of_made;
}


void Original::set_year_of_made(int year)
{
  if (year < 1901)
    year = 1901;
  year_of_made = year;
}


ostream& operator<<(ostream& o, Original& ins)
{
  cout << "This instrument is original electrical\n";
  if (ins.get_orchestra() == true)
    o << "Musical Instrument: " << ins.get_name() << "\nYear of made" << ins.get_year_of_made() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\nYear of made" << ins.get_year_of_made() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}


istream& operator>>(istream& i, Original& ins)
{
  char name[256];
  int year;
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument:";
  i >> name;
  cout << "Enter the year of made of the parent musical instrument:";
  i >> year;
  cout << "Enter the count of the musical instruments:";
  i >> count;
  cout << "Is this instrument in orchestra?";
  i >> orch;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  ins.set_year_of_made(year);
  return i;
}