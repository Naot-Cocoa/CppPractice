#pragma once

#include <string>

// SuperClass の定義
class SuperClass
{
public:
	//-------------------------------------------------
	// コンストラクタ・デストラクタ
	SuperClass();
	SuperClass(const char* const name);
	~SuperClass();

	//-------------------------------------------------
	// method

	// 値のセット
	void setValue(const int value) { value_ = value; }

	// 値の取得
	const std::string& name() const { return name_; }
	int value() const { return value_; }

	// デバッグ用 dump
	void dump();

protected:
	//-------------------------------------------------
	// function

	// 識別子をセット
	void setName(const char* name) { name_ = name; }

	//-------------------------------------------------
	// variable

	// インスタンスの識別子として name_ を定義
	std::string name_ = "SuperClass";

private:
	//-------------------------------------------------
	// function

	// デバッグ用 コンストラクタ内で使用する print
	void debugPrintfInCtor();

	//-------------------------------------------------
	// variable

	// 値
	int value_ = 0;
};


