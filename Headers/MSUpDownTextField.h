#import "NSTextField.h"

#import "MSUpDownProtocol.h"
#import "NSTextViewDelegate.h"

@class MSUpDownController, NSString;

@interface MSUpDownTextField : NSTextField <NSTextViewDelegate, MSUpDownProtocol>
{
    BOOL _hasMinimum;
    BOOL _hasMaximum;
    id _refreshDelegate;
    MSUpDownController *_upDownController;
    double _ownMinimum;
    double _ownMaximum;
}

@property(nonatomic) double ownMaximum; // @synthesize ownMaximum=_ownMaximum;
@property(nonatomic) double ownMinimum; // @synthesize ownMinimum=_ownMinimum;
@property(nonatomic) BOOL hasMaximum; // @synthesize hasMaximum=_hasMaximum;
@property(nonatomic) BOOL hasMinimum; // @synthesize hasMinimum=_hasMinimum;
@property(retain, nonatomic) MSUpDownController *upDownController; // @synthesize upDownController=_upDownController;
@property(nonatomic) __weak id refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)keyUp:(id)arg1;
- (id)maximum;
- (id)minimum;
- (double)incrementValue;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
