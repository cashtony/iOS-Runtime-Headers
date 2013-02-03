/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface IUNowPlayingPortraitInfoOverlay : IUPortraitInfoOverlay <SKStoreProductViewControllerDelegate, MFMailComposeViewControllerDelegate> {
    id _actionSheetCompletionHandler;
    id _itemToShare;
}

- (void)_appDefaultsChanged:(id)arg1;
- (void)_appDefaultsChanged;
- (void)_buttonAvailabilityChanged:(id)arg1;
- (void)_delayedSeedGeniusForControls:(id)arg1;
- (void)controlsOverlay:(id)arg1 adjustShuffleAndRepeatTypeForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didClickMailPodcastLinkButtonForItem:(id)arg2;
- (unsigned int)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldDisableFastFowardAndRewindButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldDisableMailPodcastLinkButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldDisablePlaybackSpeedButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldHideMailPodcastLinkButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (void)controlsOverlayDidClickFastForwardButton:(id)arg1;
- (void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
- (void)controlsOverlayDidClickRewindButton:(id)arg1;
- (void)dealloc;
- (BOOL)hideGeniusButtonForPlaybackControls:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned int)arg2;
- (BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned int)arg2;
- (BOOL)playbackControlsDidTapGeniusButton:(id)arg1;
- (BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (unsigned int)repeatTypeForControlsOverlay:(id)arg1;
- (unsigned int)shuffleTypeForPlaybackControls:(id)arg1;

@end