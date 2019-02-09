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

	// 識別子をセット
	void setName(const char* name) { name_ = name; }

	//-------------------------------------------------
	// variable

	// 識別子
	std::string name_ = "SuperClass2";

private:
	//-------------------------------------------------
	// function

	// デバッグ用 コンストラクタ内で使用する print
	void debugPrintfInCtor();
};

