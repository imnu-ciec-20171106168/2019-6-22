// Manager.h: interface for the CManager class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MANAGER_H__F810CA03_5BD2_4A80_9F1B_A61CB48A4A96__INCLUDED_)
#define AFX_MANAGER_H__F810CA03_5BD2_4A80_9F1B_A61CB48A4A96__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "status.h"
#include "chess.h"
class CManager : public CObject  
{
public:
	CManager();
	virtual ~CManager();
public:
	BOOL p1table[15][15][572],p2table[15][15][572];//p1为黑方,p2为白方
	int win[2][572];//0为黑方,1为白方 
	BOOL p1win,p2win,over,pause;//p1为黑方,p2为白方
public:
	void TwoPlayerGame(CDC *pDC, CPoint point,CStatus* status,CChess *chess);
	void WithComputerGame(CDC *pDC, CChess* playerChess,CChess* computerChess,CStatus* status);
	void ChangePlayerStatus(CChess* chess);
	void Judge(CStatus& status);
	CManager& operator=(CManager&);
    virtual void Serialize(CArchive &ar);//类CManager的序列化函数
	DECLARE_SERIAL(CManager)//声明序列化类CManager
};

#endif // !defined(AFX_MANAGER_H__F810CA03_5BD2_4A80_9F1B_A61CB48A4A96__INCLUDED_)
