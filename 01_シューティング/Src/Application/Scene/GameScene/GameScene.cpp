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
	//�w�i
	back->Update();
}

void GameScene::Draw()
{
	// ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
	// 2D�̕`��͂��̊Ԃōs��
	KdShaderManager::Instance().m_spriteShader.Begin();
	{
		//�w�i
		back->Draw();

		//�͈̓x�[�XFor
		for (auto& obj : m_objList)
		{
			//�|�����[�t�B�Y��
			//�X�}�[�g�|�C���^
			//�A�b�v�L���X�g
			//�R���e�i�N���X
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
	//�v���C���[������
	//�C���X�^���X��(���̉�)
	std::shared_ptr<Player>player;
	player = std::make_shared<Player>();
	player->Init();
	m_objList.push_back(player);

	//�G
	std::shared_ptr<Enemy>enemy;
	for (float i = 0; i < 10; i++)
	{
		enemy = std::make_shared<Enemy>();
		enemy->Init();
		enemy->SetPos({ 0,i*30,0 });
		m_objList.push_back(enemy);
	}
	
	//�w�i
	back = std::make_shared<Back>();
	back->Init();
}

void GameScene::Relese()
{
}
