#include <iostream>
#include "SuperClass.h"


//-------------------------------------------------
// �R���X�g���N�^
SuperClass::SuperClass()
{
	debugPrintfInCtor();
}


// �p�����[�^�t�� �R���X�g���N�^
SuperClass::SuperClass(const char * const name)
	: name_{ name }
{
	debugPrintfInCtor();
}


//-------------------------------------------------
// �f�X�g���N�^
SuperClass::~SuperClass()
{
	// �j�����ꂽ��o�͂���
	std::printf("Dtor: Super [%s]\n", name_.c_str());
}


//-------------------------------------------------
// �R���X�g���N�^���Ŏg�p����f�o�b�O print
void SuperClass::debugPrintfInCtor()
{
	std::printf("Ctor: Super [%s]\n", name_.c_str());
}


//-------------------------------------------------
// �f�o�b�O�p �p�����[�^�̏o��
void SuperClass::dump()
{
	std::printf("== SuperClass Dump =============\n");
	std::printf("\tname_: %s\n", name_.c_str());
	std::printf("\tvalue_: %d\n", value_);
	std::printf("================================\n");
}


