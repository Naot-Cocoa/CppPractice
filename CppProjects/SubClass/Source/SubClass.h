#pragma once

#include "SuperClass.h"

class SubClass : public SuperClass
{
public:
	//----------------------------------------
	// �R���X�g���N�^�E�f�X�g���N�^
	SubClass();
	~SubClass();

	//----------------------------------------
	// method

	// �l�̃Z�b�g
	void SetValue(const float value) { value_ = value; }

	// �l�̃Z�b�g
	float Value() const { return value_; }
	
	// �f�o�b�O�p dump
	void Dump();

private:
	//----------------------------------------
	// variable

	// �l
	float value_ = 0.0f;
};

