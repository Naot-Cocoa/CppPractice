#include <iostream>

// ポインタの参照先を出力する関数 プロトタイプ
void DumpPointer(const int* const ptr);

// main 関数
int main()
{
	int i = 3;			// 変数 i を定義して3で初期化する
	int* ip = nullptr;	// ポインタ ip を定義してnullptr で初期化する

	{ // 初期化時点の値を出力する
		std::printf("=== initial ===============\n");
		std::printf(" i:\t%d\n", i);
		std::printf("&i:\t%p\n", &i);
		std::printf("---------------------------\n");
		std::printf(" ip:\t%p\n", ip);
		std::printf("&ip:\t%p\n", &ip);
		DumpPointer(ip);
		std::printf("===========================\n");
		std::printf("\n");
	}

	{ // ip に i のアドレスを代入する
		ip = &i;
		std::printf("=== set address ===========\n");
		std::printf(" i:\t%d\n", i);
		std::printf("&i:\t%p\n", &i);
		std::printf("---------------------------\n");
		std::printf(" ip:\t%p\n", ip);
		std::printf("&ip:\t%p\n", &ip);
		DumpPointer(ip);
		std::printf("===========================\n");
		std::printf("\n");
	}

	{ // ip 経由で i を書き換える
		*ip = 8;
		std::printf("=== set value =============\n");
		std::printf(" i:\t%d\n", i);
		std::printf("&i:\t%p\n", &i);
		std::printf("---------------------------\n");
		std::printf(" ip:\t%p\n", ip);
		std::printf("&ip:\t%p\n", &ip);
		DumpPointer(ip);
		std::printf("===========================\n");
		std::printf("\n");
	}

	system("pause");
}

// ポインタの参照先を出力する関数 定義
void DumpPointer(const int* const ptr)
{
	// nullptr じゃなかったら値を参照する
	if (ptr != nullptr) { std::printf("*ptr:\t%d\n", *ptr); }
	else { std::printf("*ptr:\t(nullptr)\n"); }
}