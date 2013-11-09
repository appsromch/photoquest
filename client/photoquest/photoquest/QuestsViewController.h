//
//  QuestsViewController.h
//  photoquest
//
//  Created by Matt Portner on 7/5/13.
//  Copyright (c) 2013 Randomay Designs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sys/semaphore.h>
#import "QuestManager.h"
#import "Quest.h"
#import "DailyQuestBoxView.h"
#import "DefaultQuestBoxView.h"
#import "DailyQuest.h"
#import "QuestDetailViewController.h"

@interface QuestsViewController : UIViewController <QuestManagerDelegate>

@end
