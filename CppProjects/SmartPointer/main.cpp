#include <iostream>
#include "TableUtility.h"

int main()
{
	// �|�C���^ table ���`�@<= ���[�J���ϐ�
	std::unique_ptr<int[]> table = nullptr;

	// ������Ԃ� nullptr �ŏ��������Ă���
	TableUtility::DumpTable(table);
	std::printf("\n");

	// int �̗̈� TableUtility::kTableSize �� table �Ƃ��Ċm�ۂ���
	table = std::make_unique<int[]>(TableUtility::kTableSize);
	TableUtility::DumpTable(table);
	std::printf("\n");

	// table �ɒl���Z�b�g����
	TableUtility::SetupTable(table);
	TableUtility::DumpTable(table);
	std::printf("\n");
}