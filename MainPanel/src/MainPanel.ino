//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//  Description:
//    This is the control code for the large panel of the emergency party button
//
//  Authors: Mike Kapuscik, Dan Loman
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

#include "TestPanel.h"
#include "LaunchPanel.h"
#include "PartyModePanel.h"
#include "DialPanel.h"

TestPanel panel;

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void setup()
{
  Serial.begin(9600);
  panel.setupPanel();
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void loop()
{
  panel.testMode();
}
