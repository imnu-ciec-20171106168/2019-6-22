// RightView.cpp : implementation file
//

#include "stdafx.h"
#include "MyTask.h"
#include "RightView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRightView

IMPLEMENT_DYNCREATE(CRightView, CFormView)

CRightView::CRightView()
	: CFormView(CRightView::IDD)
{
	//{{AFX_DATA_INIT(CRightView)
	m_p1name = _T("");
	m_p2name = _T("");
	m_name1 = _T("");
	m_name2 = _T("");
	m_time = _T("");
	//}}AFX_DATA_INIT
}

CRightView::~CRightView()
{
}

void CRightView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRightView)
	DDX_Control(pDX, IDC_NEXT_PICTRUE, m_pic3);
	DDX_Control(pDX, IDC_STATIC_PICTRE2, m_pic2);
	DDX_Control(pDX, IDC_STATIC_PICTURE1, m_pic1);
	DDX_Control(pDX, IDC_STATIC_TIME, m_ctime);
	DDX_Control(pDX, IDC_COMBO_P2NAME, m_cP2name);
	DDX_Control(pDX, IDC_COMBO_P1NAME, m_cP1name);
	DDX_CBString(pDX, IDC_COMBO_P1NAME, m_p1name);
	DDX_CBString(pDX, IDC_COMBO_P2NAME, m_p2name);
	DDX_Text(pDX, IDC_P1NAME, m_name1);
	DDX_Text(pDX, IDC_P2NAME, m_name2);
	DDX_Text(pDX, IDC_STATIC_TIME, m_time);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRightView, CFormView)
	//{{AFX_MSG_MAP(CRightView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRightView diagnostics

#ifdef _DEBUG
void CRightView::AssertValid() const
{
	CFormView::AssertValid();
}

void CRightView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRightView message handlers
