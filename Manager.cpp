// Manager.cpp: implementation of the CManager class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyTask.h"
#include "Manager.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CManager::CManager()
{
	int i,j,k,count=0;
	p1win=false;//选手未获胜
	p2win=false;
	over=true;//游戏未开始
	pause=false;
	//选手的获胜组合中没有棋子
	for(i=0;i<=1;i++)
		for(j=0;j<572;j++)
			win[i][j]=0;
    //棋盘上的每颗棋子是否在获胜组合中
	for(i=0;i<15;i++)
		for(j=0;j<15;j++)
			for(k=0;k<572;k++)
			{
				p1table[i][j][k] = false;
				p2table[i][j][k] = false;
			}
    //水平方向
	for(i=0;i<15;i++)        
		for(j=0;j<11;j++)
		{
			for(k=0;k<5;k++)
			{
				p1table[j+k][i][count] = true;
				p2table[j+k][i][count] = true;
			}
			count++;
		}    
    //垂直方向
	for(i=0;i<15;i++)       
		for(j=0;j<11;j++)
		{
			for(k=0;k<5;k++)
			{
				p1table[i][j+k][count] = true;
				p2table[i][j+k][count] = true;
			}
			count++;
		}
    //右斜方向
	for(i=0;i<11;i++)        
		for(j=0;j<11;j++)
		{
			for(k=0;k<5;k++)
			{
				p1table[j+k][i+k][count] = true;
				p2table[j+k][i+k][count] = true;
			}
			count++;
		}
    //左斜方向
	for(i=0;i<11;i++)          
		for(j=14;j>=4;j--)
		{
			for(k=0;k<5;k++)
			{
				p1table[j-k][i+k][count] = true;
				p2table[j-k][i+k][count] = true;
			}
			count++;
		}
}

CManager::~CManager()
{

}

CManager& CManager::operator=(CManager&p)
{
	int i,j,k;
	for(i=0;i<15;i++)
		for(j=0;j<15;j++)
			for(k=0;k<572;k++)
			{
				p1table[i][j][k]=p.p1table[i][j][k];
				p2table[i][j][k]=p.p2table[i][j][k];
			}
    for(i=0;i<2;i++)
		for(k=0;k<572;k++)
			win[i][k]=p.win[i][k];
     p1win=p.p1win;
	 p2win=p.p2win;
	 over=p.over;
	 return* this;
}
void CManager::Serialize(CArchive &ar)
{
	if(ar.IsStoring())//保存对象的数据
	{
		int i,j,k;
		for(i=0;i<15;i++)
			for(j=0;j<15;j++)
				for(k=0;k<572;k++)
				{
					ar<<p1table[i][j][k];
					ar<<p2table[i][j][k];
				}
		for(i=0;i<2;i++)
			for(k=0;k<572;k++)
				ar<<win[i][k];
		ar<<p1win<<p2win<<over<<pause;
	}
	else//读出对象的数据
	{
		int i,j,k;
		for(i=0;i<15;i++)
			for(j=0;j<15;j++)
				for(k=0;k<572;k++)
				{
					ar>>p1table[i][j][k];
					ar>>p2table[i][j][k];
				}
		for(i=0;i<2;i++)
			for(k=0;k<572;k++)
				ar>>win[i][k];
		ar>>p1win>>p2win>>over>>pause;
	}
}