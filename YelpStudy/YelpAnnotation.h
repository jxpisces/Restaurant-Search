//
//  YelpAnnotation.h
//  YelpStudy
//
//  Created by Xi Jin on 8/17/17.
//  Copyright © 2017 Xi Jin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "YelpDataModel.h"


@interface YelpAnnotation : NSObject <MKAnnotation>

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@property (nonatomic, readonly, copy) NSString *title;

@property (nonatomic, readonly, copy) NSString *subtitle;

@property (nonatomic, readonly) YelpDataModel *dataModel;

- (instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle dataModel:(YelpDataModel *)dataModel;

+ (NSArray <YelpAnnotation *>*)buildAnnotationArrayFromDataArray:(NSArray<YelpDataModel *> *)dataArray;


@end
