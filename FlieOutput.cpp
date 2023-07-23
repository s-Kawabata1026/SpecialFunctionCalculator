
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include "answer.h"
#include "function.h"
#include <math.h>


#define _CRT_SECURE_NO_WARNINGS
#define BUFFSIZE 1024
#define CHARBUFF 124

void getGurrentDirectory(char* currentDirectory) {
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}

void fileOutput_int(struct ans ans[]) {

	char currentDirectory[CHARBUFF];
	getGurrentDirectory(currentDirectory);
	char s[CHARBUFF];
	sprintf_s(s, "section1");
	char k[CHARBUFF];
	sprintf_s(k, "keyword1");
	char settingFile[CHARBUFF];
	sprintf_s(settingFile, "%s\\setting.ini", currentDirectory);
	char keyValue[CHARBUFF];
	if (GetPrivateProfileString(s, k, "none", keyValue, CHARBUFF, settingFile) != 0) {

		FILE* fp;
		char* p1;
		char* e;
		char s[BUFFSIZE];
		int a[10][10];


		errno_t error;
		error = fopen_s(&fp, keyValue, "w");

		if (error != 0) {
			fprintf_s(stderr, "failed to open");
		}

		else {

			for (int i = 0;i < 6;i++) {

				a[i][i] = ans[i].ans_int;

				fprintf_s(fp, "%d", a[i][i]);

			}
		}

	}

	else {
		fprintf(stderr, "failed to write [$s] %s to %s ¥n", s, k, settingFile); 
	
	} 



}

void fileOutput_double(struct ans ans[]) {

	char currentDirectory[CHARBUFF];
	getGurrentDirectory(currentDirectory);
	char s[CHARBUFF];
	sprintf_s(s, "section1");
	char k[CHARBUFF];
	sprintf_s(k, "keyword1");
	char settingFile[CHARBUFF];
	sprintf_s(settingFile, "%s\\setting.ini", currentDirectory);
	char keyValue[CHARBUFF];
	if (GetPrivateProfileString(s, k, "none", keyValue, CHARBUFF, settingFile) != 0) {

		FILE* fp;
		char* p1;
		char* e;
		char s[BUFFSIZE];
		int a[10][10];



		errno_t error;
		error = fopen_s(&fp, keyValue, "w");

		if (error != 0) {
			fprintf_s(stderr, "failed to open");
		}

		else {

			for (int i = 0;i < 6;i++) {

				a[i][i] = ans[i].ans_int;

				fprintf_s(fp, "%d", a[i][i]);

			}
		}

	}

	else {
		fprintf(stderr, "failed to write [$s] %s to %s ¥n", s, k, settingFile);

	}



}