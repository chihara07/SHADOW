#include "Loading.h"
#include "../../Game/Hndl/HndlManager.h"

//�ϐ��̏�����
Vector2D CLoading::_Pos(0.f);		//�摜���W
int CLoading::_Hndl = -1;			//�摜�n���h��
int CLoading::_Cnt = 0;				//���[�h��ʃJ�E���g
bool CLoading::_IsLoading = false;	//���[�h���Ă��邩�t���O
bool CLoading::_IsLoad = false;		//���[�h�������t���O

constexpr int LOAD_LOWEST_TIME = 60;//���[�h��ʕ`��Œ᎞��
//���[�h���
constexpr char BG_LOADING[] = "data/Image/load.png";

//�R���X�g���N�^�E�f�X�g���N�^
CLoading::CLoading() {
	_Pos(0.f);
	_Hndl = -1;
	_Cnt = 0;
	_IsLoading = false;
	_IsLoad = false;
}
CLoading::~CLoading() {
	
}

//������
void CLoading::Init() {
	_Pos(0.f);
	_Hndl = -1;
	_Cnt = 0;
	_IsLoading = true;
	_IsLoad = false;
	//�O�̂��ߔ񓯊��ǂݍ��݃t���O�I�t
	SetUseASyncLoadFlag(FALSE);
}

//�ǂݍ���(�ق��̓ǂݍ��݂͂���̌�ɍs��)
void CLoading::Load() {
	if (_Hndl == -1) _Hndl = LoadGraph(BG_LOADING);
}

//���[�h�J�n
void CLoading::LoadStart() {
	_Cnt = 0;
	_IsLoading = true;
	_IsLoad = false;

	//�񓯊��ǂݍ��݃t���O�I��
	SetUseASyncLoadFlag(TRUE);
}

//�`��
void CLoading::Draw() {
	DrawGraphF(_Pos._X, _Pos._Y, _Hndl, TRUE);
}

//���C������
void CLoading::Step() {
	if(_Cnt < LOAD_LOWEST_TIME) _Cnt++;
}

//�I��
void CLoading::Fin() {
	if (_Hndl != -1) _Hndl = -1;
}

//���[�h�I��
void CLoading::LoadEnd() {
	SetLoading(false);
	SetLoad(false);
	//�O�̂��ߔ񓯊��ǂݍ��݃t���O�I�t
	SetUseASyncLoadFlag(FALSE);
}

//���[�h��ʂ��I���ł��邩
bool CLoading::IsLoadEnd() {
	if (GetASyncLoadNum() == 0 && _Cnt >= LOAD_LOWEST_TIME)
		return true;

	return false;
}

//���[�h���Ă��邩�t���O�擾
bool CLoading::GetLoading() { return _IsLoading; }

//���[�h���Ă��邩�t���O�Z�b�g
void CLoading::SetLoading(bool f) { _IsLoading = f; }

//���[�h�������t���O�擾
bool CLoading::GetLoad() { return _IsLoad; }

//���[�h�������t���O�Z�b�g
void CLoading::SetLoad(bool f) { _IsLoad = f; }

//�J�E���g���Z�b�g
void CLoading::Reset() { _Cnt = 0; }
