#include "Koulu.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Koulu::Koulu()
{
	cout << "luodaan koulu..." << endl;
}

Koulu::Koulu(string aKoulunNimi)
	:mKoulunNimi(aKoulunNimi)
{
	cout << "Luotu oppilaitos nimeltä " << endl;
}
