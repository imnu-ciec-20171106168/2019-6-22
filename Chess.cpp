// Chess.cpp: implementation of the CChess class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyTask.h"
#include "Chess.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CChess::CChess()
{
	type=0;
	num=0;
}

CChess::~CChess()
{

}

CChess& CChess::operator=(CChess& p)
{
	num=p.num;
	type=p.type;
	pointB=p.pointB;
	pointW=p.pointW;
	return* this;
}

void CChess::Serialize(CArchive &ar)
{
	if(ar.IsStoring())
	{
		ar<<num;
		ar<<type;
		ar<<pointB;
		ar<<pointW;
	}
	else
	{
		ar>>num;
		ar>>type;
		ar>>pointB;
		ar>>pointW;
	}
}


