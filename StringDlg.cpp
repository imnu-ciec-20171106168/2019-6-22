// StringDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyTask.h"
#include "StringDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStringDlg dialog


CStringDlg::CStringDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStringDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStringDlg)
	nWithComputer = -1;
	nYouFirst = -1;
	//}}AFX_DATA_INIT
}


void CStringDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStringDlg)
	DDX_Radio(pDX, IDC_RADIO_2PLAYER, nWithComputer);
	DDX_Radio(pDX, IDC_RADIO_YOU_FIRST, nYouFirst);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStringDlg, CDialog)
	//{{AFX_MSG_MAP(CStringDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStringDlg message handlers
void CStringDlg::OnRadio2player() 
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_RADIO_YOU_FIRST,"选手1");
	SetDlgItemText(IDC_RADIO_COMPUTER_FIRST,"选手2");
}

void CStringDlg::OnRadioWithcomputer() 
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_RADIO_YOU_FIRST,"你执黑先下");
	SetDlgItemText(IDC_RADIO_COMPUTER_FIRST,"电脑执黑先下");	
}
