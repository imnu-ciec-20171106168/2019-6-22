; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CStringDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyTask.h"
LastPage=0

ClassCount=7
Class1=CMyTaskApp
Class2=CMyTaskDoc
Class3=CMyTaskView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDD_RIGHT_VIEW
Class5=CAboutDlg
Resource3=IDD_SETTING_DLG
Class6=CRightView
Class7=CStringDlg
Resource4=IDR_MAINFRAME

[CLS:CMyTaskApp]
Type=0
HeaderFile=MyTask.h
ImplementationFile=MyTask.cpp
Filter=N

[CLS:CMyTaskDoc]
Type=0
HeaderFile=MyTaskDoc.h
ImplementationFile=MyTaskDoc.cpp
Filter=N

[CLS:CMyTaskView]
Type=0
HeaderFile=MyTaskView.h
ImplementationFile=MyTaskView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=MyTask.cpp
ImplementationFile=MyTask.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_GAMEBACK
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_SPLIT
Command18=ID_APP_ABOUT
Command19=IDC_BEGIN_BUTTON
Command20=IDC_PAUSE_BUTTON
Command21=IDC_CONTINUE_BUTTON
Command22=ID_SETTING
CommandCount=22

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=IDC_BEGIN_BUTTON
Command5=IDC_PAUSE_BUTTON
Command6=IDC_CONTINUE_BUTTON
Command7=ID_FILE_CLOSE
Command8=ID_GAMEBACK
Command9=ID_SETTING
Command10=ID_APP_ABOUT
CommandCount=10

[DLG:IDD_RIGHT_VIEW]
Type=1
Class=CRightView
ControlCount=19
Control1=IDC_SETTING,button,1342242816
Control2=IDC_STATIC,static,1342308352
Control3=IDC_COMBO_P1NAME,combobox,1344340226
Control4=IDC_COMBO_P2NAME,combobox,1344340226
Control5=IDC_P1NAME,static,1342308352
Control6=IDC_P2NAME,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC_PICTURE1,static,1342177294
Control9=IDC_STATIC_PICTURE2,static,1342177294
Control10=IDC_NEXT_PICTRUE,static,1342177294
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC_TIME,static,1342308352
Control13=IDC_BEGIN_BUTTON,button,1342242816
Control14=IDC_PAUSE_BUTTON,button,1342242816
Control15=IDC_CONTINUE_BUTTON,button,1342242816
Control16=IDC_FILE_CLOSE,button,1342242816
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352

[CLS:CRightView]
Type=0
HeaderFile=RightView.h
ImplementationFile=RightView.cpp
BaseClass=CFormView
Filter=D
LastObject=CRightView
VirtualFilter=VWC

[DLG:IDD_SETTING_DLG]
Type=1
Class=CStringDlg
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342308359
Control4=IDC_RADIO_2PLAYER,button,1342373897
Control5=IDC_RADIO_WITHCOMPUTE,button,1342242825
Control6=IDC_STATIC,button,1342308359
Control7=IDC_RADIO_YOU_FIRST,button,1342373897
Control8=RADIO_COMPUTER_FIRST,button,1342242825
Control9=IDC_STATIC,static,1342308352

[CLS:CStringDlg]
Type=0
HeaderFile=StringDlg.h
ImplementationFile=StringDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_RADIO_YOU_FIRST

