#pragma once

#include "../BaseObject.h"

class Player:public BaseObject
{
public:
	Player() {};
	~Player() { Release(); };

	//overrideは再定義を表す
	void Update()override;
	void Draw()override;
	void Init()override;
	void Release()override;

private:

};

