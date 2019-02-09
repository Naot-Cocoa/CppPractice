#include <iostream>
#include <cstdlib>
#include "Source\SuperClass.h"
#include "Source\SubClass.h"

int main()
{
	// SuperClass としてのポインタ型を定義する
	SuperClass* superPtr = nullptr;

	// SubClass のインスタンスを生成する
	SubClass sub;

	// SubClass のインスタンスの "アドレス" を SuperClass としてのポインタ型に格納する
	superPtr = &sub;

	// デバッグ用 dump で中身を表示する
	superPtr->Dump();

	system("pause");
}