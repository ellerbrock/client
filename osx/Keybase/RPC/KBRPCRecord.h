//
//  KBRPCRecord.h
//  Keybase
//
//  Created by Gabriel on 3/4/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KBRPCRecord : NSObject

- (void)recordMethod:(NSString *)method params:(NSArray *)params sessionId:(NSInteger)sessionId callback:(BOOL)callback;

@end

void KBConvertArrayTo(NSMutableArray *array);
void KBConvertArrayFrom(NSMutableArray *array);
typedef id (^KBCoverter)(id obj);
void KBConvertArray(NSMutableArray *array, Class clazz, KBCoverter converter);
void KBConvertDict(NSMutableDictionary *dict, Class clazz, KBCoverter converter);
id KBConvertObject(id item, Class clazz, KBCoverter converter);

