#pragma once

class Back
{
public:
	Back() {};
	~Back() { Release(); };

	void Update();
	void Draw();
	void Init();

	void Release();
private:
	KdTexture m_tex;
	Math::Vector3 m_pos;
	Math::Matrix m_mat;
};
