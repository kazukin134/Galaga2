﻿//
// アプリ雛形
// ※ファイル分割対応版
//

//#include "lib/appEnv.hpp"
#include "Main.h"
#include "Player.h"
#include "Enemy.h"
#include "background.h"
#include "Etc.h"
#include "EnemyManager.h"
//#include "Shot.h"


// ↑他の.cppファイルでは、必要なヘッダファイルを
//   適時インクルードする事

AppEnv *app_env;


// 
// メインプログラム
// 
int main() {
	// アプリウインドウの準備
	//AppEnv app_env(Window::WIDTH, Window::HEIGHT,false, false);
	app_env = new AppEnv(Window::WIDTH, Window::HEIGHT, false, false);

	CPlayer Player;
	CEnemy Enemy;
	CBackground Background;
	CEtc Etc;
	CEnemyManager EnemyManager;
	//CShot Shot;

	while (1) {
		// アプリウインドウが閉じられたらプログラムを終了
		if (!app_env->isOpen()) return 0;

		// 描画準備
		app_env->setupDraw();
		Player.Update();
		Player.Draw_player();
		EnemyManager.Main();
		//Enemy.Draw();
		//Enemy.Move();
		Background.draw_background();
		Etc.HP_move();
		//Shot.Play_shot();

		//
		// 描画処理はここでおこなう
		// 


		// 画面更新
		app_env->update();
	}

	delete app_env;
	// アプリ終了
}
