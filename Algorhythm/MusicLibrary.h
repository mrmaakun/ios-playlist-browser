//
//  MusicLibrary.h
//  Algorhythm
//
//  Created by Mark Serrano on 4/4/16.
//  Copyright © 2016 Mark Serrano. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;


@end
