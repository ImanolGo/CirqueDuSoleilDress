/*
 *  DressManager.h
 *  Circle du Soleil Dress
 *
 *  Created by Imanol Gomez on 09/02/16.
 *
 */


#pragma once

#include "Manager.h"


//========================== class DressManager ==============================
//============================================================================
/** \class DressManager DressManager.h
 *	\brief Class managing the costume visuals
 *	\details it creates and updates the costume visuals
 */


class DressManager: public Manager
{
    public:

        //! Constructor
        DressManager();

        //! Destructor
        ~DressManager();

        //! Setup the Vase Manager
        void setup();

        //! Update the Vase Manager
        void update();

        //! Draw the Vase Manager
        void draw();


    private:

        //! Draw all Leds
        void drawLeds();

    private:



};
