#pragma once


namespace TableUtility {
	
	// 外部で定義されている kTableSize を宣言
	extern const int kTableSize;

	//--------------------------------------------
	// table の操作をする関数(プロトタイプ)
	void SetupTable(const std::unique_ptr<int[]>& table);
	void DumpTable(const std::unique_ptr<int[]>& table);
}