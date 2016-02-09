/*
 *  CylinderAnimation.cpp
 *  Cirque du Soleil Dress
 *
 *  Created by Imanol Gomez on 09/02/16.
 *
 */


#include "ofMain.h"

#include "CylinderAnimation.h"

#include "AppManager.h"




CylinderAnimation::CylinderAnimation(): m_numFrames(0), m_currentFrame(0)
{
	//Intentionally left empty
}


CylinderAnimation::~CylinderAnimation()
{
    ofLogNotice() <<"CylinderAnimation::Destructor" ;
}


void CylinderAnimation::setup()
{
    this->setupNumFrames();
}


void CylinderAnimation::setupNumFrames()
{
    float fps =  24;
    float animationTimeInS = 1;

    m_numFrames = animationTimeInS*fps;

}


void CylinderAnimation::update()
{

    m_currentFrame = (m_currentFrame + 1)%m_numFrames;
    //ofLogNotice() <<"CylinderAnimation::update-> current frame " << m_currentFrame;
}

void CylinderAnimation::draw()
{
   ///Draw
}
