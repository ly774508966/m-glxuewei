#pragma once
#include "mglTypes.h"

#define XUEWEI_FILE_NAME "xwsj.lj"  //Ѩλ�����ļ�
#define XUEWEI_NUM 361

//#define  EDIT_XUEWEI_MODE

class CTexture;

struct JINGLUO
{
	int jingluo_id; //����������
	char* jingluo_cname;  //��������(����)
	int jingluo_start;
	int jingluo_count;
	point4f jingluo_color;
	JINGLUO():jingluo_id(-1),jingluo_count(0){}

};

struct XUEWEI  // Ѩλ�������ݽṹ
{
	float world_x,world_y,world_z;  //Ѩλ����world_x,world_y,world_z,
	float mx,my;  //�����ƶ�����mx,my,
	float dx;  //�����Сdx,
	float jiaodu_x,jiaodu_y;  //������ת�Ƕ�jiaodu_x,jiaodu_y
	int xuewei_id; //Ѩλ���
	char xuewei_ename[100];  //Ѩλ��(Ӣ��)
	char xuewei_cname[100];  //Ѩλ��(����)
	int jingluo_id; //����������
	char jingluo_cname[100];  //��������(����)
	char shiyi[500];  //Ѩλ����
	char gongneng[500]; //Ѩλ����
	char weizhi[500];//Ѩλλ��
};

class CRectNode;
class CLineNode;
class CXueWeiLoader
{
public:
	XUEWEI* xuewei;  //Ѩλ����������500
	JINGLUO* jingluo;

	void SetJingluo(XUEWEI& xuewei);
	point4f GetJingluoColor(int jingluo_id);
	CTexture* GetJingluoColorTex();
	bool Load(CRectNode* Rects, CLineNode* Lines);
	virtual ~CXueWeiLoader();
};