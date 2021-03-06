#include "SubClass.h"



SubClass::SubClass() : SuperClass{ "SubClass" }
{
	std::printf("Ctor: Sub [%s]\n", name_.c_str());
}


SubClass::~SubClass()
{
	std::printf("Dtor: Sub [%s]\n", name_.c_str());
}

void SubClass::Dump()
{
	// SuperClass の dump をする
	SuperClass::Dump();

	// SubClass 自身の dump
	std::printf("=========== SuperClass Dump ===========\n");
	std::printf("\tvalue_: %f\n", value_);
	std::printf("=======================================\n");
}
