///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGMemberAction.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGMemberAction

#pragma mark - Constructors

- (instancetype)initWithLeaveACopy {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionLeaveACopy;
  }
  return self;
}

- (instancetype)initWithMakeEditor {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionMakeEditor;
  }
  return self;
}

- (instancetype)initWithMakeOwner {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionMakeOwner;
  }
  return self;
}

- (instancetype)initWithMakeViewer {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionMakeViewer;
  }
  return self;
}

- (instancetype)initWithMakeViewerNoComment {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionMakeViewerNoComment;
  }
  return self;
}

- (instancetype)initWithRemove {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionRemove;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBSHARINGMemberActionOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isLeaveACopy {
  return _tag == DBSHARINGMemberActionLeaveACopy;
}

- (BOOL)isMakeEditor {
  return _tag == DBSHARINGMemberActionMakeEditor;
}

- (BOOL)isMakeOwner {
  return _tag == DBSHARINGMemberActionMakeOwner;
}

- (BOOL)isMakeViewer {
  return _tag == DBSHARINGMemberActionMakeViewer;
}

- (BOOL)isMakeViewerNoComment {
  return _tag == DBSHARINGMemberActionMakeViewerNoComment;
}

- (BOOL)isRemove {
  return _tag == DBSHARINGMemberActionRemove;
}

- (BOOL)isOther {
  return _tag == DBSHARINGMemberActionOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBSHARINGMemberActionLeaveACopy:
    return @"DBSHARINGMemberActionLeaveACopy";
  case DBSHARINGMemberActionMakeEditor:
    return @"DBSHARINGMemberActionMakeEditor";
  case DBSHARINGMemberActionMakeOwner:
    return @"DBSHARINGMemberActionMakeOwner";
  case DBSHARINGMemberActionMakeViewer:
    return @"DBSHARINGMemberActionMakeViewer";
  case DBSHARINGMemberActionMakeViewerNoComment:
    return @"DBSHARINGMemberActionMakeViewerNoComment";
  case DBSHARINGMemberActionRemove:
    return @"DBSHARINGMemberActionRemove";
  case DBSHARINGMemberActionOther:
    return @"DBSHARINGMemberActionOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGMemberActionSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGMemberActionSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGMemberActionSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGMemberActionSerializer

+ (NSDictionary *)serialize:(DBSHARINGMemberAction *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isLeaveACopy]) {
    jsonDict[@".tag"] = @"leave_a_copy";
  } else if ([valueObj isMakeEditor]) {
    jsonDict[@".tag"] = @"make_editor";
  } else if ([valueObj isMakeOwner]) {
    jsonDict[@".tag"] = @"make_owner";
  } else if ([valueObj isMakeViewer]) {
    jsonDict[@".tag"] = @"make_viewer";
  } else if ([valueObj isMakeViewerNoComment]) {
    jsonDict[@".tag"] = @"make_viewer_no_comment";
  } else if ([valueObj isRemove]) {
    jsonDict[@".tag"] = @"remove";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBSHARINGMemberAction *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"leave_a_copy"]) {
    return [[DBSHARINGMemberAction alloc] initWithLeaveACopy];
  } else if ([tag isEqualToString:@"make_editor"]) {
    return [[DBSHARINGMemberAction alloc] initWithMakeEditor];
  } else if ([tag isEqualToString:@"make_owner"]) {
    return [[DBSHARINGMemberAction alloc] initWithMakeOwner];
  } else if ([tag isEqualToString:@"make_viewer"]) {
    return [[DBSHARINGMemberAction alloc] initWithMakeViewer];
  } else if ([tag isEqualToString:@"make_viewer_no_comment"]) {
    return [[DBSHARINGMemberAction alloc] initWithMakeViewerNoComment];
  } else if ([tag isEqualToString:@"remove"]) {
    return [[DBSHARINGMemberAction alloc] initWithRemove];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBSHARINGMemberAction alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
