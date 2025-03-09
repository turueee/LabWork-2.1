#include "Original.h"

Original::Original()
{
  year_of_made = 1901;
}


Original::Original(int count_, int year):Original::Original()
{
  if (count_ < 0 || year < 1901)
    throw(1);
  else
  {
    count = count_;
    year_of_made = year;
  }
}


Original::Original(Original& ins)
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
  year_of_made = ins.get_year_of_made();
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
    o << "Musical Instrument: " << ins.get_name() << "\nYear of made: " << ins.get_year_of_made() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\nYear of made: " << ins.get_year_of_made() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}


istream& operator>>(istream& i, Original& ins)
{
  char name[256];
  int year;
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the year of made of the parent musical instrument: ";
  i >> year;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  if (year < 1901)
    count = 1901;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  ins.set_year_of_made(year);
  return i;
}