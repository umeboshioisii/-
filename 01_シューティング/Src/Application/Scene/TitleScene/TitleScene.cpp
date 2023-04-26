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
// 2D�̕`��͂��̊Ԃōs��
	KdShaderManager::Instance().m_spriteShader.Begin();
	{

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
