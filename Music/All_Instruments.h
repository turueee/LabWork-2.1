#pragma once
#include <iostream>
using namespace std;

class All_Instruments
{
protected:
  char* name;
  int count;
public:
  //������������
  All_Instruments();
  All_Instruments(All_Instruments& ins);
  //����������
  virtual ~All_Instruments();
  //�������
  virtual void set_name(char* name_);
  virtual void set_count(int count_);
  //�������
  virtual char* get_name();
  virtual int get_count();
  //
  friend ostream& operator<<(ostream& o, All_Instruments& ins);
  friend istream& operator>>(istream& i, All_Instruments& ins);
};