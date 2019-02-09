#include <string>
#include <iostream>
#include <cstdlib>

// int�^�̕ϐ� x ���`
int x;

// ���O��� Space1 ���`
namespace Space1 {
	
	// float�^�̕ϐ� x ���`
	float x;

	namespace Space2 {
		// void�^�̊֐� X() ���`
		void X() { std::printf("[Space1::Space2::x] called\n"); }
	}

	namespace Space3 {
		// void�^�̊֐� X() ���`
		void X() { std::printf("[Space1::Space3::x] called\n"); }
	}
}

// �G���g���[�|�C���g
int main() {
	// ���[�J���� float�^�ϐ� x ���`
	std::string x{ "local x" };
	std::printf("[local x] %s\n", x.c_str());

	// �O���[�o����Ԃ� x ���g�p
	::x = 0;
	std::printf("[::x] %d\n", ::x);

	// Space1 ��Ԃ� x ���g�p
	Space1::x = 1.5f;
	std::printf("[Space1::x] %.2f\n", Space1::x);

	// Space1::Space2 ��Ԃ̊֐� X() ���g�p
	Space1::Space2::X();
	
	// Space1::Space3 ��Ԃ̊֐� X() ���g�p
	Space1::Space2::X();

	system("pause");
}