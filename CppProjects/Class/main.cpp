#include <iostream>
#include <cstdlib>
#include "Source\SuperClass.h"	// ���ۂ̃t�@�C���p�X

int main()
{
	// �C���X�^���X�𐶐�
	SuperClass super;
	SuperClass namedSuper{ "named super" };

	// �l���Z�b�g
	super.SetValue(1);
	namedSuper.SetValue(100);

	// dump����
	super.Dump();
	namedSuper.Dump();

	system("pause");
}