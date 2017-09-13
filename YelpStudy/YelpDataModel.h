//
//  YelpDataModel.h
//  YelpStudy
//
//  Created by Xi Jin on 8/15/17.
//  Copyright (c) 2017 Xi Jin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YelpDataModel : NSObject

@property (nonatomic, strong) NSString *businessId;
@property (nonatomic, assign) NSInteger reviewCount;
@property (nonatomic, strong) NSString *categories;

@property (nonatomic, strong) UIImage *ratingImage;

@property (nonatomic, strong) NSString *displayPhone;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, strong) NSString *price;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *displayAddress;

@property (nonatomic, assign) CGFloat distance;
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, assign) CGFloat latitude;
@property (nonatomic, assign) CGFloat longitude;

- (id)initWithDictionary:(NSDictionary *)dictionary;

+ (NSArray <YelpDataModel *>*)buildDataModelArrayFromDictionaryArray:(NSArray<NSDictionary *> *)dictArray;

@end

