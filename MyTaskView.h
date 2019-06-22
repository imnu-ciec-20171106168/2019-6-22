// MyTaskView.h : interface of the CMyTaskView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYTASKVIEW_H__CF69FABE_1A8F_4F8C_9CAB_5A1D001F32F1__INCLUDED_)
#define AFX_MYTASKVIEW_H__CF69FABE_1A8F_4F8C_9CAB_5A1D001F32F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "Manager.h"
#include "player.h"
#include "computer.h"
#include "chess.h"
#include "status.h"
#include "MyTaskDoc.h"
class CMyTaskView : public CView
{
protected: // create from serialization only
	CMyTaskView();
	DECLARE_DYNCREATE(CMyTaskView)

// Attributes
public:
	CMyTaskDoc* GetDocument();
	CManager *m_pManager;
	CPlayer* m_player;
	CComputer computer;
	CChess* m_pChess;
	CStatus* m_pStatus;
	bool nIsFirst;

// Operations
public:
	void DisplayBoard(CDC* pDC,UINT IDRes);
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyTaskView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyTaskView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyTaskView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnSetting();
	afx_msg void OnUpdateSetting(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MyTaskView.cpp
inline CMyTaskDoc* CMyTaskView::GetDocument()
   { return (CMyTaskDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYTASKVIEW_H__CF69FABE_1A8F_4F8C_9CAB_5A1D001F32F1__INCLUDED_)
