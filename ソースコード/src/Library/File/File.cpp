#include "File.h"
#include <fstream>
#include <sstream>

// input を delimiter で分割する関数
vector<string> CFile::split(string& input, char delimiter) {
    istringstream stream(input);
    string field;
    vector<string> result;
    while (getline(stream, field, delimiter)) result.push_back(field);
    return result;
}

//ファイル読み込み(2次元)(int)
void CFile::Load(vector<vector<int>>& array, const char* DATA) {
    ifstream ifs(DATA);                       // 読み取り用ストリーム
    if (ifs) {
        string line;

        // 一行目がラベルの場合
        getline(ifs, line);
        vector<string> strvec = split(line, ',');

        while (getline(ifs, line)) {
            vector<int> datvec;
            vector<string> strvec = split(line, ',');
            for (auto&& s : strvec) datvec.push_back(stoi(s)); // セルの文字列を数値に変換
            array.push_back(datvec);
        }
    }
}

//ファイル読み込み(2次元)(float)
void CFile::Load(vector<vector<float>>& array, const char* DATA) {
    ifstream ifs(DATA);                       // 読み取り用ストリーム
    if (ifs) {
        string line;

        // 一行目がラベルの場合
         getline(ifs, line);
         vector<string> strvec = split(line, ',');

        while (getline(ifs, line)) {
            vector<float> datvec;
            vector<string> strvec = split(line, ',');
            for (auto&& s : strvec) datvec.push_back(stof(s)); // セルの文字列を数値に変換
            array.push_back(datvec);
        }
    }
}
