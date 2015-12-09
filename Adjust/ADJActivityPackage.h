//
//  ADJActivityPackage.h
//  Adjust
//
//  Created by Christian Wellenbrock on 2013-07-03.
//  Copyright (c) 2013 adjust GmbH. All rights reserved.
//

#import "ADJActivityKind.h"
#import "ADJEvent.h"

@interface ADJActivityPackage : NSObject <NSCoding>

// data
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *clientSdk;
@property (nonatomic, retain) NSDictionary *parameters;

// logs
@property (nonatomic, assign) ADJActivityKind activityKind;
@property (nonatomic, copy) NSString *suffix;

// callbacks
@property (nonatomic, copy) ADJFinishActivity successDelegate;
@property (nonatomic, copy) ADJFinishActivity failureDelegate;

- (NSString *)extendedString;
- (NSString *)successMessage;
- (NSString *)failureMessage;

@end
