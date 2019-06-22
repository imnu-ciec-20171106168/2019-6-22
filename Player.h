// Player.h: interface for the CPlayer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PLAYER_H__B1263291_A3DF_4B0B_8BD9_784D0FDB510B__INCLUDED_)
#define AFX_PLAYER_H__B1263291_A3DF_4B0B_8BD9_784D0FDB510B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPlayer :public CObject 
{
public:
	CPlayer();
	virtual ~CPlayer();
public:
	CString name;
	int chessType;//执黑为1,白为2
	int score;
	int winner;//1胜,0负,2平
public:
	CPlayer& operator=(CPlayer&);
    virtual void Serialize(CArchive &ar);//类CPlayer的序列化函数
	DECLARE_SERIAL(CPlayer)//声明序列化类CPlayer
};

#endif // !defined(AFX_PLAYER_H__B1263291_A3DF_4B0B_8BD9_784D0FDB510B__INCLUDED_)
