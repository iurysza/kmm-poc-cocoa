#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Kmm_pocDatabaseDriverFactory, Kmm_pocRocketLaunch, Kmm_pocSelectAllLaunchesInfo, Kmm_pocRuntimeQuery<__covariant RowType>, Kmm_pocRocket, Kmm_pocLaunch, Kmm_pocLinks, Kmm_pocRocket_, Kmm_pocKotlinThrowable, Kmm_pocKotlinArray<T>, Kmm_pocRuntimeTransacterTransaction, Kmm_pocKotlinException, Kmm_pocKotlinRuntimeException, Kmm_pocKotlinIllegalStateException, Kmm_pocKotlinByteArray, Kmm_pocKotlinx_serialization_coreSerializersModule, Kmm_pocKotlinx_serialization_coreSerialKind, Kmm_pocKotlinNothing, Kmm_pocKotlinx_serialization_coreUpdateMode, Kmm_pocKotlinByteIterator, Kmm_pocKotlinEnum<E>;

@protocol Kmm_pocAppDatabaseQueries, Kmm_pocRuntimeTransactionWithoutReturn, Kmm_pocRuntimeTransactionWithReturn, Kmm_pocRuntimeTransacter, Kmm_pocAppDatabase, Kmm_pocRuntimeSqlDriver, Kmm_pocRuntimeSqlDriverSchema, Kmm_pocKotlinx_serialization_coreKSerializer, Kmm_pocRuntimeTransactionCallbacks, Kmm_pocRuntimeSqlPreparedStatement, Kmm_pocRuntimeSqlCursor, Kmm_pocRuntimeCloseable, Kmm_pocRuntimeQueryListener, Kmm_pocKotlinx_serialization_coreEncoder, Kmm_pocKotlinx_serialization_coreSerialDescriptor, Kmm_pocKotlinx_serialization_coreSerializationStrategy, Kmm_pocKotlinx_serialization_coreDecoder, Kmm_pocKotlinx_serialization_coreDeserializationStrategy, Kmm_pocKotlinIterator, Kmm_pocKotlinx_serialization_coreCompositeEncoder, Kmm_pocKotlinAnnotation, Kmm_pocKotlinx_serialization_coreCompositeDecoder, Kmm_pocKotlinx_serialization_coreSerializersModuleCollector, Kmm_pocKotlinKClass, Kmm_pocKotlinComparable, Kmm_pocKotlinKDeclarationContainer, Kmm_pocKotlinKAnnotatedElement, Kmm_pocKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface Kmm_pocBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Kmm_pocBase (Kmm_pocBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Kmm_pocMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Kmm_pocMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmm_pocKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Kmm_pocNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Kmm_pocByte : Kmm_pocNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Kmm_pocUByte : Kmm_pocNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Kmm_pocShort : Kmm_pocNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Kmm_pocUShort : Kmm_pocNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Kmm_pocInt : Kmm_pocNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Kmm_pocUInt : Kmm_pocNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Kmm_pocLong : Kmm_pocNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Kmm_pocULong : Kmm_pocNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Kmm_pocFloat : Kmm_pocNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Kmm_pocDouble : Kmm_pocNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Kmm_pocBoolean : Kmm_pocNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpaceXSDK")))
@interface Kmm_pocSpaceXSDK : Kmm_pocBase
- (instancetype)initWithDatabaseDriverFactory:(Kmm_pocDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLaunchesForceReload:(BOOL)forceReload completionHandler:(void (^)(NSArray<Kmm_pocRocketLaunch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLaunches(forceReload:completionHandler:)")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol Kmm_pocRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<Kmm_pocRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<Kmm_pocRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AppDatabase")))
@protocol Kmm_pocAppDatabase <Kmm_pocRuntimeTransacter>
@required
@property (readonly) id<Kmm_pocAppDatabaseQueries> appDatabaseQueries __attribute__((swift_name("appDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDatabaseCompanion")))
@interface Kmm_pocAppDatabaseCompanion : Kmm_pocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Kmm_pocAppDatabase>)invokeDriver:(id<Kmm_pocRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<Kmm_pocRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("AppDatabaseQueries")))
@protocol Kmm_pocAppDatabaseQueries <Kmm_pocRuntimeTransacter>
@required
- (void)insertLaunchFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("insertLaunch(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:)")));
- (void)insertRocketId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("insertRocket(id:name:type:)")));
- (void)removeAllLaunches __attribute__((swift_name("removeAllLaunches()")));
- (void)removeAllRockets __attribute__((swift_name("removeAllRockets()")));
- (Kmm_pocRuntimeQuery<Kmm_pocSelectAllLaunchesInfo *> *)selectAllLaunchesInfo __attribute__((swift_name("selectAllLaunchesInfo()")));
- (Kmm_pocRuntimeQuery<id> *)selectAllLaunchesInfoMapper:(id (^)(Kmm_pocLong *, NSString *, Kmm_pocInt *, NSString *, NSString * _Nullable, Kmm_pocBoolean * _Nullable, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllLaunchesInfo(mapper:)")));
- (Kmm_pocRuntimeQuery<Kmm_pocRocket *> *)selectRocketByIdId:(NSString *)id __attribute__((swift_name("selectRocketById(id:)")));
- (Kmm_pocRuntimeQuery<id> *)selectRocketByIdId:(NSString *)id mapper:(id (^)(NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectRocketById(id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface Kmm_pocDatabaseDriverFactory : Kmm_pocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<Kmm_pocRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Launch")))
@interface Kmm_pocLaunch : Kmm_pocBase
- (instancetype)initWithFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("init(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (Kmm_pocBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (Kmm_pocLaunch *)doCopyFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("doCopy(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) int64_t flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) NSString *launchDateUTC __attribute__((swift_name("launchDateUTC")));
@property (readonly) Kmm_pocBoolean * _Nullable launchSuccess __attribute__((swift_name("launchSuccess")));
@property (readonly) int32_t launchYear __attribute__((swift_name("launchYear")));
@property (readonly) NSString *missionName __attribute__((swift_name("missionName")));
@property (readonly) NSString * _Nullable missionPatchUrl __attribute__((swift_name("missionPatchUrl")));
@property (readonly) NSString *rocketId __attribute__((swift_name("rocketId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rocket")))
@interface Kmm_pocRocket : Kmm_pocBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("init(id:name:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (Kmm_pocRocket *)doCopyId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("doCopy(id:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllLaunchesInfo")))
@interface Kmm_pocSelectAllLaunchesInfo : Kmm_pocBase
- (instancetype)initWithFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl id:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type __attribute__((swift_name("init(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:id:name:type:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (Kmm_pocBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (Kmm_pocSelectAllLaunchesInfo *)doCopyFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl id:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:id:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) int64_t flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *launchDateUTC __attribute__((swift_name("launchDateUTC")));
@property (readonly) Kmm_pocBoolean * _Nullable launchSuccess __attribute__((swift_name("launchSuccess")));
@property (readonly) int32_t launchYear __attribute__((swift_name("launchYear")));
@property (readonly) NSString *missionName __attribute__((swift_name("missionName")));
@property (readonly) NSString * _Nullable missionPatchUrl __attribute__((swift_name("missionPatchUrl")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *rocketId __attribute__((swift_name("rocketId")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Links")))
@interface Kmm_pocLinks : Kmm_pocBase
- (instancetype)initWithMissionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("init(missionPatchUrl:articleUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Kmm_pocLinks *)doCopyMissionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("doCopy(missionPatchUrl:articleUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString * _Nullable missionPatchUrl __attribute__((swift_name("missionPatchUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Links.Companion")))
@interface Kmm_pocLinksCompanion : Kmm_pocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Kmm_pocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rocket_")))
@interface Kmm_pocRocket_ : Kmm_pocBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("init(id:name:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (Kmm_pocRocket_ *)doCopyId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("doCopy(id:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rocket_.Companion")))
@interface Kmm_pocRocket_Companion : Kmm_pocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Kmm_pocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketLaunch")))
@interface Kmm_pocRocketLaunch : Kmm_pocBase
- (instancetype)initWithFlightNumber:(int32_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear launchDateUTC:(NSString *)launchDateUTC rocket:(Kmm_pocRocket_ *)rocket details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess links:(Kmm_pocLinks *)links __attribute__((swift_name("init(flightNumber:missionName:launchYear:launchDateUTC:rocket:details:launchSuccess:links:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Kmm_pocRocket_ *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (Kmm_pocBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (Kmm_pocLinks *)component8 __attribute__((swift_name("component8()")));
- (Kmm_pocRocketLaunch *)doCopyFlightNumber:(int32_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear launchDateUTC:(NSString *)launchDateUTC rocket:(Kmm_pocRocket_ *)rocket details:(NSString * _Nullable)details launchSuccess:(Kmm_pocBoolean * _Nullable)launchSuccess links:(Kmm_pocLinks *)links __attribute__((swift_name("doCopy(flightNumber:missionName:launchYear:launchDateUTC:rocket:details:launchSuccess:links:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) int32_t flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) NSString *launchDateUTC __attribute__((swift_name("launchDateUTC")));
@property (readonly) Kmm_pocBoolean * _Nullable launchSuccess __attribute__((swift_name("launchSuccess")));
@property (readonly) int32_t launchYear __attribute__((swift_name("launchYear")));
@property (readonly) Kmm_pocLinks *links __attribute__((swift_name("links")));
@property (readonly) NSString *missionName __attribute__((swift_name("missionName")));
@property (readonly) Kmm_pocRocket_ *rocket __attribute__((swift_name("rocket")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketLaunch.Companion")))
@interface Kmm_pocRocketLaunchCompanion : Kmm_pocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Kmm_pocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpaceXApi")))
@interface Kmm_pocSpaceXApi : Kmm_pocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllLaunchesWithCompletionHandler:(void (^)(NSArray<Kmm_pocRocketLaunch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllLaunches(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpaceXApi.Companion")))
@interface Kmm_pocSpaceXApiCompanion : Kmm_pocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Kmm_pocKotlinThrowable : Kmm_pocBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Kmm_pocKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Kmm_pocKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface Kmm_pocKotlinException : Kmm_pocKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol Kmm_pocRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol Kmm_pocRuntimeTransactionWithoutReturn <Kmm_pocRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<Kmm_pocRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol Kmm_pocRuntimeTransactionWithReturn <Kmm_pocRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<Kmm_pocRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol Kmm_pocRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol Kmm_pocRuntimeSqlDriver <Kmm_pocRuntimeCloseable>
@required
- (Kmm_pocRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(Kmm_pocInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<Kmm_pocRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<Kmm_pocRuntimeSqlCursor>)executeQueryIdentifier:(Kmm_pocInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<Kmm_pocRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (Kmm_pocRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol Kmm_pocRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<Kmm_pocRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<Kmm_pocRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface Kmm_pocRuntimeQuery<__covariant RowType> : Kmm_pocBase
- (instancetype)initWithQueries:(NSMutableArray<Kmm_pocRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<Kmm_pocRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<Kmm_pocRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<Kmm_pocRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<Kmm_pocRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<Kmm_pocRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Kmm_pocKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Kmm_pocKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Kmm_pocKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Kmm_pocKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Kmm_pocKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<Kmm_pocKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<Kmm_pocKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Kmm_pocKotlinx_serialization_coreKSerializer <Kmm_pocKotlinx_serialization_coreSerializationStrategy, Kmm_pocKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface Kmm_pocKotlinRuntimeException : Kmm_pocKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Kmm_pocKotlinIllegalStateException : Kmm_pocKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface Kmm_pocKotlinCancellationException : Kmm_pocKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Kmm_pocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Kmm_pocKotlinArray<T> : Kmm_pocBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Kmm_pocInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Kmm_pocKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface Kmm_pocRuntimeTransacterTransaction : Kmm_pocBase <Kmm_pocRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) Kmm_pocRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol Kmm_pocRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index value:(Kmm_pocKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(Kmm_pocDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindLongIndex:(int32_t)index value:(Kmm_pocLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol Kmm_pocRuntimeSqlCursor <Kmm_pocRuntimeCloseable>
@required
- (Kmm_pocKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (Kmm_pocDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (Kmm_pocLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol Kmm_pocRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Kmm_pocKotlinx_serialization_coreEncoder
@required
- (id<Kmm_pocKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Kmm_pocKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(Kmm_pocKotlinArray<id<Kmm_pocKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<Kmm_pocKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<Kmm_pocKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(Kmm_pocKotlinArray<id<Kmm_pocKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Kmm_pocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Kmm_pocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Kmm_pocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Kmm_pocKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<Kmm_pocKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<Kmm_pocKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Kmm_pocKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Kmm_pocKotlinx_serialization_coreDecoder
@required
- (id<Kmm_pocKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<Kmm_pocKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(Kmm_pocKotlinArray<id<Kmm_pocKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Kmm_pocKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) Kmm_pocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) Kmm_pocKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Kmm_pocKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface Kmm_pocKotlinByteArray : Kmm_pocBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Kmm_pocByte *(^)(Kmm_pocInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Kmm_pocKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Kmm_pocKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Kmm_pocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Kmm_pocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Kmm_pocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Kmm_pocKotlinx_serialization_coreSerializersModule : Kmm_pocBase
- (void)dumpToCollector:(id<Kmm_pocKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Kmm_pocKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<Kmm_pocKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<Kmm_pocKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Kmm_pocKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Kmm_pocKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Kmm_pocKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Kmm_pocKotlinx_serialization_coreSerialKind : Kmm_pocBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Kmm_pocKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<Kmm_pocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) Kmm_pocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) Kmm_pocKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Kmm_pocKotlinNothing : Kmm_pocBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Kmm_pocKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Kmm_pocKotlinEnum<E> : Kmm_pocBase <Kmm_pocKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface Kmm_pocKotlinx_serialization_coreUpdateMode : Kmm_pocKotlinEnum<Kmm_pocKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kmm_pocKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) Kmm_pocKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) Kmm_pocKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface Kmm_pocKotlinByteIterator : Kmm_pocBase <Kmm_pocKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Kmm_pocByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Kmm_pocKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Kmm_pocKotlinKClass>)kClass serializer:(id<Kmm_pocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Kmm_pocKotlinKClass>)baseClass actualClass:(id<Kmm_pocKotlinKClass>)actualClass actualSerializer:(id<Kmm_pocKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Kmm_pocKotlinKClass>)baseClass defaultSerializerProvider:(id<Kmm_pocKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Kmm_pocKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Kmm_pocKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Kmm_pocKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Kmm_pocKotlinKClass <Kmm_pocKotlinKDeclarationContainer, Kmm_pocKotlinKAnnotatedElement, Kmm_pocKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
