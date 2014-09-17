//
//  CCViewController.h
//  World Map Challenge Solution- V131
//
//  Created by Sakshi Jain on 17/09/14.
//
//

#import <UIKit/UIKit.h>

@interface CCViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong,nonatomic) UIImageView *globalImageView;

@end
