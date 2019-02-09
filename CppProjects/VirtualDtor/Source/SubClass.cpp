#include "SubClass.h"



//-------------------------------------------------
// �R���X�g���N�^
SubClass::SubClass()
	: SuperClass{ "SubClass" }
{
	std::printf("Ctor: Sub [%s]\n", name_.c_str());
}


//-------------------------------------------------
// �f�X�g���N�^
SubClass::~SubClass()
{
	std::printf("Dtor: Sub [%s]\n", name_.c_str());
}


//-------------------------------------------------
// �f�o�b�O�p �p�����[�^�̏o��
void SubClass::dump()
{
	// SuperClass �� dump ������
	SuperClass::dump();

	// SubClass ���g�� dump
	std::printf("== SubClass Dump ===============\n");
	std::printf("\tvalue_: %f\n", value_);
	std::printf("================================\n");
}


