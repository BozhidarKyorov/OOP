#pragma once

#include "Organism.h"
#include "Vector.hpp"
#include "StringC.h"

#include <iostream>

class Fauna : public Organism
{  
	bool isPredator;

public:
	Fauna();
	Fauna(const StringC&, double, const Vector<StringC>&, const StringC&, bool);

	void print() const override;

	Organism* clone() const override;
};
