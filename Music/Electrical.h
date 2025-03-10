#pragma once
#include "All_Instruments.h"

class TElectrical : public TAllInstruments
{
protected:
  bool orchestra;
public:
  //�����������
  TElectrical();
  TElectrical(int count);
  TElectrical(TElectrical& ins);
  //����������
  virtual ~TElectrical();
  //�������
  virtual bool GetOrchestra();
  //�������
  virtual void SetOrchestra(bool orch);

  friend ostream& operator<<(ostream& o, TElectrical& ins);
  friend istream& operator>>(istream& i, TElectrical& ins);
};