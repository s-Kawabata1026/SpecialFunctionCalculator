#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//�����ł͍s��̉��Z���s���B

void matrix_int(int* ans_int8, int* ans_int9, int* ans_int10, int* ans_int11) {

	int x11 = 0;
	int x12 = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	int x21 = 0;
	int x22 = 0;
	int y11 = 0;
	int y12 = 0;	
	int y21 = 0;
	int y22 = 0;
	int z2 = 0;
	int q = 0;

	printf_s("\n�s�񉉎Z�ł́A2*2�̍s��̊|���Z,�t�s������߂邱�Ƃ��ł��܂��B");




	while (1) {
		printf_s("\n�ŏ��ɁA�|���Z�ł̌v�Z�Ȃ�0�A�t�s��ł̌v�Z�Ȃ�1����͂��Ă��������B�Ȃ��A�t�s��̏ꍇ�Aint�^�ł͐؂�̂Ă��N����̂�double�^�ł̌v�Z���������߂ł��B");
		scanf_s("%d", &q);		//�I�����̓���

		switch (q) {

		case 0:		//���͒l0(�|���Z)�̏���
			
				printf_s("\n����ł́A2*2�ł̊|���Z�v�Z���n�߂܂��B");
								
				printf_s("\n�܂��Ax11�̒l�����Ă��������B[(x11,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] �Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
				scanf_s("%d", &x11);
				printf_s("\n[(%d,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAx12�̒l�����Ă��������B",x11);
				scanf_s("%d", &x12);
				printf_s("\n[(%d,%d,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAx21�̒l�����Ă��������B", x11,x12);
				scanf_s("%d", &x21);
				printf_s("\n[(%d,%d,x%d,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAx22�̒l�����Ă��������B", x11, x12,x21);
				scanf_s("%d", &x22);
				printf_s("\n[(%d,%d,%d,%d)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAy11�̒l�����Ă��������B", x11, x12, x21,x22);
				scanf_s("%d", &y11);
				printf_s("\n[(%d,%d,%d,%d)(%d,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAy12�̒l�����Ă��������B", x11, x12, x21, x22,y11);
				scanf_s("%d", &y12);
				printf_s("\n[(%d,%d,%d,%d)(%d,%d,y21,y22)=(z11,z12,z21,z22)] ���ɁAy21�̒l�����Ă��������B", x11, x12, x21, x22, y11,y12);
				scanf_s("%d", &y21);
				printf_s("\n[(%d,%d,%d,%d)(%d,%d,%d,y22)=(z11,z12,z21,z22)] ���ɁAy22�̒l�����Ă��������B", x11, x12, x21, x22, y11, y12,y21);
				scanf_s("%d", &y22);
				


				*ans_int8 = x11*y11 + x12*y21;
				*ans_int9 = x11 * y12 + x12 * y22;
				*ans_int10 = x21 * y11 + x22 * y21;
				*ans_int11 = x21 * y12 + x22 * y22;

				printf_s("\n(%d,%d,%d,%d)(%d,%d,%d,%d)�̓����́A(%d,%d,%d,%d)�ł��B", x11,x12,x21,x22,y11,y12,y21,y22, *ans_int8, *ans_int9, *ans_int10, *ans_int11);
				break;


		case 1:		//���͒l1(�t�s��)�̏���

			printf_s("\n����ł́A2*2�ł̋t�s��v�Z���n�߂܂��B");

			printf_s("\n�܂��Ax11�̒l�����Ă��������B[(x11,x12,x21,x22)^-1=(z11,z12,z21,z22)] �Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%d", &x11);
			printf_s("\n[(%d,x12,x21,x22)^-1=(z11,z12,z21,z22)] ���ɁAx12�̒l�����Ă��������B", x11);
			scanf_s("%d", &x12);
			printf_s("\n[(%d,%d,x21,x22)^-1=(z11,z12,z21,z22)] ���ɁAx21�̒l�����Ă��������B", x11,x12);
			scanf_s("%d", &x21);
			printf_s("\n[(%d,%d,%d,x22)^-1=(z11,z12,z21,z22)] ���ɁAx22�̒l�����Ă��������B", x11,x12,x21);
			scanf_s("%d", &x22);

			if ((x11 * x22 - x12 * x21) == 0) {

				*ans_int8 = x11 ;
				*ans_int9 = x12;
				*ans_int10 = x21;
				*ans_int11 = x22;
				printf_s("\n(%d,%d,%d,%d)�ɋt�s��͑��݂��܂���B�Ȃ̂ŁA���̍s��𓚂��Ƃ��ĕԂ��܂��B", *ans_int8, *ans_int9, *ans_int10, *ans_int11);
				

			}
			else {

				*ans_int8 = x22 / (x11 * x22 - x12 * x21);
				*ans_int9 = -x12 / (x11 * x22 - x12 * x21);
				*ans_int10 = -x21 / (x11 * x22 - x12 * x21);
				*ans_int11 = x11 / (x11 * x22 - x12 * x21);
				printf_s("\n(%d,%d,%d,%d)�̋t�s���(%d,%d,%d,%d)�ł��B", x11, x12, x21, x22, *ans_int8, *ans_int9, *ans_int10, *ans_int11);


			}

			break;

				

		default:	//����ȊO(��O)�̏���
			printf_s("\n0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;
	}

}



void matrix_double(double* ans_double8, double* ans_double9, double* ans_double10, double* ans_double11) {
	double x11 = 0;
	double x12 = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	double x21 = 0;
	double x22 = 0;
	double y11 = 0;
	double y12 = 0;
	double y21 = 0;
	double y22 = 0;
	double z2 = 0;
	int q = 0;

	printf_s("\n�s�񉉎Z�ł́A2*2�̍s��̊|���Z,�t�s������߂邱�Ƃ��ł��܂��B");




	while (1) {
		printf_s("\n�ŏ��ɁA�|���Z�ł̌v�Z�Ȃ�0�A�t�s��ł̌v�Z�Ȃ�1����͂��Ă��������B");
		scanf_s("%d", &q);		//�I�����̓���

		switch (q) {

		case 0:		//���͒l0(�|���Z)�̏���

			printf_s("\n����ł́A2*2�ł̊|���Z�v�Z���n�߂܂��B");

			printf_s("\n�܂��Ax11�̒l�����Ă��������B[(x11,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] �Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%lf", &x11);
			printf_s("\n[(%lf,x12,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAx12�̒l�����Ă��������B", x11);
			scanf_s("%lf", &x12);
			printf_s("\n[(%lf,%lf,x21,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAx21�̒l�����Ă��������B", x11, x12);
			scanf_s("%lf", &x21);
			printf_s("\n[(%lf,%lf,xlf,x22)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAx21�̒l�����Ă��������B", x11, x12, x21);
			scanf_s("%lf", &x22);
			printf_s("\n[(%lf,%lf,%lf,%lf)(y11,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAy11�̒l�����Ă��������B", x11, x12, x21, x22);
			scanf_s("%lf", &y11);
			printf_s("\n[(%lf,%lf,%lf,%lf)(%lf,y12,y21,y22)=(z11,z12,z21,z22)] ���ɁAy12�̒l�����Ă��������B", x11, x12, x21, x22, y11);
			scanf_s("%lf", &y12);
			printf_s("\n[(%lf,%lf,%lf,%lf)(%lf,%lf,y21,y22)=(z11,z12,z21,z22)] ���ɁAy21�̒l�����Ă��������B", x11, x12, x21, x22, y11, y12);
			scanf_s("%d\lf", &y21);
			printf_s("\n[(%lf,%lf,%lf,%lf)(%lf,%lf,%lf,y22)=(z11,z12,z21,z22)] ���ɁAy22�̒l�����Ă��������B", x11, x12, x21, x22, y11, y12, y21);
			scanf_s("%lf", &y22);



			*ans_double8 = x11 * y11 + x12 * y21;
			*ans_double9 = x11 * y12 + x12 * y22;
			*ans_double10 = x21 * y11 + x22 * y21;
			*ans_double11 = x21 * y12 + x22 * y22;

			printf_s("\n(%lf,%lf,%lf,%lf)(%lf,%lf,%lf,%lf)�̓����́A(%d,%d,%d,%d)�ł��B", x11, x12, x21, x22, y11, y12, y21, y22, *ans_double8, *ans_double9, *ans_double10, *ans_double11);
			break;


		case 1:		//���͒l1(�t�s��)�̏���

			printf_s("\n����ł́A2*2�ł̋t�s��v�Z���n�߂܂��B");

			printf_s("\n�܂��Ax11�̒l�����Ă��������B[(x11,x12,x21,x22)^-1=(z11,z12,z21,z22)] �Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%lf", &x11);
			printf_s("\n[(%lf,x12,x21,x22)^-1=(z11,z12,z21,z22)] ���ɁAx12�̒l�����Ă��������B", x11);
			scanf_s("%lf", &x12);
			printf_s("\n[(%lf,%lf,x21,x22)^-1=(z11,z12,z21,z22)] ���ɁAx21�̒l�����Ă��������B", x11, x12);
			scanf_s("%lf", &x21);
			printf_s("\n[(%lf,%lf,%lf,x22)^-1=(z11,z12,z21,z22)] ���ɁAx22�̒l�����Ă��������B", x11, x12, x21);
			scanf_s("%lf", &x22);

			if ((x11 * x22 - x12 * x21) == 0) {

				*ans_double8 = x11;
				*ans_double9 = x12;
				*ans_double10 = x21;
				*ans_double11 = x22;
				printf_s("\n(%lf,%lf,%lf,%lf)�ɋt�s��͑��݂��܂���B�Ȃ̂ŁA���̍s��𓚂��Ƃ��ĕԂ��܂��B", *ans_double8, *ans_double9, *ans_double10, *ans_double11);


			}
			else {

				*ans_double8 = x22 / (x11 * x22 - x12 * x21);
				*ans_double9 = -x12 / (x11 * x22 - x12 * x21);
				*ans_double10 = -x21 / (x11 * x22 - x12 * x21);
				*ans_double11 = x11 / (x11 * x22 - x12 * x21);
				printf_s("\n(%lf,%lf,%lf,%lf)�̋t�s���(%lf,%lf,%lf,%lf)�ł��B", x11, x12, x21, x22, *ans_double8, *ans_double9, *ans_double10, *ans_double11);


			}

			break;



		default:	//����ȊO(��O)�̏���
			printf_s("\n0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;




	}
}