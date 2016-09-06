//
//  CYZFoxExtensionBaseEvent.h
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/08/02.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import <CYZFox/CYZFox.h>
#import "CYZFoxExtensionProtocols.h"

/**
 * base event class, implements protocols of all medias
 */
@interface CYZFoxExtensionBaseEvent : CYZFoxEvent

/**
 * Add user identifier for event.
 * @param userId        Specified user identifier
 */
-(void) setUserId:(nonnull NSString*) userId;


/**
 * put JSON Key-Value to event
 * @param value Value of JSON
 * @param key Key of JSON
 */
-(void) putJsonValue:(nonnull id) value forKey:(nonnull NSString*) key;

@end
