#include <iostream>
#include "TableUtility.h"

int main()
{
	// ポインタ table を定義　<= ローカル変数
	int* table = nullptr;

	// 初期状態は nullptr で初期化している
	TableUtility::DumpTable(table);
	std::printf("\n");

	// int の領域 TableUtility::kTableSize 個を table として確保する
	table = new int[TableUtility::kTableSize];
	TableUtility::DumpTable(table);
	std::printf("\n");

	// table に値をセットする
	TableUtility::SetupTable(table);
	TableUtility::DumpTable(table);
	std::printf("\n");

	// table の領域を解放する
	delete[] table;

	/*
		table に残っている値で解放済み領域や、不正な領域に
		アクセス出来ないように nullptr でクリアすると安全
	*/
	table = nullptr;
}