#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define M_PI        3.14159265358979323846264338327950288   

//�����ł͓��ς̉��Z���s���B

void innerProduct_int(int* ans_int12) {

	int a1 = 0;
	int a2 = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	int b1 = 0;
	int b2 = 0;
	int c = 0;
	double c1 = 0;
	int q = 0;

	printf_s("\n���ω��Z�ł́Aa��b��2�̐�������̌v�Z�A�܂��͗]���藝��p�����v�Z��2��ނœ��όv�Z���邱�Ƃ��ł��܂�[(a1*b1+a2*b2=a�Eb)�A(|a||b|cos��=a�Eb)]�B");

	while (1) {

		printf_s("\n�܂��A��������̌v�Z�Ōv�Z����Ȃ�0�A�]���藝��p�����v�Z������Ȃ�1����͂��Ă��������B");
		scanf_s("%d", &q);		//�ϐ�����

		switch (q) {

		case 0:	//���͒l0(����)�̏���
			printf_s("\n����ł́Aa��b�ł�2�̐�������̌v�Z���n�߂܂�[a=(a1,a2) b=(b1,b2) (a1*b1+a2*b2=a�Eb)]�B���߂ɁAa1�̐�������͂��Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%d", &a1);
			printf_s("\n[a=(%d,a2) b=(b1,b2) (%d*b1+a2*b2=a�Eb)] ���ɁAa2�̒l�����Ă��������B", a1,a1);
			scanf_s("%d", &a2);
			printf_s("\n[a=(%d,%d) b=(b1,b2) (%d*b1+%d*b2=a�Eb)] ���ɁAb1�̒l�����Ă��������B", a1,a2, a1,a2);
			scanf_s("%d", &b1);
			printf_s("\n[a=(%d,%d) b=(%d,b2) (%d*%d+%d*b2=a�Eb)] ���ɁAb2�̒l�����Ă��������B", a1, a2,b1, a1, a2,b1);
			scanf_s("%d", &b2);

			*ans_int12 = a1 * b1 + a2 * b2;

			if ((a1 * b1 + a2 * b2) == 0) {
				printf_s("\na=(%d,%d) b=(%d,%d) ���ς̓�����%d�ł��B�Ȃ��A%d�Ȃ̂ł���2�̐����͐��������܂��B", a1, a2, b1,b2,  *ans_int12, *ans_int12);
			}
			else {
				printf_s("\na=(%d,%d) b=(%d,%d) ���ς̓�����%d�ł��B", a1, a2, b1, b2, *ans_int12);
			}


			break;

		case 1:
			printf_s("\n����ł́A�]���藝�ł̌v�Z���n�߂܂�[(|a||b|cos��=a�Eb)]�B���߂ɁA|a|�̐��l����͂��Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%d", &a1);
			printf_s("\n[(%d|b|cos��=a�Eb)] ���ɁA|b|�̒l�����Ă��������B", a1);
			scanf_s("%d", &b1);
			printf_s("\n[(%d*%dcos��=a�Eb)] ���ɁAcos�̃Ƃ̒l�����Ă��������B�Ȃ��A���l������Ύ����I�Ɋp�x�ɕϊ�����܂��B", a1,b1);
			scanf_s("%d", &c);

			c1 = c * M_PI/180;

			*ans_int12 = int(a1 * b1 * cos(c1));

			if (*ans_int12 == 0) {
				printf_s("\n%d*%dcos%d���ς̓�����%d�ł��B�Ȃ��A%d�Ȃ̂Ő����ƂȂ�܂��B", a1, b1,c, *ans_int12, *ans_int12);
			}

			else if (cos(c1) == 1 || cos(c1) == -1) {
			printf_s("\n(%d*%dcos%d���ς̓�����%d�ł��B�Ȃ��Acos%d�Ȃ̂ł���2�̐����͕��s�����܂��B", a1, b1, c, *ans_int12, c);
			}

			else {
				printf_s("\n%d*%dcos%d���ς̓�����%d�ł��B", a1, b1, c, *ans_int12);
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

void innerProduct_double(double* ans_double12) {

	double a1 = 0;
	double a2 = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	double b1 = 0;
	double b2 = 0;
	double c = 0;
	double c1 = 0;
	int q = 0;

	printf_s("\n���ω��Z�ł́Aa��b��2�̐�������̌v�Z�A�܂��͗]���藝��p�����v�Z��2��ނœ��όv�Z���邱�Ƃ��ł��܂�[(a1*b1+a2*b2=a�Eb)�A(|a||b|cos��=a�Eb)]�B");

	while (1) {

		printf_s("\n�܂��A��������̌v�Z�Ōv�Z����Ȃ�0�A�]���藝��p�����v�Z������Ȃ�1����͂��Ă��������B");
		scanf_s("%d", &q);		//�ϐ�����

		switch (q) {

		case 0:	//���͒l0(����)�̏���
			printf_s("\n����ł́Aa��b�ł�2�̐�������̌v�Z���n�߂܂�[a=(a1,a2) b=(b1,b2) (a1*b1+a2*b2=a�Eb)]�B���߂ɁAa1�̐�������͂��Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%lf", &a1);
			printf_s("\n[a=(%lf,a2) b=(b1,b2) (%lf*b1+a2*b2=a�Eb)] ���ɁAa2�̒l�����Ă��������B", a1, a1);
			scanf_s("%lf", &a2);
			printf_s("\n[a=(%lf,%lf) b=(b1,b2) (%lf*b1+%lf*b2=a�Eb)] ���ɁAb1�̒l�����Ă��������B", a1, a2, a1, a2);
			scanf_s("%lf", &b1);
			printf_s("\n[a=(%lf,%lf) b=(%lf,b2) (%lf*%lf+%lf*b2=a�Eb)] ���ɁAb2�̒l�����Ă��������B", a1, a2, b1, a1, a2, b1);
			scanf_s("%lf", &b2);

			*ans_double12 = a1 * b1 + a2 * b2;

			if ((a1 * b1 + a2 * b2) == 0) {
				printf_s("\na=(%lf,%lf) b=(%lf,%lf) ���ς̓�����%lf�ł��B�Ȃ��A%d�Ȃ̂ł���2�̐����͐��������܂��B", a1, a2, b1, b2, *ans_double12, *ans_double12);
			}
			else {
				printf_s("\na=(%lf,%lf) b=(%lf,%lf) ���ς̓�����%d�ł��B", a1, a2, b1, b2, *ans_double12);
			}


			break;

		case 1:
			printf_s("\n����ł́A�]���藝�ł̌v�Z���n�߂܂�[(|a||b|cos��=a�Eb)]�B���߂ɁA|a|�̐��l����͂��Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
			scanf_s("%lf", &a1);
			printf_s("\n[(%lf|b|cos��=a�Eb)] ���ɁA|b|�̒l�����Ă��������B", a1);
			scanf_s("%lf", &b1);
			printf_s("\n[(%lf*%lfcos��=a�Eb)] ���ɁAcos�̃Ƃ̒l�����Ă��������B�Ȃ��A���l������Ύ����I�Ɋp�x�ɕϊ�����܂��B", a1, b1);
			scanf_s("%lf", &c);

			c1 = c * M_PI / 180;

			*ans_double12 = a1 * b1 * cos(c1);

			if (cos(c1) ==(double) 0) {
				printf_s("\n%lf*%lfcos%lf���ς̓�����%lf�ł��B�Ȃ��A%lf�Ȃ̂Ő����ƂȂ�܂��B", a1, b1, c, *ans_double12, *ans_double12);
			}

			else if (cos(c1) == (double)1 || cos(c1) == (double)-1) {
				printf_s("\n%lf*%lfcos%lf���ς̓�����%lf�ł��B�Ȃ��Acos%lf�Ȃ̂ł���2�̐����͕��s�����܂��B", a1, b1, c, *ans_double12, c);
			}

			else {
				printf_s("\n%lf*%lfcos%lf���ς̓�����%lf�ł��B", a1, b1, c, *ans_double12);
			}

			break;

			break;

		default:	//����ȊO(��O)�̏���
			printf_s("\n0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;
		}
		break;

	}

}
