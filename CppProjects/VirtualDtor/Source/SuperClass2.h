#pragma once

#include <string>


class SuperClass2
{
public:
	SuperClass2();
	SuperClass2(const char* const name);
	virtual ~SuperClass2();

protected:
	//-------------------------------------------------
	// function

	// ���ʎq���Z�b�g
	void setName(const char* name) { name_ = name; }

	//-------------------------------------------------
	// variable

	// ���ʎq
	std::string name_ = "SuperClass2";

private:
	//-------------------------------------------------
	// function

	// �f�o�b�O�p �R���X�g���N�^���Ŏg�p���� print
	void debugPrintfInCtor();
};

