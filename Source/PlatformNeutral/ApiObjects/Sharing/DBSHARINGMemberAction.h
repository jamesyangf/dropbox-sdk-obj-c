///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGMemberAction;

#pragma mark - API Object

///
/// The MemberAction union.
///
/// Actions that may be taken on members of a shared folder.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGMemberAction : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGMemberActionTag enum type represents the possible tag states with which the
/// DBSHARINGMemberAction union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGMemberActionTag) {
  /// Allow the member to keep a copy of the folder when removing.
  DBSHARINGMemberActionLeaveACopy,

  /// Make the member an editor of the folder.
  DBSHARINGMemberActionMakeEditor,

  /// Make the member an owner of the folder.
  DBSHARINGMemberActionMakeOwner,

  /// Make the member a viewer of the folder.
  DBSHARINGMemberActionMakeViewer,

  /// Make the member a viewer of the folder without commenting permissions.
  DBSHARINGMemberActionMakeViewerNoComment,

  /// Remove the member from the folder.
  DBSHARINGMemberActionRemove,

  /// (no description).
  DBSHARINGMemberActionOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGMemberActionTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of LeaveACopy.
///
/// About the LeaveACopy tag state: Allow the member to keep a copy of the folder when removing.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithLeaveACopy;

///
/// Initializes union class with tag state of MakeEditor.
///
/// About the MakeEditor tag state: Make the member an editor of the folder.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithMakeEditor;

///
/// Initializes union class with tag state of MakeOwner.
///
/// About the MakeOwner tag state: Make the member an owner of the folder.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithMakeOwner;

///
/// Initializes union class with tag state of MakeViewer.
///
/// About the MakeViewer tag state: Make the member a viewer of the folder.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithMakeViewer;

///
/// Initializes union class with tag state of MakeViewerNoComment.
///
/// About the MakeViewerNoComment tag state: Make the member a viewer of the folder without
/// commenting permissions.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithMakeViewerNoComment;

///
/// Initializes union class with tag state of Remove.
///
/// About the Remove tag state: Remove the member from the folder.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithRemove;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBSHARINGMemberAction instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value LeaveACopy.
///
/// @return Whether the union's current tag state has value LeaveACopy.
///
- (BOOL)isLeaveACopy;

///
/// Retrieves whether the union's current tag state has value MakeEditor.
///
/// @return Whether the union's current tag state has value MakeEditor.
///
- (BOOL)isMakeEditor;

///
/// Retrieves whether the union's current tag state has value MakeOwner.
///
/// @return Whether the union's current tag state has value MakeOwner.
///
- (BOOL)isMakeOwner;

///
/// Retrieves whether the union's current tag state has value MakeViewer.
///
/// @return Whether the union's current tag state has value MakeViewer.
///
- (BOOL)isMakeViewer;

///
/// Retrieves whether the union's current tag state has value MakeViewerNoComment.
///
/// @return Whether the union's current tag state has value MakeViewerNoComment.
///
- (BOOL)isMakeViewerNoComment;

///
/// Retrieves whether the union's current tag state has value Remove.
///
/// @return Whether the union's current tag state has value Remove.
///
- (BOOL)isRemove;

///
/// Retrieves whether the union's current tag state has value Other.
///
/// @return Whether the union's current tag state has value Other.
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBSHARINGMemberAction union.
///
@interface DBSHARINGMemberActionSerializer : NSObject

///
/// Serializes DBSHARINGMemberAction instances.
///
/// @param instance An instance of the DBSHARINGMemberAction API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGMemberAction API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGMemberAction * _Nonnull)instance;

///
/// Deserializes DBSHARINGMemberAction instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGMemberAction API object.
///
/// @return An instantiation of the DBSHARINGMemberAction object.
///
+ (DBSHARINGMemberAction * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
