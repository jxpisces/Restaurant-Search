//
//  MapTableViewCell.m
//  YelpStudy
//
//  Created by Xi Jin on 8/18/17.
//  Copyright © 2017 Xi Jin. All rights reserved.
//

#import "MapTableViewCell.h"
@import MapKit;
#import "YelpAnnotation.h"

@interface  MapTableViewCell()

@property (weak, nonatomic) IBOutlet MKMapView *mapView;


@end

@implementation MapTableViewCell


- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel
{
    CLLocationCoordinate2D loc = CLLocationCoordinate2DMake(dataModel.latitude, dataModel.longitude);
    
    NSString *subtitle = [NSString stringWithFormat:@"%@ - %@",dataModel.categories,dataModel.displayAddress];
    
    YelpAnnotation *annotation = [[YelpAnnotation alloc] initWithCoordinate:loc title:dataModel.name subtitle:subtitle dataModel:dataModel];
    
    [self.mapView addAnnotation:annotation];
    
    MKCoordinateRegion viewRegion = MKCoordinateRegionMakeWithDistance(loc, 500, 500);
    MKCoordinateRegion adjustedRegion = [self.mapView regionThatFits:viewRegion];
    
    [self.mapView setRegion:adjustedRegion animated:YES];
    self.mapView.showsUserLocation = YES;
    [self.mapView setCenterCoordinate:loc];
}



- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
