/*
 *  DressManager.cpp
 *  Circle du Soleil Dress
 *
 *  Created by Imanol Gomez on 09/02/16.
 *
 */


#include "ofMain.h"

#include "DressManager.h"
#include "AppManager.h"


DressManager::DressManager(): Manager()
{
	//Intentionally left empty
}


DressManager::~DressManager()
{
    ofLogNotice() <<"DressManager::Destructor" ;
}


void DressManager::setup()
{
	if(m_initialized)
		return;

    ofLogNotice() <<"DressManager::initialized" ;

	Manager::setup();

}

void DressManager::update()
{

}


void DressManager::draw()
{
    this->drawLeds();
}

void DressManager::drawLeds()
{
    float max = 100;
    auto ledVector = AppManager::getInstance().getLedsManager().getLeds();
    for (auto led: ledVector) {
        auto pos = led->getPosition();

        ofPushMatrix();
            ofTranslate(pos*100);
            led->draw();
        ofPopMatrix();
    }
}
