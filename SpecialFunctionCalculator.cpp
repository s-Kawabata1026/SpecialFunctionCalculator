// 期末試験.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include "answer.h"
#include "function.h"


#define _CRT_SECURE_NO_WARNINGS
#define BUFFSIZE 1024
#define CHARBUFF 124

void getGurrentDirectory(char* currentDirectory) {
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}



int main()
{
	struct ans ans[200];	//構造体の宣言



	printf_s("(Step1)このアプリは『電卓計算アプリ』です。初めに計算に使用する型を設定します。");

	ans[0].ans_selection = selection0(ans[0].ans_selection);	//計算する型の選択→Selection0へ


	printf_s("\n(Step2)次に、計算、演算方法を選んでください。");

	ans[1].ans_selection = selection1(ans[1].ans_selection);	//計算方法の選択→Selection1へ
	printf_s("\n\n%d", ans[1].ans_selection);



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
