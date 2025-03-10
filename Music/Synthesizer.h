#pragma once
#include "Electrical.h"

class TSynthesizer final:public TElectrical
{
private:
  char* nameOfParent;
public:
  TSynthesizer();
  TSynthesizer(int count);
  TSynthesizer(TSynthesizer& ins);
  ~TSynthesizer();
  char* GetNameOfParent();
  void SetNameOfParent(char* name_of_parent_);
  friend ostream& operator<<(ostream& o, TSynthesizer& ins);
  friend istream& operator>>(istream& i, TSynthesizer& ins);
};