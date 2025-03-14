#include <iostream>
#include "All_Instruments.h"
#include "Electrical.h"
#include "Classical.h"
#include "Synthesizer.h"
#include "Original.h"
#include "Symphonic.h"
#include "Folk.h"

using namespace std;
void Polic(TAllInstruments a)
{
	cout << a.GetCount() * 8 << endl;
}

int main()
{
	TFolk arf;
	cin >> arf;
	Polic(arf);
}