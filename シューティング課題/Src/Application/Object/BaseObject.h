#pragma once

class BaseObject
{
public:
	BaseObject() {};
	~BaseObject() { Release(); };

	//���z�֐�
	//�p�������e�N���X�ɂ���
	virtual void Update();
	virtual void Draw();
	virtual void Init() = 0;
	virtual void Release();
	//�֐���()=0�ɂ���Ə������z�֐��ɂȂ�
	//override�����Ȃ��ƃG���[�ɂȂ�

	virtual void SetTexture(std::string _fileName);

protected:
	KdTexture m_tex;
	Math::Vector3 m_pos;
	Math::Matrix m_mat;
};
