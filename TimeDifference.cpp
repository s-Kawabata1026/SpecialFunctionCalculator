#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//�����ł͎����v�Z�̉��Z���s���B
void timeDifference_int(int* ans_int14, int* ans_int15, int* ans_int16, int* ans_int17) {

	int t11 = 0;//�܂��A���͂��邽�߂̕ϐ����쐬
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

	printf_s("\n�����ł́A���{�ɑ΂��A�n���C�A�؍��A�j���[�W�[�����h�A���`�̎�����m�邱�Ƃ��ł��܂��B");
	while (1) {

		printf_s("\n�܂��A���{�̎���(��)����͂��Ă�������(��@22:40=22)�B�Ȃ��A�^�A�`���ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
		scanf_s("%d", &t11);		//�ϐ�����
		printf_s("\n���ɁA���{�̎���(��)����͂��Ă�������(��@22:40=40)�B");
		scanf_s("%d", &t12);


		t21 = t11 -19;		//�n���C�̌v�Z
		t22 = t12;
		if (t21 < 0) {
			t21 = 24 + t21;
		}
		else if(t21>23){
			t21 =  t21-24;
			
		}
		*ans_int14 = t21 * 100 + t22;

		t31 = t11 ;		//�؍��̌v�Z
		t32 = t12;
		if (t31 < 0) {
			t31 = 24 + t31;
		}
		else if (t31 > 23) {
			t31 = t31 - 24;

		}

		*ans_int15 = t31 * 100 + t32;

		t41 = t11+3;		//�j���[�W�����h�̌v�Z
		t42 = t12;
		if (t41 < 0) {
			t41 = 24 + t41;
		}
		else if (t41 > 23) {
			t41 = t41 - 24;

		}
		*ans_int16 = t41 * 100 + t42;

		t51 = t11 + 1;		//�j���[�W�����h�̌v�Z
		t52 = t12;
		if (t51 < 0) {
			t51 = 24 + t51;
		}
		else if (t51 > 23) {
			t51 = t51 - 24;

		}
		*ans_int17 = t51 * 100 + t52;

		printf_s("\n���{���Ԃ͂�%d:%d�̂Ƃ��A�n���C��%d:%d�A�؍���%d:%d�A�j���[�W�[�����h��%d:%d�A���`��%d:%d�ł���B",t11,t12,t21,t22,t31,t32,t41,t42,t51,t52);

		break;
	}

}

void timeDifference_double(double* ans_double14, double* ans_double15, double* ans_double16, double* ans_double17) {

	double t11 = 0;//�܂��A���͂��邽�߂̕ϐ����쐬
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

	printf_s("\n�����ł́A���{�ɑ΂��A�n���C�A�؍��A�j���[�W�[�����h�A���`�̎�����m�邱�Ƃ��ł��܂��B");
	while (1) {

		printf_s("\n�܂��A���{�̎���(��)����͂��Ă�������(��@22:40=22)�B�Ȃ��A�^�A�`���ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
		scanf_s("%lf", &t11);		//�ϐ�����
		printf_s("\n���ɁA���{�̎���(��)����͂��Ă�������(��@22:40=40)�B");
		scanf_s("%lf", &t12);


		t21 = t11 - 19;		//�n���C�̌v�Z
		t22 = t12;
		if (t21 < 0) {
			t21 = 24 + t21;
		}
		else if (t21 > 23) {
			t21 = t21 - 24;

		}
		*ans_double14 = t21 * 100 + t22;

		t31 = t11;		//�؍��̌v�Z
		t32 = t12;
		if (t31 < 0) {
			t31 = 24 + t31;
		}
		else if (t31 > 23) {
			t31 = t31 - 24;

		}

		*ans_double15 = t31 * 100 + t32;

		t41 = t11 + 3;		//�j���[�W�����h�̌v�Z
		t42 = t12;
		if (t41 < 0) {
			t41 = 24 + t41;
		}
		else if (t41 > 23) {
			t41 = t41 - 24;

		}
		*ans_double16 = t41 * 100 + t42;

		t51 = t11 + 1;		//�j���[�W�����h�̌v�Z
		t52 = t12;
		if (t51 < 0) {
			t51 = 24 + t51;
		}
		else if (t51 > 23) {
			t51 = t51 - 24;

		}
		*ans_double17 = t51 * 100 + t52;

		printf_s("\n���{���Ԃ͂�%lf:%lf�̂Ƃ��A�n���C��%lf:%lf�A�؍���%lf:%lf�A�j���[�W�[�����h��%lf:%lf�A���`��%lf:%lf�ł���B", t11, t12, t21,t22,t31, t32, t41, t42, t51, t52);

		break;
	}

}