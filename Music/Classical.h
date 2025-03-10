#pragma once
#include "All_Instruments.h"

class TClassical : public TAllInstruments
{
protected:
  bool orchestra;
public:
  //�����������
  TClassical();
  TClassical(int count);
  TClassical(TClassical& ins);
  //����������
  virtual ~TClassical();
  //�������
  virtual bool GetOrchestra();
  //�������
  virtual void SetOrchestra(bool orch);

  friend ostream& operator<<(ostream& o, TClassical& ins);
  friend istream& operator>>(istream& i, TClassical& ins);
};