#pragma once

#include "SuperClass.h"


class SubClass
	: public SuperClass
{
public:
	//-------------------------------------------------
	// �R���X�g���N�^�E�f�X�g���N�^
	SubClass();
	~SubClass();

	//-------------------------------------------------
	// method

	// �l�̃Z�b�g
	using SuperClass::setValue; // using �錾�� SuperClass::setValue ����������
	void setValue(const float value) { value_ = value; }

	// �l�̎擾
	float value() const { return value_; }

	// �f�o�b�O�p dump
	void dump();

private:
	//-------------------------------------------------
	// variable

	// �l
	float value_ = 0.0f;
};


