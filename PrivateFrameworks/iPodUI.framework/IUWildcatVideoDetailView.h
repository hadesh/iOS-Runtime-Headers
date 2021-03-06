/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUWildcatVideoDetailViewDelegate>, IULiveReflectionView, IUPosterImageView, IUVideoTitleView, UIColor, UINavigationBar, UIView;

@interface IUWildcatVideoDetailView : UIView {
    UIColor *_blackColor;
    <IUWildcatVideoDetailViewDelegate> *_delegate;
    float _desiredPosterHeightFactor;
    UIView *_dividingLine;
    UINavigationBar *_navBar;
    IUPosterImageView *_posterImageView;
    IULiveReflectionView *_posterReflectionView;
    UIColor *_reflectionEndColor;
    UIColor *_reflectionStartColor;
    UIView *_segmentedView;
    IUVideoTitleView *_videoTitleView;
}

@property <IUWildcatVideoDetailViewDelegate> * delegate;
@property float desiredPosterHeightFactor;
@property(retain) UIView * dividingLine;
@property(retain) UINavigationBar * navBar;
@property(retain) IUPosterImageView * posterImageView;
@property(retain) IULiveReflectionView * posterReflectionView;
@property(retain) UIView * segmentedView;
@property(retain) IUVideoTitleView * videoTitleView;

- (void)dealloc;
- (id)delegate;
- (float)desiredPosterHeightFactor;
- (id)dividingLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)navBar;
- (id)posterImageView;
- (id)posterReflectionView;
- (id)segmentedView;
- (void)setDelegate:(id)arg1;
- (void)setDesiredPosterHeightFactor:(float)arg1;
- (void)setDividingLine:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setPosterImageView:(id)arg1;
- (void)setPosterReflectionView:(id)arg1;
- (void)setSegmentedView:(id)arg1;
- (void)setVideoTitleView:(id)arg1;
- (id)videoTitleView;

@end
