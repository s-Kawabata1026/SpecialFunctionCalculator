#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//ここではべき乗の演算を行う。

void exponentiation_int(int* ans_int4) {

	int x = 0;
	int y = 0;	//まず、入力するための変数を作成
	int i = 0;
	int q;

	printf_s("\nべき乗演算では、xにyのべき乗をすることができます(x^y=z)。");

	while (1) {

		printf_s("\nまず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%d", &x);		//変数入力

		printf_s("\n(%d^y=z)\n次に、yの値を入れてください。", x);
		scanf_s("%d", &y);		//変数入力

		q = x;
		while (i < y) {
			q = q *x;	//入力された変数で計算
			i++;
		}
		*ans_int4 = q;		//入力された変数で計算

		printf_s("%d^%dの結果は%dです。", x, y, *ans_int4);

		break;
	}

		
}

void exponentiation_double(double* ans_double4) {

	double x = 0;
	double y = 0;	//まず、入力するための変数を作成
	int i = 0;
	double q ;

	printf_s("\nべき乗演算では、xにyのべき乗をすることができます(x^y=z)。");

	while (1) {

		printf_s("\nまず、xの値を入れてください。なお、型通りの数値を入力しなければエラーとなり、計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%lf", &x);		//変数入力

		printf_s("\n%lf^y=z)\n次に、yの値を入れてください。べき乗計算ではdouble型の計算ができないため、自動的にint型に変換されます。", x);
		scanf_s("%lf", &y);		//変数入力

		q = x;
		while (i <(int) y) {
			q = q * x;	//入力された変数で計算
			i++;
		}
			
		*ans_double4 = q;		//入力された変数で計算

		printf_s("%lf*%lfの結果は%lfです。", x, y, *ans_double4);

		break;
	}

	
}