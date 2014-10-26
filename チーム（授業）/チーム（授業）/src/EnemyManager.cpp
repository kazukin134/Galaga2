#include "EnemyManager.h"


CEnemy *CEnemyManager::Enemy;
CEnemy *CEnemyManager::Enemy1;
CEnemy *CEnemyManager::Enemy2[10];
//CEnemy *CEnemyManager::Enemy2[9];
//CEnemy *CEnemyManager::Enemy2[8];
//CEnemy *CEnemyManager::Enemy2[7];
//CEnemy *CEnemyManager::Enemy2[6];
//CEnemy *CEnemyManager::Enemy2[5];
//CEnemy *CEnemyManager::Enemy2[4];
//CEnemy *CEnemyManager::Enemy2[3];
//CEnemy *CEnemyManager::Enemy2[2];
//CEnemy *CEnemyManager::Enemy2[1];
//CEnemy *CEnemyManager::Enemy2[0];


CEnemyManager::CEnemyManager()
{
	half = false;
	arrival = 20;
	group = 0;
	enemypattern = 1;
	enemymanagercount = 0;
	Enemy = new CEnemy();
	Enemy1 = new CEnemy();

	for (int i = 0; i < arrival; i++)
	{
		Enemy2[i] = new CEnemy();
	}
	
}

CEnemyManager::~CEnemyManager()
{
	
	delete Enemy;
	delete Enemy1;
	for (int i = 0; i < arrival; i++)
	{
		delete Enemy2[i];
	}
	
	
}

void CEnemyManager::Array()
{

}

