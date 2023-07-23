#pragma once

//ここは関数の宣言を行っている
int selection0(int ans_seletcion0);	//型の選択
int selection1(int ans_seletcion1);	//計算方法の選択

int addition_int(int ans_int0);//int型の足し算
double addition_double(double ans_double0);//double型の足し算

int subtraction_int(int ans_int1);//int型の引き算
double subtraction_double(double ans_double1);//double型の引き算

int multiplication_int(int ans_int2);//int型の掛け算
double multiplication_double(double ans_double2);//double型の掛け算

int division_int(int ans_int3);//int型の割り算
double division_double(double ans_double3);//double型の割り算

void exponentiation_int(int* ans_int4);//int型のべき乗計算
void exponentiation_double(double* ans_double4);//double型のべき乗計算

void vector_int(int* ans_int5, int* ans_int6, int* ans_int7);//int型のベクトル計算
void vector_double(double* ans_double5, double* ans_double6, double* ans_double7);//double型のベクトル計算

void matrix_int(int* ans_int8, int* ans_int9, int* ans_int10, int* ans_int11);//int型のベクトル計算
void matrix_double(double* ans_double8, double* ans_double9, double* ans_double10, double* ans_double11);//double型のベクトル計算

void innerProduct_int(int* ans_int12);//int型の内積計算
void innerProduct_double(double* ans_double12);//double型の内積計算

void trigonometricRatio_int(int* ans_int13);//int型の三角比計算
void trigonometricRatio_double(double* ans_double13);//double型の三角比計算

void timeDifference_int(int* ans_int14, int* ans_int15, int* ans_int16, int* ans_int17);	//int型の割引計算
void timeDifference_double(double* ans_double14, double* ans_double15, double* ans_double16, double* ans_double17);	//double型の割引計算

void fileOutput_int(struct ans ans[]);		//int型のファイル出力
void fileOutput_double(struct ans ans[]);		//double型のファイル出力