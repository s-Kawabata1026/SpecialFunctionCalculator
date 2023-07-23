#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define M_PI        3.14159265358979323846264338327950288   

//ここでは三角比の演算を行う。

void trigonometricRatio_int(int* ans_int13) {

	
	int c = 0;//まず、入力するための変数を作成
	double c1 = 0;
	int q = 0;

	printf_s("\n三角比演算では、(sin,cos,tan,arcsin,arccos,arctan)のいずれかを選び、角度を入力をすることで値を知ることができます。[(cosθ=xなど)]。");

	while (1) {

		printf_s("\nまず、sinの計算なら0,cosなら1、tanなら2、arcsinなら3、arccosなら4、arctanなら5を入力してください。");
		scanf_s("%d", &q);		//変数入力

		switch (q) {

		case 0:	//入力値0(sin)の処理
			printf_s("では、sinθ=xの計算を始めます。θを入力してください。");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 =int( sin(c1));

			printf_s("では、sin%dは%dです。",c,*ans_int13);
			break;

		case 1://入力値1(cos)の処理
			printf_s("では、cosθ=xの計算を始めます。θを入力してください。");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(cos(c1));

			printf_s("では、cos%dは%dです。", c, *ans_int13);
			break;

		case 2://入力値2(tan)の処理
			printf_s("では、tanθ=xの計算を始めます。θを入力してください。");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(tan(c1));

			printf_s("では、tan%dは%dです。", c, *ans_int13);
			break;

		case 3://入力値3(arcsin)の処理
			printf_s("では、arcsinθ=xの計算を始めます。θを入力してください。");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(asin(c1));

			printf_s("では、arcsin%dは%dです。", c, *ans_int13);
			break;

		case 4://入力値4(arccos)の処理
			printf_s("では、arccosθ=xの計算を始めます。θを入力してください。");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(acos(c1));

			printf_s("では、arccos%dは%dです。", c, *ans_int13);
			break;


		case 5://入力値5(arctan)の処理
			printf_s("では、arctanθ=xの計算を始めます。θを入力してください。");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(atan(c1));

			printf_s("では、arctan%dは%dです。", c, *ans_int13);
			break;

		default:	//それ以外(例外)の処理
			printf_s("\n0～5以外の数値、文字が入力されました。もう一度やり直してください。\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}

void trigonometricRatio_double(double* ans_double13) {


	double c = 0;//まず、入力するための変数を作成
	double c1 = 0;
	int q = 0;

	printf_s("\n三角比演算では、(sin,cos,tan,arcsin,arccos,arctan)のいずれかを選び、角度を入力をすることで値を知ることができます。[(cosθ=xなど)]。");

	while (1) {

		printf_s("\nまず、sinの計算なら0,cosなら1、tanなら2、arcsinなら3、arccosなら4、arctanなら5を入力してください。");
		scanf_s("%d", &q);		//変数入力

		switch (q) {

		case 0:	//入力値0(sin)の処理
			printf_s("では、sinθ=xの計算を始めます。θを入力してください。");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = sin(c1);

			printf_s("では、sin%lfは%lfです。", c, *ans_double13);
			break;

		case 1://入力値1(cos)の処理
			printf_s("では、cosθ=xの計算を始めます。θを入力してください。");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = cos(c1);

			printf_s("では、cos%lfは%lfです。", c, *ans_double13);
			break;

		case 2://入力値2(tan)の処理
			printf_s("では、tanθ=xの計算を始めます。θを入力してください。");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = tan(c1);

			printf_s("では、tan%lfは%lfです。", c, *ans_double13);
			break;

		case 3://入力値3(arcsin)の処理
			printf_s("では、arcsinθ=xの計算を始めます。θを入力してください。");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = asin(c1);

			printf_s("では、arcsin%lfは%lfです。", c, *ans_double13);
			break;

		case 4://入力値4(arccos)の処理
			printf_s("では、arccosθ=xの計算を始めます。θを入力してください。");
			scanf_s("%double", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = acos(c1);

			printf_s("では、arccos%lfは%lfです。", c, *ans_double13);
			break;


		case 5://入力値5(arctan)の処理
			printf_s("では、arctanθ=xの計算を始めます。θを入力してください。");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = atan(c1);

			printf_s("では、arctan%lfは%lfです。", c, *ans_double13);
			break;

		default:	//それ以外(例外)の処理
			printf_s("\n0～5以外の数値、文字が入力されました。もう一度やり直してください。\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}

