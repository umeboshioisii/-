#pragma once

class BaseObject
{
public:
	BaseObject() {};
	~BaseObject() { Release(); };

	//仮想関数
	//継承される親クラスにつける
	virtual void Update();
	virtual void Draw();
	virtual void Init() = 0;
	virtual void Release();
	//関数名()=0にすると純粋仮想関数になる
	//overrideをしないとエラーになる

	virtual void SetTexture(std::string _fileName);

protected:
	KdTexture m_tex;
	Math::Vector3 m_pos;
	Math::Matrix m_mat;
};
