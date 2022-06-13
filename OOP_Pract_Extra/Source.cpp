#include "Fauna.h"
#include "Flora.h"
#include "Fungi.h"
#include "RedBook.h"

#include "Vector.hpp"
#include "StringC.h"

void commandMenu(RedBook&);

int strToint(const char*);

int main()
{

	RedBook tempBook;

	commandMenu(tempBook);

	

	return 0;
}

void commandMenu(RedBook& tempBook)
{
	//MENU 
	//!!!not finished for add!!!
	//finished until check: missing func
	//not added: print for exact conservation lvl
	StringC consoleCom;

	while (true)
	{
		std::cout << "Available commands:" << std::endl;
		std::cout << "1 - print" << std::endl;
		std::cout << "2 - add/remove" << std::endl;
		std::cout << "3 - check/change" << std::endl;
		std::cout << "0 - quit" << std::endl;
		std::cout << ">";
		consoleCom.getline(std::cin);

		if (consoleCom == "1" || consoleCom == "print" || consoleCom == "Print")
		{
			std::cout << "	1 - print Flora" << std::endl;
			std::cout << "	2 - print Fauna" << std::endl;
			std::cout << "	3 - print Fungi" << std::endl;
			std::cout << "  4 - print all" << std::endl;
			std::cout << "  0 - quit" << std::endl;
			std::cout << "	>";
			consoleCom.getline(std::cin);
			if (consoleCom == "1" || consoleCom == "flora" || consoleCom == "Flora" || consoleCom == "print Flora")
			{
				std::cout << "	All plants in the book:" << std::endl;
				tempBook.printFlora();
				continue;
			}
			else if (consoleCom == "2" || consoleCom == "fauna" || consoleCom == "Fauna" || consoleCom == "print Fauna")
			{
				std::cout << "	All animals in the book:" << std::endl;
				tempBook.printFauna();
				continue;
			}
			else if (consoleCom == "3" || consoleCom == "fungi" || consoleCom == "Fungi" || consoleCom == "print Fungi")
			{
				std::cout << "	All fungi in the book:" << std::endl;
				tempBook.printFungi();
				continue;
			}
			else if (consoleCom == "4" || consoleCom == "flora" || consoleCom == "Flora" || consoleCom == "print Flora")
			{
				std::cout << "	All species in the book:" << std::endl;
				tempBook.printAll();
				continue;
			}
			else if (consoleCom == "0" || consoleCom == "quit")
			{
				continue;
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
			std::cout << "  0 - quit" << std::endl;
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
					continue;
				}
				else if (consoleCom == "2" || consoleCom == "plant" || consoleCom == "Plant" || consoleCom == "flora")
				{
					Flora temp;
					continue;
				}
				else if (consoleCom == "3" || consoleCom == "fungus" || consoleCom == "Fungus" || consoleCom == "fungi")
				{
					Fungi temp;
					continue;
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
				int comNum = strToint(consoleCom.getString());
				int index = tempBook.getSpeciesIndex(consoleCom);
				if (index == -1)
				{
					if (tempBook.removeAtIndex(comNum))
					{
						std::cout << "    Successful removal" << std::endl;
						continue;
					}
					else
					{
						std::cout << "    Error in removing!" << std::endl;
						continue;
					}
				}
				else
				{
					tempBook.removeAtIndex(index);
					std::cout << "    Successful removal" << std::endl;
					continue;
				}
			}
			else if (consoleCom == "0" || consoleCom == "quit" || consoleCom == "Quit")
			{
				continue;
			}
			else
			{
				std::cout << "	  Wrong command!" << std::endl;
				continue;
			}
		}
		else if (consoleCom == "3" || consoleCom == "check" || consoleCom == "change" || consoleCom == "check/change")
		{
			std::cout << "	1 - check species" << std::endl;
			std::cout << "	2 - check conservation level" << std::endl;
			std::cout << "	3 - change species" << std::endl;
			std::cout << "	4 - change conservation level" << std::endl;
			std::cout << "	0 - quit" << std::endl;
			std::cout << "	>";
			consoleCom.getline(std::cin);
			if (consoleCom == "1" || consoleCom == "check species")
			{
				//missing function: access to exact species
			}
			else if (consoleCom == "2" || consoleCom == "check conservation"|| consoleCom == "check conservation level")
			{
				//missing function: access to exact species
				/*std::cout << "    name or index" << std::endl;
				std::cout << "    >";
				consoleCom.getline(std::cin);
				int comNum = strToint(consoleCom.getString());
				int index = tempBook.getSpeciesIndex(consoleCom);
				if (index == -1)
				{
					if (tempBook.removeAtIndex(comNum))
					{
						std::cout << "    Successful removal" << std::endl;
						continue;
					}
					else
					{
						std::cout << "    Error in removing!" << std::endl;
						continue;
					}
				}
				else
				{
					tempBook.removeAtIndex(index);
					std::cout << "    Successful removal" << std::endl;
					continue;
				}*/
			}
			else if (consoleCom == "3" || consoleCom == "change species")
			{
				//missing function: access to exact species
			}
			else if (consoleCom == "4" || consoleCom == "change conservation" || consoleCom == "change conservation level")
			{
				std::cout << "    --levels:" << std::endl;
				std::cout << "    --least concern" << std::endl;
				std::cout << "    --near threatened" << std::endl;
				std::cout << "    --vulnerable" << std::endl;
				std::cout << "    --endangered" << std::endl;
				std::cout << "    --critically endangered" << std::endl;
				std::cout << "    --extinct in the wild" << std::endl;
				std::cout << "    --extinct" << std::endl;
				std::cout << "    name or index of species" << std::endl;
				std::cout << "    >";
				consoleCom.getline(std::cin);
				int comNum = strToint(consoleCom.getString());
				int index = tempBook.getSpeciesIndex(consoleCom);
				if (index == -1)
				{
					if (comNum <= 0 || comNum >= tempBook.getSize())
					{
						std::cout << "    Invalid name or index!" << std::endl;
						continue;
					}
					std::cout << "    level" << std::endl;
					std::cout << "    >";
					consoleCom.getline(std::cin);
					if (!tempBook.setConservationLevelByIndex(comNum, consoleCom))
					{
						std::cout << "    Invalid level" << std::endl;
						continue;
					}
					else
					{
						std::cout << "    Successful change" << std::endl;
						continue;
					}

				}
			}
			else if (consoleCom == "0" || consoleCom == "quit")
			{
				continue;
			}
			else
			{
				std::cout << "  Wrong command!" << std::endl;
				continue;
			}
		}
		else if (consoleCom == "0" || consoleCom == "quit" || consoleCom == "Quit")
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Weong command!" << std::endl;
			continue;
		}
	}
}

int strToint(const char* str)
{
	int index = 0;
	int temp = 1;
	for (int i = StringC(str).getSize() - 1; i >= 0; i--)
	{
		index += (int(str[i]) - int(char('0'))) * temp;
		temp *= 10;
	}
	return index;
}