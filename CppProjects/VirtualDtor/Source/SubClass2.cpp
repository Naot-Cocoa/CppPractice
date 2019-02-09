#include "SubClass2.h"



//-------------------------------------------------
// コンストラクタ
SubClass2::SubClass2()
	: SuperClass2{ "SubClass2" }
{
	std::printf("Ctor: Sub2 [%s]\n", name_.c_str());
}


//-------------------------------------------------
// デストラクタ
SubClass2::~SubClass2()
{
	std::printf("Dtor: Sub2 [%s]\n", name_.c_str());
}


