#ifndef __MAIN_SCENE__
#define __MAIN_SCENE__

#include "cocos2d.h"


class MainScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MainScene);
};

#endif /** __MAIN_SCENE__ **/
