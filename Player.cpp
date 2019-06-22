// Player.cpp: implementation of the CPlayer class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyTask.h"
#include "Player.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPlayer::CPlayer()
{

}

CPlayer::~CPlayer()
{

}

CPlayer& CPlayer::operator=(CPlayer& p)
{
	chessType=p.chessType;
	name=p.name;
	score=p.score;
	winner=p.winner;
	return* this;
}
void CPlayer::Serialize(CArchive &ar)
{
	if(ar.IsStoring())
	{
		ar<<chessType;
		ar<<name;
		ar<<score;
		ar<<winner;
	}
	else
	{
		ar>>chessType;
		ar>>name;
		ar>>score;
		ar>>winner;
	}
}
