// helloworld.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int main()
{
	int a[3] = { 10, 20, 30 };

	for (int i = 0; i < 3; ++i) {
		printf("a = %d\n", a[i]);
	}

	getchar();
}

