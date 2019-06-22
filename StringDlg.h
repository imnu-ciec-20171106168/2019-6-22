#if !defined(AFX_STRINGDLG_H__3E1FF1A2_95D7_45F0_A67F_AE48CC770F6E__INCLUDED_)
#define AFX_STRINGDLG_H__3E1FF1A2_95D7_45F0_A67F_AE48CC770F6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StringDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStringDlg dialog

class CStringDlg : public CDialog
{
// Construction
public:
	CStringDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CStringDlg)
	enum { IDD = IDD_SETTING_DLG };
	int		nWithComputer;
	int		nYouFirst;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStringDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CStringDlg)
		// NOTE: the ClassWizard will add member functions here
	afx_msg void OnRadio2player();
	afx_msg void OnRadioWithcomputer();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STRINGDLG_H__3E1FF1A2_95D7_45F0_A67F_AE48CC770F6E__INCLUDED_)

