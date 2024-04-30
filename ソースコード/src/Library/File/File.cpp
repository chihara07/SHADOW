#include "File.h"
#include <fstream>
#include <sstream>

// input �� delimiter �ŕ�������֐�
vector<string> CFile::split(string& input, char delimiter) {
    istringstream stream(input);
    string field;
    vector<string> result;
    while (getline(stream, field, delimiter)) result.push_back(field);
    return result;
}

//�t�@�C���ǂݍ���(2����)(int)
void CFile::Load(vector<vector<int>>& array, const char* DATA) {
    ifstream ifs(DATA);                       // �ǂݎ��p�X�g���[��
    if (ifs) {
        string line;

        // ��s�ڂ����x���̏ꍇ
        getline(ifs, line);
        vector<string> strvec = split(line, ',');

        while (getline(ifs, line)) {
            vector<int> datvec;
            vector<string> strvec = split(line, ',');
            for (auto&& s : strvec) datvec.push_back(stoi(s)); // �Z���̕�����𐔒l�ɕϊ�
            array.push_back(datvec);
        }
    }
}

//�t�@�C���ǂݍ���(2����)(float)
void CFile::Load(vector<vector<float>>& array, const char* DATA) {
    ifstream ifs(DATA);                       // �ǂݎ��p�X�g���[��
    if (ifs) {
        string line;

        // ��s�ڂ����x���̏ꍇ
         getline(ifs, line);
         vector<string> strvec = split(line, ',');

        while (getline(ifs, line)) {
            vector<float> datvec;
            vector<string> strvec = split(line, ',');
            for (auto&& s : strvec) datvec.push_back(stof(s)); // �Z���̕�����𐔒l�ɕϊ�
            array.push_back(datvec);
        }
    }
}
