#pragma once

#include <string>

class SuperClass
{
public:
	//----------------------------------------
	// �R���X�g���N�^�E�f�X�g���N�^
	SuperClass();
	SuperClass(const char* const name);
	~SuperClass();

	//----------------------------------------
	// method

	// �l�̃Z�b�g
	void SetValue(const int value) { value_ = value; }

	// �l�̎擾
	const std::string& Name() const { return name_; }
	int Value() const { return value_; }

	// �f�o�b�O�p dump
	void Dump();

protected:
	//----------------------------------------
	// function
	void SetName(const char* name) { name_ = name; }

	//----------------------------------------
	// variable

	// �C���X�^���X�̎��ʎq�Ƃ��� name_ ���`
	std::string name_ = "SuperClass";

private:
	//----------------------------------------
	// function

	// �f�o�b�O�p �R���X�g���N�^���Ŏg�p���� print
	void DebugPrintfInCtor();

	//----------------------------------------
	// variable

	// �l
	int value_ = 0;
};

