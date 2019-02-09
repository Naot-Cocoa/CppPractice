#include <iostream>
#include <cstdlib>

int main() {

	// �l�^�̃f�[�^�T�C�Y��\��
	{
		int i;
		double d;
		char c;
		std::printf("sizeof i : %zu\n", sizeof(i));
		std::printf("sizeof d : %zu\n", sizeof(d));
		std::printf("sizeof c : %zu\n", sizeof(c));
	}

	std::printf("\n");

	// ���ڎQ�� = �|�C���^�Ɋi�[���ꂽ�A�h���X�Ԓn�̃f�[�^�T�C�Y��\��
	{
		int* ip;
		double* dp;
		char* cp;
		std::printf("sizeof i : %zu\n", sizeof(ip));
		std::printf("sizeof d : %zu\n", sizeof(dp));
		std::printf("sizeof c : %zu\n", sizeof(cp));
	}

	std::printf("\n");

	// �ԐڎQ�� = �|�C���^�Ɋi�[���ꂽ�A�h���X�Ԓn�ɕۑ�����Ă���f�[�^�T�C�Y��\��
	{	
		int* ip;
		double* dp;
		char* cp;
		std::printf("sizeof i : %zu\n", sizeof(*ip));
		std::printf("sizeof d : %zu\n", sizeof(*dp));
		std::printf("sizeof c : %zu\n", sizeof(*cp));
	}

	system("pause");
}