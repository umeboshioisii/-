#pragma once

class BaseObject;

class TitleScene
{
public:
	TitleScene() {};
	~TitleScene() {};

	void Update();
	void Draw();
	void Init();
	void Relese();
private:
	//�ϒ��z��
	std::vector<std::shared_ptr<BaseObject>>m_objList;
};
