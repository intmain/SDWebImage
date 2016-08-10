//
//  SDWebImageDownloader+Authkey.h
//  IphoneAgit
//
//  Created by Leonard on 2016. 8. 8..
//  Copyright © 2016년 Kakao Corp. All rights reserved.
//

#import "SDWebImageDownloader.h"

@interface SDWebImageDownloader (Authkey)

- (void)setHeaderAuthKeyWithURL:(NSURL *)url;

@end
