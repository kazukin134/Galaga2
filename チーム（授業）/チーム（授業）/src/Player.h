#pragma once

//#include "lib/appEnv.hpp"
#include "Main.h"
#include "Collision.h"
#include "EnemyManager.h"

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	Texture player_img;

	float CPlayer_X;
	float CPlayer_Y;
	float g;
	void Collision();
	void Update();
	void Draw_player();
};
