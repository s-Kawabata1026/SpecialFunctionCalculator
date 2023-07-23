#pragma once

//‚±‚±‚ÍŠÖ”‚ÌéŒ¾‚ğs‚Á‚Ä‚¢‚é
int selection0(int ans_seletcion0);	//Œ^‚Ì‘I‘ğ
int selection1(int ans_seletcion1);	//ŒvZ•û–@‚Ì‘I‘ğ

int addition_int(int ans_int0);//intŒ^‚Ì‘«‚µZ
double addition_double(double ans_double0);//doubleŒ^‚Ì‘«‚µZ

int subtraction_int(int ans_int1);//intŒ^‚Ìˆø‚«Z
double subtraction_double(double ans_double1);//doubleŒ^‚Ìˆø‚«Z

int multiplication_int(int ans_int2);//intŒ^‚ÌŠ|‚¯Z
double multiplication_double(double ans_double2);//doubleŒ^‚ÌŠ|‚¯Z

int division_int(int ans_int3);//intŒ^‚ÌŠ„‚èZ
double division_double(double ans_double3);//doubleŒ^‚ÌŠ„‚èZ

void exponentiation_int(int* ans_int4);//intŒ^‚Ì‚×‚«æŒvZ
void exponentiation_double(double* ans_double4);//doubleŒ^‚Ì‚×‚«æŒvZ

void vector_int(int* ans_int5, int* ans_int6, int* ans_int7);//intŒ^‚ÌƒxƒNƒgƒ‹ŒvZ
void vector_double(double* ans_double5, double* ans_double6, double* ans_double7);//doubleŒ^‚ÌƒxƒNƒgƒ‹ŒvZ

void matrix_int(int* ans_int8, int* ans_int9, int* ans_int10, int* ans_int11);//intŒ^‚ÌƒxƒNƒgƒ‹ŒvZ
void matrix_double(double* ans_double8, double* ans_double9, double* ans_double10, double* ans_double11);//doubleŒ^‚ÌƒxƒNƒgƒ‹ŒvZ

void innerProduct_int(int* ans_int12);//intŒ^‚Ì“àÏŒvZ
void innerProduct_double(double* ans_double12);//doubleŒ^‚Ì“àÏŒvZ

void trigonometricRatio_int(int* ans_int13);//intŒ^‚ÌOŠp”äŒvZ
void trigonometricRatio_double(double* ans_double13);//doubleŒ^‚ÌOŠp”äŒvZ

void timeDifference_int(int* ans_int14, int* ans_int15, int* ans_int16, int* ans_int17);	//intŒ^‚ÌŠ„ˆøŒvZ
void timeDifference_double(double* ans_double14, double* ans_double15, double* ans_double16, double* ans_double17);	//doubleŒ^‚ÌŠ„ˆøŒvZ

void fileOutput_int(struct ans ans[]);		//intŒ^‚Ìƒtƒ@ƒCƒ‹o—Í
void fileOutput_double(struct ans ans[]);		//doubleŒ^‚Ìƒtƒ@ƒCƒ‹o—Í