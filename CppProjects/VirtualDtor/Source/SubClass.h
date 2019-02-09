#pragma once

#include "SuperClass.h"


class SubClass
	: public SuperClass
{
public:
	//-------------------------------------------------
	// コンストラクタ・デストラクタ
	SubClass();
	~SubClass();

	//-------------------------------------------------
	// method

	// 値のセット
	using SuperClass::setValue; // using 宣言で SuperClass::setValue を可視化する
	void setValue(const float value) { value_ = value; }

	// 値の取得
	float value() const { return value_; }

	// デバッグ用 dump
	void dump();

private:
	//-------------------------------------------------
	// variable

	// 値
	float value_ = 0.0f;
};


