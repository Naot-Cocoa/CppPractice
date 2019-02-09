#include <iostream>
#include "SuperClass.h"


//-------------------------------------------------
// コンストラクタ
SuperClass::SuperClass()
{
	debugPrintfInCtor();
}


// パラメータ付き コンストラクタ
SuperClass::SuperClass(const char * const name)
	: name_{ name }
{
	debugPrintfInCtor();
}


//-------------------------------------------------
// デストラクタ
SuperClass::~SuperClass()
{
	// 破棄されたら出力する
	std::printf("Dtor: Super [%s]\n", name_.c_str());
}


//-------------------------------------------------
// コンストラクタ内で使用するデバッグ print
void SuperClass::debugPrintfInCtor()
{
	std::printf("Ctor: Super [%s]\n", name_.c_str());
}


//-------------------------------------------------
// デバッグ用 パラメータの出力
void SuperClass::dump()
{
	std::printf("== SuperClass Dump =============\n");
	std::printf("\tname_: %s\n", name_.c_str());
	std::printf("\tvalue_: %d\n", value_);
	std::printf("================================\n");
}


