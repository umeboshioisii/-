#pragma once

class BaseObject;

class BaseScene
{
public:
	BaseScene() {};
	~BaseScene() {};

	virtual void Update();
	virtual void Draw();
	virtual void Init();
	virtual void Relese();
protected:
	//�ϒ��z��
	std::vector<std::shared_ptr<BaseObject>>m_objList;
};