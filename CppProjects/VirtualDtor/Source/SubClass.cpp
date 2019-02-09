#include "SubClass.h"



//-------------------------------------------------
// コンストラクタ
SubClass::SubClass()
	: SuperClass{ "SubClass" }
{
	std::printf("Ctor: Sub [%s]\n", name_.c_str());
}


//-------------------------------------------------
// デストラクタ
SubClass::~SubClass()
{
	std::printf("Dtor: Sub [%s]\n", name_.c_str());
}


//-------------------------------------------------
// デバッグ用 パラメータの出力
void SubClass::dump()
{
	// SuperClass の dump をする
	SuperClass::dump();

	// SubClass 自身の dump
	std::printf("== SubClass Dump ===============\n");
	std::printf("\tvalue_: %f\n", value_);
	std::printf("================================\n");
}


