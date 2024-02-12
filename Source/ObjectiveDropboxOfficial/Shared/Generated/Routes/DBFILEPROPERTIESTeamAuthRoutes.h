///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBTasks.h"

@class DBFILEPROPERTIESAddPropertiesError;
@class DBFILEPROPERTIESAddTemplateResult;
@class DBFILEPROPERTIESGetTemplateResult;
@class DBFILEPROPERTIESInvalidPropertyGroupError;
@class DBFILEPROPERTIESListTemplateResult;
@class DBFILEPROPERTIESLogicalOperator;
@class DBFILEPROPERTIESLookUpPropertiesError;
@class DBFILEPROPERTIESLookupError;
@class DBFILEPROPERTIESModifyTemplateError;
@class DBFILEPROPERTIESPropertiesSearchContinueError;
@class DBFILEPROPERTIESPropertiesSearchError;
@class DBFILEPROPERTIESPropertiesSearchMatch;
@class DBFILEPROPERTIESPropertiesSearchMode;
@class DBFILEPROPERTIESPropertiesSearchQuery;
@class DBFILEPROPERTIESPropertiesSearchResult;
@class DBFILEPROPERTIESPropertyField;
@class DBFILEPROPERTIESPropertyFieldTemplate;
@class DBFILEPROPERTIESPropertyGroup;
@class DBFILEPROPERTIESPropertyGroupUpdate;
@class DBFILEPROPERTIESPropertyType;
@class DBFILEPROPERTIESRemovePropertiesError;
@class DBFILEPROPERTIESTemplateError;
@class DBFILEPROPERTIESTemplateFilter;
@class DBFILEPROPERTIESUpdatePropertiesError;
@class DBFILEPROPERTIESUpdateTemplateResult;
@class DBNilObject;

@protocol DBTransportClient;

///
/// Routes for the `FileProperties` namespace
///

NS_ASSUME_NONNULL_BEGIN

@interface DBFILEPROPERTIESTeamAuthRoutes : NSObject

/// An instance of the networking client that each route will use to submit a
/// request.
@property (nonatomic, readonly) id<DBTransportClient> client;

/// Initializes the `DBFILEPROPERTIESTeamAuthRoutes` namespace container object
/// with a networking client.
- (instancetype)init:(id<DBTransportClient>)client;

///
/// Add a template associated with a team. See `propertiesAdd` to add properties to a file or folder. Note: this
/// endpoint will create team-owned templates.
///
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESAddTemplateResult` object on
/// success or a `DBFILEPROPERTIESModifyTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESAddTemplateResult *, DBFILEPROPERTIESModifyTemplateError *> *)
    templatesAddForTeam:(NSString *)name
           description_:(NSString *)description_
                 fields:(NSArray<DBFILEPROPERTIESPropertyFieldTemplate *> *)fields;

///
/// Get the schema for a specified template.
///
/// @param templateId An identifier for template added by route  See `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESGetTemplateResult` object on
/// success or a `DBFILEPROPERTIESTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESGetTemplateResult *, DBFILEPROPERTIESTemplateError *> *)templatesGetForTeam:
    (NSString *)templateId;

///
/// Get the template identifiers for a team. To get the schema of each template use `templatesGetForTeam`.
///
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESListTemplateResult` object on
/// success or a `DBFILEPROPERTIESTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESListTemplateResult *, DBFILEPROPERTIESTemplateError *> *)templatesListForTeam;

///
/// Permanently removes the specified template created from `templatesAddForUser`. All properties associated with the
/// template will also be removed. This action cannot be undone.
///
/// @param templateId An identifier for a template created by `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `void` object on success or a
/// `DBFILEPROPERTIESTemplateError` object on failure.
///
- (DBRpcTask<DBNilObject *, DBFILEPROPERTIESTemplateError *> *)templatesRemoveForTeam:(NSString *)templateId;

///
/// Update a template associated with a team. This route can update the template name, the template description and add
/// optional properties to templates.
///
/// @param templateId An identifier for template added by  See `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESUpdateTemplateResult` object on
/// success or a `DBFILEPROPERTIESModifyTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESUpdateTemplateResult *, DBFILEPROPERTIESModifyTemplateError *> *)templatesUpdateForTeam:
    (NSString *)templateId;

///
/// Update a template associated with a team. This route can update the template name, the template description and add
/// optional properties to templates.
///
/// @param templateId An identifier for template added by  See `templatesAddForUser` or `templatesAddForTeam`.
/// @param name A display name for the template. template names can be up to 256 bytes.
/// @param description_ Description for the new template. Template descriptions can be up to 1024 bytes.
/// @param addFields Property field templates to be added to the group template. There can be up to 32 properties in a
/// single template.
///
/// @return Through the response callback, the caller will receive a `DBFILEPROPERTIESUpdateTemplateResult` object on
/// success or a `DBFILEPROPERTIESModifyTemplateError` object on failure.
///
- (DBRpcTask<DBFILEPROPERTIESUpdateTemplateResult *, DBFILEPROPERTIESModifyTemplateError *> *)
    templatesUpdateForTeam:(NSString *)templateId
                      name:(nullable NSString *)name
              description_:(nullable NSString *)description_
                 addFields:(nullable NSArray<DBFILEPROPERTIESPropertyFieldTemplate *> *)addFields;

@end

NS_ASSUME_NONNULL_END
