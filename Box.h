#pragma once
struct BOX {	// Ìè`
	double x;	//
	double y;	//³
	double z;	//s
	double volume;	//ÌÏ
	double surface; //\ÊÏ
};

//î}Ö»èÖ
bool isSendable( //êé©»è·é
	BOX* box		//BOXÌ|C^
);
void getVolumeSurface(BOX* box);