#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//ここでは時差計算の演算を行う。
void timeDifference_int(int* ans_int14, int* ans_int15, int* ans_int16, int* ans_int17) {

	int t11 = 0;//まず、入力するための変数を作成
	int t12 = 0;
	int t21 = 0;
	int t22 = 0;
	int t31 = 0;
	int t32 = 0;
	int t41 = 0;
	int t42 = 0;
	int t51 = 0;
	int t52 = 0;

	int q = 0;

	printf_s("\nここでは、日本に対し、ハワイ、韓国、ニュージーランド、香港の時差を知ることができます。");
	while (1) {

		printf_s("\nまず、日本の時刻(時)を入力してください(例　22:40=22)。なお、型、形式通りの数値を入力しなければ計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%d", &t11);		//変数入力
		printf_s("\n次に、日本の時刻(分)を入力してください(例　22:40=40)。");
		scanf_s("%d", &t12);


		t21 = t11 -19;		//ハワイの計算
		t22 = t12;
		if (t21 < 0) {
			t21 = 24 + t21;
		}
		else if(t21>23){
			t21 =  t21-24;
			
		}
		*ans_int14 = t21 * 100 + t22;

		t31 = t11 ;		//韓国の計算
		t32 = t12;
		if (t31 < 0) {
			t31 = 24 + t31;
		}
		else if (t31 > 23) {
			t31 = t31 - 24;

		}

		*ans_int15 = t31 * 100 + t32;

		t41 = t11+3;		//ニュージランドの計算
		t42 = t12;
		if (t41 < 0) {
			t41 = 24 + t41;
		}
		else if (t41 > 23) {
			t41 = t41 - 24;

		}
		*ans_int16 = t41 * 100 + t42;

		t51 = t11 + 1;		//ニュージランドの計算
		t52 = t12;
		if (t51 < 0) {
			t51 = 24 + t51;
		}
		else if (t51 > 23) {
			t51 = t51 - 24;

		}
		*ans_int17 = t51 * 100 + t52;

		printf_s("\n日本時間はが%d:%dのとき、ハワイは%d:%d、韓国は%d:%d、ニュージーランドは%d:%d、香港は%d:%dである。",t11,t12,t21,t22,t31,t32,t41,t42,t51,t52);

		break;
	}

}

void timeDifference_double(double* ans_double14, double* ans_double15, double* ans_double16, double* ans_double17) {

	double t11 = 0;//まず、入力するための変数を作成
	double t12 = 0;
	double t21 = 0;
	double t22 = 0;
	double t31 = 0;
	double t32 = 0;
	double t41 = 0;
	double t42 = 0;
	double t51 = 0;
	double t52 = 0;

	int q = 0;

	printf_s("\nここでは、日本に対し、ハワイ、韓国、ニュージーランド、香港の時差を知ることができます。");
	while (1) {

		printf_s("\nまず、日本の時刻(時)を入力してください(例　22:40=22)。なお、型、形式通りの数値を入力しなければ計算が即座に終了、正しい計算ができないようになります。");
		scanf_s("%lf", &t11);		//変数入力
		printf_s("\n次に、日本の時刻(分)を入力してください(例　22:40=40)。");
		scanf_s("%lf", &t12);


		t21 = t11 - 19;		//ハワイの計算
		t22 = t12;
		if (t21 < 0) {
			t21 = 24 + t21;
		}
		else if (t21 > 23) {
			t21 = t21 - 24;

		}
		*ans_double14 = t21 * 100 + t22;

		t31 = t11;		//韓国の計算
		t32 = t12;
		if (t31 < 0) {
			t31 = 24 + t31;
		}
		else if (t31 > 23) {
			t31 = t31 - 24;

		}

		*ans_double15 = t31 * 100 + t32;

		t41 = t11 + 3;		//ニュージランドの計算
		t42 = t12;
		if (t41 < 0) {
			t41 = 24 + t41;
		}
		else if (t41 > 23) {
			t41 = t41 - 24;

		}
		*ans_double16 = t41 * 100 + t42;

		t51 = t11 + 1;		//ニュージランドの計算
		t52 = t12;
		if (t51 < 0) {
			t51 = 24 + t51;
		}
		else if (t51 > 23) {
			t51 = t51 - 24;

		}
		*ans_double17 = t51 * 100 + t52;

		printf_s("\n日本時間はが%lf:%lfのとき、ハワイは%lf:%lf、韓国は%lf:%lf、ニュージーランドは%lf:%lf、香港は%lf:%lfである。", t11, t12, t21,t22,t31, t32, t41, t42, t51, t52);

		break;
	}

}