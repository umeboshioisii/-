#include "Player.h"

void Player::Update()
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		m_pos.y += 10;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		m_pos.y -= 10;
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		m_pos.x -= 10;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		m_pos.x += 10;
	}

	Math::Matrix transMat;
	//transMat = DirectX::XMMatrixTranslation(m_playerPos.x, m_playerPos.y, m_playerPos.z);
	//オーバーロード
	transMat = Math::Matrix::CreateTranslation(m_pos);
	m_mat = transMat;
}

void Player::Draw()
{
	Math::Rectangle rc = { 0,0,64,64 };

	KdShaderManager::Instance().m_spriteShader.SetMatrix(m_mat);
	//SAHDER.m_spriteShader.DrawTex();
	rc = { 0,0,64,64 };
	KdShaderManager::Instance().m_spriteShader.DrawTex(&m_tex, 0, 0, 64, 64, &rc);
}

void Player::Init()
{
	m_tex.Load("Asset/Textures/player.png");
	//ゼロクリア
	//m_playerPos = { 0,0,0};
	//m_playerPos = Math::Vector3(0, 0, 0);
	m_pos = {};

	//単位行列
	m_mat = Math::Matrix::Identity;
	//1,0,0,0,
	//0,1,0,0,
	//0,0,1,0,
	//0,0,0,1,
}

void Player::Release()
{
}
