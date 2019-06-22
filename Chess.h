// Chess.h: interface for the CChess class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHESS_H__6D1D851C_6CF9_486E_99F8_583D1546FF38__INCLUDED_)
#define AFX_CHESS_H__6D1D851C_6CF9_486E_99F8_583D1546FF38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CChess : public CObject
{
public:
	CChess();
	virtual ~CChess();
public:
	CPoint pointW;//窗口位置
	CPoint pointB;//棋盘位置
	int type;//1为黑棋、2为白棋、0为空
	int num;//落子顺序号，空子为0
public:
	CPoint PointToStonePos(CPoint point);
	CPoint PointToStonePos(int m,int n);
	void DisplayStone(CDC* pDC,UINT IDResource,CPoint point);
	CChess& operator=(CChess&);
    virtual void Serialize(CArchive &ar);//类CChess的序列化函数
	DECLARE_SERIAL(CChess)//声明序列化类CChess
};

#endif // !defined(AFX_CHESS_H__6D1D851C_6CF9_486E_99F8_583D1546FF38__INCLUDED_)
