#import "ASTSetupPageStyles.h"

@interface ASTSetupSettings : NSObject
@property (nonatomic, assign) ASTSetupPageStyle style;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *titleDescription;
@property (nonatomic, retain) NSString *primaryButtonLabel;
@property (nonatomic, retain) NSString *secondaryButtonLabel;
@property (nonatomic, retain) NSString *backButtonLabel;
@property (nonatomic, retain) UIColor *colorTheme;
@property (nonatomic, retain) NSString *mediaURL;
@property (nonatomic, copy) void (^primaryBlock)(void);
@property (nonatomic, copy) void (^secondaryBlock)(void);
@property (nonatomic, assign) BOOL disableBack;
@end
