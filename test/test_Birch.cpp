#include "All_Instruments.h"
#include "Electrical.h"
#include "Classical.h"
#include "Synthesizer.h"
#include "Original.h"
#include "Symphonic.h"
#include "Folk.h"

#include <gtest.h>


///Тесты для класса All_Instruments
TEST(All_Instruments, can_create_All_instruments_with_positive_count)
{
  ASSERT_NO_THROW(All_Instruments ins(8));
}


TEST(All_Instruments, can_get_count)
{
  All_Instruments ins(8);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(All_Instruments, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(All_Instruments ins(-4));
}


TEST(All_Instruments, can_set_count)
{
  All_Instruments ins(10);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


///Тесты для класса Сlassical
TEST(Classical, can_create_Classical_with_positive_count)
{
  ASSERT_NO_THROW(Classical ins(8));
}


TEST(Classical, can_get_count)
{
  Classical ins(8);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(Classical, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(Classical ins(-4));
}


TEST(Classical, can_set_count)
{
  Classical ins(10);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


TEST(Classical, can_get_orchestra)
{
  Classical ins(8);

  EXPECT_NEAR(0, ins.get_orchestra(), 0.000001);
}


TEST(Classical, can_set_orchestra)
{
  Classical ins(10);

  ins.set_orchestra(1);
  EXPECT_NE(0, ins.get_orchestra());
}


///Тесты для класса Electrical
TEST(Electrical, can_create_Electrical_with_positive_count)
{
  ASSERT_NO_THROW(Electrical ins(8));
}


TEST(Electrical, can_get_count)
{
  Electrical ins(8);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(Electrical, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(Electrical ins(-4));
}


TEST(Electrical, can_set_count)
{
  Electrical ins(10);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


TEST(Electrical, can_get_orchestra)
{
  Electrical ins(8);

  EXPECT_NEAR(0, ins.get_orchestra(), 0.000001);
}


TEST(Electrical, can_set_orchestra)
{
  Electrical ins(10);

  ins.set_orchestra(1);
  EXPECT_NE(0, ins.get_orchestra());
}


///Тесты для класса Folk
TEST(Folk, can_create_Folk_with_positive_count)
{
  ASSERT_NO_THROW(Folk ins(8));
}


TEST(Folk, can_get_count)
{
  Folk ins(8);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(Folk, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(Folk ins(-4));
}


TEST(Folk, can_set_count)
{
  Folk ins(10);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


TEST(Folk, can_get_orchestra)
{
  Folk ins(8);

  EXPECT_NEAR(0, ins.get_orchestra(), 0.000001);
}


TEST(Folk, can_set_orchestra)
{
  Folk ins(10);

  ins.set_orchestra(1);
  EXPECT_NE(0, ins.get_orchestra());
}


///Тесты для класса Synthesizer
TEST(Synthesizer, can_create_Synthesizer_with_positive_count)
{
  ASSERT_NO_THROW(Synthesizer ins(8));
}


TEST(Synthesizer, can_get_count)
{
  Synthesizer ins(8);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(Synthesizer, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(Synthesizer ins(-4));
}


TEST(Synthesizer, can_set_count)
{
  Synthesizer ins(10);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


TEST(Synthesizer, can_get_orchestra)
{
  Synthesizer ins(8);

  EXPECT_NEAR(0, ins.get_orchestra(), 0.000001);
}


TEST(Synthesizer, can_set_orchestra)
{
  Folk ins(10);

  ins.set_orchestra(1);
  EXPECT_NE(0, ins.get_orchestra());
}


///Тесты для класса Original
TEST(Original, can_create_Original_with_positive_count)
{
  ASSERT_NO_THROW(Original ins(8,1923));
}


TEST(Original, can_get_count)
{
  Original ins(8, 1923);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(Original, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(Original ins(-4,1923));
}


TEST(Original, throws_when_create_instrument_with_unreal_date)
{
  ASSERT_ANY_THROW(Original ins(4, 1900));
}


TEST(Original, can_set_count)
{
  Original ins(8, 1923);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


TEST(Original, can_get_orchestra)
{
  Original ins(8, 1923);

  EXPECT_NEAR(0, ins.get_orchestra(), 0.000001);
}


TEST(Original, can_set_orchestra)
{
  Original ins(8, 1923);

  ins.set_orchestra(1);
  EXPECT_NE(0, ins.get_orchestra());
}


TEST(Original, can_get_year_of_made)
{
  Original ins(8, 1923);

  EXPECT_NEAR(1923, ins.get_year_of_made(), 0.000001);
}


TEST(Original, can_set_year_of_made)
{
  Original ins(8, 1923);

  ins.set_year_of_made(1905);
  EXPECT_NE(0, ins.get_year_of_made());
}


///Тесты для класса Symphonic
TEST(Symphonic, can_create_Symphonic_with_positive_count)
{
  ASSERT_NO_THROW(Symphonic ins(8, 3));
}


TEST(Symphonic, can_get_count)
{
  Symphonic ins(8, 3);

  EXPECT_NEAR(8, ins.get_count(), 0.000001);
}


TEST(Symphonic, throws_when_create_instrument_with_negative_count)
{
  ASSERT_ANY_THROW(Symphonic ins(-4, 4));
}


TEST(Symphonic, throws_when_create_instrument_with_negative_standart_count)
{
  ASSERT_ANY_THROW(Symphonic ins(4, -5));
}


TEST(Symphonic, can_set_count)
{
  Symphonic ins(8, 1923);

  ins.set_count(3);
  EXPECT_NE(0, ins.get_count());
}


TEST(Symphonic, can_get_orchestra)
{
  Symphonic ins(8, 1923);

  EXPECT_NEAR(0, ins.get_orchestra(), 0.000001);
}


TEST(Symphonic, can_set_orchestra)
{
  Symphonic ins(8, 1923);

  ins.set_orchestra(1);
  EXPECT_NE(0, ins.get_orchestra());
}


TEST(Symphonic, can_get_standart_count)
{
  Symphonic ins(8, 1923);

  EXPECT_NEAR(1923, ins.get_standart_count_in_orchestra(), 0.000001);
}


TEST(Symphonic, can_set_standart_count)
{
  Symphonic ins(8, 1923);

  ins.set_standart_count_in_orchestra(1905);
  EXPECT_NE(0, ins.get_standart_count_in_orchestra());
}