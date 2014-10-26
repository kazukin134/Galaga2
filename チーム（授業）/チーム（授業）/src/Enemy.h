#pragma once
#include "Main.h"
#include "Object.h"
#include "Collision.h"
#include "EShot.h"



class CEnemy : public Object 
{

public:
	CEnemy();
	~CEnemy();

	void Draw(float p_x, float p_y);
	void Update(float p_x, float p_y);
	void Move();
void Attack();
void Collision();

float enemyarray[20];
float enemyarray_x [20];
float enemyarray_y[20];
float arraycount;


float p_x;
float p_y;
float mp_x[20];
float mp_y[20];

float t;

float time;
float time1;
float movepoint0;
float movepoint1;
int enemy1;
int i;
float ep_x[10];
float ep_y[10];
float ep0_x;
float ep1_x;
float ep2_x;
float ep0_y;
float ep1_y;
float ep2_y;


};