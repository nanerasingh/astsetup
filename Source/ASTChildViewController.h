#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>
#import "HighlightButton.h"
#import "ASTSetupPageStyles.h"
#import "ASTSetupSettings.h"
#import "ASTSourceDelegate.h"

@interface ASTChildViewController : UIViewController
@property (nonatomic, retain) UILabel *bigTitle;
@property (nonatomic, retain) UILabel *titleDescription;
@property (nonatomic, retain) AVPlayer *videoPlayer;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, retain) UIView *mediaView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) HighlightButton *otherButton;
@property (nonatomic, retain) HighlightButton *nextButton;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (nonatomic, retain) HighlightButton *backButton;
@property (nonatomic, assign) ASTSetupPageStyle style;
@property (nonatomic, retain) UIColor *colorTheme;

@property (nonatomic, assign) NSInteger index;
@property (nonatomic, weak) id <ASTSourceDelegate> delegate;
@property (nonatomic, retain) ASTSetupSettings *source;

- (instancetype)initWithSource:(ASTSetupSettings *) source;
-(void) sessionLoaded;
@end
