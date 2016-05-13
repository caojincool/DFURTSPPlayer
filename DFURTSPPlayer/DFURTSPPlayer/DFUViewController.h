//
//  DFUViewController.h
//  DFURTSPPlayer
//
//  Created by Bogdan Furdui on 3/7/13.
//  Copyright (c) 2013 Bogdan Furdui. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RTSPPlayer;

@interface DFUViewController : UIViewController
{
    IBOutlet UIImageView *imageView;
	IBOutlet UILabel *label;
	IBOutlet UIButton *playButton;
    RTSPPlayer *video;
	float lastFrameTime;
}

@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) IBOutlet UILabel *label;
@property (nonatomic, strong) IBOutlet UIButton *playButton;
@property (nonatomic, strong) RTSPPlayer *video;

- (IBAction)playButtonAction:(id)sender;
- (IBAction)showTime:(id)sender;

@end
