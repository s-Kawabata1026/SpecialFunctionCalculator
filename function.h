#pragma once

//�����͊֐��̐錾���s���Ă���
int selection0(int ans_seletcion0);	//�^�̑I��
int selection1(int ans_seletcion1);	//�v�Z���@�̑I��

int addition_int(int ans_int0);//int�^�̑����Z
double addition_double(double ans_double0);//double�^�̑����Z

int subtraction_int(int ans_int1);//int�^�̈����Z
double subtraction_double(double ans_double1);//double�^�̈����Z

int multiplication_int(int ans_int2);//int�^�̊|���Z
double multiplication_double(double ans_double2);//double�^�̊|���Z

int division_int(int ans_int3);//int�^�̊���Z
double division_double(double ans_double3);//double�^�̊���Z

void exponentiation_int(int* ans_int4);//int�^�ׂ̂���v�Z
void exponentiation_double(double* ans_double4);//double�^�ׂ̂���v�Z

void vector_int(int* ans_int5, int* ans_int6, int* ans_int7);//int�^�̃x�N�g���v�Z
void vector_double(double* ans_double5, double* ans_double6, double* ans_double7);//double�^�̃x�N�g���v�Z

void matrix_int(int* ans_int8, int* ans_int9, int* ans_int10, int* ans_int11);//int�^�̃x�N�g���v�Z
void matrix_double(double* ans_double8, double* ans_double9, double* ans_double10, double* ans_double11);//double�^�̃x�N�g���v�Z

void innerProduct_int(int* ans_int12);//int�^�̓��όv�Z
void innerProduct_double(double* ans_double12);//double�^�̓��όv�Z

void trigonometricRatio_int(int* ans_int13);//int�^�̎O�p��v�Z
void trigonometricRatio_double(double* ans_double13);//double�^�̎O�p��v�Z

void timeDifference_int(int* ans_int14, int* ans_int15, int* ans_int16, int* ans_int17);	//int�^�̊����v�Z
void timeDifference_double(double* ans_double14, double* ans_double15, double* ans_double16, double* ans_double17);	//double�^�̊����v�Z

void fileOutput_int(struct ans ans[]);		//int�^�̃t�@�C���o��
void fileOutput_double(struct ans ans[]);		//double�^�̃t�@�C���o��