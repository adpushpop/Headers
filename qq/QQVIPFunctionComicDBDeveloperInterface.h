//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQVIPFunctionComicDBDeveloperInterface : NSObject
{
}

+ (void)createTable:(id)arg1 createTableSql:(id)arg2 table:(id)arg3 currentVersion:(unsigned short)arg4 uin:(id)arg5 inDb:(id)arg6;
+ (id)getUserTableNameWithUin:(id)arg1 tableName:(id)arg2;
+ (void)setTableVersion:(unsigned short)arg1 tableSign:(unsigned long long)arg2 inDatabase:(id)arg3;
+ (_Bool)needUpdate:(unsigned long long)arg1 currentVersion:(unsigned short)arg2 inDataBase:(id)arg3;
+ (int)getTableVersion:(unsigned long long)arg1 inDataBase:(id)arg2;
+ (int)doAsyncOperation:(SEL)arg1 target:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
+ (id)doDbOperation:(SEL)arg1 target:(id)arg2;
+ (_Bool)addColumnIfNeed:(id)arg1 toTable:(id)arg2 withType:(id)arg3 inDatabase:(id)arg4;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 inDatabase:(id)arg4;
+ (_Bool)addColumnIfNeed:(id)arg1 toTable:(id)arg2 withType:(id)arg3 defaultValue:(id)arg4 inDatabase:(id)arg5;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 defaultValue:(id)arg4 inDatabase:(id)arg5;
+ (void)dropIndex:(id)arg1 inDatabase:(id)arg2;

@end

