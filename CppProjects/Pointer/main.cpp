#include <iostream>
#include <cstdlib>

int main() {

	// 値型のデータサイズを表示
	{
		int i;
		double d;
		char c;
		std::printf("sizeof i : %zu\n", sizeof(i));
		std::printf("sizeof d : %zu\n", sizeof(d));
		std::printf("sizeof c : %zu\n", sizeof(c));
	}

	std::printf("\n");

	// 直接参照 = ポインタに格納されたアドレス番地のデータサイズを表示
	{
		int* ip;
		double* dp;
		char* cp;
		std::printf("sizeof i : %zu\n", sizeof(ip));
		std::printf("sizeof d : %zu\n", sizeof(dp));
		std::printf("sizeof c : %zu\n", sizeof(cp));
	}

	std::printf("\n");

	// 間接参照 = ポインタに格納されたアドレス番地に保存されているデータサイズを表示
	{	
		int* ip;
		double* dp;
		char* cp;
		std::printf("sizeof i : %zu\n", sizeof(*ip));
		std::printf("sizeof d : %zu\n", sizeof(*dp));
		std::printf("sizeof c : %zu\n", sizeof(*cp));
	}

	system("pause");
}