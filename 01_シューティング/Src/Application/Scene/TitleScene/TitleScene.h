#pragma once

#include "../BaseScene.h"

class BaseObject;


class TitleScene:public BaseScene
{
public:
	TitleScene() {};
	~TitleScene() {};

	void Update()override;
	void Draw()override;
	void Init()override;
	void Relese()override;
private:

};
