//
//  KBLoginView.h
//  Keybase
//
//  Created by Gabriel on 2/9/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KBAppKit.h"
#import "KBRPC.h"
#import "KBContentView.h"

@class KBLoginView;

@protocol KBLoginViewDelegate
- (void)loginView:(KBLoginView *)loginView didLoginWithStatus:(KBRGetCurrentStatusRes *)status;
@end

@interface KBLoginView : KBContentView <NSTextFieldDelegate>
@property (weak) id<KBLoginViewDelegate> delegate;

@property KBTextField *usernameField;
@property KBButton *loginButton;
@property KBButton *signupButton;

- (void)viewDidAppear:(BOOL)animated;

- (void)setUser:(KBRUser *)user;

- (void)selectSigner:(KBRSelectSignerRequestParams *)params completion:(MPRequestCompletion)completion;

@end
