#include <iostream>
#include <cstdlib>

// �O���[�o���֐� x
void x() { std::printf("x() called\n"); }

void functionA()
{
	std::printf("== functionA =======\n");

	// �O���[�o���֐� x ���Ăяo��
	x();

	std::printf("====================\n\n");
}

void functionB()
{
	std::printf("== functionB =======\n");

	// functionA ���[�J���ϐ� x
	// �O���[�o����`�� x ���B��
	int x = 0;

	// x �ւ̑��
	x = 3;
	std::printf("functionB::x: %d\n", x);

	//// �O���[�o���֐� x ���Ăяo��������
	//// x �͂��̃X�R�[�v�ł� int �^�̕ϐ��Ȃ̂ŃG���[
	// x();

	std::printf("====================\n\n");
}

void functionC()
{
	std::printf("== functionC =======\n");

	// functionB ���[�J���ϐ� x
	// �O���[�o����`�� x ���B��
	int x = 0;

	// x �ւ̑��
	x = 5;
	std::printf("functionC::x: %d\n", x);

	// �O���[�o���֐� x �𖾎��I�ɌĂяo��
	::x();

	std::printf("====================\n\n");
}

void functionD()
{
	std::printf("== functionD =======\n");

	// �O���[�o���֐� x ������
	using ::x;

	//// ���[�J���ϐ� x ���`���悤�Ƃ�����
	//// �O���[�o���֐� x ����`�ς݂Ȃ̂ŃG���[�ɂȂ�
	// int x = 0;

	x();

	std::printf("====================\n\n");
}

int main()
{
	functionA();
	functionB();
	functionC();
	functionD();

	system("pause");
}