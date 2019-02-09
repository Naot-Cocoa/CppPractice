#pragma once


namespace TableUtility {
	
	// �O���Œ�`����Ă��� kTableSize ��錾
	extern const int kTableSize;

	//--------------------------------------------
	// table �̑��������֐�(�v���g�^�C�v)
	void SetupTable(const std::unique_ptr<int[]>& table);
	void DumpTable(const std::unique_ptr<int[]>& table);
}