#include <iostream>
#include <cstdlib>
#include "Source\SuperClass.h";
#include "Source\SubClass.h";

int main()
{
	// SuperClass ----------------------------------------
	SuperClass super;	// �C���X�^���X����
	super.SetValue(1);	// �l���Z�b�g
	super.Dump();		// dump����

	std::printf("\n");

	// SubClass ----------------------------------------
	SubClass sub;			// �C���X�^���X�𐶐�
	sub.SetValue(100);		// int �^�̒l���Z�b�g
	sub.SetValue(200.0f);	// float �^�̒l���Z�b�g
	sub.Dump();				// dump ����

	std::printf("\n");

	system("pause");
}