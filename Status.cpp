// Status.cpp: implementation of the CStatus class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyTask.h"
#include "Status.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CStatus::CStatus()
{
	nWithComputer=1;//与计算机对弈
	next=1;//黑方先落子
	cursor=1;//自定义黑方落子光标
	count=0;
	player[0].name=_T(" ");
	player[0].chessType=1;//选手执黑先下
	player[1].name=_T("电脑");
	player[1].chessType=2;//计算机执白后下
	//棋盘上225个落子点位的窗口坐标及棋盘坐标
	for(int i=0;i<15;i++)
		for(int j=0;j<15;j++)
		{
			chess[i][j].pointB.x=j;
			chess[i][j].pointB.y=i;
			chess[i][j].pointW.x=j*26+85;
			chess[i][j].pointW.y=i*26+9;			
		}
}

CStatus::~CStatus()
{

}

CStatus& CStatus::operator=(CStatus& p)
{
	int i,j;
	for(i=0;i<15;i++)
		for(j=0;j<15;j++)
			chess[i][j]=p.chess[i][j];
    for(i=0;i<2;i++)
		player[i]=p.player[i];
     nWithComputer=p.nWithComputer;
	 cursor=p.cursor;
	 next=p.next;
	 count=p.count;
	 return* this;
}

void CStatus::Serialize(CArchive &ar)
{
	if(ar.IsStoring())//保存对象的数据
	{
	int i,j;
	for(i=0;i<15;i++)
		for(j=0;j<15;j++)
			chess[i][j].Serialize(ar);
    for(i=0;i<2;i++)
		player[i].Serialize(ar);
     ar<<nWithComputer<<cursor<<next<<count;
	}
	else
	{
	int i,j;
	for(i=0;i<15;i++)
		for(j=0;j<15;j++)
			chess[i][j].Serialize(ar);
    for(i=0;i<2;i++)
		player[i].Serialize(ar);
     ar>>nWithComputer>>cursor>>next>>count;
	}
}
