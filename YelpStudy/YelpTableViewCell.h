//
//  YelpTableViewCell.h
//  YelpStudy
//
//  Created by Xi Jin on 8/16/17.
//  Copyright © 2017 Xi Jin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"


@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
