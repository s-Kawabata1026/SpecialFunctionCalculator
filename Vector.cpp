#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//�����ł̓x�N�g���̉��Z���s���B



void vector_int(int* ans_int5, int* ans_int6, int* ans_int7) {
	int x1 = 0;
	int y1 = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	int z1 = 0;
	int x2 = 0;
	int y2 = 0;
	int z2 = 0;
	int q = 0;



	printf_s("\n�x�N�g�����Z�ł́A2�����������͎O�����̑����Z�A�������͊|���Z���ł��܂��B[(x,y)+(x',y')�A3(x,y)�Ȃ�]");

	while (1) {
		printf_s("\n�ŏ��ɁA2�����ł̌v�Z�Ȃ�0�A3�����ł̌v�Z�Ȃ�1����͂��Ă��������B");
		scanf_s("%d", &q);		//�I�����̓���

		switch (q) {

		case 0:		//���͒l0(2����)�̏���
			while (1) {
				printf_s("\n����ł́A2�����ł̌v�Z���n�߂܂��B���ɁA�����Z�Ȃ�0�A�|���Z�Ȃ�1����͂��Ă��������B");
				scanf_s("%d", &q);
				switch (q) {

				case 0://�����Z�̏���
					printf_s("\n����ł́A2�����ł̑����Z���n�߂܂��B[(x,y)+(x',y')=(x'',y'')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y)+(x',y')=(x'',y'')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d)+(x',y')=(x'',y'')] ���ɁAx'�̒l�����Ă��������B", x1, y1);
					scanf_s("%d", &x2);
					printf_s("\n[(%d,%d)+(%d,y')=(x'',y'')] ���ɁAy'�̒l�����Ă��������B", x1, y1, x2);
					scanf_s("%d", &y2);

					*ans_int5 = x1 + x2;
					*ans_int6 = y1 + y2;

					printf_s("\n(%d,%d)+(%d,%d) �̓����́A(%d,%d)�ł��B", x1, y1, x2, y2, *ans_int5, *ans_int6);
					break;

				case 1://�|���Z�̏���
					printf_s("\n����ł́A2�����ł̊|���Z���n�߂܂��B[(x,y)*z=(x',y')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y)*z=(x',y')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d)*z=(x',y')] ���ɁAz�̒l�����Ă��������B", x1, y1);
					scanf_s("%d", &z1);

					*ans_int5 = x1 *z1;
					*ans_int6 = y1 *z1;

					printf_s("\n(%d,%d)*%d �̓����́A(%d,%d)�ł��B", x1, y1, z1, *ans_int5, *ans_int6);
					break;

				default:	//����ȊO(��O)�̏���
					printf_s("0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
			}
			break;


		case 1:		//���͒l1(3����)�̏���
			

			while (1) {
				printf_s("\n����ł́A3�����ł̌v�Z���n�߂܂��B���ɁA�����Z�Ȃ�0�A�|���Z�Ȃ�1����͂��Ă��������B");
				scanf_s("%d", &q);
				switch (q) {

				case 0://�����Z�̏���
					printf_s("\n����ł́A3�����ł̑����Z���n�߂܂��B[(x,y,z)+(x',y',z')=(x'',y'',z'')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y,z)+(x',y',z')=(x'',y'',z'')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d,z)+(x',y',z')=(x'',y'',z'')] ���ɁAz�̒l�����Ă��������B", x1, y1);
					scanf_s("%d", &z1);
					printf_s("\n[(%d,%d,%d,)+(x',y',z')=(x'',y'',z'')] ���ɁAx'�̒l�����Ă��������B", x1, y1, z1);
					scanf_s("%d", &x2);
					printf_s("\n[(%d,%d,%d,)+(%d,y',z')=(x'',y'',z'')] ���ɁAy'�̒l�����Ă��������B", x1, y1, z1,x2);
					scanf_s("%d", &y2);
					printf_s("\n[(%d,%d,%d,)+(%d,%d,z')=(x'',y'',z'')] ���ɁAz'�̒l�����Ă��������B", x1, y1, z1,x2,y2);
					scanf_s("%d", &z2);

					*ans_int5 = x1 + x2;
					*ans_int6 = y1 + y2;
					*ans_int7 = z1 + z2;

					printf_s("\n(%d,%d,%d,)+(%d,%d,%d) �̓����́A(%d,%d,%d)�ł��B", x1, y1,z1, x2, y2,z2, *ans_int5, *ans_int6,*ans_int7);
					break;

				case 1://�|���Z�̏���
					printf_s("\n����ł�3�����ł̊|���Z���n�߂܂��B[(x,y,z)*a=(x',y',z')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%d", &x1);
					printf_s("\n[(%d,y,z)*a=(x',y',z')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%d", &y1);
					printf_s("\n[(%d,%d,z)*a=(x',y',z')] ���ɁAz�̒l�����Ă��������B", x1, y1);
					scanf_s("%d", &z1);
					printf_s("\n[(%d,%d,%d)*a=(x',y',z')] ���ɁAa�̒l�����Ă��������B", x1, y1,z1);
					scanf_s("%d", &z2);


					*ans_int5 = x1 * z2;
					*ans_int6 = y1 * z2;
					*ans_int7 = z1 * z2;

					printf_s("\n[(%d,%d,%d)*%d �̓����́A(%d,%d,%d)�ł��B", x1, y1, z1,z2, *ans_int5, *ans_int6,*ans_int7);
					break;

				default:	//����ȊO(��O)�̏���
					printf_s("\n0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
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



void vector_double(double* ans_double5, double* ans_double6, double* ans_double7) { //double�^�̃x�N�g���v�Z

	double x1 = 0;
	double y1 = 0;	//�܂��A���͂��邽�߂̕ϐ����쐬
	double z1 = 0;
	double x2 = 0;
	double y2 = 0;
	double z2 = 0;
	int q = 0;



	printf_s("\n�x�N�g�����Z�ł́A2�����������͎O�����̑����Z�A�������͊|���Z���ł��܂��B[(x,y)+(x',y')�A3(x,y)�Ȃ�]");

	while (1) {
		printf_s("\n�ŏ��ɁA2�����ł̌v�Z�Ȃ�0�A3�����ł̌v�Z�Ȃ�1����͂��Ă��������B");
		scanf_s("%d", &q);		//�I�����̓���

		switch (q) {

		case 0:		//���͒l0(2����)�̏���
			while (1) {
				printf_s("\n����ł́A2�����ł̌v�Z���n�߂܂��B���ɁA�����Z�Ȃ�0�A�|���Z�Ȃ�1����͂��Ă��������B");
				scanf_s("%d", &q);
				switch (q) {

				case 0:
					printf_s("\n����ł́A2�����ł̑����Z���n�߂܂��B[(x,y)+(x',y')=(x'',y'')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y)+(x',y')=(x'',y'')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf)+(x',y')=(x'',y'')] ���ɁAx'�̒l�����Ă��������B", x1, y1);
					scanf_s("%lf", &x2);
					printf_s("\n[(%lf,%lf)+(%lf,y')=(x'',y'')] ���ɁAy'�̒l�����Ă��������B", x1, y1, x2);
					scanf_s("%lf", &y2);

					*ans_double5 = x1 + x2;
					*ans_double6 = y1 + y2;

					printf_s("\n(%lf,%lf)+(%lf,%lf) �̓����́A(%lf,%lf)�ł��B", x1, y1, x2, y2, *ans_double5, *ans_double6);
					break;

				case 1:
					printf_s("\n����ł́A2�����ł̊|���Z���n�߂܂��B[(x,y)*z=(x',y')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y)*z=(x',y')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf)*z=(x',y')] ���ɁAz�̒l�����Ă��������B", x1, y1);
					scanf_s("%lf", &z1);

					*ans_double5 = x1 * z1;
					*ans_double6 = y1 * z1;

					printf_s("\n(%lf,%lf)*%lf �̓����́A(%lf,%lf)�ł��B", x1, y1, z1, *ans_double5, *ans_double6);
					break;

				default:	//����ȊO(��O)�̏���
					printf_s("0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
			}
			break;


		case 1:		//���͒l1(3����)�̏���


			while (1) {
				printf_s("\n����ł́A3�����ł̌v�Z���n�߂܂��B���ɁA�����Z�Ȃ�0�A�|���Z�Ȃ�1����͂��Ă��������B");
				scanf_s("%d", &q);
				switch (q) {

				case 0:
					printf_s("\n����ł́A3�����ł̑����Z���n�߂܂��B[(x,y,z)+(x',y',z')=(x'',y'',z'')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y,z)+(x',y',z')=(x'',y'',z'')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf,z)+(x',y',z')=(x'',y'',z'')] ���ɁAz�̒l�����Ă��������B", x1, y1);
					scanf_s("%lf", &z1);
					printf_s("\n[(%lf,%lf,%lf,)+(x',y',z')=(x'',y'',z'')] ���ɁAx'�̒l�����Ă��������B", x1, y1, z1);
					scanf_s("%lf", &x2);
					printf_s("\n[(%lf,%lf,%lf,)+(%lf,y',z')=(x'',y'',z'')] ���ɁAy'�̒l�����Ă��������B", x1, y1, z1, x2);
					scanf_s("%lf", &y2);
					printf_s("\n[(%lf,%lf,%lf,)+(%lf,%lf,z')=(x'',y'',z'')] ���ɁAz'�̒l�����Ă��������B", x1, y1, z1, x2, y2);
					scanf_s("%lf", &z2);

					*ans_double5 = x1 + x2;
					*ans_double6 = y1 + y2;
					*ans_double7 = z1 + z2;

					printf_s("\n(%lf,%lf,%lf,)+(%lf,%lf,%lf) �̓����́A(%lf,%lf,%lf)�ł��B", x1, y1, z1, x2, y2, z2, *ans_double5, *ans_double6, *ans_double7);
					break;

				case 1:
					printf_s("\n����ł�3�����ł̊|���Z���n�߂܂��B[(x,y,z)*a=(x',y',z')] �܂��Ax�̒l�����Ă��������B�Ȃ��A�^�ʂ�̐��l����͂��Ȃ���Όv�Z�������ɏI���A�������͐������v�Z���ł��Ȃ��悤�ɂȂ�܂��B");
					scanf_s("%lf", &x1);
					printf_s("\n[(%lf,y,z)*a=(x',y',z')] ���ɁAy�̒l�����Ă��������B", x1);
					scanf_s("%lf", &y1);
					printf_s("\n[(%lf,%lf,z)*a=(x',y',z')] ���ɁAz�̒l�����Ă��������B", x1, y1);
					scanf_s("%lf", &z1);
					printf_s("\n[(%lf,%lf,%lf)*a=(x',y',z')] ���ɁAa�̒l�����Ă��������B", x1, y1, z1);
					scanf_s("%lf", &z2);


					*ans_double5 = x1 * z2;
					*ans_double6 = y1 * z2;
					*ans_double7 = z1 * z2;

					printf_s("\n[(%lf,%lf,%lf)*%lf �̓����́A(%lf,%lf,%lf)�ł��B", x1, y1, z1, z2, *ans_double5, *ans_double6, *ans_double7);
					break;

				default:	//����ȊO(��O)�̏���
					printf_s("\n0��1�ȊO�̐��l�A���������͂���܂����B������x��蒼���Ă��������B\n");
					scanf_s("%*[^\n]");
					continue;


				}

				break;
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