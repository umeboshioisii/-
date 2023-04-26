#include "BaseObject.h"

void BaseObject::Update()
{
	//ç¿ïWçsóÒçÏê¨
	m_mat = Math::Matrix::CreateTranslation(m_pos);
}

void BaseObject::Draw()
{
	KdShaderManager::Instance().m_spriteShader.SetMatrix(m_mat);
	KdShaderManager::Instance().m_spriteShader.DrawTex(&m_tex, 0, 0);
}

void BaseObject::Init()
{
	m_pos = {};
	m_mat = Math::Matrix::Identity;
}

void BaseObject::Release()
{
}

void BaseObject::SetTexture(std::string _fileName)
{
	m_tex.Load(_fileName);
}

