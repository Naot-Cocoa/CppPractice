#include <iostream>
#include <string>
#include <cstdlib>

// �G���g���[�|�C���g
int main() {
	
	// �v�����v�g�\��
	std::printf("input > ");

	// 1�s���͂��󂯎��
	std::string input;
	if (std::getline(std::cin, input))
	{
		// ���͓��e���o��
		std::printf("inputted: %s\n", input.c_str());
	}

	// �ꎞ��~
	system("pause");
}