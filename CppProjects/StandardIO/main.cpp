#include <iostream>
#include <string>

// �G���g���[�|�C���g
int main() {
	
	// �v�����v�g�\��
	std::printf("input > ");

	std::string input;

	if (std::getline(std::cin, input)) 
	{
		//���͂��ꂽ������̕\��
		std::printf("inputted: %s\n", input.c_str());
	}

	// �ꎞ��~
	system("pause");
}