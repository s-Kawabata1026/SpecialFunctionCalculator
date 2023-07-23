// SpecialFunctionCalculator.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。


#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include "answer.h"
#include "function.h"
#include <math.h>







int main()
{
	struct ans ans[200];	//構造体の宣言



	printf_s("(Step1)このアプリは『電卓計算アプリ』です。初めに計算に使用する型を設定します。");

	ans[0].ans_selection = selection0(ans[0].ans_selection);	//計算する型の選択→Selection0へ


	printf_s("\n(Step2)次に、計算、演算方法を選んでください。");

	ans[1].ans_selection = selection1(ans[1].ans_selection);	//計算方法の選択→Selection1へ
	printf_s("\n\n%d", ans[1].ans_selection);

	switch (ans[0].ans_selection) 
	{

		case 0:

			switch (ans[1].ans_selection) {

				case 0:

					ans[0].ans_int = addition_int(ans[0].ans_int);	//足し算へ→Addition→additon_intへ
					break;
			
				case 1:

					ans[0].ans_int = subtraction_int(ans[0].ans_int);	//引き算へ→Subtraction→subtraction_intへ
					break;
				case 2:

					ans[0].ans_int = multiplication_int(ans[0].ans_int);	//掛け算へ→multiplication→multiplication_intへ

					break;
				case 3:

					ans[0].ans_int = division_int(ans[0].ans_int);	//割り算へ→division→division_intへ

					break;
				case 4:
					exponentiation_int(&ans[0].ans_int);		//べき乗へ→exponentiation→exponentiation_intへ


					break;
				case 5:

					vector_int(&ans[0].ans_int, &ans[1].ans_int, &ans[2].ans_int);	//ベクトルへ→vector→vector_intへ

					break;
				case 6:
					matrix_int(&ans[0].ans_int, &ans[1].ans_int, &ans[2].ans_int, &ans[3].ans_int);	//行列へ→matrix→matrix_intへ

					break;
				case 7:
					innerProduct_int(&ans[0].ans_int);		//内積へ→innerProduct→innerProduct_intへ

					
					break;
				case 8:
					trigonometricRatio_int(&ans[0].ans_int);	//三角比へ→trigonometricRatio→trigonometricRatio_intへ
					break;
				case 9:

					timeDifference_int(&ans[0].ans_int, &ans[1].ans_int, &ans[2].ans_int, &ans[3].ans_int);		//時差へ→timeDifference→timeDifference_intへ
					break;
				default:
					break;
			}
			printf_s("\n\nなお、この答えはanser.csvファイルに出力、保存される。");
			fileOutput_int(ans);
			break;

		case 1:

			switch (ans[1].ans_selection) {

				case 0:

					ans[0].ans_double = addition_double(ans[0].ans_double);	//足し算へ→Addition→additon_doubleへ

					break;

				case 1:

					ans[0].ans_double = subtraction_double(ans[0].ans_double);	//引き算へ→Subtraction→subtraction_doubleへ

					break;
				case 2:

					ans[0].ans_double = multiplication_double(ans[0].ans_double);	//掛け算へ→multiplication→multiplication_doubleへ

					break;
				case 3:

					ans[0].ans_double = division_double(ans[0].ans_double);		//割り算へ→division→division_doubleへ
	
					break;
				case 4:
					exponentiation_double(&ans[0].ans_double);	//べき乗へ→exponentiation→exponentiation_doubleへ

					break;
				case 5:

					 vector_double(&ans[0].ans_double, &ans[1].ans_double, &ans[2].ans_double);		//ベクトルへ→vector→vector_doubleへ
				
					break;
				case 6:
					matrix_double(&ans[0].ans_double, &ans[1].ans_double, &ans[2].ans_double, &ans[3].ans_double);	//行列へ→matrix→matrix_doubleへ
					break;
				case 7:
					innerProduct_double(&ans[0].ans_double);		//内積へ→innerProduct→innerProduct_doubleへ
					
					break;
				case 8:
					trigonometricRatio_double(&ans[0].ans_double);	//三角比へ→trigonometricRatio→trigonometricRatio_doubleへ
					break;
				case 9:
					timeDifference_double(&ans[0].ans_double, &ans[1].ans_double, &ans[2].ans_double, &ans[3].ans_double);		//時差へ→timeDifference→timeDifference_doubleへ
					break;

				default:
					break;

			}	
			printf_s("\n\nなお、この答えはanser.csvファイルに出力、保存される。");
			fileOutput_double(ans);
			break;





	}
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
