#pragma once

//�O���錾
class BaseObject;
class Back;

class GameScene
{
public:
	GameScene() {};
	~GameScene() {};

	void Update();
	void Draw();
	void Init();
	void Relese();

	//�����������牽�����邩��
	//�ł��A�K�v�ɂȂ�������
private:
	//�v���C���[
	//�X�}�[�g�|�C���^ 
	//�V�F�A�[�h�|�C���^
	//delete���v��Ȃ�
	//std::shared_ptr<Player>player;

	//�G
	//std::shared_ptr<Enemy>enemy;


	//�ϒ��z��
	std::vector<std::shared_ptr<BaseObject>>m_objList;

	//�w�i
	//���|�C���^
	//Back *back;
	std::shared_ptr<Back>back;
};
