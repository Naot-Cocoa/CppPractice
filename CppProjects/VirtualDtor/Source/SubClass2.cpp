#include "SubClass2.h"



//-------------------------------------------------
// �R���X�g���N�^
SubClass2::SubClass2()
	: SuperClass2{ "SubClass2" }
{
	std::printf("Ctor: Sub2 [%s]\n", name_.c_str());
}


//-------------------------------------------------
// �f�X�g���N�^
SubClass2::~SubClass2()
{
	std::printf("Dtor: Sub2 [%s]\n", name_.c_str());
}


