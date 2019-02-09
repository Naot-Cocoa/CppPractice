#pragma once

#include "SuperClass.h"

class SubClass : public SuperClass
{
public:
	//----------------------------------------
	// コンストラクタ・デストラクタ
	SubClass();
	~SubClass();

	//----------------------------------------
	// method

	// 値のセット
	void SetValue(const float value) { value_ = value; }

	// 値のセット
	float Value() const { return value_; }
	
	// デバッグ用 dump
	void Dump();

private:
	//----------------------------------------
	// variable

	// 値
	float value_ = 0.0f;
};

