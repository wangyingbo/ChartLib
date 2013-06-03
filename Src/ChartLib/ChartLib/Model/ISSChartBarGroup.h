//
//  ISSCharBarGroup.h
//  ChartLib
//
//  Created by Sword Zhou on 5/30/13.
//  Copyright (c) 2013 Sword Zhou. All rights reserved.
//

#import "ITTBaseModelObject.h"

@class ISSChartBar;
@class ISSChartBarProperty;

@interface ISSChartBarGroup : ITTBaseModelObject

@property (nonatomic, assign) NSInteger index;
@property (nonatomic, assign) CGFloat   width;
@property (nonatomic, retain) NSArray   *bars;

@end
