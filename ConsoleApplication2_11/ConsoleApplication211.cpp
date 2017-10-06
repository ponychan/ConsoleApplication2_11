// ConsoleApplication211.cpp: 定义控制台应用程序的入口点。
//2.11.cpp使用枚举类型

#include "stdafx.h"
#include<iostream>
using namespace std;

enum gameresult { win, lose, tie, cancle };

int main()
{
	gameresult result;					//定义变量
	enum gameresult omit = cancle;		//定义变量

	for (int count = win; count <= cancle; count++) {
		result = gameresult(count);
		if (result == omit)
			cout << "the game was canaelled" << endl;
		else {
			cout << "the game was played ";
			if (result == win)
				cout << "and we win";
			if (result == lose)
				cout << "and we lost";
			cout << endl;
		}
	}
	return 0;
}

