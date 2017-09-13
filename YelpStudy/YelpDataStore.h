//
//  YelpDataStore.h
//  YelpStudy
//
//  Created by Xi Jin on 8/17/17.
//  Copyright © 2017 Xi Jin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "YelpDataModel.h"

@import CoreLocation;

@interface YelpDataStore : NSObject

@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;

@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end
