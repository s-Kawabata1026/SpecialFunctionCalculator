#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//�����ł͈����Z�̉��Z���s���B

int subtraction_int(int ans_int1) {

	int x = 0;
	int y = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬

	printf_s("\n�����Z���Z�ł́Ax��y��2�̒l�ň����Z���邱�Ƃ��ł��܂�(x-y=z)�B");

	while (1) {

		printf_s("\n�܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
		scanf_s("%d", &x);		//�ϐ�����

		printf_s("\n(%d-y=z)\n���ɁAy�̒l�����Ă��������B", x);
		scanf_s("%d", &y);		//�ϐ�����

		ans_int1 = x - y;		//���͂��ꂽ�ϐ��Ōv�Z

		printf_s("%d-%d�̌��ʂ�%d�ł��B", x, y, ans_int1);

		break;
	}

	return ans_int1;		//�ϐ���Ԃ�l�Ƃ��ĕԂ�
}

double subtraction_double(double ans_double1) {

	double x = 0;
	double y = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬

	printf_s("\n�����Z���Z�ł́Ax��y��2�̒l�ň����Z���邱�Ƃ��ł��܂�(x-y=z)�B");

	while (1) {

		printf_s("\n�܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���΃G���[�ƂȂ�A�v�Z�������ɏI���A�������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
		scanf_s("%lf", &x);		//�ϐ�����

		printf_s("\n(%lf-y=z)\n���ɁAy�̒l�����Ă��������B", x);
		scanf_s("%lf", &y);		//�ϐ�����

		ans_double1 = x -y;		//���͂��ꂽ�ϐ��Ōv�Z

		printf_s("%lf-%lf�̌��ʂ�%lf�ł��B", x, y, ans_double1);

		break;
	}

	return ans_double1;		//�ϐ���Ԃ�l�Ƃ��ĕԂ�
}