//
//  SongKickSyncController.h
//  GigRadio
//
//  Created by Michael Forrest on 16/08/2014.
//  Copyright (c) 2014 Good To Hear. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
@interface SongKickSyncController : NSObject
/**
 *  Refresh data (with sensible defaults)
 */
-(void)refreshWithLocation:(CLLocation*)location date:(NSDate*)date completion:(void(^)())completionBlock;
-(void)refreshVenue:(NSInteger)venueId completion:(void(^)())completionBlock;

@property (nonatomic, strong) NSOperationQueue * syncOperations;
@end