//
//  EnvironmentManager.h
//  Dopamine
//
//  Created by Lars Fröder on 10.01.24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EnvironmentManager : NSObject

+ (instancetype)sharedManager;

@property (nonatomic) NSData *bootManifestHash;

- (BOOL)isArm64e;
- (NSString *)versionSupportString;
- (BOOL)installedThroughTrollStore;
- (NSString *)accessibleKernelPath;

- (BOOL)isPACBypassRequired;
- (BOOL)isPPLBypassRequired;
@end

NS_ASSUME_NONNULL_END
