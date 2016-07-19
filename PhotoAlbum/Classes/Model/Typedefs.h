//
//  Typedefs.h
//  PhotoAlbum
//
//  Created by ZhouQian on 16/6/24.
//  Copyright © 2016年 ZhouQian. All rights reserved.
//

#ifndef Typedefs_h
#define Typedefs_h


typedef NS_ENUM(NSInteger, ZQAlbumType) {
    ZQAlbumTypePhoto,
    ZQAlbumTypeVideo,
    ZQAlbumTypeVideoAndPhoto
};

#define _LocalizedString(x) \
NSLocalizedStringFromTableInBundle(x, @"ZQPhotoFetcher",  [NSBundle bundleWithPath:[[[NSBundle bundleForClass:[ZQAlbumNavVC class]] resourcePath] stringByAppendingPathComponent:@"PA.bundle"]], nil)

#define ZQAlbumBarTintColor HEXCOLOR(0x7ecc1e)
#endif /* Typedefs_h */
