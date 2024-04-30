#pragma once
#include "DxLib.h"
#include <vector>
#include <string>

//std省略
using namespace std;

class CFile {
public:
	// input を delimiter で分割する関数
	static vector<string> split(string& input, char delimiter);
	//ファイル読み込み(2次元)(int)
	static void Load(vector<vector<int>>& array, const char* DATA);
	//ファイル読み込み(2次元)(float)
	static void Load(vector<vector<float>> &array, const char* DATA);
};
