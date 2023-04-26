#pragma once
//多重読込抑制コマンド

#include "../BaseObject.h"

class Enemy:public BaseObject
{
public:
	//コンストラクタ
	Enemy() { };
	//デストラクタ
	~Enemy() { Release(); };
	void Update();
	void Draw();
	void Init();

	void Release();
	//保守性・可読性・汎用性
	void SetPos(Math::Vector3 _pos);
	void SetPos(float x,float y);

private:
	//命名規則:キャメル型
	//スネーク型 m_Player_Tex;
};