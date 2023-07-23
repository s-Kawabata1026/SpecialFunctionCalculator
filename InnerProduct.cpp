#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define M_PI        3.14159265358979323846264338327950288   

//ここでは内積の演算を行う。

void innerProduct_int(int* ans_int12) {

	int a1 = 0;
	int a2 = 0;	//まず、入力するための変数を作成
	int b1 = 0;
	int b2 = 0;
	int c = 0;
	double c1 = 0;
	int q = 0;

	printf_s("\n内積演算では、aとbの2つの成分からの計算、または余弦定理を用いた計算の2種類で内積計算することができます[(a1*b1+a2*b2=a・b)、(|a||b|cosθ=a・b)]。");

	while (1) {

		printf_s("\nまず、成分からの計算で計算するなら0、余弦定理を用いた計算をするなら1を入力してください。");
		scanf_s("%d", &q);		//変数入力

		switch (q) {

		case 0:	//入力値0(成分)の処理
			printf_s("\nそれでは、aとbでの2つの成分からの計算を始めます[a=(a1,a2) b=(b1,b2) (a1*b1+a2*b2=a・b)]。初めに、a1の成分を入力してください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%d", &a1);
			printf_s("\n[a=(%d,a2) b=(b1,b2) (%d*b1+a2*b2=a・b)] 次に、a2の値を入れてください。", a1,a1);
			scanf_s("%d", &a2);
			printf_s("\n[a=(%d,%d) b=(b1,b2) (%d*b1+%d*b2=a・b)] 次に、b1の値を入れてください。", a1,a2, a1,a2);
			scanf_s("%d", &b1);
			printf_s("\n[a=(%d,%d) b=(%d,b2) (%d*%d+%d*b2=a・b)] 次に、b2の値を入れてください。", a1, a2,b1, a1, a2,b1);
			scanf_s("%d", &b2);

			*ans_int12 = a1 * b1 + a2 * b2;

			if ((a1 * b1 + a2 * b2) == 0) {
				printf_s("\na=(%d,%d) b=(%d,%d) 内積の答えは%dです。なお、%dなのでこの2つの成分は垂直を取ります。", a1, a2, b1,b2,  *ans_int12, *ans_int12);
			}
			else {
				printf_s("\na=(%d,%d) b=(%d,%d) 内積の答えは%dです。", a1, a2, b1, b2, *ans_int12);
			}


			break;

		case 1:
			printf_s("\nそれでは、余弦定理での計算を始めます[(|a||b|cosθ=a・b)]。初めに、|a|の数値を入力してください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%d", &a1);
			printf_s("\n[(%d|b|cosθ=a・b)] 次に、|b|の値を入れてください。", a1);
			scanf_s("%d", &b1);
			printf_s("\n[(%d*%dcosθ=a・b)] 次に、cosのθの値を入れてください。なお、数値を入れれば自動的に角度に変換されます。", a1,b1);
			scanf_s("%d", &c);

			c1 = c * M_PI/180;

			*ans_int12 = int(a1 * b1 * cos(c1));

			if (*ans_int12 == 0) {
				printf_s("\n%d*%dcos%d内積の答えは%dです。なお、%dなので垂直となります。", a1, b1,c, *ans_int12, *ans_int12);
			}

			else if (cos(c1) == 1 || cos(c1) == -1) {
			printf_s("\n(%d*%dcos%d内積の答えは%dです。なお、cos%dなのでこの2つの成分は並行を取ります。", a1, b1, c, *ans_int12, c);
			}

			else {
				printf_s("\n%d*%dcos%d内積の答えは%dです。", a1, b1, c, *ans_int12);
			}

			break;

		default:	//それ以外(例外)の処理
			printf_s("\n0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}

void innerProduct_double(double* ans_double12) {

	double a1 = 0;
	double a2 = 0;	//まず、入力するための変数を作成
	double b1 = 0;
	double b2 = 0;
	double c = 0;
	double c1 = 0;
	int q = 0;

	printf_s("\n内積演算では、aとbの2つの成分からの計算、または余弦定理を用いた計算の2種類で内積計算することができます[(a1*b1+a2*b2=a・b)、(|a||b|cosθ=a・b)]。");

	while (1) {

		printf_s("\nまず、成分からの計算で計算するなら0、余弦定理を用いた計算をするなら1を入力してください。");
		scanf_s("%d", &q);		//変数入力

		switch (q) {

		case 0:	//入力値0(成分)の処理
			printf_s("\nそれでは、aとbでの2つの成分からの計算を始めます[a=(a1,a2) b=(b1,b2) (a1*b1+a2*b2=a・b)]。初めに、a1の成分を入力してください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%lf", &a1);
			printf_s("\n[a=(%lf,a2) b=(b1,b2) (%lf*b1+a2*b2=a・b)] 次に、a2の値を入れてください。", a1, a1);
			scanf_s("%lf", &a2);
			printf_s("\n[a=(%lf,%lf) b=(b1,b2) (%lf*b1+%lf*b2=a・b)] 次に、b1の値を入れてください。", a1, a2, a1, a2);
			scanf_s("%lf", &b1);
			printf_s("\n[a=(%lf,%lf) b=(%lf,b2) (%lf*%lf+%lf*b2=a・b)] 次に、b2の値を入れてください。", a1, a2, b1, a1, a2, b1);
			scanf_s("%lf", &b2);

			*ans_double12 = a1 * b1 + a2 * b2;

			if ((a1 * b1 + a2 * b2) == 0) {
				printf_s("\na=(%lf,%lf) b=(%lf,%lf) 内積の答えは%lfです。なお、%dなのでこの2つの成分は垂直を取ります。", a1, a2, b1, b2, *ans_double12, *ans_double12);
			}
			else {
				printf_s("\na=(%lf,%lf) b=(%lf,%lf) 内積の答えは%dです。", a1, a2, b1, b2, *ans_double12);
			}


			break;

		case 1:
			printf_s("\nそれでは、余弦定理での計算を始めます[(|a||b|cosθ=a・b)]。初めに、|a|の数値を入力してください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%lf", &a1);
			printf_s("\n[(%lf|b|cosθ=a・b)] 次に、|b|の値を入れてください。", a1);
			scanf_s("%lf", &b1);
			printf_s("\n[(%lf*%lfcosθ=a・b)] 次に、cosのθの値を入れてください。なお、数値を入れれば自動的に角度に変換されます。", a1, b1);
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;

			*ans_double12 = a1 * b1 * cos(c1);

			if (cos(c1) ==(double) 0) {
				printf_s("\n%lf*%lfcos%lf内積の答えは%lfです。なお、%lfなので垂直となります。", a1, b1, c, *ans_double12, *ans_double12);
			}

			else if (cos(c1) == (double)1 || cos(c1) == (double)-1) {
				printf_s("\n%lf*%lfcos%lf内積の答えは%lfです。なお、cos%lfなのでこの2つの成分は並行を取ります。", a1, b1, c, *ans_double12, c);
			}

			else {
				printf_s("\n%lf*%lfcos%lf内積の答えは%lfです。", a1, b1, c, *ans_double12);
			}

			break;

			break;

		default:	//それ以外(例外)の処理
			printf_s("\n0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}
