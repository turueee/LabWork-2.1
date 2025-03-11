#include "All_Instruments.h"
#include "Electrical.h"
#include "Classical.h"
#include "Synthesizer.h"
#include "Original.h"
#include "Symphonic.h"
#include "Folk.h"

#include <gtest.h>


///Тесты для класса TAllInstruments
TEST(TAllInstruments, can_create_TAllInstruments_with_positive_count)
{
  ASSERT_NO_THROW(TAllInstruments ins(8));
}


TEST(TAllInstruments, can_get_count)
{
  TAllInstruments ins(8);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TAllInstruments, can_copy)
{
  TAllInstruments ins(8);
  TAllInstruments b(ins);
}


TEST(TAllInstruments, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TAllInstruments ins(-4));
}


TEST(TAllInstruments, can_set_count)
{
  TAllInstruments ins(10);

  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


///Тесты для класса TСlassical
TEST(TClassical, can_create_TСlassical_with_positive_count)
{
  ASSERT_NO_THROW(TClassical ins(8));
}


TEST(TClassical, can_get_count)
{
  TClassical ins(8);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TClassical, can_copy)
{
  TClassical ins(8);
  TClassical b(ins);
}


TEST(TClassical, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TClassical ins(-4));
}


TEST(TClassical, can_set_count)
{
  TClassical ins(10);
  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


TEST(TClassical, can_get_orchestra)
{
  TClassical ins(8);

  EXPECT_NEAR(0, ins.GetOrchestra(), 0.000001);
}


TEST(TClassical, can_set_orchestra)
{
  TClassical ins(10);
  ins.SetOrchestra(1);
  EXPECT_NE(0, ins.GetOrchestra());
}


///Тесты для класса Electrical
TEST(TElectrical, can_create_TElectrical_with_positive_count)
{
  ASSERT_NO_THROW(TElectrical ins(8));
}


TEST(TElectrical, can_get_count)
{
  TElectrical ins(8);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TElectrical, can_copy)
{
  TElectrical ins(8);
  TElectrical b(ins);
}


TEST(TElectrical, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TElectrical ins(-4));
}


TEST(TElectrical, can_set_count)
{
  TElectrical ins(10);
  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


TEST(TElectrical, can_get_orchestra)
{
  TElectrical ins(8);

  EXPECT_NEAR(0, ins.GetOrchestra(), 0.000001);
}


TEST(TElectrical, can_set_orchestra)
{
  TElectrical ins(10);

  ins.SetOrchestra(1);
  EXPECT_NE(0, ins.GetOrchestra());
}


///Тесты для класса Folk
TEST(TFolk, can_create_TFolk_with_positive_count)
{
  ASSERT_NO_THROW(TFolk ins(8));
}


TEST(TFolk, can_get_count)
{
  TFolk ins(8);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TFolk, can_copy)
{
  TFolk ins(8);
  TFolk b(ins);
}


TEST(TFolk, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TFolk ins(-4));
}


TEST(TFolk, can_set_count)
{
  TFolk ins(10);

  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


TEST(TFolk, can_get_orchestra)
{
  TFolk ins(8);

  EXPECT_NEAR(0, ins.GetOrchestra(), 0.000001);
}


TEST(TFolk, can_set_orchestra)
{
  TFolk ins(10);

  ins.SetOrchestra(1);
  EXPECT_NE(0, ins.GetOrchestra());
}


///Тесты для класса Synthesizer
TEST(TSynthesizer, can_create_TSynthesizer_with_positive_count)
{
  ASSERT_NO_THROW(TSynthesizer ins(8));
}


TEST(TSynthesizer, can_get_count)
{
  TSynthesizer ins(8);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TSynthesizer, can_copy)
{
  TSynthesizer ins(8);
  TSynthesizer b(ins);
}


TEST(TSynthesizer, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TSynthesizer ins(-4));
}


TEST(TSynthesizer, can_set_count)
{
  TSynthesizer ins(10);

  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


TEST(TSynthesizer, can_get_orchestra)
{
  TSynthesizer ins(8);

  EXPECT_NEAR(0, ins.GetOrchestra(), 0.000001);
}


TEST(TSynthesizer, can_set_orchestra)
{
  TSynthesizer ins(10);
  ins.SetOrchestra(1);
  EXPECT_NE(0, ins.GetOrchestra());
}


///Тесты для класса Original
TEST(TOriginal, can_create_TOriginal_with_positive_count)
{
  ASSERT_NO_THROW(TOriginal ins(8,1923));
}


TEST(TOriginal, can_get_count)
{
  TOriginal ins(8, 1923);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TOriginal, can_copy)
{
  TOriginal ins(8, 1923);
  TOriginal b(ins);
}


TEST(TOriginal, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TOriginal ins(-4,1923));
}


TEST(TOriginal, throws_when_create_instrument_with_unreal_date)
{
  ASSERT_ANY_THROW(TOriginal ins(4, 1900));
}


TEST(TOriginal, can_set_count)
{
  TOriginal ins(8, 1923);
  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


TEST(TOriginal, can_get_orchestra)
{
  TOriginal ins(8, 1923);

  EXPECT_NEAR(0, ins.GetOrchestra(), 0.000001);
}


TEST(TOriginal, can_set_orchestra)
{
  TOriginal ins(8, 1923);

  ins.SetOrchestra(1);
  EXPECT_NE(0, ins.GetOrchestra());
}


TEST(TOriginal, can_get_year_of_made)
{
  TOriginal ins(8, 1923);

  EXPECT_NEAR(1923, ins.GetYearOfMade(), 0.000001);
}


TEST(TOriginal, can_set_year_of_made)
{
  TOriginal ins(8, 1923);

  ins.SetYearOfMade(1905);
  EXPECT_NE(0, ins.GetYearOfMade());
}


///Тесты для класса Symphonic
TEST(TSymphonic, can_create_TSymphonic_with_positive_count)
{
  ASSERT_NO_THROW(TSymphonic ins(8, 3));
}


TEST(TSymphonic, can_get_count)
{
  TSymphonic ins(8, 3);
  EXPECT_NEAR(8, ins.GetCount(), 0.000001);
}


TEST(TSymphonic, can_copy)
{
  TSymphonic ins(8, 3);
  TSymphonic b(ins);
}


TEST(TSymphonic, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(TSymphonic ins(-4, 4));
}


TEST(TSymphonic, throws_when_create_instrument_with_negative_standart_count)
{
  ASSERT_ANY_THROW(TSymphonic ins(4, -5));
}


TEST(TSymphonic, can_set_count)
{
  TSymphonic ins(8, 1923);

  ins.SetCount(3);
  EXPECT_NE(0, ins.GetCount());
}


TEST(TSymphonic, can_get_orchestra)
{
  TSymphonic ins(8, 1923);

  EXPECT_NEAR(0, ins.GetOrchestra(), 0.000001);
}


TEST(TSymphonic, can_set_orchestra)
{
  TSymphonic ins(8, 1923);

  ins.SetOrchestra(1);
  EXPECT_NE(0, ins.GetOrchestra());
}


TEST(TSymphonic, can_get_standart_count)
{
  TSymphonic ins(8, 1923);
  EXPECT_NEAR(1923, ins.GetStandartCountInOrchestra(), 0.000001);
}


TEST(TSymphonic, can_set_standart_count)
{
  TSymphonic ins(8, 1923);

  ins.SetStandartCountInOrchestra(1905);
  EXPECT_NE(0, ins.GetStandartCountInOrchestra());
}