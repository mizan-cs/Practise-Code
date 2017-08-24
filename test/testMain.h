/***************************************************************
 * Name:      testMain.h
 * Purpose:   Defines Application Frame
 * Author:    Mizan ()
 * Created:   2016-05-27
 * Copyright: Mizan ()
 * License:
 **************************************************************/

#ifndef TESTMAIN_H
#define TESTMAIN_H

//(*Headers(testFrame)
#include <wx/menu.h>
#include <wx/statline.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class testFrame: public wxFrame
{
    public:

        testFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~testFrame();

    private:

        //(*Handlers(testFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(testFrame)
        static const long ID_STATICLINE1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(testFrame)
        wxStatusBar* StatusBar1;
        wxStaticLine* StaticLine1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TESTMAIN_H
