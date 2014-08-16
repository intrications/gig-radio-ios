//
//  SoundCloudArtistTracksRequest.h
//  GigRadio
//
//  Created by Michael Forrest on 16/08/2014.
//  Copyright (c) 2014 Good To Hear. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SoundCloudArtistTracksRequest : NSURLRequest
+(instancetype)requestWithUserId:(NSInteger)userId;
@end
