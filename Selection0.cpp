#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>


//�����͌v�Z����^�̑I�����s��

 int selection0(int ans_selection0) {
	while (1) {	//���������͂������܂ł̃��[�v����

		printf_s("\nint(����)�^��double(�����_)�^���I��ł��������B0�Ȃ�int�A1�Ȃ�double�^�ɂȂ�܂��B");
		scanf_s("%d", &ans_selection0);		//�I�����̓���


		switch (ans_selection0) {

		case 0:		//���͒l0(int�^�v�Z)�̏���
			printf_s("\n\n����ł́Aint(����)�^�ł̌v�Z���n�߂܂��B\n");
			break;

		case 1:		//���͒l1(double�^�v�Z)�̏���
			printf_s("\n\n����ł́Adouble(�����_)�^�ł̌v�Z���n�߂܂��B\n");
			break;

		default:	//����ȊO(��O)�̏���
			printf_s("0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;
		}

		break;		//���������͂����ꂽ�ꍇ�̃��[�v�����I��
	
	}
	return  ans_selection0;		//�I�����̒l��Ԃ�
}
