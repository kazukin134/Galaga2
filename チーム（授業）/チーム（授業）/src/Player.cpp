#include "Player.h"
#include "Shot.h"

CPlayer::CPlayer() :player_img("res/player.png")
{
	CPlayer_X = 0;
	CPlayer_Y = -365;
	g = 0;
}

CPlayer::~CPlayer()
{
}


void CPlayer::Collision()
{
	for (int i = 0; i < 10; i++)
	{
		if (CEnemyManager::Enemy2[i] != nullptr)
		{

			if (Collision::IsHit(CPlayer_X - 25, CPlayer_Y - 25, 50, 50, CEnemyManager::Enemy2[i]->p_x, CEnemyManager::Enemy2[i]->p_y, CEnemyManager::Enemy2[i]->width, CEnemyManager::Enemy2[i]->height))
			{
				g = 1;
			}
		}
	}

}

CShot Shot;

void CPlayer::Update()
{
	Collision();
	Shot.Play_shot();
	Shot.Collision();
}


void CPlayer::Draw_player()
{
	drawTextureBox(CPlayer_X, CPlayer_Y, 50, 50, 0, 0, 32, 32, player_img, color256(255, 255, 255),
		M_PI * 0.00, Vec2f(1,1), Vec2f(25,25));

	drawBox(CPlayer_X, CPlayer_Y, 50, 50, 2, color256(255, 255, 255),
		M_PI * 0.00, Vec2f(1, 1), Vec2f(25, 25));

	if (app_env->isPressKey(GLFW_KEY_LEFT)){ CPlayer_X -= 5; }
	if (app_env->isPressKey(GLFW_KEY_RIGHT)){ CPlayer_X += 5; }
	if (CPlayer_X >= 225)CPlayer_X = 225;
	if (CPlayer_X <= -225)CPlayer_X = -225;

	
}


