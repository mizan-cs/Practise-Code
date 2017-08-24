/***************************************************************
 * Name:      testApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Mizan ()
 * Created:   2016-05-27
 * Copyright: Mizan ()
 * License:
 **************************************************************/

#include "testApp.h"

//(*AppHeaders
#include "testMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(testApp);

bool testApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	testFrame* Frame = new testFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
