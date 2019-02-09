#include <iostream>
#include "SuperClass2.h"


//-------------------------------------------------
// コンストラクタ
SuperClass2::SuperClass2()
{
	debugPrintfInCtor();
}

// パラメータ付き コンストラクタ
SuperClass2::SuperClass2(const char * const name)
	: name_{ name }
{
	debugPrintfInCtor();
}


//-------------------------------------------------
// デストラクタ
SuperClass2::~SuperClass2()
{
	std::printf("Dtor: Super2 [%s]\n", name_.c_str());
}


//-------------------------------------------------
// コンストラクタ内で使用するデバッグ print
void SuperClass2::debugPrintfInCtor()
{
	std::printf("Ctor: Super2 [%s]\n", name_.c_str());
}


