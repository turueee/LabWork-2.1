#pragma once
#include "All_Instruments.h"

class Classical : public All_Instruments
{
protected:
  bool orchestra;
public:
  //�����������
  Classical();
  Classical(int count);
  Classical(Classical& ins);
  //����������
  virtual ~Classical();
  //�������
  virtual bool get_orchestra();
  //�������
  virtual void set_orchestra(bool orch);

  friend ostream& operator<<(ostream& o, Classical& ins);
  friend istream& operator>>(istream& i, Classical& ins);
};