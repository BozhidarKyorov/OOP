#include "Fauna.h"
#include "Flora.h"
#include "Fungi.h"
#include "RedBook.h"

#include "Vector.hpp"
#include "StringC.h"

int main()
{
	Vector<StringC> hab;
	hab.pushBack("Africa");
	hab.pushBack("South Asia");

	Flora f("orchid", 4, hab, "least concern");
	Fungi fun("guba", 1, hab, "extinct", false);
	
	RedBook b;
	b.addOrganism(f);
	b.addOrganism(fun);

	b.printAll();

	return 0;
}