#include <iostream>

// 参照で受け取る関数のプロトタイプ
void Function(int & parameter);

// main 関数
int main()
{
	// 元定義
	int source = 10;
	std::printf("=== source =======================\n");
	std::printf(" source:\t%d\n", source);
	std::printf("&source:\t%p\n", &source);
	std::printf("==================================\n");
	std::printf("\n");

	// 参照の定義。型と識別子の間に & を付加する
	// 元定義をそのまま渡して初期化する
	int & reference = source;
	std::printf("=== reference ====================\n");
	std::printf(" reference:\t%d\n", reference);
	std::printf("&reference:\t%p\n", &reference);
	std::printf("==================================\n");
	std::printf("\n");

	// 参照経由で元定義の値を操作する
	// 参照に記号は不要で、通常の代入のように扱える
	reference = 100;
	std::printf("=== set source ===================\n");
	std::printf(" reference:\t%d\n", reference);
	std::printf(" source:\t%d\n", source);
	std::printf("==================================\n");
	std::printf("\n");

	// source2 を定義して、参照に代入する
	// 参照先が変わるのではなく、参照元の値が変わる
	int source2 = 20;
	reference = source2;
	std::printf("=== set source2 ==================\n");
	std::printf(" reference:\t%d\n", reference);
	std::printf("&reference:\t%p\n", &reference);
	std::printf(" source:\t%d\n", source);
	std::printf(" source2:\t%d\n", source2);
	std::printf("==================================\n");
	std::printf("\n");

	// source を関数に引数として渡す
	std::printf("=== call Function ================\n");
	Function(source);
	std::printf(" source:\t%d\n", source);
	std::printf("==================================\n");

	system("pause");
}

// 参照で受け取る関数の定義
void Function(int & parameter)
{
	std::printf("&parameter :\t%p\n", &parameter);
	parameter = 200;
}