#include <iostream>
#include <cstdlib>
#include "Source\SuperClass.h"	// 実際のファイルパス

int main()
{
	// インスタンスを生成
	SuperClass super;
	SuperClass namedSuper{ "named super" };

	// 値をセット
	super.SetValue(1);
	namedSuper.SetValue(100);

	// dumpする
	super.Dump();
	namedSuper.Dump();

	system("pause");
}