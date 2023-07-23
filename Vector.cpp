#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//ここではベクトルの演算を行う。



void vector_int(int* ans_int5, int* ans_int6, int* ans_int7) {
	int x1 = 0;
	int y1 = 0;	//まず、入力するための変数を作成
	int z1 = 0;
	int x2 = 0;
	int y2 = 0;
	int z2 = 0;
	int q = 0;



	printf_s("\nベクトル演算では、2次元もしくは三次元の足し算、もしくは掛け算ができます。[(x,y)+(x',y')、3(x,y)など]");

	while (1) {
		printf_s("\n最初に、2次元での計算なら0、3次元での計算なら1を入力してください。");
		scanf_s("%d", &q);		//選択肢の入力

		switch (q) {

		case 0:		//入力値0(2次元)の処理
			while (1) {
				printf_s("\nそれでは、2次元での計算を始めます。次に、足し算なら0、掛け算なら1を入力してください。");
				scanf_s("%d", &q);
				switch (q) {

				case 0://足し算の処理
					printf_s("\nそれでは、2次元での足し算を始めます。[(x,y)+(x',y')=(x'',y'')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y)+(x',y')=(x'',y'')] 次に、yの値を入れてください。", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d)+(x',y')=(x'',y'')] 次に、x'の値を入れてください。", x1, y1);
					scanf_s("%d", &x2);
					printf_s("\n[(%d,%d)+(%d,y')=(x'',y'')] 次に、y'の値を入れてください。", x1, y1, x2);
					scanf_s("%d", &y2);

					*ans_int5 = x1 + x2;
					*ans_int6 = y1 + y2;

					printf_s("\n(%d,%d)+(%d,%d) の答えは、(%d,%d)です。", x1, y1, x2, y2, *ans_int5, *ans_int6);
					break;

				case 1://掛け算の処理
					printf_s("\nそれでは、2次元での掛け算を始めます。[(x,y)*z=(x',y')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y)*z=(x',y')] 次に、yの値を入れてください。", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d)*z=(x',y')] 次に、zの値を入れてください。", x1, y1);
					scanf_s("%d", &z1);

					*ans_int5 = x1 *z1;
					*ans_int6 = y1 *z1;

					printf_s("\n(%d,%d)*%d の答えは、(%d,%d)です。", x1, y1, z1, *ans_int5, *ans_int6);
					break;

				default:	//それ以外(例外)の処理
					printf_s("0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
			}
			break;


		case 1:		//入力値1(3次元)の処理
			

			while (1) {
				printf_s("\nそれでは、3次元での計算を始めます。次に、足し算なら0、掛け算なら1を入力してください。");
				scanf_s("%d", &q);
				switch (q) {

				case 0://足し算の処理
					printf_s("\nそれでは、3次元での足し算を始めます。[(x,y,z)+(x',y',z')=(x'',y'',z'')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y,z)+(x',y',z')=(x'',y'',z'')] 次に、yの値を入れてください。", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d,z)+(x',y',z')=(x'',y'',z'')] 次に、zの値を入れてください。", x1, y1);
					scanf_s("%d", &z1);
					printf_s("\n[(%d,%d,%d,)+(x',y',z')=(x'',y'',z'')] 次に、x'の値を入れてください。", x1, y1, z1);
					scanf_s("%d", &x2);
					printf_s("\n[(%d,%d,%d,)+(%d,y',z')=(x'',y'',z'')] 次に、y'の値を入れてください。", x1, y1, z1,x2);
					scanf_s("%d", &y2);
					printf_s("\n[(%d,%d,%d,)+(%d,%d,z')=(x'',y'',z'')] 次に、z'の値を入れてください。", x1, y1, z1,x2,y2);
					scanf_s("%d", &z2);

					*ans_int5 = x1 + x2;
					*ans_int6 = y1 + y2;
					*ans_int7 = z1 + z2;

					printf_s("\n(%d,%d,%d,)+(%d,%d,%d) の答えは、(%d,%d,%d)です。", x1, y1,z1, x2, y2,z2, *ans_int5, *ans_int6,*ans_int7);
					break;

				case 1://掛け算の処理
					printf_s("\nそれでは3次元での掛け算を始めます。[(x,y,z)*a=(x',y',z')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y,z)*a=(x',y',z')] 次に、yの値を入れてください。", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d,z)*a=(x',y',z')] 次に、zの値を入れてください。", x1, y1);
					scanf_s("%d", &z1);
					printf_s("\n[(%d,%d,%d)*a=(x',y',z')] 次に、aの値を入れてください。", x1, y1,z1);
					scanf_s("%d", &z2);


					*ans_int5 = x1 * z2;
					*ans_int6 = y1 * z2;
					*ans_int7 = z1 * z2;

					printf_s("\n[(%d,%d,%d)*%d の答えは、(%d,%d,%d)です。", x1, y1, z1,z2, *ans_int5, *ans_int6,*ans_int7);
					break;

				default:	//それ以外(例外)の処理
					printf_s("\n0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
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



void vector_double(double* ans_double5, double* ans_double6, double* ans_double7) { //double型のベクトル計算

	double x1 = 0;
	double y1 = 0;	//まず、入力するための変数を作成
	double z1 = 0;
	double x2 = 0;
	double y2 = 0;
	double z2 = 0;
	int q = 0;



	printf_s("\nベクトル演算では、2次元もしくは三次元の足し算、もしくは掛け算ができます。[(x,y)+(x',y')、3(x,y)など]");

	while (1) {
		printf_s("\n最初に、2次元での計算なら0、3次元での計算なら1を入力してください。");
		scanf_s("%d", &q);		//選択肢の入力

		switch (q) {

		case 0:		//入力値0(2次元)の処理
			while (1) {
				printf_s("\nそれでは、2次元での計算を始めます。次に、足し算なら0、掛け算なら1を入力してください。");
				scanf_s("%d", &q);
				switch (q) {

				case 0:
					printf_s("\nそれでは、2次元での足し算を始めます。[(x,y)+(x',y')=(x'',y'')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y)+(x',y')=(x'',y'')] 次に、yの値を入れてください。", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf)+(x',y')=(x'',y'')] 次に、x'の値を入れてください。", x1, y1);
					scanf_s("%lf", &x2);
					printf_s("\n[(%lf,%lf)+(%lf,y')=(x'',y'')] 次に、y'の値を入れてください。", x1, y1, x2);
					scanf_s("%lf", &y2);

					*ans_double5 = x1 + x2;
					*ans_double6 = y1 + y2;

					printf_s("\n(%lf,%lf)+(%lf,%lf) の答えは、(%lf,%lf)です。", x1, y1, x2, y2, *ans_double5, *ans_double6);
					break;

				case 1:
					printf_s("\nそれでは、2次元での掛け算を始めます。[(x,y)*z=(x',y')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y)*z=(x',y')] 次に、yの値を入れてください。", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf)*z=(x',y')] 次に、zの値を入れてください。", x1, y1);
					scanf_s("%lf", &z1);

					*ans_double5 = x1 * z1;
					*ans_double6 = y1 * z1;

					printf_s("\n(%lf,%lf)*%lf の答えは、(%lf,%lf)です。", x1, y1, z1, *ans_double5, *ans_double6);
					break;

				default:	//それ以外(例外)の処理
					printf_s("0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
			}
			break;


		case 1:		//入力値1(3次元)の処理


			while (1) {
				printf_s("\nそれでは、3次元での計算を始めます。次に、足し算なら0、掛け算なら1を入力してください。");
				scanf_s("%d", &q);
				switch (q) {

				case 0:
					printf_s("\nそれでは、3次元での足し算を始めます。[(x,y,z)+(x',y',z')=(x'',y'',z'')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y,z)+(x',y',z')=(x'',y'',z'')] 次に、yの値を入れてください。", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf,z)+(x',y',z')=(x'',y'',z'')] 次に、zの値を入れてください。", x1, y1);
					scanf_s("%lf", &z1);
					printf_s("\n[(%lf,%lf,%lf,)+(x',y',z')=(x'',y'',z'')] 次に、x'の値を入れてください。", x1, y1, z1);
					scanf_s("%lf", &x2);
					printf_s("\n[(%lf,%lf,%lf,)+(%lf,y',z')=(x'',y'',z'')] 次に、y'の値を入れてください。", x1, y1, z1, x2);
					scanf_s("%lf", &y2);
					printf_s("\n[(%lf,%lf,%lf,)+(%lf,%lf,z')=(x'',y'',z'')] 次に、z'の値を入れてください。", x1, y1, z1, x2, y2);
					scanf_s("%lf", &z2);

					*ans_double5 = x1 + x2;
					*ans_double6 = y1 + y2;
					*ans_double7 = z1 + z2;

					printf_s("\n(%lf,%lf,%lf,)+(%lf,%lf,%lf) の答えは、(%lf,%lf,%lf)です。", x1, y1, z1, x2, y2, z2, *ans_double5, *ans_double6, *ans_double7);
					break;

				case 1:
					printf_s("\nそれでは3次元での掛け算を始めます。[(x,y,z)*a=(x',y',z')] まず、xの値を入れてください。なお、型通りの数値を入力しなければ計算が即座に終了、もしくは正しい計算ができないようになります。");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y,z)*a=(x',y',z')] 次に、yの値を入れてください。", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf,z)*a=(x',y',z')] 次に、zの値を入れてください。", x1, y1);
					scanf_s("%lf", &z1);
					printf_s("\n[(%lf,%lf,%lf)*a=(x',y',z')] 次に、aの値を入れてください。", x1, y1, z1);
					scanf_s("%lf", &z2);


					*ans_double5 = x1 * z2;
					*ans_double6 = y1 * z2;
					*ans_double7 = z1 * z2;

					printf_s("\n[(%lf,%lf,%lf)*%lf の答えは、(%lf,%lf,%lf)です。", x1, y1, z1, z2, *ans_double5, *ans_double6, *ans_double7);
					break;

				default:	//それ以外(例外)の処理
					printf_s("\n0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
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