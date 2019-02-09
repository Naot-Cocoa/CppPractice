#include <iostream>
#include <cstdlib>

namespace {
	// 2‚Â‚Ì”’l‚ð”äŠr‚µA‘å‚«‚¢‚Ù‚¤‚Ì’l‚ð•Ô‚·ŠÖ” Max() ‚ðA intŒ^‚ÆfloatŒ^‚Å‚»‚ê‚¼‚ê’è‹`‚·‚é
	// “¯ˆê‹óŠÔ‚É2‚Â‚ÌˆÙ‚È‚éŠÖ” MAX() ‚ª‚Å‚«‚é
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