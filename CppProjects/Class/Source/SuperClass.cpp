#include "SuperClass.h"
#include <iostream>


//----------------------------------------
// �R���X�g���N�^
SuperClass::SuperClass()
{
	DebugPrintfInCtor();
}

// �p�����[�^�[�t�� �R���X�g���N�^
SuperClass::SuperClass(const char* const name) : name_{name}
{
	DebugPrintfInCtor();
}

//----------------------------------------
// �f�X�g���N�^
SuperClass::~SuperClass()
{
	// �j�����ꂽ��o�͂���
	std::printf("Dtor: Super [%s]\n", name_.c_str());
}

//----------------------------------------
// �R���X�g���N�^���Ŏg�p����f�o�b�O print
void SuperClass::DebugPrintfInCtor()
{
}

//----------------------------------------
// �f�o�b�O�p �p�����[�^�̏o��
void SuperClass::Dump()
{
	std::printf("=========== SuperClass Dump ===========");
	std::printf("\tname_: %s\n", name_.c_str());
	std::printf("\tvalue_: $d\n", value_);
	std::printf("=======================================");
}

