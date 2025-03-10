#include <Synthesizer.h>



TSynthesizer::TSynthesizer()
{
  nameOfParent = nullptr;
}

TSynthesizer::TSynthesizer(int count_) :TSynthesizer::TSynthesizer()
{
  if (count_ < 0)
  {
    throw(1);
  }
  else
    count = count_;
}
TSynthesizer::TSynthesizer(TSynthesizer& ins)
{
  count = ins.GetCount();
  name = new char[256];
  if (ins.GetName() != nullptr)
  {
    int i = 0;
    while (ins.GetName()[i] != '\0')
    {
      name[i] = ins.GetName()[i];
      ++i;
    }
    name[i] = '\0';
  }
  else
    name = nullptr;
  orchestra = ins.GetOrchestra();
  if (ins.GetNameOfParent() != nullptr)
  {
    nameOfParent = new char[256];
    int i = 0;
    while (ins.GetNameOfParent()[i] != '\0')
    {
      nameOfParent[i] = ins.GetNameOfParent()[i];
      ++i;
    }
    nameOfParent[i] = '\0';
  }
  else
    nameOfParent = nullptr;
}
TSynthesizer::~TSynthesizer()
  {
    delete[] nameOfParent;
  }
char* TSynthesizer::GetNameOfParent()
  {
    return nameOfParent;
  }
void TSynthesizer::SetNameOfParent(char* name_of_parent_)
  {
    nameOfParent = new char[256];
    int i = 0;
    while (name_of_parent_[i] != '\0')
    {
      nameOfParent[i] = name_of_parent_[i];
      ++i;
    }
    nameOfParent[i] = '\0';
  }

ostream& operator<<(ostream& o, TSynthesizer& ins)
{
  cout << "This instrument is synthesizer\n";
  if (ins.GetOrchestra() == true)
    o << "Musical Instrument: " << ins.GetName() << "\nName of parent: " << ins.GetNameOfParent() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.GetName() << "\nName of parent: " << ins.GetNameOfParent() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, TSynthesizer& ins)
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
  ins.SetCount(count);
  ins.SetName(name);
  ins.SetOrchestra(orch);
  ins.SetNameOfParent(name_of_parent);
  return i;
}