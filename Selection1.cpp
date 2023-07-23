#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

//ここは計算方法の選択を行う

int selection1(int ans_selection1) {

	while (1) {		//正しい入力がされるまでのループ処理

		printf_s("\n足し算を行うなら0、引き算を行うなら1、掛け算を行うなら2、割り算を行うなら3、");
		printf_s("\nべき乗の計算なら4、ベクトルの計算なら5、行列の計算なら6、内積の計算なら7、");
		printf_s("\n三角比計算なら8、時差計算なら9を入力してください。");

		scanf_s("%d", &ans_selection1);		//選択肢の入力

		switch (ans_selection1) {

		case 0:		//入力値0(足し算)の入力
			printf_s("\n\nそれでは、足し算の演算を始めます。\n");
			break;

		case 1:		//入力値1(引き算)の処理
			printf_s("\n\nそれでは、引き算の演算を始めます。\n");
			break;

		case 2:		//入力値2(掛け算)の処理
			printf_s("\n\nそれでは、掛け算の演算を始めます。\n");
			break;

		case 3:		//入力値3(割り算)の処理
			printf_s("\n\nそれでは、割り算の演算を始めます。\n");
			break;

		case 4:		//入力値4(べき乗)の処理
			printf_s("\n\nそれでは、べき乗の演算を始めます。\n");
			break;

		case 5:		//入力値5(ベクトル)の処理
			printf_s("\n\nそれでは、ベクトルの演算を始めます。\n");
			break;

		case 6:		//入力値6(行列)の処理
			printf_s("\n\nそれでは、行列の演算を始めます。\n");
			break;

		case 7:		//入力値7(内積)の処理
			printf_s("\n\nそれでは、内積の演算を始めます。\n");
			break;

		case 8:		//入力値8(三角比)の処理
			printf_s("\n\nそれでは、三角比の演算を始めます。\n");
			break;

		case 9:		//入力値9(時差計算)の処理
			printf_s("\n\nそれでは、時差計算を始めます。\n");
			break;


		default:	//それ以外(例外)の処理
			printf_s("0～9以外の数値、文字が入力されました。もう一度やり直してください。\n");
			scanf_s("%*[^\n]");
			continue;

		}

		break;		//正しい入力がされた場合のループ処理終了

	}

	return ans_selection1;		//選択肢の値を返す
}