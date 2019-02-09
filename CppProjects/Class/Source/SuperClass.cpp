#include "SuperClass.h"
#include <iostream>


//----------------------------------------
// コンストラクタ
SuperClass::SuperClass()
{
	DebugPrintfInCtor();
}

// パラメーター付き コンストラクタ
SuperClass::SuperClass(const char* const name) : name_{name}
{
	DebugPrintfInCtor();
}

//----------------------------------------
// デストラクタ
SuperClass::~SuperClass()
{
	// 破棄されたら出力する
	std::printf("Dtor: Super [%s]\n", name_.c_str());
}

//----------------------------------------
// コンストラクタ内で使用するデバッグ print
void SuperClass::DebugPrintfInCtor()
{
}

//----------------------------------------
// デバッグ用 パラメータの出力
void SuperClass::Dump()
{
	std::printf("=========== SuperClass Dump ===========");
	std::printf("\tname_: %s\n", name_.c_str());
	std::printf("\tvalue_: $d\n", value_);
	std::printf("=======================================");
}

