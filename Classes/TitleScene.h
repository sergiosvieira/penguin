#ifndef __TITLE_SCENE__
#define __TITLE_SCENE__

#include "cocos2d.h"

class TitleScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(TitleScene);
};

#endif /** __TITLE_SCENE__ **/
