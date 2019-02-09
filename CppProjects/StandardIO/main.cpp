#include <iostream>
#include <string>

// エントリーポイント
int main() {
	
	// プロンプト表示
	std::printf("input > ");

	std::string input;

	if (std::getline(std::cin, input)) 
	{
		//入力された文字列の表示
		std::printf("inputted: %s\n", input.c_str());
	}

	// 一時停止
	system("pause");
}