#pragma once
#include "Main.h"
#include "Object.h"
#include "Enemy.h"

class CEnemy;

class CEnemyManager : public Object
{

public :
	CEnemyManager();
	~CEnemyManager();



	void Update();
	void Draw();
	void Main();
	void Array();


	float group;
	float enemymanagercount;
	static CEnemy *Enemy;
	static CEnemy *Enemy1;
	static CEnemy *Enemy2[10];
	int enemypattern;
	int arrival;
	bool half;

};