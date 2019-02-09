#include <iostream>
#include <cstdlib>
#include "Source\SuperClass.h";
#include "Source\SubClass.h";

int main()
{
	// SuperClass ----------------------------------------
	SuperClass super;	// インスタンス生成
	super.SetValue(1);	// 値をセット
	super.Dump();		// dumpする

	std::printf("\n");

	// SubClass ----------------------------------------
	SubClass sub;			// インスタンスを生成
	sub.SetValue(100);		// int 型の値をセット
	sub.SetValue(200.0f);	// float 型の値をセット
	sub.Dump();				// dump する

	std::printf("\n");

	system("pause");
}