#include <iostream>
#include <cstdlib>

// グローバル関数 x
void x() { std::printf("x() called\n"); }

void functionA()
{
	std::printf("== functionA =======\n");

	// グローバル関数 x を呼び出す
	x();

	std::printf("====================\n\n");
}

void functionB()
{
	std::printf("== functionB =======\n");

	// functionA ローカル変数 x
	// グローバル定義の x を隠す
	int x = 0;

	// x への代入
	x = 3;
	std::printf("functionB::x: %d\n", x);

	//// グローバル関数 x を呼び出したつもり
	//// x はこのスコープでは int 型の変数なのでエラー
	// x();

	std::printf("====================\n\n");
}

void functionC()
{
	std::printf("== functionC =======\n");

	// functionB ローカル変数 x
	// グローバル定義の x を隠す
	int x = 0;

	// x への代入
	x = 5;
	std::printf("functionC::x: %d\n", x);

	// グローバル関数 x を明示的に呼び出す
	::x();

	std::printf("====================\n\n");
}

void functionD()
{
	std::printf("== functionD =======\n");

	// グローバル関数 x を可視化
	using ::x;

	//// ローカル変数 x を定義しようとしたが
	//// グローバル関数 x が定義済みなのでエラーになる
	// int x = 0;

	x();

	std::printf("====================\n\n");
}

int main()
{
	functionA();
	functionB();
	functionC();
	functionD();

	system("pause");
}