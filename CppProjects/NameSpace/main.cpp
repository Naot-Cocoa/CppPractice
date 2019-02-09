#include <string>
#include <iostream>
#include <cstdlib>

// int型の変数 x を定義
int x;

// 名前空間 Space1 を定義
namespace Space1 {
	
	// float型の変数 x を定義
	float x;

	namespace Space2 {
		// void型の関数 X() を定義
		void X() { std::printf("[Space1::Space2::x] called\n"); }
	}

	namespace Space3 {
		// void型の関数 X() を定義
		void X() { std::printf("[Space1::Space3::x] called\n"); }
	}
}

// エントリーポイント
int main() {
	// ローカルの float型変数 x を定義
	std::string x{ "local x" };
	std::printf("[local x] %s\n", x.c_str());

	// グローバル空間の x を使用
	::x = 0;
	std::printf("[::x] %d\n", ::x);

	// Space1 空間の x を使用
	Space1::x = 1.5f;
	std::printf("[Space1::x] %.2f\n", Space1::x);

	// Space1::Space2 空間の関数 X() を使用
	Space1::Space2::X();
	
	// Space1::Space3 空間の関数 X() を使用
	Space1::Space2::X();

	system("pause");
}