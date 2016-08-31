///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGMemberSelector.h"
#import "DBSHARINGRemoveFileMemberArg.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGRemoveFileMemberArg

#pragma mark - Constructors

- (instancetype)initWithFile:(NSString *)file member:(DBSHARINGMemberSelector *)member {
  [DBStoneValidators stringValidator:@(1) maxLength:nil pattern:@"((/|id:).*|nspath:[^:]*:[^:]*)"](file);

  self = [super init];
  if (self) {
    _file = file;
    _member = member;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGRemoveFileMemberArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGRemoveFileMemberArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGRemoveFileMemberArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGRemoveFileMemberArgSerializer

+ (NSDictionary *)serialize:(DBSHARINGRemoveFileMemberArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"file"] = valueObj.file;
  jsonDict[@"member"] = [DBSHARINGMemberSelectorSerializer serialize:valueObj.member];

  return jsonDict;
}

+ (DBSHARINGRemoveFileMemberArg *)deserialize:(NSDictionary *)valueDict {
  NSString *file = valueDict[@"file"];
  DBSHARINGMemberSelector *member = [DBSHARINGMemberSelectorSerializer deserialize:valueDict[@"member"]];

  return [[DBSHARINGRemoveFileMemberArg alloc] initWithFile:file member:member];
}

@end
