#pragma once

#include <string>

class SuperClass
{
public:
	//----------------------------------------
	// コンストラクタ・デストラクタ
	SuperClass();
	SuperClass(const char* const name);
	~SuperClass();

	//----------------------------------------
	// method

	// 値のセット
	void SetValue(const int value) { value_ = value; }

	// 値の取得
	const std::string& Name() const { return name_; }
	int Value() const { return value_; }

	// デバッグ用 dump
	void Dump();

protected:
	//----------------------------------------
	// function
	void SetName(const char* name) { name_ = name; }

	//----------------------------------------
	// variable

	// インスタンスの識別子として name_ を定義
	std::string name_ = "SuperClass";

private:
	//----------------------------------------
	// function

	// デバッグ用 コンストラクタ内で使用する print
	void DebugPrintfInCtor();

	//----------------------------------------
	// variable

	// 値
	int value_ = 0;
};

