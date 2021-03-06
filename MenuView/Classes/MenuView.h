//
//  MenuView.h
//  MenuView
//


#import <UIKit/UIKit.h>

@class MenuView;
@protocol MenuViewDelegate
- (void) MenuViewDelegateMethod: (MenuView *) sender;
@end

@interface MenuView : UIView <UITableViewDelegate, UITableViewDataSource,UIGestureRecognizerDelegate>
{
    NSString *animationDirection;
    UIImageView *imgView;
}
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIFont *menuFont;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) id <MenuViewDelegate> delegate;
-(void)hideMenu;
- (id)showMenu:(UIButton *)b :(CGFloat *)height :(NSArray *)arr ;
@end

