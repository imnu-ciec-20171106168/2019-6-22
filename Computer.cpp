// Computer.cpp: implementation of the CComputer class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyTask.h"
#include "Computer.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CComputer::CComputer()
{
	cgrade=0;
	pgrade=0;
	mat=0;
	nat=0;
	mde=0;
	nde=0;
	for(int i=0;i<15;i++)         
		for(int j=0;j<15;j++)
		{
			cgrades[i][j]=0;
			pgrades[i][j]=0;
		}		
}

CComputer::~CComputer()
{

}
