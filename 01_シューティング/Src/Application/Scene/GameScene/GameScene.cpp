#include "GameScene.h"
#include "../../Object/Player/Player.h"
#include "../../Object/Enemy/Enemy.h"
#include "../../Object/Back/Back.h"

void GameScene::Update()
{
	for (auto& obj : m_objList)
	{
		obj->Update();
	}
	//背景
	back->Update();
}

void GameScene::Draw()
{
	// ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
	// 2Dの描画はこの間で行う
	KdShaderManager::Instance().m_spriteShader.Begin();
	{
		//背景
		back->Draw();

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

void GameScene::Init()
{
	//プレイヤー初期化
	//インスタンス化(実体化)
	std::shared_ptr<Player>player;
	player = std::make_shared<Player>();
	player->Init();
	m_objList.push_back(player);

	//敵
	std::shared_ptr<Enemy>enemy;
	for (float i = 0; i < 10; i++)
	{
		enemy = std::make_shared<Enemy>();
		enemy->Init();
		enemy->SetPos({ 0,i*30,0 });
		m_objList.push_back(enemy);
	}
	
	//背景
	back = std::make_shared<Back>();
	back->Init();
}

void GameScene::Relese()
{
}
