#pragma once
#include "DxLib.h"
#include <vector>
#include <string>

//std�ȗ�
using namespace std;

class CFile {
public:
	// input �� delimiter �ŕ�������֐�
	static vector<string> split(string& input, char delimiter);
	//�t�@�C���ǂݍ���(2����)(int)
	static void Load(vector<vector<int>>& array, const char* DATA);
	//�t�@�C���ǂݍ���(2����)(float)
	static void Load(vector<vector<float>> &array, const char* DATA);
};
