/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListViewController : UIViewController <TVAppTemplateImpressionable, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, _TVListViewCellDelegate> {
    float  _cachedCellWidth;
    NSMutableArray * _cachedListChildViewControllers;
    NSDictionary * _cachedListItemLockupHeightsBySection;
    IKCollectionElement * _collectionElement;
    UICollectionView * _collectionView;
    <_TVListViewControllerDelegate> * _delegate;
    BOOL  _floatingHeader;
    IKViewElement * _headerElement;
    UIViewController * _headerViewController;
    NSIndexPath * _lastFocusedIndexPath;
    NSIndexPath * _lastPreviewedIndexPath;
    NSIndexPath * _pendingPreviewIndexPath;
    UIViewController * _previewController;
    IKViewElement * _previewElement;
    BOOL  _previewUpdated;
    IKViewElement * _relatedContentElement;
    BOOL  _relatedContentElementValid;
    NSIndexPath * _secondCellIndexPath;
    BOOL  _secondIndexPathFocused;
    _TVShadowViewElement * _shadowCollectionElement;
    BOOL  _updateAutoHighlight;
    _TVListWrappingView * _wrappingView;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_shadowCollectionElementForCollectionElement:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedViewControllerForElement:(id)arg1;
- (void)_delayedUpdatePreview;
- (void)_dispatchEventOfType:(unsigned int)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })_expectedCellSizeForElement:(id)arg1 inSectionIndex:(int)arg2;
- (struct CGSize { float x1; float x2; })_expectedHeaderCellSizeForElement:(id)arg1;
- (id)_previewControllerWithElement:(id)arg1 previewElement:(id*)arg2;
- (void)_registerCellClassesInListView:(id)arg1;
- (id)_relatedContentElementForIndexPath:(id)arg1;
- (BOOL)_relatedElementIsGridAtIndexPath:(id)arg1;
- (void)_scrollToPreferredFocusView;
- (void)_updateCellMetrics;
- (void)_updateHeaderView;
- (BOOL)_updateListWithoutReloadingWithCollectionElement:(id)arg1;
- (void)_updateViewLayout;
- (void)_updatedPreviewWithItemAtIndexPath:(id)arg1;
- (id)_viewControllerForElement:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (BOOL)listCell:(id)arg1 shouldAppearSelectedForPreviouslyFocusedView:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)templateControllerDidUpdateFocusFromView:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end