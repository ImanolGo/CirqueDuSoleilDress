/*
 *  CylinderAnimation.h
 *  Cirque du Soleil Dress
 *
 *  Created by Imanol Gomez on 09/02/16.
 *
 */


#pragma once


//========================== class CylinderAnimation ==============================
//============================================================================
/** \class CylinderAnimation CylinderAnimation.h
 *	\brief Class representing cylinder like animations
 *	\details it creates and updates the cylinder animations
 */

#include "LedsManager.h"

class CylinderAnimation
{

    public:

        //! Constructor
        CylinderAnimation();

        //! Destructor
        ~CylinderAnimation();

        //! Setup the Audio Equalizer
        void setup();

        //! Update the Audio Equalizer
        void update();

        //! Draw the Audio Equalizer
        void draw();

    private:

        void setupNumFrames();

    private:

        int m_numFrames;
        int m_currentFrame;
};
