#include<iostream>
//�ǽ� 1 ���� ��� ��: 8

//�ǽ� 1.1
template <typename T, int num = 5>
T add_num(T t) {
	return t + num;
}

int main() {
	int x = 3;
	std::cout << "x: " << add_num<int,2>(x) << std::endl;
}