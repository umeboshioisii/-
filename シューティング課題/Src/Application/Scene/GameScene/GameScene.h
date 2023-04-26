#pragma once

//前方宣言
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

	//もしかしたら何かいるかも
	//でも、必要になったら作る
private:
	//プレイヤー
	//スマートポインタ 
	//シェアードポインタ
	//deleteが要らない
	//std::shared_ptr<Player>player;

	//敵
	//std::shared_ptr<Enemy>enemy;


	//可変長配列
	std::vector<std::shared_ptr<BaseObject>>m_objList;

	//背景
	//生ポインタ
	//Back *back;
	std::shared_ptr<Back>back;
};
