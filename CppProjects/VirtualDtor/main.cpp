#include <iostream>
#include <cstdlib>
#include "Source/SuperClass.h"
#include "Source/SubClass.h"

#include "Source/SuperClass2.h"
#include "Source/SubClass2.h"


int main()
{
	std::printf("=== non virtual dtor =========\n");
	{
		// SuperClass ------------------------------
		std::unique_ptr<SuperClass> super = std::make_unique<SuperClass>();

		// subclass --------------------------------
		std::unique_ptr<SuperClass> sub = std::make_unique<SubClass>();

		std::printf("------------------------------\n");
	}
	std::printf("==============================\n");

	std::printf("\n");

	std::printf("=== virtual dtor =============\n");
	{
		// SuperClass2  ----------------------------
		std::unique_ptr<SuperClass2> super2 = std::make_unique<SuperClass2>();

		// SubClass2  ------------------------------
		std::unique_ptr<SuperClass2> sub2 = std::make_unique<SubClass2>();

		std::printf("------------------------------\n");
	}
	std::printf("==============================\n");

	system("pause");
}