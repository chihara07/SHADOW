#include "Loading.h"
#include "../../Game/Hndl/HndlManager.h"

//変数の初期化
Vector2D CLoading::_Pos(0.f);		//画像座標
int CLoading::_Hndl = -1;			//画像ハンドル
int CLoading::_Cnt = 0;				//ロード画面カウント
bool CLoading::_IsLoading = false;	//ロードしているかフラグ
bool CLoading::_IsLoad = false;		//ロードしたかフラグ

constexpr int LOAD_LOWEST_TIME = 60;//ロード画面描画最低時間
//ロード画面
constexpr char BG_LOADING[] = "data/Image/load.png";

//コンストラクタ・デストラクタ
CLoading::CLoading() {
	_Pos(0.f);
	_Hndl = -1;
	_Cnt = 0;
	_IsLoading = false;
	_IsLoad = false;
}
CLoading::~CLoading() {
	
}

//初期化
void CLoading::Init() {
	_Pos(0.f);
	_Hndl = -1;
	_Cnt = 0;
	_IsLoading = true;
	_IsLoad = false;
	//念のため非同期読み込みフラグオフ
	SetUseASyncLoadFlag(FALSE);
}

//読み込み(ほかの読み込みはこれの後に行う)
void CLoading::Load() {
	if (_Hndl == -1) _Hndl = LoadGraph(BG_LOADING);
}

//ロード開始
void CLoading::LoadStart() {
	_Cnt = 0;
	_IsLoading = true;
	_IsLoad = false;

	//非同期読み込みフラグオン
	SetUseASyncLoadFlag(TRUE);
}

//描画
void CLoading::Draw() {
	DrawGraphF(_Pos._X, _Pos._Y, _Hndl, TRUE);
}

//メイン処理
void CLoading::Step() {
	if(_Cnt < LOAD_LOWEST_TIME) _Cnt++;
}

//終了
void CLoading::Fin() {
	if (_Hndl != -1) _Hndl = -1;
}

//ロード終了
void CLoading::LoadEnd() {
	SetLoading(false);
	SetLoad(false);
	//念のため非同期読み込みフラグオフ
	SetUseASyncLoadFlag(FALSE);
}

//ロード画面を終了できるか
bool CLoading::IsLoadEnd() {
	if (GetASyncLoadNum() == 0 && _Cnt >= LOAD_LOWEST_TIME)
		return true;

	return false;
}

//ロードしているかフラグ取得
bool CLoading::GetLoading() { return _IsLoading; }

//ロードしているかフラグセット
void CLoading::SetLoading(bool f) { _IsLoading = f; }

//ロードしたかフラグ取得
bool CLoading::GetLoad() { return _IsLoad; }

//ロードしたかフラグセット
void CLoading::SetLoad(bool f) { _IsLoad = f; }

//カウントリセット
void CLoading::Reset() { _Cnt = 0; }
