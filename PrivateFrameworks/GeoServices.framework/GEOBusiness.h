/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSMutableArray, NSString;

@interface GEOBusiness : PBCodable <NSCopying> {
    struct { 
        unsigned int uID : 1; 
        unsigned int isClosed : 1; 
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    } _has;
    BOOL _isClosed;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    unsigned long long _uID;
    NSString *_uRL;
}

@property(retain) NSMutableArray * attributeKeyValues;
@property(retain) NSMutableArray * attributions;
@property(retain) NSMutableArray * categorys;
@property(retain) GEOLatLng * center;
@property(getter=_goodForKids,readonly) BOOL goodForKids;
@property(getter=_hasAnyAmenities,readonly) BOOL hasAnyAmenities;
@property(readonly) BOOL hasCenter;
@property(getter=_hasDelivery,readonly) BOOL hasDelivery;
@property(getter=_hasDeliveryAmenity,readonly) BOOL hasDeliveryAmenity;
@property(getter=_hasGoodForKidsAmenity,readonly) BOOL hasGoodForKidsAmenity;
@property BOOL hasIsClosed;
@property(getter=_hasMUID,readonly) BOOL hasMUID;
@property(readonly) BOOL hasMapsURL;
@property(readonly) BOOL hasName;
@property(getter=_hasOperatingHours,readonly) BOOL hasOperatingHours;
@property(readonly) BOOL hasPhoneticName;
@property(getter=_hasPriceRange,readonly) BOOL hasPriceRange;
@property(getter=_hasTakesReservationsAmenity,readonly) BOOL hasTakesReservationsAmenity;
@property(readonly) BOOL hasTelephone;
@property BOOL hasUID;
@property(readonly) BOOL hasURL;
@property(getter=_hasUserRatingScore,readonly) BOOL hasUserRatingScore;
@property BOOL isClosed;
@property(retain) NSMutableArray * localizedCategories;
@property(retain) NSString * mapsURL;
@property(getter=_muid,readonly) unsigned long long muid;
@property(retain) NSString * name;
@property(getter=_normalizedUserRatingScore,readonly) float normalizedUserRatingScore;
@property(retain) NSMutableArray * openHours;
@property(retain) NSString * phoneticName;
@property(retain) NSMutableArray * photos;
@property(getter=_priceRange,readonly) unsigned int priceRange;
@property(retain) NSMutableArray * ratings;
@property(getter=_sampleSizeForUserRatingScore,readonly) unsigned int sampleSizeForUserRatingScore;
@property(retain) NSMutableArray * sources;
@property(retain) NSMutableArray * starRatings;
@property(getter=_takesReservations,readonly) BOOL takesReservations;
@property(retain) NSString * telephone;
@property unsigned long long uID;
@property(retain) NSString * uRL;
@property(getter=_isYelp,readonly) BOOL yelp;

- (id)_allCategoriesForType:(unsigned int)arg1;
- (id)_attributionMapForResponse:(id)arg1;
- (BOOL)_booleanValueForAmenity:(id)arg1;
- (id)_currentOperatingHoursForTimeZone:(id)arg1;
- (BOOL)_goodForKids;
- (BOOL)_hasAmenitiesContainingKeys:(id)arg1;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasMUID;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPriceRange;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasUserRatingScore;
- (BOOL)_isYelp;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (unsigned long long)_muid;
- (float)_normalizedUserRatingScore;
- (unsigned int)_priceRange;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_stringForAmenity:(id)arg1;
- (BOOL)_takesReservations;
- (void)addAttributeKeyValue:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)addLocalizedCategories:(id)arg1;
- (void)addOpenHours:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)addRating:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addStarRating:(id)arg1;
- (id)attributeKeyValueAtIndex:(unsigned int)arg1;
- (id)attributeKeyValues;
- (unsigned int)attributeKeyValuesCount;
- (id)attributionAtIndex:(unsigned int)arg1;
- (id)attributions;
- (unsigned int)attributionsCount;
- (id)categoryAtIndex:(unsigned int)arg1;
- (id)categorys;
- (unsigned int)categorysCount;
- (id)center;
- (void)clearAttributeKeyValues;
- (void)clearAttributions;
- (void)clearCategorys;
- (void)clearLocalizedCategories;
- (void)clearOpenHours;
- (void)clearPhotos;
- (void)clearRatings;
- (void)clearSources;
- (void)clearStarRatings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCenter;
- (BOOL)hasIsClosed;
- (BOOL)hasMapsURL;
- (BOOL)hasName;
- (BOOL)hasPhoneticName;
- (BOOL)hasTelephone;
- (BOOL)hasUID;
- (BOOL)hasURL;
- (unsigned int)hash;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5;
- (BOOL)isClosed;
- (BOOL)isEqual:(id)arg1;
- (id)localizedCategories;
- (id)localizedCategoriesAtIndex:(unsigned int)arg1;
- (unsigned int)localizedCategoriesCount;
- (id)mapsURL;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)openHours;
- (id)openHoursAtIndex:(unsigned int)arg1;
- (unsigned int)openHoursCount;
- (id)phoneticName;
- (id)photoAtIndex:(unsigned int)arg1;
- (id)photos;
- (unsigned int)photosCount;
- (id)ratingAtIndex:(unsigned int)arg1;
- (id)ratings;
- (unsigned int)ratingsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributeKeyValues:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setCategorys:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasIsClosed:(BOOL)arg1;
- (void)setHasUID:(BOOL)arg1;
- (void)setIsClosed:(BOOL)arg1;
- (void)setLocalizedCategories:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpenHours:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setPhotos:(id)arg1;
- (void)setRatings:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setStarRatings:(id)arg1;
- (void)setTelephone:(id)arg1;
- (void)setUID:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (id)sourceAtIndex:(unsigned int)arg1;
- (id)sources;
- (unsigned int)sourcesCount;
- (id)starRatingAtIndex:(unsigned int)arg1;
- (id)starRatings;
- (unsigned int)starRatingsCount;
- (id)telephone;
- (unsigned long long)uID;
- (id)uRL;
- (void)writeTo:(id)arg1;

@end