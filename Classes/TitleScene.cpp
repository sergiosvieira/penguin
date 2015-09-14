#include "TitleScene.h"
#include "MainScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"


USING_NS_CC;

using namespace cocostudio::timeline;


Scene* TitleScene::createScene()
{
	auto scene = Scene::create();
	auto layer = TitleScene::create();
	scene->addChild(layer);
	return scene;
}

bool TitleScene::init()
{
	if (Layer::init() == false)
	{
		return false;
	}
	auto rootNode = CSLoader::createNode("TitleScene.csb");
	ui::Button* button = (ui::Button*)rootNode->getChildByName("start_button");
	if (button != nullptr)
	{
		button->addClickEventListener([=](cocos2d::Ref* a_ref) 
		{
			CCDirector::getInstance()->replaceScene(MainScene::createScene());
		});
	}
	addChild(rootNode);
	return true;
}