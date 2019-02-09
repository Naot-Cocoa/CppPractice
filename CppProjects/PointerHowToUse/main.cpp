#include <iostream>

// �|�C���^�̎Q�Ɛ���o�͂���֐� �v���g�^�C�v
void DumpPointer(const int* const ptr);

// main �֐�
int main()
{
	int i = 3;			// �ϐ� i ���`����3�ŏ���������
	int* ip = nullptr;	// �|�C���^ ip ���`����nullptr �ŏ���������

	{ // ���������_�̒l���o�͂���
		std::printf("=== initial ===============\n");
		std::printf(" i:\t%d\n", i);
		std::printf("&i:\t%p\n", &i);
		std::printf("---------------------------\n");
		std::printf(" ip:\t%p\n", ip);
		std::printf("&ip:\t%p\n", &ip);
		DumpPointer(ip);
		std::printf("===========================\n");
		std::printf("\n");
	}

	{ // ip �� i �̃A�h���X��������
		ip = &i;
		std::printf("=== set address ===========\n");
		std::printf(" i:\t%d\n", i);
		std::printf("&i:\t%p\n", &i);
		std::printf("---------------------------\n");
		std::printf(" ip:\t%p\n", ip);
		std::printf("&ip:\t%p\n", &ip);
		DumpPointer(ip);
		std::printf("===========================\n");
		std::printf("\n");
	}

	{ // ip �o�R�� i ������������
		*ip = 8;
		std::printf("=== set value =============\n");
		std::printf(" i:\t%d\n", i);
		std::printf("&i:\t%p\n", &i);
		std::printf("---------------------------\n");
		std::printf(" ip:\t%p\n", ip);
		std::printf("&ip:\t%p\n", &ip);
		DumpPointer(ip);
		std::printf("===========================\n");
		std::printf("\n");
	}

	system("pause");
}

// �|�C���^�̎Q�Ɛ���o�͂���֐� ��`
void DumpPointer(const int* const ptr)
{
	// nullptr ����Ȃ�������l���Q�Ƃ���
	if (ptr != nullptr) { std::printf("*ptr:\t%d\n", *ptr); }
	else { std::printf("*ptr:\t(nullptr)\n"); }
}