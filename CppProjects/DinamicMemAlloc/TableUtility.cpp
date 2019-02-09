#include <iostream>
#include "TableUtility.h"

namespace TableUtility
{
	//--------------------------------------------
	// table の要素数
	const int kTableSize = 3;

	//--------------------------------------------
	// table の要素をセットする
	void SetupTable(int* const table)
	{
		// table の各要素に値を入れていく
		for (int index = 0; index < kTableSize; index++)
		{
			table[index] = kTableSize - index;
		}
	}

	//--------------------------------------------
	// table の中身を出力する
	void DumpTable(const int* const table)
	{
		// table が所有している領域のアドレスを表示
		std::printf("========= Dump Table =========\n");
		std::printf("table: %p\n", table);
		std::printf("------------------------------\n");

		// 有効なポインタだった場合、データを出力
		if (table)
		{
			for (int index = 0; index < kTableSize; index++)
			{
				std::printf("table[%02d]: %d\n", index, table[index]);
			}
		}
		// 無効なポインタの場合、 nullptr として出力
		else
		{
			std::printf("table is nullptr\n");
		}

		std::printf("=============================\n");
	}
}