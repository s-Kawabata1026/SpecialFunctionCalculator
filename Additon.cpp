#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>


//ここでは足し算の演算を行う。

int addition_int(int ans_int0) {

	int x = 0;
	int y = 0;	//まず、入力するための変数を作成

	printf_s("\n足し算演算では、xとyの2つの値を足し合わせることができます(x+y=z)。");

	while (1) {

		printf_s("\nまず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%d", &x);		//変数入力

		printf_s("\n(%d+y=z)\n次に、yの値を入れてください。",x);
		scanf_s("%d", & y);		//変数入力

		ans_int0 = x + y;		//入力された変数で計算

		printf_s("%d+%dの結果は%dです。", x, y, ans_int0);

		break;
	}

	return ans_int0;		//変数を返り値として返す
}

double addition_double(double ans_double0) {

	double x = 0;
	double y = 0;	//まず、入力するための変数を作成

	printf_s("\n足し算演算では、xとyの2つの値を足し合わせることができます(x+y=z)。");

	while (1) {

		printf_s("\nまず、xの値を入れてください。なお、型通りの数値を入力しなければエラーとなり、計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%lf", &x);		//変数入力

		printf_s("\n(%lf+y=z)\n次に、yの値を入れてください。", x);
		scanf_s("%lf", &y);		//変数入力

		ans_double0 = x + y;	//入力された変数で計算
	
		printf_s("%lf+%lfの結果は%lfです。", x, y, ans_double0);

		break;
	}

	return ans_double0;		//変数を返り値として返す
}