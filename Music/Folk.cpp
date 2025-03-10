#include <Folk.h>

TFolk::TFolk()
{
  country = nullptr;
}


TFolk::TFolk(int count_) :TFolk::TFolk()
{
  if (count_ < 0)
  {
    throw(1);
  }
  else
    count = count_;
}


TFolk::TFolk(TFolk& ins)
{
  count = ins.GetCount();
  name = new char[256];
  int i = 0;
  if (ins.GetName() != nullptr)
  {
    while (ins.GetName()[i] != '\0')
    {
      name[i] = ins.GetName()[i];
      ++i;
    }
    name[i] = '\0';
  }
  else
  {
    name = nullptr;
  }
  orchestra = ins.GetOrchestra();
  country = new char[256];
  i = 0;
  if (ins.GetCountry() != nullptr)
  {
    while (ins.GetCountry()[i] != '\0')
    {
      country[i] = ins.GetCountry()[i];
      ++i;
    }
    country[i] = '\0';
  }
  country = nullptr;
}
TFolk::~TFolk()
{
  delete[] country;
}
char* TFolk::GetCountry()
{
  return country;
}
void TFolk::SetCountry(char* country_)
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

ostream& operator<<(ostream& o, TFolk& ins)
{
  cout << "This instrument is folk\n";
  if (ins.GetOrchestra() == true)
    o << "Musical Instrument: " << ins.GetName() << "\nCountry: " << ins.GetCountry() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.GetName() << "\nCountry: " << ins.GetCountry() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, TFolk& ins)
{
  char name[256];
  char country[256];
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the country of musical instrument: ";
  i >> country;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  ins.SetCount(count);
  ins.SetName(name);
  ins.SetOrchestra(orch);
  ins.SetCountry(country);
  return i;
}