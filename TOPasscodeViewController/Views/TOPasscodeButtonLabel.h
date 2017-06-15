//
//  TOKeypadNumberLabel.h
//  TOPasscodeViewControllerExample
//
//  Created by Tim Oliver on 6/10/17.
//  Copyright © 2017 Timothy Oliver. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TOPasscodeButtonLabel : UIView

// The strings of both labels
@property (nonatomic, copy) NSString *numberString;
@property (nonatomic, copy, nullable) NSString *letteringString;

// The color of both labels
@property (nonatomic, strong) UIColor *textColor;

// The label views
@property (nonatomic, readonly) UILabel *numberLabel;
@property (nonatomic, readonly) UILabel *letteringLabel;

// Has initial default values   
@property (nonatomic, assign) CGFloat letteringCharacterSpacing;
@property (nonatomic, assign) CGFloat letteringVerticalSpacing;

@end

NS_ASSUME_NONNULL_END
