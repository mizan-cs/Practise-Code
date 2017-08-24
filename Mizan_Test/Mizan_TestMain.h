/***************************************************************
 * Name:      Mizan_TestMain.h
 * Purpose:   Defines Application Frame
 * Author:    Mizan ()
 * Created:   2016-06-14
 * Copyright: Mizan ()
 * License:
 **************************************************************/

#ifndef MIZAN_TESTMAIN_H
#define MIZAN_TESTMAIN_H

//(*Headers(Mizan_TestFrame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Mizan_TestFrame: public wxFrame
{
    public:

        Mizan_TestFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Mizan_TestFrame();

    private:

        //(*Handlers(Mizan_TestFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnColourPickerCtrl2ColourChanged(wxColourPickerEvent& event);
        //*)

        //(*Identifiers(Mizan_TestFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Mizan_TestFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MIZAN_TESTMAIN_H
