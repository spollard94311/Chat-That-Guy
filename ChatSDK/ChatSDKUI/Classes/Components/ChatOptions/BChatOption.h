//
//  BChatOption.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 17/12/2016.
//
//

#import <Foundation/Foundation.h>
#import <ChatSDKCore/PChatOption.h>
#import <ChatSDKUI/PChatOptionsHandler.h>

@interface BChatOption : NSObject<PChatOption>

@property (nonatomic, readwrite, weak) id<PChatOptionsHandler> parent;

@end
