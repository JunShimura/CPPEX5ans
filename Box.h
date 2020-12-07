#pragma once
struct BOX {	//箱の定義
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
};

//宅急便判定関数
bool isSendable( //送れるか判定する
	BOX* box		//BOXのポインタ
);
void getVolumeSurface(BOX* box);