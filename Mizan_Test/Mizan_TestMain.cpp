/***************************************************************
 * Name:      Mizan_TestMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Mizan ()
 * Created:   2016-06-14
 * Copyright: Mizan ()
 * License:
 **************************************************************/

#include "Mizan_TestMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Mizan_TestFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Mizan_TestFrame)
const long Mizan_TestFrame::ID_TEXTCTRL1 = wxNewId();
const long Mizan_TestFrame::ID_TEXTCTRL3 = wxNewId();
const long Mizan_TestFrame::ID_TEXTCTRL2 = wxNewId();
const long Mizan_TestFrame::ID_BUTTON1 = wxNewId();
const long Mizan_TestFrame::ID_STATICTEXT2 = wxNewId();
const long Mizan_TestFrame::ID_STATICTEXT3 = wxNewId();
const long Mizan_TestFrame::ID_STATICTEXT1 = wxNewId();
const long Mizan_TestFrame::idMenuQuit = wxNewId();
const long Mizan_TestFrame::idMenuAbout = wxNewId();
const long Mizan_TestFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Mizan_TestFrame,wxFrame)
    //(*EventTable(Mizan_TestFrame)
    //*)
END_EVENT_TABLE()

Mizan_TestFrame::Mizan_TestFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Mizan_TestFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(400,302));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("34"), wxPoint(40,32), wxSize(312,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, _("21"), wxPoint(40,80), wxSize(312,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _(" "), wxPoint(40,176), wxSize(312,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Addition"), wxPoint(40,128), wxSize(312,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("X="), wxPoint(8,40), wxSize(32,24), 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Y="), wxPoint(8,80), wxSize(32,24), 0, _T("ID_STATICTEXT3"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("X+Y="), wxPoint(8,184), wxSize(32,24), 0, _T("ID_STATICTEXT1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Mizan_TestFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Mizan_TestFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Mizan_TestFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Mizan_TestFrame::OnClose);
    //*)
}

Mizan_TestFrame::~Mizan_TestFrame()
{
    //(*Destroy(Mizan_TestFrame)
    //*)
}

void Mizan_TestFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Mizan_TestFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Mizan_TestFrame::OnClose(wxCloseEvent& event)
{
}

void Mizan_TestFrame::OnButton1Click(wxCommandEvent& event)
{
        long x=0, y=0;
        wxString res=wxT("");
        //if(TextCtrl1->GetValue().ToLong((&x)) and TextCtrl2->GetValue().ToLong((&y))){
                res<<x+y;
                TextCtrl3->SetValue(res);
        //}
        //else{
            //    wxMessageBox((wxT("There is an error!!\a")));
       // }

}
