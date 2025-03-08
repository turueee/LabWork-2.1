#include <Folk.h>

Folk::Folk()
{
  country = nullptr;
}
Folk::~Folk()
{
  delete[] country;
}
char* Folk::get_country()
{
  return country;
}
void Folk::set_country(char* country_)
{
  country = new char[256];
  int i = 0;
  while (country_[i] != '\0')
  {
    country[i] = country_[i];
    ++i;
  }
  country[i] = '\0';
}

ostream& operator<<(ostream& o, Folk& ins)
{
  cout << "This instrument is folk\n";
  if (ins.get_orchestra() == true)
    o << "Musical Instrument: " << ins.get_name() << "\nCountry:" << ins.get_country() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\nCountry:" << ins.get_country() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, Folk& ins)
{
  char name[256];
  char country[256];
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument:";
  i >> name;
  cout << "Enter the country of musical instrument:";
  i >> country;
  cout << "Enter the count of the musical instruments:";
  i >> count;
  cout << "Is this instrument in orchestra?";
  i >> orch;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  ins.set_country(country);
  return i;
}