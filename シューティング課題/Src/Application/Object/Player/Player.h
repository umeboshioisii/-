#pragma once

#include "../BaseObject.h"

class Player:public BaseObject
{
public:
	Player() {};
	~Player() { Release(); };

	//override�͍Ē�`��\��
	void Update()override;
	void Draw()override;
	void Init()override;
	void Release()override;

private:

};

