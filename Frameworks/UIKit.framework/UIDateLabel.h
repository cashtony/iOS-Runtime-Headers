/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIDateLabel : UILabel 
{
    double _date;
    NSInteger _dateKey;
    BOOL _boldForAllLocales;
}

@property BOOL boldForAllLocales;

+ (id)defaultFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (NSInteger)_dateKey;
- (void)_invalidateDateKey;
- (void)setFont:(id)arg1;
- (void)setFontWithoutInvalidation:(id)arg1;
- (void)_updateDateStrings;
- (id)text;
- (id)font;
- (id)timeDesignator;
- (void)sizeToFit;
- (void)setDate:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;
- (id)timeDesignatorFont;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_dateLabelCache;
- (BOOL)boldForAllLocales;
- (void)setBoldForAllLocales:(BOOL)arg1;

@end