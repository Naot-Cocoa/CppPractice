#include <iostream>
#include <cstdlib>
#include "Source\SuperClass.h"
#include "Source\SubClass.h"

int main()
{
	// SuperClass �Ƃ��Ẵ|�C���^�^���`����
	SuperClass* superPtr = nullptr;

	// SubClass �̃C���X�^���X�𐶐�����
	SubClass sub;

	// SubClass �̃C���X�^���X�� "�A�h���X" �� SuperClass �Ƃ��Ẵ|�C���^�^�Ɋi�[����
	superPtr = &sub;

	// �f�o�b�O�p dump �Œ��g��\������
	superPtr->Dump();

	system("pause");
}