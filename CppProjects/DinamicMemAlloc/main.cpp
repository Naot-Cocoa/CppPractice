#include <iostream>
#include "TableUtility.h"

int main()
{
	// �|�C���^ table ���`�@<= ���[�J���ϐ�
	int* table = nullptr;

	// ������Ԃ� nullptr �ŏ��������Ă���
	TableUtility::DumpTable(table);
	std::printf("\n");

	// int �̗̈� TableUtility::kTableSize �� table �Ƃ��Ċm�ۂ���
	table = new int[TableUtility::kTableSize];
	TableUtility::DumpTable(table);
	std::printf("\n");

	// table �ɒl���Z�b�g����
	TableUtility::SetupTable(table);
	TableUtility::DumpTable(table);
	std::printf("\n");

	// table �̗̈���������
	delete[] table;

	/*
		table �Ɏc���Ă���l�ŉ���ςݗ̈��A�s���ȗ̈��
		�A�N�Z�X�o���Ȃ��悤�� nullptr �ŃN���A����ƈ��S
	*/
	table = nullptr;
}