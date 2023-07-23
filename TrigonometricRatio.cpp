#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define M_PI        3.14159265358979323846264338327950288   

//�����ł͎O�p��̉��Z���s���B

void trigonometricRatio_int(int* ans_int13) {

	
	int c = 0;//�܂��A���͂��邽�߂̕ϐ����쐬
	double c1 = 0;
	int q = 0;

	printf_s("\n�O�p�䉉�Z�ł́A(sin,cos,tan,arcsin,arccos,arctan)�̂����ꂩ��I�сA�p�x����͂����邱�ƂŒl��m�邱�Ƃ��ł��܂��B[(cos��=x�Ȃ�)]�B");

	while (1) {

		printf_s("\n�܂��Asin�̌v�Z�Ȃ�0,cos�Ȃ�1�Atan�Ȃ�2�Aarcsin�Ȃ�3�Aarccos�Ȃ�4�Aarctan�Ȃ�5����͂��Ă��������B");
		scanf_s("%d", &q);		//�ϐ�����

		switch (q) {

		case 0:	//���͒l0(sin)�̏���
			printf_s("�ł́Asin��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 =int( sin(c1));

			printf_s("�ł́Asin%d��%d�ł��B",c,*ans_int13);
			break;

		case 1://���͒l1(cos)�̏���
			printf_s("�ł́Acos��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(cos(c1));

			printf_s("�ł́Acos%d��%d�ł��B", c, *ans_int13);
			break;

		case 2://���͒l2(tan)�̏���
			printf_s("�ł́Atan��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(tan(c1));

			printf_s("�ł́Atan%d��%d�ł��B", c, *ans_int13);
			break;

		case 3://���͒l3(arcsin)�̏���
			printf_s("�ł́Aarcsin��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(asin(c1));

			printf_s("�ł́Aarcsin%d��%d�ł��B", c, *ans_int13);
			break;

		case 4://���͒l4(arccos)�̏���
			printf_s("�ł́Aarccos��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(acos(c1));

			printf_s("�ł́Aarccos%d��%d�ł��B", c, *ans_int13);
			break;


		case 5://���͒l5(arctan)�̏���
			printf_s("�ł́Aarctan��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%d", &c);

			c1 = c * M_PI / 180;
			*ans_int13 = int(atan(c1));

			printf_s("�ł́Aarctan%d��%d�ł��B", c, *ans_int13);
			break;

		default:	//����ȊO(��O)�̏���
			printf_s("\n0�`5�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}

void trigonometricRatio_double(double* ans_double13) {


	double c = 0;//�܂��A���͂��邽�߂̕ϐ����쐬
	double c1 = 0;
	int q = 0;

	printf_s("\n�O�p�䉉�Z�ł́A(sin,cos,tan,arcsin,arccos,arctan)�̂����ꂩ��I�сA�p�x����͂����邱�ƂŒl��m�邱�Ƃ��ł��܂��B[(cos��=x�Ȃ�)]�B");

	while (1) {

		printf_s("\n�܂��Asin�̌v�Z�Ȃ�0,cos�Ȃ�1�Atan�Ȃ�2�Aarcsin�Ȃ�3�Aarccos�Ȃ�4�Aarctan�Ȃ�5����͂��Ă��������B");
		scanf_s("%d", &q);		//�ϐ�����

		switch (q) {

		case 0:	//���͒l0(sin)�̏���
			printf_s("�ł́Asin��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = sin(c1);

			printf_s("�ł́Asin%lf��%lf�ł��B", c, *ans_double13);
			break;

		case 1://���͒l1(cos)�̏���
			printf_s("�ł́Acos��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = cos(c1);

			printf_s("�ł́Acos%lf��%lf�ł��B", c, *ans_double13);
			break;

		case 2://���͒l2(tan)�̏���
			printf_s("�ł́Atan��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = tan(c1);

			printf_s("�ł́Atan%lf��%lf�ł��B", c, *ans_double13);
			break;

		case 3://���͒l3(arcsin)�̏���
			printf_s("�ł́Aarcsin��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = asin(c1);

			printf_s("�ł́Aarcsin%lf��%lf�ł��B", c, *ans_double13);
			break;

		case 4://���͒l4(arccos)�̏���
			printf_s("�ł́Aarccos��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%double", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = acos(c1);

			printf_s("�ł́Aarccos%lf��%lf�ł��B", c, *ans_double13);
			break;


		case 5://���͒l5(arctan)�̏���
			printf_s("�ł́Aarctan��=x�̌v�Z���n�߂܂��B�Ƃ���͂��Ă��������B");
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;
			*ans_double13 = atan(c1);

			printf_s("�ł́Aarctan%lf��%lf�ł��B", c, *ans_double13);
			break;

		default:	//����ȊO(��O)�̏���
			printf_s("\n0�`5�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}

