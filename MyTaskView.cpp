// MyTaskView.cpp : implementation of the CMyTaskView class
//

#include "stdafx.h"
#include "MyTask.h"

#include "MyTaskDoc.h"
#include "MyTaskView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyTaskView

IMPLEMENT_DYNCREATE(CMyTaskView, CView)

BEGIN_MESSAGE_MAP(CMyTaskView, CView)
	//{{AFX_MSG_MAP(CMyTaskView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyTaskView construction/destruction

CMyTaskView::CMyTaskView()
{
	// TODO: add construction code here

}

CMyTaskView::~CMyTaskView()
{
}

BOOL CMyTaskView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMyTaskView drawing

void CMyTaskView::OnDraw(CDC* pDC)
{
	CMyTaskDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	DisplayBoard(pDC,IDB_BOARD);
}

/////////////////////////////////////////////////////////////////////////////
// CMyTaskView printing

BOOL CMyTaskView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyTaskView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyTaskView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMyTaskView diagnostics

#ifdef _DEBUG
void CMyTaskView::AssertValid() const
{
	CView::AssertValid();
}

void CMyTaskView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyTaskDoc* CMyTaskView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyTaskDoc)));
	return (CMyTaskDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyTaskView message handlers
void CMyTaskView::DisplayBoard(CDC* pDC,UINT IDResource)
{
	CBitmap Bitmap;
	Bitmap.LoadBitmap(IDResource);//将位图装入内存
	CDC MemDC;
	MemDC.CreateCompatibleDC(pDC); //创建内存设备环境
	CBitmap *OldBitmap=MemDC.SelectObject(&Bitmap);
	BITMAP bm;                    //创建BITMAP结构变量
	Bitmap.GetBitmap(&bm);        //获取位图信息
	pDC->BitBlt(80,5,bm.bmWidth,bm.bmHeight,&MemDC,0,0,SRCCOPY);//输出位图
    pDC->SelectObject(OldBitmap);//恢复设备环境
	MemDC.DeleteDC();
}

void CMyTaskView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	m_pManager=&(GetDocument()->manager);
	m_pStatus=&(GetDocument()->status);
}

void CMyTaskView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(point.x>85 && point.y>9 && point.x<480 && point.y<400 && !m_pManager->over && !m_pManager->pause)
	{
		if(!m_pStatus->nWithComputer)
		{
			if(m_pStatus->next)
				
			{
				SetCursor(AfxGetApp()->LoadCursor(IDC_BLACK_HAND));
				m_pStatus->cursor=1;
			}
			else
			{
				SetCursor(AfxGetApp()->LoadCursor(IDC_WHITE_HAND));
				m_pStatus->cursor=2;
			}
		}
		else
		{
			if(m_pStatus->player[1].chessType==1)
			{
				SetCursor(AfxGetApp()->LoadCursor(IDC_WHITE_HAND));
				m_pStatus->cursor=2;
			}
			else
			{
				SetCursor(AfxGetApp()->LoadCursor(IDC_BLACK_HAND));
				m_pStatus->cursor=1;
			}
		}
	}
	else
		m_pStatus->cursor=0;
	CView::OnMouseMove(nFlags, point);
}

void CMyTaskView::OnSetting() 
{
	// TODO: Add your command handler code here
	CRightView *pRightView=((CMainFrame*)AfxGetApp()->m_pMainWnd)->pRightView;
	CSettingDlg setupDlg;
	if (setupDlg.DoModal()==IDOK)
	{
		UpdateData(true);
		m_pStatus->nWithComputer=setupDlg.nWithComputer;
		m_pStatus->sound=setupDlg.m_sound;
		
		if(m_pStatus->nWithComputer)
			m_pStatus->player[1].name=_T("电脑");
		if(!setupDlg.nYouFirst)
		{
			m_pStatus->player[0].chessType=1;
			m_pStatus->player[1].chessType=2;
		}
		else
		{
			m_pStatus->player[0].chessType=2;
			m_pStatus->player[1].chessType=1;
		}
	    pRightView->RefreshRightView();
	}
}

void CMyTaskView::OnUpdateSetting(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(m_pManager->over);//游戏进行中禁止使用菜单项	
}