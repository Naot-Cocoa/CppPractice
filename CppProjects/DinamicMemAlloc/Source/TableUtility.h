#pragma once


namespace TableUtility {
	
	// �O���Œ�`����Ă��� kTableSize ��錾
	extern const int kTableSize;

	//--------------------------------------------
	// table �̑��������֐�(�v���g�^�C�v)
	void SetupTable(int* const table);
	void DumpTable(const int* const table);
}