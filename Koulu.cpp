#include "Koulu.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Koulu::Koulu()
{
	cout << "luodaan koulu..." << endl;
}

Koulu::Koulu(string mKoulunNimi)
{
	cout << "Luotu oppilaitos nimeltä " << mKoulunNimi << endl;
}
