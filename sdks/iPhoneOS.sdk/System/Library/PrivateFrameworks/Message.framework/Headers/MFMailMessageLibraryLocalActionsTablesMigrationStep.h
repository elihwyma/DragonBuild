//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
}

+ (id)log;
@property(retain, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (id)_actionFlagsActionIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_serverLabelsTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverMessagesTableDefinition;
- (id)_offlineCacheOperations;
- (BOOL)_populateServerMessages;
- (BOOL)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;

@end
