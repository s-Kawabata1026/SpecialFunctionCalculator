#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//�����͌v�Z���@�̑I�����s��

int selection1(int ans_selection1) {

	while (1) {		//���������͂������܂ł̃��[�v����

		printf_s("\n�����Z���s���Ȃ�0�A�����Z���s���Ȃ�1�A�|���Z���s���Ȃ�2�A����Z���s���Ȃ�3�A");
		printf_s("\n�ׂ���̌v�Z�Ȃ�4�A�x�N�g���̌v�Z�Ȃ�5�A�s��̌v�Z�Ȃ�6�A���ς̌v�Z�Ȃ�7�A");
		printf_s("\n�O�p��v�Z�Ȃ�8�A�����v�Z�Ȃ�9����͂��Ă��������B");

		scanf_s("%d", &ans_selection1);		//�I�����̓���

		switch (ans_selection1) {

		case 0:		//���͒l0(�����Z)�̓���
			printf_s("\n\n����ł́A�����Z�̉��Z���n�߂܂��B\n");
			break;

		case 1:		//���͒l1(�����Z)�̏���
			printf_s("\n\n����ł́A�����Z�̉��Z���n�߂܂��B\n");
			break;

		case 2:		//���͒l2(�|���Z)�̏���
			printf_s("\n\n����ł́A�|���Z�̉��Z���n�߂܂��B\n");
			break;

		case 3:		//���͒l3(����Z)�̏���
			printf_s("\n\n����ł́A����Z�̉��Z���n�߂܂��B\n");
			break;

		case 4:		//���͒l4(�ׂ���)�̏���
			printf_s("\n\n����ł́A�ׂ���̉��Z���n�߂܂��B\n");
			break;

		case 5:		//���͒l5(�x�N�g��)�̏���
			printf_s("\n\n����ł́A�x�N�g���̉��Z���n�߂܂��B\n");
			break;

		case 6:		//���͒l6(�s��)�̏���
			printf_s("\n\n����ł́A�s��̉��Z���n�߂܂��B\n");
			break;

		case 7:		//���͒l7(����)�̏���
			printf_s("\n\n����ł́A���ς̉��Z���n�߂܂��B\n");
			break;

		case 8:		//���͒l8(�O�p��)�̏���
			printf_s("\n\n����ł́A�O�p��̉��Z���n�߂܂��B\n");
			break;

		case 9:		//���͒l9(�����v�Z)�̏���
			printf_s("\n\n����ł́A�����v�Z���n�߂܂��B\n");
			break;


		default:	//����ȊO(��O)�̏���
			printf_s("0�`9�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
			scanf_s("%*[^\n]");
			continue;

		}

		break;		//���������͂����ꂽ�ꍇ�̃��[�v�����I��

	}

	return ans_selection1;		//�I�����̒l��Ԃ�
}