#include <iostream>

// �Q�ƂŎ󂯎��֐��̃v���g�^�C�v
void Function(int & parameter);

// main �֐�
int main()
{
	// ����`
	int source = 10;
	std::printf("=== source =======================\n");
	std::printf(" source:\t%d\n", source);
	std::printf("&source:\t%p\n", &source);
	std::printf("==================================\n");
	std::printf("\n");

	// �Q�Ƃ̒�`�B�^�Ǝ��ʎq�̊Ԃ� & ��t������
	// ����`�����̂܂ܓn���ď���������
	int & reference = source;
	std::printf("=== reference ====================\n");
	std::printf(" reference:\t%d\n", reference);
	std::printf("&reference:\t%p\n", &reference);
	std::printf("==================================\n");
	std::printf("\n");

	// �Q�ƌo�R�Ō���`�̒l�𑀍삷��
	// �Q�ƂɋL���͕s�v�ŁA�ʏ�̑���̂悤�Ɉ�����
	reference = 100;
	std::printf("=== set source ===================\n");
	std::printf(" reference:\t%d\n", reference);
	std::printf(" source:\t%d\n", source);
	std::printf("==================================\n");
	std::printf("\n");

	// source2 ���`���āA�Q�Ƃɑ������
	// �Q�Ɛ悪�ς��̂ł͂Ȃ��A�Q�ƌ��̒l���ς��
	int source2 = 20;
	reference = source2;
	std::printf("=== set source2 ==================\n");
	std::printf(" reference:\t%d\n", reference);
	std::printf("&reference:\t%p\n", &reference);
	std::printf(" source:\t%d\n", source);
	std::printf(" source2:\t%d\n", source2);
	std::printf("==================================\n");
	std::printf("\n");

	// source ���֐��Ɉ����Ƃ��ēn��
	std::printf("=== call Function ================\n");
	Function(source);
	std::printf(" source:\t%d\n", source);
	std::printf("==================================\n");

	system("pause");
}

// �Q�ƂŎ󂯎��֐��̒�`
void Function(int & parameter)
{
	std::printf("&parameter :\t%p\n", &parameter);
	parameter = 200;
}