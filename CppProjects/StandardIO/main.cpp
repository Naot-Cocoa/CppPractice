#include <iostream>
#include <string>
#include <cstdlib>

// エントリーポイント
int main() {
	
	// プロンプト表示
	std::printf("input > ");

	// 1行入力を受け取る
	std::string input;
	if (std::getline(std::cin, input))
	{
		// 入力内容を出力
		std::printf("inputted: %s\n", input.c_str());
	}

	// 一時停止
	system("pause");
}