#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//ここでは行列の演算を行う。

void matrix_int(int* ans_int8, int* ans_int9, int* ans_int10, int* ans_int11) {

	int x11 = 0;
	int x12 = 0;	//まず、入力するための変数を作成
	int x21 = 0;
	int x22 = 0;
	int y11 = 0;
	int y12 = 0;	
	int y21 = 0;
	int y22 = 0;
	int z2 = 0;
	int q = 0;

	printf_s("\n行列演算では、2*2の行列の掛け算,逆行列を求めることができます。");




	while (1) {
		printf_s("\n最初に、掛け算での計算なら0、逆行列での計算なら1を入力してください。なお、逆行列の場合、int型では切り捨てが起こるのでdouble型での計算がおすすめです。");
		scanf_s("%d", &q);		//選択肢の入力

		switch (q) {

		case 0:		//入力値0(掛け算)の処理
			
				printf_s("\nそれでは、2*2での掛け算計算を始めます。");
								
				printf_s("\nまず、x11の値を入れてください。[(x11,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
				scanf_s("%d", &x11);
				printf_s("\n[(%d,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、x12の値を入れてください。",x11);
				scanf_s("%d", &x12);
				printf_s("\n[(%d,%d,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、x21の値を入れてください。", x11,x12);
				scanf_s("%d", &x21);
				printf_s("\n[(%d,%d,x%d,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、x22の値を入れてください。", x11, x12,x21);
				scanf_s("%d", &x22);
				printf_s("\n[(%d,%d,%d,%d)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、y11の値を入れてください。", x11, x12, x21,x22);
				scanf_s("%d", &y11);
				printf_s("\n[(%d,%d,%d,%d)(%d,y12,y21,y22)=(z11,z12,z21,z22)] 次に、y12の値を入れてください。", x11, x12, x21, x22,y11);
				scanf_s("%d", &y12);
				printf_s("\n[(%d,%d,%d,%d)(%d,%d,y21,y22)=(z11,z12,z21,z22)] 次に、y21の値を入れてください。", x11, x12, x21, x22, y11,y12);
				scanf_s("%d", &y21);
				printf_s("\n[(%d,%d,%d,%d)(%d,%d,%d,y22)=(z11,z12,z21,z22)] 次に、y22の値を入れてください。", x11, x12, x21, x22, y11, y12,y21);
				scanf_s("%d", &y22);
				


				*ans_int8 = x11*y11 + x12*y21;
				*ans_int9 = x11 * y12 + x12 * y22;
				*ans_int10 = x21 * y11 + x22 * y21;
				*ans_int11 = x21 * y12 + x22 * y22;

				printf_s("\n(%d,%d,%d,%d)(%d,%d,%d,%d)の答えは、(%d,%d,%d,%d)です。", x11,x12,x21,x22,y11,y12,y21,y22, *ans_int8, *ans_int9, *ans_int10, *ans_int11);
				break;


		case 1:		//入力値1(逆行列)の処理

			printf_s("\nそれでは、2*2での逆行列計算を始めます。");

			printf_s("\nまず、x11の値を入れてください。[(x11,x12,x21,x22)^-1=(z11,z12,z21,z22)] なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%d", &x11);
			printf_s("\n[(%d,x12,x21,x22)^-1=(z11,z12,z21,z22)] 次に、x12の値を入れてください。", x11);
			scanf_s("%d", &x12);
			printf_s("\n[(%d,%d,x21,x22)^-1=(z11,z12,z21,z22)] 次に、x21の値を入れてください。", x11,x12);
			scanf_s("%d", &x21);
			printf_s("\n[(%d,%d,%d,x22)^-1=(z11,z12,z21,z22)] 次に、x22の値を入れてください。", x11,x12,x21);
			scanf_s("%d", &x22);

			if ((x11 * x22 - x12 * x21) == 0) {

				*ans_int8 = x11 ;
				*ans_int9 = x12;
				*ans_int10 = x21;
				*ans_int11 = x22;
				printf_s("\n(%d,%d,%d,%d)に逆行列は存在しません。なので、元の行列を答えとして返します。", *ans_int8, *ans_int9, *ans_int10, *ans_int11);
				

			}
			else {

				*ans_int8 = x22 / (x11 * x22 - x12 * x21);
				*ans_int9 = -x12 / (x11 * x22 - x12 * x21);
				*ans_int10 = -x21 / (x11 * x22 - x12 * x21);
				*ans_int11 = x11 / (x11 * x22 - x12 * x21);
				printf_s("\n(%d,%d,%d,%d)の逆行列は(%d,%d,%d,%d)です。", x11, x12, x21, x22, *ans_int8, *ans_int9, *ans_int10, *ans_int11);


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



void matrix_double(double* ans_double8, double* ans_double9, double* ans_double10, double* ans_double11) {
	double x11 = 0;
	double x12 = 0;	//まず、入力するための変数を作成
	double x21 = 0;
	double x22 = 0;
	double y11 = 0;
	double y12 = 0;
	double y21 = 0;
	double y22 = 0;
	double z2 = 0;
	int q = 0;

	printf_s("\n行列演算では、2*2の行列の掛け算,逆行列を求めることができます。");




	while (1) {
		printf_s("\n最初に、掛け算での計算なら0、逆行列での計算なら1を入力してください。");
		scanf_s("%d", &q);		//選択肢の入力

		switch (q) {

		case 0:		//入力値0(掛け算)の処理

			printf_s("\nそれでは、2*2での掛け算計算を始めます。");

			printf_s("\nまず、x11の値を入れてください。[(x11,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%lf", &x11);
			printf_s("\n[(%lf,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、x12の値を入れてください。", x11);
			scanf_s("%lf", &x12);
			printf_s("\n[(%lf,%lf,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、x21の値を入れてください。", x11, x12);
			scanf_s("%lf", &x21);
			printf_s("\n[(%lf,%lf,xlf,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、x21の値を入れてください。", x11, x12, x21);
			scanf_s("%lf", &x22);
			printf_s("\n[(%lf,%lf,%lf,%lf)(y11,y12,y21,y22)=(z11,z12,z21,z22)] 次に、y11の値を入れてください。", x11, x12, x21, x22);
			scanf_s("%lf", &y11);
			printf_s("\n[(%lf,%lf,%lf,%lf)(%lf,y12,y21,y22)=(z11,z12,z21,z22)] 次に、y12の値を入れてください。", x11, x12, x21, x22, y11);
			scanf_s("%lf", &y12);
			printf_s("\n[(%lf,%lf,%lf,%lf)(%lf,%lf,y21,y22)=(z11,z12,z21,z22)] 次に、y21の値を入れてください。", x11, x12, x21, x22, y11, y12);
			scanf_s("%d\lf", &y21);
			printf_s("\n[(%lf,%lf,%lf,%lf)(%lf,%lf,%lf,y22)=(z11,z12,z21,z22)] 次に、y22の値を入れてください。", x11, x12, x21, x22, y11, y12, y21);
			scanf_s("%lf", &y22);



			*ans_double8 = x11 * y11 + x12 * y21;
			*ans_double9 = x11 * y12 + x12 * y22;
			*ans_double10 = x21 * y11 + x22 * y21;
			*ans_double11 = x21 * y12 + x22 * y22;

			printf_s("\n(%lf,%lf,%lf,%lf)(%lf,%lf,%lf,%lf)の答えは、(%d,%d,%d,%d)です。", x11, x12, x21, x22, y11, y12, y21, y22, *ans_double8, *ans_double9, *ans_double10, *ans_double11);
			break;


		case 1:		//入力値1(逆行列)の処理

			printf_s("\nそれでは、2*2での逆行列計算を始めます。");

			printf_s("\nまず、x11の値を入れてください。[(x11,x12,x21,x22)^-1=(z11,z12,z21,z22)] なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
			scanf_s("%lf", &x11);
			printf_s("\n[(%lf,x12,x21,x22)^-1=(z11,z12,z21,z22)] 次に、x12の値を入れてください。", x11);
			scanf_s("%lf", &x12);
			printf_s("\n[(%lf,%lf,x21,x22)^-1=(z11,z12,z21,z22)] 次に、x21の値を入れてください。", x11, x12);
			scanf_s("%lf", &x21);
			printf_s("\n[(%lf,%lf,%lf,x22)^-1=(z11,z12,z21,z22)] 次に、x22の値を入れてください。", x11, x12, x21);
			scanf_s("%lf", &x22);

			if ((x11 * x22 - x12 * x21) == 0) {

				*ans_double8 = x11;
				*ans_double9 = x12;
				*ans_double10 = x21;
				*ans_double11 = x22;
				printf_s("\n(%lf,%lf,%lf,%lf)に逆行列は存在しません。なので、元の行列を答えとして返します。", *ans_double8, *ans_double9, *ans_double10, *ans_double11);


			}
			else {

				*ans_double8 = x22 / (x11 * x22 - x12 * x21);
				*ans_double9 = -x12 / (x11 * x22 - x12 * x21);
				*ans_double10 = -x21 / (x11 * x22 - x12 * x21);
				*ans_double11 = x11 / (x11 * x22 - x12 * x21);
				printf_s("\n(%lf,%lf,%lf,%lf)の逆行列は(%lf,%lf,%lf,%lf)です。", x11, x12, x21, x22, *ans_double8, *ans_double9, *ans_double10, *ans_double11);


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