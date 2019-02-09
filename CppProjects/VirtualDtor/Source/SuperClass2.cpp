#include <iostream>
#include "SuperClass2.h"


//-------------------------------------------------
// �R���X�g���N�^
SuperClass2::SuperClass2()
{
	debugPrintfInCtor();
}

// �p�����[�^�t�� �R���X�g���N�^
SuperClass2::SuperClass2(const char * const name)
	: name_{ name }
{
	debugPrintfInCtor();
}


//-------------------------------------------------
// �f�X�g���N�^
SuperClass2::~SuperClass2()
{
	std::printf("Dtor: Super2 [%s]\n", name_.c_str());
}


//-------------------------------------------------
// �R���X�g���N�^���Ŏg�p����f�o�b�O print
void SuperClass2::debugPrintfInCtor()
{
	std::printf("Ctor: Super2 [%s]\n", name_.c_str());
}


