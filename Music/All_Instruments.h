#pragma once
#include <iostream>
using namespace std;

class TAllInstruments
{
protected:
  char* name;
  int count;
public:
  //������������
  TAllInstruments();
  TAllInstruments(int count_);
  TAllInstruments(TAllInstruments& ins);
  //����������
  virtual ~TAllInstruments();
  //�������
  virtual void SetName(char* name_);
  virtual void SetCount(int count_);
  //�������
  virtual char* GetName();
  virtual int GetCount();
  //
  friend ostream& operator<<(ostream& o, TAllInstruments& ins);
  friend istream& operator>>(istream& i, TAllInstruments& ins);
};