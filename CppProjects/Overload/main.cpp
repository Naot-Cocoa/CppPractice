#include <iostream>
#include <cstdlib>

namespace {
	// 2つの数値を比較し、大きいほうの値を返す関数 Max() を、 int型とfloat型でそれぞれ定義する
	// 同一空間に2つの異なる関数 MAX() ができる
	int	  Max(const int value1, const int value2)	  { return (value1 > value2) ? value1 : value2; }
	float Max(const float value1, const float value2) { return (value1 > value2) ? value1 : value2; }
}

int main() {
	{	// int
		const int value1 = 3;
		const int value2 = 5;
		std::printf("int max: %d ( %d vs %d )\n", Max(value1, value2), value1, value2);
	}
	
	{	// float
		const float value1 = 1.5f;
		const float value2 = -5.8f;
		std::printf("float max: %f ( %f vs %f )\n", Max(value1, value2), value1, value2);
	}

	system("pause");
}