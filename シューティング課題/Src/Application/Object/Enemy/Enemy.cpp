#include "Enemy.h"

void Enemy::Update()
{
	Math::Matrix transMat;
	m_pos.x -= 5;
	if (m_pos.x == -640)
	{
		m_pos.x *= -1;
	}

	transMat = Math::Matrix::CreateTranslation(m_pos);
	m_mat = transMat;
}

void Enemy::Draw()
{
	Math::Rectangle rc = { 0,0,64,64 };

	KdShaderManager::Instance().m_spriteShader.SetMatrix(m_mat);
	rc = { 0,0,64,64 };
	KdShaderManager::Instance().m_spriteShader.DrawTex(&m_tex, 0, 0, 64, 64, &rc);
}

void Enemy::Init()
{
	m_tex.Load("Asset/Textures/enemy.png");
	m_pos = {};
	m_mat = Math::Matrix::Identity;

}

void Enemy::Release()
{
}