void CEnemyManager::Update()
{

	switch (enemypattern)
	{
	case 0:
	{
			  //CEnemyManager::Enemy2[1]->Update(CEnemyManager::Enemy2[1]->p_x, CEnemyManager::Enemy2[1]->p_y);
			  //if (enemymanagercount >= 10)
				 // CEnemyManager::Enemy2[2]->Update(CEnemyManager::Enemy2[2]->p_x, CEnemyManager::Enemy2[2]->p_y);
			  //if (enemymanagercount >= 20)
				 // CEnemyManager::Enemy2[3]->Update(CEnemyManager::Enemy2[3]->p_x, CEnemyManager::Enemy2[3]->p_y);

			  //if (enemymanagercount >= 30)
				 // CEnemyManager::Enemy2[4]->Update(CEnemyManager::Enemy2[4]->p_x, CEnemyManager::Enemy2[4]->p_y);

			  //if (enemymanagercount >= 40)
				 // CEnemyManager::Enemy2[5]->Update(CEnemyManager::Enemy2[5]->p_x, CEnemyManager::Enemy2[5]->p_y);

			  //if (enemymanagercount >= 50)
				 // CEnemyManager::Enemy2[6]->Update(CEnemyManager::Enemy2[6]->p_x, CEnemyManager::Enemy2[6]->p_y);

			  //if (enemymanagercount >= 60)
				 // CEnemyManager::Enemy2[7]->Update(CEnemyManager::Enemy2[7]->p_x, CEnemyManager::Enemy2[7]->p_y);

			  //if (enemymanagercount >= 70)
				 // CEnemyManager::Enemy2[8]->Update(CEnemyManager::Enemy2[8]->p_x, CEnemyManager::Enemy2[8]->p_y);

			  //if (enemymanagercount >= 80)
				 // CEnemyManager::Enemy2[9]->Update(CEnemyManager::Enemy2[9]->p_x, CEnemyManager::Enemy2[9]->p_y);

			  //if (enemymanagercount >= 90)
				 // CEnemyManager::Enemy2[10]->Update(CEnemyManager::Enemy2[10]->p_x, CEnemyManager::Enemy2[10]->p_y);
			  
	}
		break;

	case 1:
	{

			  enemymanagercount++;
			  for (int i = 0; i < arrival; i++)
			  {
			  	
				  if (CEnemyManager::Enemy2[i] != nullptr){
					  if (enemymanagercount >= i * 20)
					  {
						  if (half == false && i >= arrival / 2)
						  {
							  CEnemyManager::Enemy2[i]->enemy1 = 7;
						  }
						  if (i == arrival - 1)
						  {
							  half = true;
						  }

						  CEnemyManager::Enemy2[i]->Update(CEnemyManager::Enemy2[i]->p_x, CEnemyManager::Enemy2[i]->p_y);
						  if (CEnemyManager::Enemy2[i]->enemy1 == 8)
						  {
							  if (i <= arrival / 2)
							  {

								  if (CEnemyManager::Enemy2[i]->p_x > -WIDTH / 2 + 60 + i * 40)
								  {
									  CEnemyManager::Enemy2[i]->p_x -= 2;
								  }
								  if (CEnemyManager::Enemy2[i]->p_x < -WIDTH / 2 + 60 + i * 40)
								  {
									  CEnemyManager::Enemy2[i]->p_x += 2;
								  }
								  if (CEnemyManager::Enemy2[i]->p_y > 250)
								  {
									  CEnemyManager::Enemy2[i]->p_y -= 2;
								  }
								  if (CEnemyManager::Enemy2[i]->p_y < 250)
								  {
									  CEnemyManager::Enemy2[i]->p_y += 2;
								  }
							  }
							  if (i >= 10/*arrival/2*/)
							  {
								  if (CEnemyManager::Enemy2[i]->p_x > -WIDTH / 2 + 60 + (arrival-1 - i)* 40)
								  {
									  CEnemyManager::Enemy2[i]->p_x -= 2;
								  }
								  if (CEnemyManager::Enemy2[i]->p_x < -WIDTH / 2 + 60 + (arrival-1 - i) * 40)
								  {
									  CEnemyManager::Enemy2[i]->p_x += 2;
								  }
								  if (CEnemyManager::Enemy2[i]->p_y > 200)
								  {
									  CEnemyManager::Enemy2[i]->p_y -= 2;
								  }
								  if (CEnemyManager::Enemy2[i]->p_y < 200)
								  {
									  CEnemyManager::Enemy2[i]->p_y += 2;
								  }
							  }
						  }

					  }
				  }
				  }

	}
		break;
	}

	
	//if (CEnemyManager::Enemy2[i]->p_x > -WIDTH / 2 + 60 + i * 40)
	//{
	//	CEnemyManager::Enemy2[i]->p_x -= 1;
	//}
	//if (CEnemyManager::Enemy2[i]->p_x < -WIDTH / 2 + 60 + i * 40)
	//{
	//	CEnemyManager::Enemy2[i]->p_x += 1;
	//}
	//if (CEnemyManager::Enemy2[i]->p_y > 150 + i * 40)
	//{
	//	CEnemyManager::Enemy2[i]->p_y -= 1;
	//}
	//if (CEnemyManager::Enemy2[i]->p_y < 150 + i * 40)
	//{
	//	CEnemyManager::Enemy2[i]->p_y += 1;
	//}



	//for (int i = 1; i < 11; i++)
	//{
	//	for (int time = 20; time > -1; time--)
	//	{
	//		
	//	}
	//	if ((enemymanagercount >= 21 && i == 1))
	//	CEnemyManager::Enemy2[i]->Update(CEnemyManager::Enemy2[i]->p_x , CEnemyManager::Enemy2[i]->p_y );
	//}
}

void CEnemyManager::Draw()
{
	

	//Enemy->Draw(i, i);

	for (int i = 0; i < arrival; i++)
	{
		//if (enemymanagercount >= 10)
		//if (enemymanagercount == i * 20)
		if (enemymanagercount >= i * 20)
		{

			if (CEnemyManager::Enemy2[i] != nullptr){
				CEnemyManager::Enemy2[i]->Draw(CEnemyManager::Enemy2[i]->p_x, CEnemyManager::Enemy2[i]->p_y);
			}
		}
	}
	//for (int i = 19; i > -1; i--)
	//{
	//	//Enemy->Draw(i, i);
	//	CEnemyManager::Enemy->Draw(CEnemyManager::Enemy->p_x -i, CEnemyManager::Enemy->p_y -i);
	//	//Enemy->Draw();
	//}

	//CEnemyManager::Enemy->Draw(CEnemyManager::Enemy->p_x , CEnemyManager::Enemy->p_y );
	//if (enemymanagercount >= 20)
	//	CEnemyManager::Enemy1->Draw(CEnemyManager::Enemy1->p_x, CEnemyManager::Enemy1->p_y);
}

void CEnemyManager::Main()
{
	
	Draw();
	Update();
}