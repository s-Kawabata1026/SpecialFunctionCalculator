#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//�����łׂ͂���̉��Z���s���B

void exponentiation_int(int* ans_int4) {

	int x = 0;
	int y = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	int i = 0;
	int q;

	printf_s("\n�ׂ��扉�Z�ł́Ax��y�ׂ̂�������邱�Ƃ��ł��܂�(x^y=z)�B");

	while (1) {

		printf_s("\n�܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
		scanf_s("%d", &x);		//�ϐ�����

		printf_s("\n(%d^y=z)\n���ɁAy�̒l�����Ă��������B", x);
		scanf_s("%d", &y);		//�ϐ�����

		q = x;
		while (i < y) {
			q = q *x;	//���͂��ꂽ�ϐ��Ōv�Z
			i++;
		}
		*ans_int4 = q;		//���͂��ꂽ�ϐ��Ōv�Z

		printf_s("%d^%d�̌��ʂ�%d�ł��B", x, y, *ans_int4);

		break;
	}

		
}

void exponentiation_double(double* ans_double4) {

	double x = 0;
	double y = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	int i = 0;
	double q ;

	printf_s("\n�ׂ��扉�Z�ł́Ax��y�ׂ̂�������邱�Ƃ��ł��܂�(x^y=z)�B");

	while (1) {

		printf_s("\n�܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���΃G���[�ƂȂ�A�v�Z�������ɏI���A�������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
		scanf_s("%lf", &x);		//�ϐ�����

		printf_s("\n%lf^y=z)\n���ɁAy�̒l�����Ă��������B�ׂ���v�Z�ł�double�^�̌v�Z���ł��Ȃ����߁A�����I��int�^�ɕϊ�����܂��B", x);
		scanf_s("%lf", &y);		//�ϐ�����

		q = x;
		while (i <(int) y) {
			q = q * x;	//���͂��ꂽ�ϐ��Ōv�Z
			i++;
		}
			
		*ans_double4 = q;		//���͂��ꂽ�ϐ��Ōv�Z

		printf_s("%lf*%lf�̌��ʂ�%lf�ł��B", x, y, *ans_double4);

		break;
	}

	
}