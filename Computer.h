// Computer.h: interface for the CComputer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPUTER_H__14689D64_3F8F_4CE6_9669_BECEA561E822__INCLUDED_)
#define AFX_COMPUTER_H__14689D64_3F8F_4CE6_9669_BECEA561E822__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Manager.h"
#include "status.h"
#include "Chess.h"
class CComputer
{
public:
	CComputer();
	virtual ~CComputer();
public:
	int cgrade,pgrade,mat,nat,mde,nde;
	int cgrades[15][15],pgrades[15][15];
	CChess* chess;
public:
	CChess* ComputerTurn(CManager* manager,CStatus* status);
};

#endif // !defined(AFX_COMPUTER_H__14689D64_3F8F_4CE6_9669_BECEA561E822__INCLUDED_)
