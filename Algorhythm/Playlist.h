//
//  Playlist.h
//  Algorhythm
//
//  Created by Mark Serrano on 4/4/16.
//  Copyright © 2016 Mark Serrano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;

- (UIColor *)rgbColorFromDictionary:(NSDictionary *)colorDictionary;


@end
