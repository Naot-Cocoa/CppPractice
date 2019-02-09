#include <iostream>
#include <cstdlib>

// ’è”‰»‚·‚é‚±‚Æ‚É‚æ‚éˆá‚¢‚ğŠm”F

void constTest1()
{
	std::printf("=== constTest1 =============\n");

	int const value = 3;
	int const * const pointer = &value;
	int const & reference = *pointer;

	std::printf("value: %d\t(%p)\n", value, &value);
	std::printf("pointer: %d\t(%p)\n", *pointer, pointer);
	std::printf("reference: %d\t(%p)\n", reference, &reference);

	std::printf("\n");
}

void constTest2()
{
	std::printf("=== constTest2 =============\n");

	int const value = 3;
	int const * pointer = &value;
	int const & reference = *pointer;

	pointer = new int;

	std::printf("value: %d\t(%p)\n", value, &value);
	std::printf("pointer: %d\t(%p)\n", *pointer, pointer);
	std::printf("reference: %d\t(%p)\n", reference, &reference);

	delete pointer;

	std::printf("\n");
}

void constTest3()
{
	std::printf("=== constTest3 =============\n");

	int value = 3;
	int * pointer = &value;
	int const & reference = *pointer;

	pointer = new int;
	*pointer = 5;

	std::printf("value: %d\t(%p)\n", value, &value);
	std::printf("pointer: %d\t(%p)\n", *pointer, pointer);
	std::printf("reference: %d\t(%p)\n", reference, &reference);

	delete pointer;

	std::printf("\n");
}

void constTest4()
{
	std::printf("=== constTest4 =============\n");

	int value = 3;
	int * pointer = &value;
	int & reference = *pointer;

	pointer = new int;
	*pointer = 5;

	reference = 8;

	std::printf("value: %d\t(%p)\n", value, &value);
	std::printf("pointer: %d\t(%p)\n", *pointer, pointer);
	std::printf("reference: %d\t(%p)\n", reference, &reference);

	delete pointer;

	std::printf("\n");
}

int main()
{
	constTest1();
	constTest2();
	constTest3();
	constTest4();

	system("pause");
}



