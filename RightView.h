#if !defined(AFX_RIGHTVIEW_H__8F355D0B_00B0_49BA_AC11_24A7EFCCCDAE__INCLUDED_)
#define AFX_RIGHTVIEW_H__8F355D0B_00B0_49BA_AC11_24A7EFCCCDAE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RightView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRightView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CRightView : public CFormView
{
protected:
	CRightView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CRightView)

// Form Data
public:
	//{{AFX_DATA(CRightView)
	enum { IDD = IDD_RIGHT_VIEW };
	CStatic	m_pic3;
	CStatic	m_pic2;
	CStatic	m_pic1;
	CStatic	m_ctime;
	CComboBox	m_cP2name;
	CComboBox	m_cP1name;
	CString	m_p1name;
	CString	m_p2name;
	CString	m_name1;
	CString	m_name2;
	CString	m_time;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRightView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CRightView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CRightView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RIGHTVIEW_H__8F355D0B_00B0_49BA_AC11_24A7EFCCCDAE__INCLUDED_)
