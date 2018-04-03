//
//  InviteCustomLabel.h
//  
//
//  Created by ruiting on 16-8-6.
//  Copyright (c) 2016年 ruiting. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum
{
	VerticalAlignmentTop = 0, // default
	VerticalAlignmentMiddle,
	VerticalAlignmentBottom,
} VerticalAlignment;
@interface SRCustomLabel : UILabel


{
@private
	VerticalAlignment _verticalAlignment;
}

@property (nonatomic) VerticalAlignment verticalAlignment;

@end
