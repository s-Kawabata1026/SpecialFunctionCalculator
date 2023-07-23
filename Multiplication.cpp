#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//ここでは掛け算の演算を行う。

int multiplication_int(int ans_int2) {

	int x = 0;
	int y = 0;	//まず、入力するための変数を作成

	printf_s("\n掛け算演算では、xとyの2つの値で掛け算することができます(x*y=z)。");

	while (1) {

		printf_s("\nまず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%d", &x);		//変数入力

		printf_s("\n(%d*y=z)\n次に、yの値を入れてください。", x);
		scanf_s("%d", &y);		//変数入力

		ans_int2 = x * y;		//入力された変数で計算

		printf_s("%d*%dの結果は%dです。", x, y, ans_int2);

		break;
	}

	return ans_int2;		//変数を返り値として返す
}

double multiplication_double(double ans_double2) {

	double x = 0;
	double y = 0;	//まず、入力するための変数を作成

	printf_s("\n掛け算演算では、xとyの2つの値で掛け算することができます(x*y=z)。");

	while (1) {

		printf_s("\nまず、xの値を入れてください。なお、型通りの数値を入力しなければエラーとなり、計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%lf", &x);		//変数入力

		printf_s("\n(%lf*y=z)\n次に、yの値を入れてください。", x);
		scanf_s("%lf", &y);		//変数入力

		ans_double2 = x * y;		//入力された変数で計算

		printf_s("%lf*%lfの結果は%lfです。", x, y, ans_double2);

		break;
	}

	return ans_double2;		//変数を返り値として返す
}