///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESLookupError.h"
#import "DBFILESRestoreError.h"
#import "DBFILESWriteError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBFILESRestoreError

@synthesize pathLookup = _pathLookup;
@synthesize pathWrite = _pathWrite;

#pragma mark - Constructors

- (instancetype)initWithPathLookup:(DBFILESLookupError *)pathLookup {
  self = [super init];
  if (self) {
    _tag = DBFILESRestoreErrorPathLookup;
    _pathLookup = pathLookup;
  }
  return self;
}

- (instancetype)initWithPathWrite:(DBFILESWriteError *)pathWrite {
  self = [super init];
  if (self) {
    _tag = DBFILESRestoreErrorPathWrite;
    _pathWrite = pathWrite;
  }
  return self;
}

- (instancetype)initWithInvalidRevision {
  self = [super init];
  if (self) {
    _tag = DBFILESRestoreErrorInvalidRevision;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBFILESRestoreErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

- (DBFILESLookupError *)pathLookup {
  if (![self isPathLookup]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBFILESRestoreErrorPathLookup, but was %@.", [self tagName]];
  }
  return _pathLookup;
}

- (DBFILESWriteError *)pathWrite {
  if (![self isPathWrite]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBFILESRestoreErrorPathWrite, but was %@.", [self tagName]];
  }
  return _pathWrite;
}

#pragma mark - Tag state methods

- (BOOL)isPathLookup {
  return _tag == DBFILESRestoreErrorPathLookup;
}

- (BOOL)isPathWrite {
  return _tag == DBFILESRestoreErrorPathWrite;
}

- (BOOL)isInvalidRevision {
  return _tag == DBFILESRestoreErrorInvalidRevision;
}

- (BOOL)isOther {
  return _tag == DBFILESRestoreErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBFILESRestoreErrorPathLookup:
    return @"DBFILESRestoreErrorPathLookup";
  case DBFILESRestoreErrorPathWrite:
    return @"DBFILESRestoreErrorPathWrite";
  case DBFILESRestoreErrorInvalidRevision:
    return @"DBFILESRestoreErrorInvalidRevision";
  case DBFILESRestoreErrorOther:
    return @"DBFILESRestoreErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBFILESRestoreErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBFILESRestoreErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBFILESRestoreErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBFILESRestoreErrorSerializer

+ (NSDictionary *)serialize:(DBFILESRestoreError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isPathLookup]) {
    jsonDict = [[DBFILESLookupErrorSerializer serialize:valueObj.pathLookup] mutableCopy];
    jsonDict[@".tag"] = @"path_lookup";
  } else if ([valueObj isPathWrite]) {
    jsonDict = [[DBFILESWriteErrorSerializer serialize:valueObj.pathWrite] mutableCopy];
    jsonDict[@".tag"] = @"path_write";
  } else if ([valueObj isInvalidRevision]) {
    jsonDict[@".tag"] = @"invalid_revision";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBFILESRestoreError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"path_lookup"]) {
    DBFILESLookupError *pathLookup = [DBFILESLookupErrorSerializer deserialize:valueDict[@"path_lookup"]];
    return [[DBFILESRestoreError alloc] initWithPathLookup:pathLookup];
  } else if ([tag isEqualToString:@"path_write"]) {
    DBFILESWriteError *pathWrite = [DBFILESWriteErrorSerializer deserialize:valueDict[@"path_write"]];
    return [[DBFILESRestoreError alloc] initWithPathWrite:pathWrite];
  } else if ([tag isEqualToString:@"invalid_revision"]) {
    return [[DBFILESRestoreError alloc] initWithInvalidRevision];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBFILESRestoreError alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
