#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmmpocDatabaseDriverFactory, KmmpocVaccinationDataResponseItem, KmmpocCovidVaccinationData, KmmpocAverage14days, KmmpocAverage7days, KmmpocDailyVaccinations, KmmpocTotalVaccinations, KmmpocVaccinations, KmmpocRuntimeQuery<__covariant RowType>, KmmpocKotlinThrowable, KmmpocKotlinArray<T>, KmmpocKotlinException, KmmpocKotlinRuntimeException, KmmpocKotlinIllegalStateException, KmmpocRuntimeTransacterTransaction, KmmpocKotlinx_serialization_coreSerializersModule, KmmpocKotlinx_serialization_coreSerialKind, KmmpocKotlinNothing, KmmpocKotlinByteArray, KmmpocKotlinByteIterator;

@protocol KmmpocKotlinx_serialization_coreKSerializer, KmmpocCovidVaccinationDatabaseQueries, KmmpocRuntimeTransactionWithoutReturn, KmmpocRuntimeTransactionWithReturn, KmmpocRuntimeTransacter, KmmpocCovidVaccinationDatabase, KmmpocRuntimeSqlDriver, KmmpocRuntimeSqlDriverSchema, KmmpocKotlinx_serialization_coreEncoder, KmmpocKotlinx_serialization_coreSerialDescriptor, KmmpocKotlinx_serialization_coreSerializationStrategy, KmmpocKotlinx_serialization_coreDecoder, KmmpocKotlinx_serialization_coreDeserializationStrategy, KmmpocRuntimeTransactionCallbacks, KmmpocRuntimeSqlPreparedStatement, KmmpocRuntimeSqlCursor, KmmpocRuntimeCloseable, KmmpocRuntimeQueryListener, KmmpocKotlinIterator, KmmpocKotlinx_serialization_coreCompositeEncoder, KmmpocKotlinAnnotation, KmmpocKotlinx_serialization_coreCompositeDecoder, KmmpocKotlinx_serialization_coreSerializersModuleCollector, KmmpocKotlinKClass, KmmpocKotlinKDeclarationContainer, KmmpocKotlinKAnnotatedElement, KmmpocKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface KmmpocBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KmmpocBase (KmmpocBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KmmpocMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmmpocMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmmpocKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KmmpocNumber : NSNumber
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
@interface KmmpocByte : KmmpocNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KmmpocUByte : KmmpocNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KmmpocShort : KmmpocNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KmmpocUShort : KmmpocNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KmmpocInt : KmmpocNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KmmpocUInt : KmmpocNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KmmpocLong : KmmpocNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KmmpocULong : KmmpocNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KmmpocFloat : KmmpocNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KmmpocDouble : KmmpocNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KmmpocBoolean : KmmpocNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccinationTracker")))
@interface KmmpocVaccinationTracker : KmmpocBase
- (instancetype)initWithDatabaseDriverFactory:(KmmpocDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFullVaccinationDataWithCompletionHandler:(void (^)(NSArray<KmmpocVaccinationDataResponseItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFullVaccinationData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVaccinationDataLatest:(BOOL)latest completionHandler:(void (^)(NSArray<KmmpocCovidVaccinationData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVaccinationData(latest:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average14days")))
@interface KmmpocAverage14days : KmmpocBase
- (instancetype)initWithSingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:perMillion:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (KmmpocAverage14days *)doCopySingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:perMillion:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) int32_t perMillion __attribute__((swift_name("perMillion")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average14days.Companion")))
@interface KmmpocAverage14daysCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average7days")))
@interface KmmpocAverage7days : KmmpocBase
- (instancetype)initWithSingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:perMillion:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (KmmpocAverage7days *)doCopySingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:perMillion:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) int32_t perMillion __attribute__((swift_name("perMillion")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average7days.Companion")))
@interface KmmpocAverage7daysCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DailyVaccinations")))
@interface KmmpocDailyVaccinations : KmmpocBase
- (instancetype)initWithSingleDose:(KmmpocInt * _Nullable)singleDose firstDose:(KmmpocInt * _Nullable)firstDose secondDose:(KmmpocInt * _Nullable)secondDose fullyVaccinated:(KmmpocInt * _Nullable)fullyVaccinated total:(KmmpocInt * _Nullable)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:fullyVaccinated:total:)"))) __attribute__((objc_designated_initializer));
- (KmmpocInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (KmmpocInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (KmmpocInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (KmmpocInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (KmmpocInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (KmmpocDailyVaccinations *)doCopySingleDose:(KmmpocInt * _Nullable)singleDose firstDose:(KmmpocInt * _Nullable)firstDose secondDose:(KmmpocInt * _Nullable)secondDose fullyVaccinated:(KmmpocInt * _Nullable)fullyVaccinated total:(KmmpocInt * _Nullable)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:fullyVaccinated:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmpocInt * _Nullable firstDose __attribute__((swift_name("firstDose")));
@property (readonly) KmmpocInt * _Nullable fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) KmmpocInt * _Nullable secondDose __attribute__((swift_name("secondDose")));
@property (readonly) KmmpocInt * _Nullable singleDose __attribute__((swift_name("singleDose")));
@property (readonly) KmmpocInt * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DailyVaccinations.Companion")))
@interface KmmpocDailyVaccinationsCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TotalVaccinations")))
@interface KmmpocTotalVaccinations : KmmpocBase
- (instancetype)initWithSingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose fullyVaccinated:(int32_t)fullyVaccinated singleDosePercentage:(double)singleDosePercentage firstDosePercentage:(double)firstDosePercentage secondDosePercentage:(double)secondDosePercentage fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage total:(int32_t)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:fullyVaccinated:singleDosePercentage:firstDosePercentage:secondDosePercentage:fullyVaccinatedPercentage:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (KmmpocTotalVaccinations *)doCopySingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose fullyVaccinated:(int32_t)fullyVaccinated singleDosePercentage:(double)singleDosePercentage firstDosePercentage:(double)firstDosePercentage secondDosePercentage:(double)secondDosePercentage fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:fullyVaccinated:singleDosePercentage:firstDosePercentage:secondDosePercentage:fullyVaccinatedPercentage:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) double firstDosePercentage __attribute__((swift_name("firstDosePercentage")));
@property (readonly) int32_t fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) double fullyVaccinatedPercentage __attribute__((swift_name("fullyVaccinatedPercentage")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) double secondDosePercentage __attribute__((swift_name("secondDosePercentage")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) double singleDosePercentage __attribute__((swift_name("singleDosePercentage")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TotalVaccinations.Companion")))
@interface KmmpocTotalVaccinationsCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccinationDataResponseItem")))
@interface KmmpocVaccinationDataResponseItem : KmmpocBase
- (instancetype)initWithAverage14Days:(KmmpocAverage14days *)average14Days average7Days:(KmmpocAverage7days *)average7Days dailyVaccinations:(KmmpocDailyVaccinations *)dailyVaccinations isoCode:(NSString *)isoCode lastUpdate:(NSString *)lastUpdate lastUpdateDate:(NSString *)lastUpdateDate peopleFullyVaccinatedPerHundred:(int32_t)peopleFullyVaccinatedPerHundred peopleVaccinatedPerHundred:(int32_t)peopleVaccinatedPerHundred sourceName:(NSString *)sourceName sourceWebsite:(NSString *)sourceWebsite state:(NSString *)state totalVaccinations:(KmmpocTotalVaccinations *)totalVaccinations totalVaccinationsPerHundred:(int32_t)totalVaccinationsPerHundred vaccines:(NSArray<NSString *> *)vaccines __attribute__((swift_name("init(average14Days:average7Days:dailyVaccinations:isoCode:lastUpdate:lastUpdateDate:peopleFullyVaccinatedPerHundred:peopleVaccinatedPerHundred:sourceName:sourceWebsite:state:totalVaccinations:totalVaccinationsPerHundred:vaccines:)"))) __attribute__((objc_designated_initializer));
- (KmmpocAverage14days *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (KmmpocTotalVaccinations *)component12 __attribute__((swift_name("component12()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (NSArray<NSString *> *)component14 __attribute__((swift_name("component14()")));
- (KmmpocAverage7days *)component2 __attribute__((swift_name("component2()")));
- (KmmpocDailyVaccinations *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (KmmpocVaccinationDataResponseItem *)doCopyAverage14Days:(KmmpocAverage14days *)average14Days average7Days:(KmmpocAverage7days *)average7Days dailyVaccinations:(KmmpocDailyVaccinations *)dailyVaccinations isoCode:(NSString *)isoCode lastUpdate:(NSString *)lastUpdate lastUpdateDate:(NSString *)lastUpdateDate peopleFullyVaccinatedPerHundred:(int32_t)peopleFullyVaccinatedPerHundred peopleVaccinatedPerHundred:(int32_t)peopleVaccinatedPerHundred sourceName:(NSString *)sourceName sourceWebsite:(NSString *)sourceWebsite state:(NSString *)state totalVaccinations:(KmmpocTotalVaccinations *)totalVaccinations totalVaccinationsPerHundred:(int32_t)totalVaccinationsPerHundred vaccines:(NSArray<NSString *> *)vaccines __attribute__((swift_name("doCopy(average14Days:average7Days:dailyVaccinations:isoCode:lastUpdate:lastUpdateDate:peopleFullyVaccinatedPerHundred:peopleVaccinatedPerHundred:sourceName:sourceWebsite:state:totalVaccinations:totalVaccinationsPerHundred:vaccines:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmpocAverage14days *average14Days __attribute__((swift_name("average14Days")));
@property (readonly) KmmpocAverage7days *average7Days __attribute__((swift_name("average7Days")));
@property (readonly) KmmpocDailyVaccinations *dailyVaccinations __attribute__((swift_name("dailyVaccinations")));
@property (readonly) NSString *isoCode __attribute__((swift_name("isoCode")));
@property (readonly) NSString *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) NSString *lastUpdateDate __attribute__((swift_name("lastUpdateDate")));
@property (readonly) int32_t peopleFullyVaccinatedPerHundred __attribute__((swift_name("peopleFullyVaccinatedPerHundred")));
@property (readonly) int32_t peopleVaccinatedPerHundred __attribute__((swift_name("peopleVaccinatedPerHundred")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@property (readonly) NSString *sourceWebsite __attribute__((swift_name("sourceWebsite")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) KmmpocTotalVaccinations *totalVaccinations __attribute__((swift_name("totalVaccinations")));
@property (readonly) int32_t totalVaccinationsPerHundred __attribute__((swift_name("totalVaccinationsPerHundred")));
@property (readonly) NSArray<NSString *> *vaccines __attribute__((swift_name("vaccines")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccinationDataResponseItem.Companion")))
@interface KmmpocVaccinationDataResponseItemCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vaccinations")))
@interface KmmpocVaccinations : KmmpocBase
- (instancetype)initWithSingleDose:(int32_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int32_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int32_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int32_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int32_t)total __attribute__((swift_name("init(singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (KmmpocVaccinations *)doCopySingleDose:(int32_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int32_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int32_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int32_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) double firstDosePercentage __attribute__((swift_name("firstDosePercentage")));
@property (readonly) int32_t fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) double fullyVaccinatedPercentage __attribute__((swift_name("fullyVaccinatedPercentage")));
@property (readonly) NSString *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) double secondDosePercentage __attribute__((swift_name("secondDosePercentage")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) double singleDosePercentage __attribute__((swift_name("singleDosePercentage")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vaccinations.Companion")))
@interface KmmpocVaccinationsCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CovidVaccinationData")))
@interface KmmpocCovidVaccinationData : KmmpocBase
- (instancetype)initWithIsoCode:(NSString *)isoCode state:(NSString *)state singleDose:(int64_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int64_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int64_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int64_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int64_t)total __attribute__((swift_name("init(isoCode:state:singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (int64_t)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (KmmpocCovidVaccinationData *)doCopyIsoCode:(NSString *)isoCode state:(NSString *)state singleDose:(int64_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int64_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int64_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int64_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int64_t)total __attribute__((swift_name("doCopy(isoCode:state:singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) double firstDosePercentage __attribute__((swift_name("firstDosePercentage")));
@property (readonly) int64_t fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) double fullyVaccinatedPercentage __attribute__((swift_name("fullyVaccinatedPercentage")));
@property (readonly) NSString *isoCode __attribute__((swift_name("isoCode")));
@property (readonly) NSString *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) int64_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) double secondDosePercentage __attribute__((swift_name("secondDosePercentage")));
@property (readonly) int64_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) double singleDosePercentage __attribute__((swift_name("singleDosePercentage")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) int64_t total __attribute__((swift_name("total")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol KmmpocRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<KmmpocRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<KmmpocRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("CovidVaccinationDatabase")))
@protocol KmmpocCovidVaccinationDatabase <KmmpocRuntimeTransacter>
@required
@property (readonly) id<KmmpocCovidVaccinationDatabaseQueries> covidVaccinationDatabaseQueries __attribute__((swift_name("covidVaccinationDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CovidVaccinationDatabaseCompanion")))
@interface KmmpocCovidVaccinationDatabaseCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocCovidVaccinationDatabase>)invokeDriver:(id<KmmpocRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<KmmpocRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("CovidVaccinationDatabaseQueries")))
@protocol KmmpocCovidVaccinationDatabaseQueries <KmmpocRuntimeTransacter>
@required
- (void)clear __attribute__((swift_name("clear()")));
- (KmmpocRuntimeQuery<KmmpocCovidVaccinationData *> *)getVaccinationData __attribute__((swift_name("getVaccinationData()")));
- (KmmpocRuntimeQuery<id> *)getVaccinationDataMapper:(id (^)(NSString *, NSString *, KmmpocLong *, KmmpocDouble *, KmmpocLong *, KmmpocDouble *, KmmpocLong *, KmmpocDouble *, KmmpocLong *, KmmpocDouble *, NSString *, KmmpocLong *))mapper __attribute__((swift_name("getVaccinationData(mapper:)")));
- (void)insertVaccinationDataIsoCode:(NSString *)isoCode state:(NSString *)state singleDose:(int64_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int64_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int64_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int64_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int64_t)total __attribute__((swift_name("insertVaccinationData(isoCode:state:singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface KmmpocDatabaseDriverFactory : KmmpocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<KmmpocRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KmmpocKotlinThrowable : KmmpocBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KmmpocKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmpocKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KmmpocKotlinException : KmmpocKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmmpocKotlinRuntimeException : KmmpocKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmmpocKotlinIllegalStateException : KmmpocKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KmmpocKotlinCancellationException : KmmpocKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmmpocKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmmpocKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmmpocKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmmpocKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmmpocKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KmmpocKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmmpocKotlinx_serialization_coreKSerializer <KmmpocKotlinx_serialization_coreSerializationStrategy, KmmpocKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol KmmpocRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol KmmpocRuntimeTransactionWithoutReturn <KmmpocRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<KmmpocRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol KmmpocRuntimeTransactionWithReturn <KmmpocRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<KmmpocRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol KmmpocRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol KmmpocRuntimeSqlDriver <KmmpocRuntimeCloseable>
@required
- (KmmpocRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(KmmpocInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<KmmpocRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<KmmpocRuntimeSqlCursor>)executeQueryIdentifier:(KmmpocInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<KmmpocRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (KmmpocRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol KmmpocRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<KmmpocRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<KmmpocRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface KmmpocRuntimeQuery<__covariant RowType> : KmmpocBase
- (instancetype)initWithQueries:(NSMutableArray<KmmpocRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<KmmpocRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<KmmpocRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<KmmpocRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<KmmpocRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<KmmpocRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmmpocKotlinArray<T> : KmmpocBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmmpocInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmmpocKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmmpocKotlinx_serialization_coreEncoder
@required
- (id<KmmpocKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmmpocKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KmmpocKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmmpocKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KmmpocKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KmmpocKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KmmpocKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KmmpocKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmmpocKotlinx_serialization_coreDecoder
@required
- (id<KmmpocKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KmmpocKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KmmpocKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface KmmpocRuntimeTransacterTransaction : KmmpocBase <KmmpocRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) KmmpocRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol KmmpocRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(KmmpocKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(KmmpocDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(KmmpocLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol KmmpocRuntimeSqlCursor <KmmpocRuntimeCloseable>
@required
- (KmmpocKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (KmmpocDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (KmmpocLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol KmmpocRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KmmpocKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmmpocKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KmmpocKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmmpocKotlinx_serialization_coreSerializersModule : KmmpocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<KmmpocKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KmmpocKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmmpocKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmmpocKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KmmpocKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmpocKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KmmpocKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmpocKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmmpocKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmmpocKotlinx_serialization_coreSerialKind : KmmpocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmmpocKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KmmpocKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmmpocKotlinNothing : KmmpocBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmmpocKotlinByteArray : KmmpocBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmmpocByte *(^)(KmmpocInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmmpocKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmmpocKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmmpocKotlinKClass>)kClass provider:(id<KmmpocKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmmpocKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KmmpocKotlinKClass>)kClass serializer:(id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmmpocKotlinKClass>)baseClass actualClass:(id<KmmpocKotlinKClass>)actualClass actualSerializer:(id<KmmpocKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmmpocKotlinKClass>)baseClass defaultSerializerProvider:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmmpocKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmmpocKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KmmpocKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KmmpocKotlinKClass <KmmpocKotlinKDeclarationContainer, KmmpocKotlinKAnnotatedElement, KmmpocKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KmmpocKotlinByteIterator : KmmpocBase <KmmpocKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmmpocByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END