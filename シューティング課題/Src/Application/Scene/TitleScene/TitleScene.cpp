#include "TitleScene.h"
#include"../../Object/BaseObject.h"

void TitleScene::Update()
{
	for (auto& obj : m_objList)
	{
		obj->Update();
	}
}

void TitleScene::Draw()
{

}

void TitleScene::Init()
{
	std::shared_ptr<BaseObject>title;
	title = std::make_shared<BaseObject>();
	title->Init();
	title->SetTexture("Asset/Textures/title.png");
	m_objList.push_back(title);
}

void TitleScene::Relese()
{

}
