#include "Fauna.h"
#include "Flora.h"
#include "Fungi.h"
#include "RedBook.h"

#include "Vector.hpp"
#include "StringC.h"

int main()
{
	/*Vector<StringC> hab;
	hab.pushBack("Africa");
	hab.pushBack("South Asia");

	Flora f("orchid", 4, hab, "least concern");
	Fungi fun("guba", 1, hab, "extinct", false);
	
	RedBook b;
	b.addOrganism(f);
	b.addOrganism(fun);

	b.printAll();*/


	RedBook tempBook;

	//MENU 
	//!!!not finished for add!!!
	//need stirng to size_t func?
	//finished until remove

	StringC consoleCom;
	std::cout << " Welcome" << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "1 - print" << std::endl;
	std::cout << "2 - add/remove" << std::endl;
	std::cout << "3 - check" << std::endl;
	std::cout << ">";
	consoleCom.getline(std::cin);

	while (true)
	{
		if (consoleCom == "1" || consoleCom == "print" || consoleCom == "Print")
		{
			std::cout << "	1 - print Flora" << std::endl;
			std::cout << "	2 - print Fauna" << std::endl;
			std::cout << "	3 - print Fungi" << std::endl;
			std::cout << "  4 - print all" << std::endl;
			std::cout << "	>";
			consoleCom.getline(std::cin);
			if (consoleCom == "1" || consoleCom == "flora" || consoleCom == "Flora" || consoleCom == "print Flora")
			{
				std::cout << "	All plants in the book:" << std::endl;
				tempBook.printFlora();
			}
			else if (consoleCom == "2" || consoleCom == "fauna" || consoleCom == "Fauna" || consoleCom == "print Fauna")
			{
				std::cout << "	All animals in the book:" << std::endl;
				tempBook.printFauna();
			}
			else if (consoleCom == "3" || consoleCom == "fungi" || consoleCom == "Fungi" || consoleCom == "print Fungi")
			{
				std::cout << "	All fungi in the book:" << std::endl;
				tempBook.printFungi();
			}
			else if (consoleCom == "4" || consoleCom == "flora" || consoleCom == "Flora" || consoleCom == "print Flora")
			{
				std::cout << "	All species in the book:" << std::endl;
				tempBook.printAll();
			}
			else
			{
				std::cout << "	Wrong command!" << std::endl;
				continue;
			}
		}
		else if (consoleCom == "2" || consoleCom == "add" || consoleCom == "remove" || consoleCom == "add/remove")
		{
			std::cout << "	1 - add organism" << std::endl;
			std::cout << "	2 - remove organism" << std::endl;
			std::cout << "	>";
			consoleCom.getline(std::cin);
			if (consoleCom == "1" || consoleCom == "add" || consoleCom == "Add" || consoleCom == "add organism")
			{
				std::cout << "	  1 - animal (flora)" << std::endl;
				std::cout << "    2 - plant (fauna)" << std::endl;
				std::cout << "    3 - fungus (fungi)" << std::endl;
				std::cout << "	  >";
				consoleCom.getline(std::cin);
				if (consoleCom == "1" || consoleCom == "animal" || consoleCom == "Animal" || consoleCom == "fauna")
				{
					Fauna temp;
				}
				else if (consoleCom == "2" || consoleCom == "plant" || consoleCom == "Plant" || consoleCom == "flora")
				{
					Flora temp;
				}
				else if (consoleCom == "3" || consoleCom == "fungus" || consoleCom == "Fungus" || consoleCom == "fungi")
				{
					Fungi temp;
				}
				else
				{
					std::cout << "	  Wrong command!" << std::endl;
					continue;
				}
			}
			else if (consoleCom == "2" || consoleCom == "remove" || consoleCom == "Remove" || consoleCom == "remove organism")
			{
				std::cout << "    name or index" << std::endl;
				std::cout << "    >";
				consoleCom.getline(std::cin);
				
				int index = tempBook.getSpeciesIndex(consoleCom);
				if (index == -1)
				{
					std::cout << "    Organism is not in the book." << std::endl;
					continue;
				}
				
				if (!tempBook.removeAtIndex(index))
				{
					std::cout << "    Error in removing!" << std::endl;
					continue;
				}
				std::cout << "    Successful removal" << std::endl;
				continue;
				

				
			}
		}
	}


	return 0;
}