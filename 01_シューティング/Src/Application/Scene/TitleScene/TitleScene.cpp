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
	// ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// 2Dの描画はこの間で行う
	KdShaderManager::Instance().m_spriteShader.Begin();
	{

		//範囲ベースFor
		for (auto& obj : m_objList)
		{
			//ポリモーフィズム
			//スマートポインタ
			//アップキャスト
			//コンテナクラス
			obj->Draw();
		}

		/*for (int i = 0; i < m_objList.size(); i++)
		{
			m_objList[i]->Draw();
		}*/
	}
	KdShaderManager::Instance().m_spriteShader.End();
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
