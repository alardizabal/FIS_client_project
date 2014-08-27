//
//  AALInterestsViewController.h
//  InterestsScrollView
//
//  Created by Albert Lardizabal on 7/29/14.
//  Copyright (c) 2014 Albert Lardizabal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AALInterestsViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic) NSMutableArray *selectedInterests;

- (void) showCategories;
-(UIImage *)getImageWithName:(NSString *)name;

@end
