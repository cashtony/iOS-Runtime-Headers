/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABGroupWrapper, UISearchDisplayController, UISearchBar, UIView, UIViewController, ABServerSearchDataSource, <ABStyleProvider>;

@interface ABServerSearchController : ABContentController <ABServerSearchDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, UISearchBarDelegate> {
    struct { 
        unsigned int showingCardForPerson : 1; 
        unsigned int wasKeyboardShowing : 1; 
    ABServerSearchDataSource *_dataSource;
    } _flags;
    UIViewController *_parentViewController;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
}

@property(retain) ABServerSearchDataSource * dataSource;
@property(readonly) UIView * navigationTitleView;
@property(retain) ABGroupWrapper * selectedGroupWrapper;
@property(readonly) <ABStyleProvider> * styleProvider;

- (void)_applyStylesToTableView:(id)arg1;
- (void)_clearSearchResults;
- (void)_deselectAllRowsWithAnimation:(BOOL)arg1;
- (BOOL)_shouldDeactivateOnCancelButtonClicked;
- (id)contentView;
- (id)dataSource;
- (void)dealloc;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (void)makeMainTableViewVisible;
- (id)navigationTitleView;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (id)selectedGroupWrapper;
- (void)serverSearchDataSource:(id)arg1 didSelectPerson:(void*)arg2 cell:(id)arg3;
- (void)serverSearchDataSource:(id)arg1 didUpdateResultsWithLocalizedError:(id)arg2;
- (id)serverSearchDataSourceStyleProvider:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSelectedGroupWrapper:(id)arg1;
- (id)styleProvider;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end