/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteIndexDescription : NSObject <NSCopying> {
    NSArray * _columnNames;
    NSString * _name;
    unsigned int  _options;
    NSString * _tableName;
}

@property (nonatomic, readonly, copy) NSArray *columnNames;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)columnNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 tableName:(id)arg2 columnNames:(id)arg3 options:(unsigned int)arg4;
- (id)name;
- (unsigned int)options;
- (id)tableName;

@end
