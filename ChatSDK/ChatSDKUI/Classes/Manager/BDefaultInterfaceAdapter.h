//
//  BDefaultInterfaceAdapter.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 14/09/2016.
//
//

#import <Foundation/Foundation.h>
#import <ChatSDKCore/PInterfaceFacade.h>

@class BPrivateThreadsViewController;
@class BPublicThreadsViewController;
@class BContactsViewController;
@class UIViewController;
@class BFriendsListViewController;
@class BChatViewController;
@class BSearchViewController;

@protocol PThread;
@protocol PUser;

@interface BDefaultInterfaceAdapter : NSObject<PInterfaceFacade> {
    UIViewController * _privateThreadsViewController;
    id<PChatOptionsHandler> _chatOptionsHandler;
    NSMutableArray * _additionalChatOptions;
    NSMutableArray * _additionalTabBarViewControllers;
    NSMutableDictionary * _additionalSearchViewControllers;
}

@end
