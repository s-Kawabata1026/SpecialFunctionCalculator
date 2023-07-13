#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>


//ここは計算する型の選択を行う

 int selection0(int ans_selection0) {
	while (1) {	//正しい入力がされるまでのループ処理

		printf_s("\nint(整数)型かdouble(小数点)型か選んでください。0ならint、1ならdouble型になります。");
		scanf_s("%d", &ans_selection0);		//選択肢の入力


		switch (ans_selection0) {

		case 0:		//入力値0(int型計算)の処理
			printf_s("\n\nそれでは、int(整数)型での計算を始めます。\n");
			break;

		case 1:		//入力値1(double型計算)の処理
			printf_s("\n\nそれでは、double(小数点)型での計算を始めます。\n");
			break;

		default:	//それ以外(例外)の処理
			printf_s("0か1以外の数値、文字が入力されました。もう一度やり直してください。\n");
			scanf_s("%*[^\n]");
			continue;
		}

		break;		//正しい入力がされた場合のループ処理終了
	
	}
	return  ans_selection0;		//選択肢の値を返す
}
