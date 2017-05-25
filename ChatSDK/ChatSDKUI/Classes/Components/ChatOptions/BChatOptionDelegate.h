//
//  BChatOptionsDelegate.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 17/12/2016.
//
//

#ifndef BChatOptionDelegate_h
#define BChatOptionDelegate_h

@class RXPromise;
@class CLLocation;

@protocol PThread;

@protocol BChatOptionDelegate <NSObject>

-(UIViewController *) currentViewController;
-(void) chatOptionActionExecuted: (RXPromise *) promise;
-(void) reloadData;

-(RXPromise *) sendImageMessage: (UIImage *) image;
-(RXPromise *) sendVideoMessage: (NSData *) video withCoverImage: (UIImage *) coverImage;
-(RXPromise *) sendLocationMessage: (CLLocation *) location;
-(RXPromise *) sendStickerMessage: (NSString *) name;

@end

#endif /* BChatOptionsDelegate_h */
