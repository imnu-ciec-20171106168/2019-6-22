// Status.h: interface for the CStatus class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STATUS_H__828C1437_87F0_49C1_B98E_E19DDEFADCA5__INCLUDED_)
#define AFX_STATUS_H__828C1437_87F0_49C1_B98E_E19DDEFADCA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Chess.h"
#include "Player.h"
class CStatus :public CObject
{
public:
	CStatus();
	virtual ~CStatus();
public:
	CPlayer player[2];
	int nWithComputer;//与计算机为1,否则为0
	int cursor;//1为黑、2为白、0为标准
	int next;//下一步落子操作，0为白、1为黑
	int count;//落子顺序号
	CChess chess[15][15];
public:
	CStatus& operator=(CStatus&);
    virtual void Serialize(CArchive &ar);//类CStatus的序列化函数
	DECLARE_SERIAL(CStatus)//声明序列化类CStatus
};

#endif // !defined(AFX_STATUS_H__828C1437_87F0_49C1_B98E_E19DDEFADCA5__INCLUDED_)
