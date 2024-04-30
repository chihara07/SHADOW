#pragma once
#include "DxLib.h"

static constexpr char PATH[][128] = {
	"data/Player/life.png",
	"data/Player/coin.png",
	"data/Image/coin1.png",
	"data/Image/coin2.png",
	"data/Image/coin3.png",
	"data/Image/BgClear.png",
	"data/Image/BgGameOver.png",
	"data/Image/title.png",
	"data/Image/description.png",
	"data/Image/description2.png",
	"data/Player/areaenergy.png",
	"data/Player/areaenergy2.png",
	"data/Player/energy.png",
	"data/Player/consumption.png",
	"data/Enemy/discovery.png",
	"data/Image/text.png",
	"data/Image/text2.png",
	"data/Image/tutorial1.png",
	"data/Image/tutorial2.png",
	"data/Image/tutorial3.png",
	"data/Image/tutorial4.png",
	"data/Image/tutorial5.png",
	"data/Image/tutorial6.png",
	"data/Image/tutorial7.png",
	"data/Image/tutorial8.png",
	"data/Image/tutorial9.png",
	"data/Image/tutorial10.png",
	"data/Image/tutorial11.png",
	"data/Image/tutorial12.png",
	"data/Image/tutorial13.png",
	"data/Image/tutorial14.png",
	"data/Image/tutorial15.png",
	"data/Image/tutorial16.png",
	"data/Image/tutorial17.png",
	"data/Image/tutorial18.png",
	"data/Image/tutorial19.png",
	"data/Image/tutorial20.png",
	"data/Image/tutorial21.png",
	"data/Image/tutorial22.png",
	"data/Image/tutorial23.png",
};

//2D画像パス
enum class PATH_TYPE {
	PLAYER_LIFE,		//プレイヤーライフ
	PLAYER_HAVECOIN,	//プレイヤー所持コイン
	COIN1,				//コイン1
	COIN2,				//コイン2
	COIN3,				//コイン3
	BG_CLEAR,			//クリア画面
	BG_GAMEOVER,		//ゲームオーバー画面
	BG_TITLE,			//タイトル画面
	DESCRIPTION1,		//操作説明1
	DESCRIPTION2,		//操作説明2
	AREAENERGY1,		//影エリアエネルギー1
	AREAENERGY2,		//影エリアエネルギー2
	ENERGY,				//エネルギー
	CONSUMPTION,		//エネルギー消費
	DISCOVERY,			//ビックリマーク
	TEXT1,				//テキスト1
	TEXT2,				//テキスト2
	TUTORIAL1,			//チュートリアル1
	TUTORIAL2,			//チュートリアル2
	TUTORIAL3,			//チュートリアル3
	TUTORIAL4,			//チュートリアル4
	TUTORIAL5,			//チュートリアル5
	TUTORIAL6,			//チュートリアル6
	TUTORIAL7,			//チュートリアル7
	TUTORIAL8,			//チュートリアル8
	TUTORIAL9,			//チュートリアル9
	TUTORIAL10,			//チュートリアル10
	TUTORIAL11,			//チュートリアル11
	TUTORIAL12,			//チュートリアル12
	TUTORIAL13,			//チュートリアル13
	TUTORIAL14,			//チュートリアル14
	TUTORIAL15,			//チュートリアル15
	TUTORIAL16,			//チュートリアル16
	TUTORIAL17,			//チュートリアル17
	TUTORIAL18,			//チュートリアル18
	TUTORIAL19,			//チュートリアル19
	TUTORIAL20,			//チュートリアル20
	TUTORIAL21,			//チュートリアル21
	TUTORIAL22,			//チュートリアル22
	TUTORIAL23,			//チュートリアル23

	PATH_TYPE_NUM
};

static constexpr char MODEL_PATH[][128] = {
	"data/Player/player.x",
	"data/Player/playershadow.x",
	"data/Player/teleport.x",
	"data/Player/attack.x",
	"data/Player/area.x",
	"data/Enemy/enemy.x",
	"data/Enemy/enemy_shot.x",
	"data/Enemy/enemy_flash.x",
	"data/Enemy/enemy_bullet.x",
	"data/Enemy/enemy_flash_area.x",
	"data/Gimmick/block.x",
	"data/Gimmick/block2.x",
	"data/Gimmick/fence.x",
	"data/Gimmick/fencecol.x",
	"data/Gimmick/goal.x",
	"data/Gimmick/banshadow.x",
	"data/Gimmick/switch.x",
	"data/Gimmick/switch2.x",
	"data/Gimmick/shadow.x",
	"data/Gimmick/shadow2.x",
	"data/Gimmick/trap.x",
	"data/Gimmick/wall.x",
	"Data/map/map0.x",
	"Data/map/map0col.x",
	"Data/map/map1.x",
	"Data/map/map1col.x",
	"Data/map/map2.x",
	"Data/map/map2col.x",
	"Data/map/map3.x",
	"Data/map/map3col.x",
};

//3Dモデルパス
enum class MODEL_PATH_TYPE {
	PLAYER,			//プレイヤー
	PLAYER_SHADOW,	//プレイヤー影状態
	PLAYER_TELEPORT,//プレイヤーテレポート状態
	PLAYER_ATTACK,	//プレイヤー攻撃
	PLAYER_AREA,	//プレイヤー影エリア
	ENEMY,			//敵
	ENEMY_SHOT,		//弾を打つ敵
	ENEMY_FLASH,	//フラッシュ攻撃をする敵
	BULLET,			//弾
	FLASH_AREA,		//フラッシュ攻撃
	BLOCK,			//ブロック
	BLOCK2,			//ブロック2
	FENCE,			//フェンス
	FENCE_COL,		//フェンス当たり判定
	GOAL,			//ゴール
	NOSHADOW,		//影禁止
	SWITCH,			//スイッチ
	SWITCH2,		//スイッチ2
	SHADOW,			//影
	SHADOW2,		//影2
	TRAP,			//トラップ
	WALL,			//壁
	MAP0_PATH,		//マップ0
	MAP0_COL_PATH,	//マップ0当たり判定
	MAP1_PATH,		//マップ1
	MAP1_COL_PATH,	//マップ1当たり判定
	MAP2_PATH,		//マップ2
	MAP2_COL_PATH,	//マップ2当たり判定
	MAP3_PATH,		//マップ3
	MAP3_COL_PATH,	//マップ3当たり判定

	NUM,
};
