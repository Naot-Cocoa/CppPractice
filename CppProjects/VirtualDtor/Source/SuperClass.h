#pragma once

#include <string>

// SuperClass �̒�`
class SuperClass
{
public:
	//-------------------------------------------------
	// �R���X�g���N�^�E�f�X�g���N�^
	SuperClass();
	SuperClass(const char* const name);
	~SuperClass();

	//-------------------------------------------------
	// method

	// �l�̃Z�b�g
	void setValue(const int value) { value_ = value; }

	// �l�̎擾
	const std::string& name() const { return name_; }
	int value() const { return value_; }

	// �f�o�b�O�p dump
	void dump();

protected:
	//-------------------------------------------------
	// function

	// ���ʎq���Z�b�g
	void setName(const char* name) { name_ = name; }

	//-------------------------------------------------
	// variable

	// �C���X�^���X�̎��ʎq�Ƃ��� name_ ���`
	std::string name_ = "SuperClass";

private:
	//-------------------------------------------------
	// function

	// �f�o�b�O�p �R���X�g���N�^���Ŏg�p���� print
	void debugPrintfInCtor();

	//-------------------------------------------------
	// variable

	// �l
	int value_ = 0;
};


