/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureScanner : NSObject {
    NSMutableArray * _allMessageUnitsFeatures;
    IPFeatureData * _dateInSubjectFeatureData;
    NSMutableArray * _detectedEvents;
    IPEventClassificationType * _eventType;
    NSMutableSet * _extractedNotesStrings;
    NSArray * _filteredDetectedEvents;
    BOOL  _hasCheckedEventType;
    NSArray * _messageUnits;
    unsigned int  _resultType;
    NSArray * _stitchedEvents;
    BOOL  _subjectContainsDate;
    NSArray * _subjectDataDetectorsFeatures;
}

@property (retain) NSMutableArray *allMessageUnitsFeatures;
@property (retain) IPFeatureData *dateInSubjectFeatureData;
@property (retain) NSMutableArray *detectedEvents;
@property (retain) IPEventClassificationType *eventType;
@property (retain) NSMutableSet *extractedNotesStrings;
@property (retain) NSArray *filteredDetectedEvents;
@property BOOL hasCheckedEventType;
@property (retain) NSArray *messageUnits;
@property unsigned int resultType;
@property (retain) NSArray *stitchedEvents;
@property BOOL subjectContainsDate;
@property (retain) NSArray *subjectDataDetectorsFeatures;

+ (id)dataDetectorsFeatureExtractor;
+ (id)descriptionForScanResultType:(unsigned int)arg1;
+ (id)featureExtractorsExceptDataDetectorsExtractor;
+ (BOOL)isNaturalLanguageEventDetectionEnabled;
+ (void)setEventStoreForTesting:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2;
- (id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned int)arg3;
- (id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned int)arg2 messageUnit:(id)arg3;
- (id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned int)arg2 messageUnit:(id)arg3;
- (id)_regroupEventsWithSpreadTimeAsAllDayEvents:(id)arg1;
- (id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_sortedFeaturesByRange:(id)arg1;
- (id)_stitchedEventsFromEvents:(id)arg1;
- (id)allMessageUnitsFeatures;
- (id)artisNamesFromFeatures:(id)arg1;
- (id)bestEventFromEvents:(id)arg1;
- (id)cleanedStringForFeatureData:(id)arg1;
- (unsigned int)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2;
- (id)dateInSubjectFeatureData;
- (id)decoratedTitle:(id)arg1 withSubtitles:(id)arg2;
- (id)detectedEvents;
- (void)doSynchronousScanWithCompletionHandler:(id /* block */)arg1;
- (id)emailParticipantNames;
- (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(BOOL)arg3 features:(id)arg4;
- (id)entertainmentPOINamesFromFeatures:(id)arg1;
- (id)eventType;
- (id)extractedNotesStrings;
- (unsigned int)featureSentencePolarityForFeatureAtIndex:(unsigned int)arg1 inFeatures:(id)arg2;
- (BOOL)features:(id)arg1 containDateOlderThan:(id)arg2 preciseTimeOnly:(BOOL)arg3;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4;
- (id)filteredDetectedEvents;
- (id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2;
- (BOOL)hasCheckedEventType;
- (BOOL)isBlacklistedSender:(id)arg1;
- (BOOL)isDateAroundNoon:(id)arg1;
- (BOOL)isDateRoundedTo5Minutes:(id)arg1;
- (BOOL)isEventProposalFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned int)arg2 messageUnit:(id)arg3 eventIsTenseDependent:(BOOL)arg4 extractedFromSubject:(BOOL)arg5 clusterType:(unsigned int*)arg6;
- (id)messageSenderName;
- (id)messageUnits;
- (id)movieTitlesFromFeatures:(id)arg1;
- (id)normalizedAllDayDateFromDate:(id)arg1;
- (void)normalizedEvents:(id)arg1;
- (id)notesStringsFromFeatures:(id)arg1;
- (void)processScanOfMessageUnit:(id)arg1;
- (void)resetScanState;
- (id)restaurantAndBarPOINamesFromFeatures:(id)arg1;
- (unsigned int)resultType;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)setAllMessageUnitsFeatures:(id)arg1;
- (void)setDateInSubjectFeatureData:(id)arg1;
- (void)setDetectedEvents:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setExtractedNotesStrings:(id)arg1;
- (void)setFilteredDetectedEvents:(id)arg1;
- (void)setHasCheckedEventType:(BOOL)arg1;
- (void)setMessageUnits:(id)arg1;
- (void)setResultType:(unsigned int)arg1;
- (void)setStitchedEvents:(id)arg1;
- (void)setSubjectContainsDate:(BOOL)arg1;
- (void)setSubjectDataDetectorsFeatures:(id)arg1;
- (BOOL)shouldReplaceSendDateWithCurrentDate;
- (id)sportTeamNamesFromFeatures:(id)arg1;
- (id)stitchedEvents;
- (id)stitchedEventsFromEvents:(id)arg1;
- (id)stringsFromDataFeatures:(id)arg1 matchingTypes:(id)arg2;
- (BOOL)subjectContainsDate;
- (id)subjectDataDetectorsFeatures;
- (id)subjectEventVocabularyIgnoreDateKeyword:(id)arg1;
- (id)subjectEventVocabularyRejectionKeyword:(id)arg1;

@end