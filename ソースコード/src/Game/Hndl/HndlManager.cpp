#include "HndlManager.h"
#include "../../Library/Common.h"
#include <iostream>

CHndlManager* CHndlManager::_Instance = nullptr;

CHndlManager* CHndlManager::GetInstance() {
	if (_Instance == nullptr) {
		_Instance = New CHndlManager;
	}

	return _Instance;
}

void CHndlManager::DeleteInstance() {
	if (_Instance != nullptr) {
		delete _Instance;
		_Instance = nullptr;
	}
}

//コンストラクタ・デストラクタ
CHndlManager::CHndlManager() {

}
CHndlManager::~CHndlManager() {
	Reset();
}

void CHndlManager::Init() {
	Reset();

	_Hndl.resize(static_cast<int>(PATH_TYPE::PATH_TYPE_NUM));
	_ModelHndl.resize(static_cast<int>(MODEL_PATH_TYPE::NUM));

	for (auto& hndl : _Hndl) hndl = -1;
	for (auto& hndl : _ModelHndl) hndl = -1;
}

void CHndlManager::Reset() {
	for (auto& hndl : _Hndl) {
		DeleteGraph(hndl);
		hndl = -1;
	}
	for (auto& hndl : _Hndl) {
		MV1DeleteModel(hndl);
		hndl = -1;
	}
}

void CHndlManager::Load() {
	int cnt = 0;

	for (auto& hndl : _Hndl) {
		hndl = LoadGraph(PATH[cnt]);

		cnt++;
	}
	cnt = 0;
	for (auto& hndl : _ModelHndl) {
		hndl = MV1LoadModel(MODEL_PATH[cnt]);

		cnt++;
	}
}

int CHndlManager::GetHndl(PATH_TYPE id) {
	return _Hndl[static_cast<int>(id)];
}

int CHndlManager::GetModelHndl(MODEL_PATH_TYPE id) {
	return _ModelHndl[static_cast<int>(id)];
}
