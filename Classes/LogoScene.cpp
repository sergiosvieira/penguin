#include "LogoScene.h"
#include "TitleScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* LogoScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = LogoScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

void LogoScene::onEnter()
{
	Layer::onEnter();
	this->scheduleOnce(schedule_selector(LogoScene::onFinishSplash), 2.f);
}

void LogoScene::onFinishSplash(float dt)
{
	CCDirector::getInstance()->replaceScene(TitleScene::createScene());
}

// on "init" you need to initialize your instance
bool LogoScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }    
    auto rootNode = CSLoader::createNode("LogoScene.csb");
    addChild(rootNode);
    return true;
}
