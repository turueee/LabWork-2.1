#include <Synthesizer.h>



Synthesizer::Synthesizer()
  {
    name_of_parent = nullptr;
  }
Synthesizer::Synthesizer(Synthesizer& ins)
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
  name_of_parent = new char[256];
  i = 0;
  while (ins.get_name_of_parent()[i] != '\0')
  {
    name_of_parent[i] = ins.get_name_of_parent()[i];
    ++i;
  }
}
Synthesizer::~Synthesizer()
  {
    delete[] name_of_parent;
  }
char* Synthesizer::get_name_of_parent()
  {
    return name_of_parent;
  }
void Synthesizer::set_name_of_parent(char* name_of_parent_)
  {
    name_of_parent = new char[256];
    int i = 0;
    while (name_of_parent_[i] != '\0')
    {
      name_of_parent[i] = name_of_parent_[i];
      ++i;
    }
    name_of_parent[i] = '\0';
  }

ostream& operator<<(ostream& o, Synthesizer& ins)
{
  cout << "This instrument is synthesizer\n";
  if (ins.get_orchestra() == true)
    o << "Musical Instrument: " << ins.get_name() << "\nName of parent: " << ins.get_name_of_parent() << "\n" << "Count: " << ins.get_count() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.get_name() << "\nName of parent: " << ins.get_name_of_parent() << "\n" << "Count: " << ins.get_count() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, Synthesizer& ins)
{
  char name[256];
  char name_of_parent[256];
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the name of the parent musical instrument: ";
  i >> name_of_parent;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  ins.set_count(count);
  ins.set_name(name);
  ins.set_orchestra(orch);
  ins.set_name_of_parent(name_of_parent);
  return i;
}