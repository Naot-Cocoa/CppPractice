#include <iostream>
#include "TableUtility.h"

namespace TableUtility
{
	//--------------------------------------------
	// table �̗v�f��
	const int kTableSize = 3;

	//--------------------------------------------
	// table �̗v�f���Z�b�g����
	void SetupTable(int* const table)
	{
		// table �̊e�v�f�ɒl�����Ă���
		for (int index = 0; index < kTableSize; index++)
		{
			table[index] = kTableSize - index;
		}
	}

	//--------------------------------------------
	// table �̒��g���o�͂���
	void DumpTable(const int* const table)
	{
		// table �����L���Ă���̈�̃A�h���X��\��
		std::printf("========= Dump Table =========\n");
		std::printf("table: %p\n", table);
		std::printf("------------------------------\n");

		// �L���ȃ|�C���^�������ꍇ�A�f�[�^���o��
		if (table)
		{
			for (int index = 0; index < kTableSize; index++)
			{
				std::printf("table[%02d]: %d\n", index, table[index]);
			}
		}
		// �����ȃ|�C���^�̏ꍇ�A nullptr �Ƃ��ďo��
		else
		{
			std::printf("table is nullptr\n");
		}

		std::printf("=============================\n");
	}
}