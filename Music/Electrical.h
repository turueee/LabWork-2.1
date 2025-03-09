#pragma once
#include "All_Instruments.h"

class Electrical : public All_Instruments
{
protected:
  bool orchestra;
public:
  //�����������
  Electrical();
  Electrical(int count);
  Electrical(Electrical& ins);
  //����������
  virtual ~Electrical();
  //�������
  virtual bool get_orchestra();
  //�������
  virtual void set_orchestra(bool orch);

  friend ostream& operator<<(ostream& o, Electrical& ins);
  friend istream& operator>>(istream& i, Electrical& ins);
};