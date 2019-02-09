#include <iostream>
#include "TableUtility.h"

int main()
{
	// ポインタ table を定義　<= ローカル変数
	std::unique_ptr<int[]> table = nullptr;

	// 初期状態は nullptr で初期化している
	TableUtility::DumpTable(table);
	std::printf("\n");

	// int の領域 TableUtility::kTableSize 個を table として確保する
	table = std::make_unique<int[]>(TableUtility::kTableSize);
	TableUtility::DumpTable(table);
	std::printf("\n");

	// table に値をセットする
	TableUtility::SetupTable(table);
	TableUtility::DumpTable(table);
	std::printf("\n");
}