/***************************************************************
 * Name:      Mizan_TestApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Mizan ()
 * Created:   2016-06-14
 * Copyright: Mizan ()
 * License:
 **************************************************************/

#include "Mizan_TestApp.h"

//(*AppHeaders
#include "Mizan_TestMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Mizan_TestApp);

bool Mizan_TestApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Mizan_TestFrame* Frame = new Mizan_TestFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
