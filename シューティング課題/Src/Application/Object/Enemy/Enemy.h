#pragma once
//���d�Ǎ��}���R�}���h

#include "../BaseObject.h"

class Enemy:public BaseObject
{
public:
	//�R���X�g���N�^
	Enemy() { };
	//�f�X�g���N�^
	~Enemy() { Release(); };
	void Update();
	void Draw();
	void Init();

	void Release();
	//�ێ琫�E�ǐ��E�ėp��

private:
	//�����K��:�L�������^
	//�X�l�[�N�^ m_Player_Tex;
};