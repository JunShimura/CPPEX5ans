#pragma once
struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
};

//��}�֔���֐�
bool isSendable( //����邩���肷��
	BOX* box		//BOX�̃|�C���^
);
void getVolumeSurface(BOX* box);