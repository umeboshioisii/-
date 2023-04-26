#pragma once

#include "../BaseObject.h"

class Player:public BaseObject
{
public:
	Player() {};
	~Player() { Release(); };

	//override‚ÍÄ’è‹`‚ğ•\‚·
	void Update()override;
	void Draw()override;
	void Init()override;
	void Release()override;

private:

};

