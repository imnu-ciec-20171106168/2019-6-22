// MyTaskDoc.h : interface of the CMyTaskDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYTASKDOC_H__682FEAA0_1AED_4B90_9728_A4499C778D49__INCLUDED_)
#define AFX_MYTASKDOC_H__682FEAA0_1AED_4B90_9728_A4499C778D49__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Manager.h"
#include "status.h"
#include <afxtempl.h>  //使用MFC类模板
class CMyTaskDoc : public CDocument
{
protected: // create from serialization only
	CMyTaskDoc();
	DECLARE_DYNCREATE(CMyTaskDoc)

// Attributes
public:
	CManager manager;
	CStatus status;
	CTypedPtrArray<CObArray,CStatus*> m_StatusArray;//存放对象指针的动态数组
	CTypedPtrArray<CObArray,CManager*> m_ManagerArray;
// Operations
public:
	void AddManager();//向动态数组中添加对象的指针
	void AddStatus();//向动态数组中添加对象的指针
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyTaskDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyTaskDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyTaskDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYTASKDOC_H__682FEAA0_1AED_4B90_9728_A4499C778D49__INCLUDED_)
