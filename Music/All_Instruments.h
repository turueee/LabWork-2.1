#pragma once
#include <iostream>
using namespace std;

class TAllInstruments
{
protected:
  char* name;
  int count;
public:
  //Конструкторы
  TAllInstruments();
  TAllInstruments(int count_);
  TAllInstruments(TAllInstruments& ins);
  //Деструктор
  virtual ~TAllInstruments();
  //Сеттеры
  virtual void SetName(char* name_);
  virtual void SetCount(int count_);
  //Геттеры
  virtual char* GetName();
  virtual int GetCount();
  //
  friend ostream& operator<<(ostream& o, TAllInstruments& ins);
  friend istream& operator>>(istream& i, TAllInstruments& ins);
};