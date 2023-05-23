#pragma once
#include "common.h"
namespace SDK
{


    struct FJoinabilitySettings //ScriptStruct CoreUObject.JoinabilitySettings
    {
    //Children Prop Count (Fields): 7
    public:

        struct FName SessionName; // 0x0
        bool bPublicSearchable; // 0x8
        bool bAllowInvites; // 0x9
        bool bJoinViaPresence; // 0xa
        bool bJoinViaPresenceFriendsOnly; // 0xb
        int32_t MaxPlayers; // 0xc
        int32_t MaxPartySize; // 0x10

    };

    struct FDefault__ScriptStruct //ScriptStruct CoreUObject.Default__ScriptStruct
    {
    public:


    };

    struct FUniqueNetIdWrapper //ScriptStruct CoreUObject.UniqueNetIdWrapper
    {
    public:


    };

    struct FGuid //ScriptStruct CoreUObject.Guid
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t C; // 0x8
        int32_t D; // 0xc

    };

    struct FVector //ScriptStruct CoreUObject.Vector
    {
    //Children Prop Count (Fields): 3
    public:

        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8

    };

    struct FVector4 //ScriptStruct CoreUObject.Vector4
    {
    //Children Prop Count (Fields): 4
    public:

        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float W; // 0xc

    };

    struct FVector2D //ScriptStruct CoreUObject.Vector2D
    {
    //Children Prop Count (Fields): 2
    public:

        float X; // 0x0
        float Y; // 0x4

    };

    struct FTwoVectors //ScriptStruct CoreUObject.TwoVectors
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector v1; // 0x0
        struct FVector v2; // 0xc

    };

    struct FPlane : FVector //ScriptStruct CoreUObject.Plane
    {
    //Children Prop Count (Fields): 1
    public:

        float W; // 0xc

    };

    struct FRotator //ScriptStruct CoreUObject.Rotator
    {
    //Children Prop Count (Fields): 3
    public:

        float Pitch; // 0x0
        float Yaw; // 0x4
        float Roll; // 0x8

    };

    struct FQuat //ScriptStruct CoreUObject.Quat
    {
    //Children Prop Count (Fields): 4
    public:

        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float W; // 0xc

    };

    struct FPackedNormal //ScriptStruct CoreUObject.PackedNormal
    {
    //Children Prop Count (Fields): 4
    public:

        char X; // 0x0
        char Y; // 0x1
        char Z; // 0x2
        char W; // 0x3

    };

    struct FPackedRGB10A2N //ScriptStruct CoreUObject.PackedRGB10A2N
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Packed; // 0x0

    };

    struct FPackedRGBA16N //ScriptStruct CoreUObject.PackedRGBA16N
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t XY; // 0x0
        int32_t ZW; // 0x4

    };

    struct FIntPoint //ScriptStruct CoreUObject.IntPoint
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t X; // 0x0
        int32_t Y; // 0x4

    };

    struct FIntVector //ScriptStruct CoreUObject.IntVector
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t X; // 0x0
        int32_t Y; // 0x4
        int32_t Z; // 0x8

    };

    struct FColor //ScriptStruct CoreUObject.Color
    {
    //Children Prop Count (Fields): 4
    public:

        char B; // 0x0
        char G; // 0x1
        char R; // 0x2
        char A; // 0x3

    };

    struct FLinearColor //ScriptStruct CoreUObject.LinearColor
    {
    //Children Prop Count (Fields): 4
    public:

        float R; // 0x0
        float G; // 0x4
        float B; // 0x8
        float A; // 0xc

    };

    struct FBox //ScriptStruct CoreUObject.Box
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Min; // 0x0
        struct FVector Max; // 0xc
        char IsValid; // 0x18

    };

    struct FBox2D //ScriptStruct CoreUObject.Box2D
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector2D Min; // 0x0
        struct FVector2D Max; // 0x8
        char bIsValid; // 0x10

    };

    struct FBoxSphereBounds //ScriptStruct CoreUObject.BoxSphereBounds
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Origin; // 0x0
        struct FVector BoxExtent; // 0xc
        float SphereRadius; // 0x18

    };

    struct FOrientedBox //ScriptStruct CoreUObject.OrientedBox
    {
    //Children Prop Count (Fields): 7
    public:

        struct FVector Center; // 0x0
        struct FVector AxisX; // 0xc
        struct FVector AxisY; // 0x18
        struct FVector AxisZ; // 0x24
        float ExtentX; // 0x30
        float ExtentY; // 0x34
        float ExtentZ; // 0x38

    };

    struct FMatrix //ScriptStruct CoreUObject.Matrix
    {
    //Children Prop Count (Fields): 4
    public:

        struct FPlane XPlane; // 0x0
        struct FPlane YPlane; // 0x10
        struct FPlane ZPlane; // 0x20
        struct FPlane WPlane; // 0x30

    };

    struct FInterpCurvePointFloat //ScriptStruct CoreUObject.InterpCurvePointFloat
    {
    //Children Prop Count (Fields): 5
    public:

        float InVal; // 0x0
        float OutVal; // 0x4
        float ArriveTangent; // 0x8
        float LeaveTangent; // 0xc
        enum class EInterpCurveMode InterpMode; // 0x10

    };

    struct FInterpCurveFloat //ScriptStruct CoreUObject.InterpCurveFloat
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FInterpCurvePointFloat> Points; // 0x0
        bool bIsLooped; // 0x10
        float LoopKeyOffset; // 0x14

    };

    struct FInterpCurvePointVector2D //ScriptStruct CoreUObject.InterpCurvePointVector2D
    {
    //Children Prop Count (Fields): 5
    public:

        float InVal; // 0x0
        struct FVector2D OutVal; // 0x4
        struct FVector2D ArriveTangent; // 0xc
        struct FVector2D LeaveTangent; // 0x14
        enum class EInterpCurveMode InterpMode; // 0x1c

    };

    struct FInterpCurveVector2D //ScriptStruct CoreUObject.InterpCurveVector2D
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FInterpCurvePointVector2D> Points; // 0x0
        bool bIsLooped; // 0x10
        float LoopKeyOffset; // 0x14

    };

    struct FInterpCurvePointVector //ScriptStruct CoreUObject.InterpCurvePointVector
    {
    //Children Prop Count (Fields): 5
    public:

        float InVal; // 0x0
        struct FVector OutVal; // 0x4
        struct FVector ArriveTangent; // 0x10
        struct FVector LeaveTangent; // 0x1c
        enum class EInterpCurveMode InterpMode; // 0x28

    };

    struct FInterpCurveVector //ScriptStruct CoreUObject.InterpCurveVector
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FInterpCurvePointVector> Points; // 0x0
        bool bIsLooped; // 0x10
        float LoopKeyOffset; // 0x14

    };

    struct FInterpCurvePointQuat //ScriptStruct CoreUObject.InterpCurvePointQuat
    {
    //Children Prop Count (Fields): 5
    public:

        float InVal; // 0x0
        struct FQuat OutVal; // 0x10
        struct FQuat ArriveTangent; // 0x20
        struct FQuat LeaveTangent; // 0x30
        enum class EInterpCurveMode InterpMode; // 0x40

    };

    struct FInterpCurveQuat //ScriptStruct CoreUObject.InterpCurveQuat
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FInterpCurvePointQuat> Points; // 0x0
        bool bIsLooped; // 0x10
        float LoopKeyOffset; // 0x14

    };

    struct FInterpCurvePointTwoVectors //ScriptStruct CoreUObject.InterpCurvePointTwoVectors
    {
    //Children Prop Count (Fields): 5
    public:

        float InVal; // 0x0
        struct FTwoVectors OutVal; // 0x4
        struct FTwoVectors ArriveTangent; // 0x1c
        struct FTwoVectors LeaveTangent; // 0x34
        enum class EInterpCurveMode InterpMode; // 0x4c

    };

    struct FInterpCurveTwoVectors //ScriptStruct CoreUObject.InterpCurveTwoVectors
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x0
        bool bIsLooped; // 0x10
        float LoopKeyOffset; // 0x14

    };

    struct FInterpCurvePointLinearColor //ScriptStruct CoreUObject.InterpCurvePointLinearColor
    {
    //Children Prop Count (Fields): 5
    public:

        float InVal; // 0x0
        struct FLinearColor OutVal; // 0x4
        struct FLinearColor ArriveTangent; // 0x14
        struct FLinearColor LeaveTangent; // 0x24
        enum class EInterpCurveMode InterpMode; // 0x34

    };

    struct FInterpCurveLinearColor //ScriptStruct CoreUObject.InterpCurveLinearColor
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x0
        bool bIsLooped; // 0x10
        float LoopKeyOffset; // 0x14

    };

    struct FTransform //ScriptStruct CoreUObject.Transform
    {
    //Children Prop Count (Fields): 3
    public:

        struct FQuat Rotation; // 0x0
        struct FVector Translation; // 0x10
        struct FVector Scale3D; // 0x20

    };

    struct FRandomStream //ScriptStruct CoreUObject.RandomStream
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t InitialSeed; // 0x0
        int32_t Seed; // 0x4

    };

    struct FDateTime //ScriptStruct CoreUObject.DateTime
    {
    public:


    };

    struct FFrameNumber //ScriptStruct CoreUObject.FrameNumber
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Value; // 0x0

    };

    struct FFrameRate //ScriptStruct CoreUObject.FrameRate
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t Numerator; // 0x0
        int32_t Denominator; // 0x4

    };

    struct FFrameTime //ScriptStruct CoreUObject.FrameTime
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameNumber FrameNumber; // 0x0
        float SubFrame; // 0x4

    };

    struct FQualifiedFrameTime //ScriptStruct CoreUObject.QualifiedFrameTime
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameTime Time; // 0x0
        struct FFrameRate Rate; // 0x8

    };

    struct FTimecode //ScriptStruct CoreUObject.Timecode
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t Hours; // 0x0
        int32_t Minutes; // 0x4
        int32_t Seconds; // 0x8
        int32_t Frames; // 0xc
        bool bDropFrameFormat; // 0x10

    };

    struct FTimespan //ScriptStruct CoreUObject.Timespan
    {
    public:


    };

    struct FSoftObjectPath //ScriptStruct CoreUObject.SoftObjectPath
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName AssetPathName; // 0x0
        struct FString SubPathString; // 0x8

    };

    struct FSoftClassPath : FSoftObjectPath //ScriptStruct CoreUObject.SoftClassPath
    {
    public:


    };

    struct FPrimaryAssetType //ScriptStruct CoreUObject.PrimaryAssetType
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName Name; // 0x0

    };

    struct FPrimaryAssetId //ScriptStruct CoreUObject.PrimaryAssetId
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPrimaryAssetType PrimaryAssetType; // 0x0
        struct FName PrimaryAssetName; // 0x8

    };

    struct FFallbackStruct //ScriptStruct CoreUObject.FallbackStruct
    {
    public:


    };

    struct FFloatRangeBound //ScriptStruct CoreUObject.FloatRangeBound
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ERangeBoundTypes Type; // 0x0
        float Value; // 0x4

    };

    struct FFloatRange //ScriptStruct CoreUObject.FloatRange
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFloatRangeBound LowerBound; // 0x0
        struct FFloatRangeBound UpperBound; // 0x8

    };

    struct FInt32RangeBound //ScriptStruct CoreUObject.Int32RangeBound
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ERangeBoundTypes Type; // 0x0
        int32_t Value; // 0x4

    };

    struct FInt32Range //ScriptStruct CoreUObject.Int32Range
    {
    //Children Prop Count (Fields): 2
    public:

        struct FInt32RangeBound LowerBound; // 0x0
        struct FInt32RangeBound UpperBound; // 0x8

    };

    struct FFloatInterval //ScriptStruct CoreUObject.FloatInterval
    {
    //Children Prop Count (Fields): 2
    public:

        float Min; // 0x0
        float Max; // 0x4

    };

    struct FInt32Interval //ScriptStruct CoreUObject.Int32Interval
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t Min; // 0x0
        int32_t Max; // 0x4

    };

    struct FPolyglotTextData //ScriptStruct CoreUObject.PolyglotTextData
    {
    //Children Prop Count (Fields): 8
    public:

        enum class ELocalizedTextSourceCategory Category; // 0x0
        struct FString NativeCulture; // 0x8
        struct FString Namespace; // 0x18
        struct FString Key; // 0x28
        struct FString NativeString; // 0x38
        struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48
        bool bIsMinimalPatch; // 0x98
        struct FText CachedText; // 0xa0

    };

    struct FAutomationEvent //ScriptStruct CoreUObject.AutomationEvent
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EAutomationEventType Type; // 0x0
        struct FString Message; // 0x8
        struct FString Context; // 0x18
        struct FGuid Artifact; // 0x28

    };

    struct FAutomationExecutionEntry //ScriptStruct CoreUObject.AutomationExecutionEntry
    {
    //Children Prop Count (Fields): 4
    public:

        struct FAutomationEvent Event; // 0x0
        struct FString Filename; // 0x38
        int32_t LineNumber; // 0x48
        struct FDateTime Timestamp; // 0x50

    };

    struct FBlueprintSessionResult //ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
    {
    public:


    };

    struct FInAppPurchaseProductInfo //ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
    {
    //Children Prop Count (Fields): 11
    public:

        struct FString Identifier; // 0x0
        struct FString TransactionIdentifier; // 0x10
        struct FString DisplayName; // 0x20
        struct FString DisplayDescription; // 0x30
        struct FString DisplayPrice; // 0x40
        float RawPrice; // 0x50
        struct FString CurrencyCode; // 0x58
        struct FString CurrencySymbol; // 0x68
        struct FString DecimalSeparator; // 0x78
        struct FString GroupingSeparator; // 0x88
        struct FString ReceiptData; // 0x98

    };

    struct FInAppPurchaseReceiptInfo2 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString ItemName; // 0x0
        struct FString ItemId; // 0x10
        struct FString ValidationInfo; // 0x20

    };

    struct FOnlineProxyStoreOffer //ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
    {
    //Children Prop Count (Fields): 13
    public:

        struct FString OfferId; // 0x0
        struct FText Title; // 0x10
        struct FText Description; // 0x28
        struct FText LongDescription; // 0x40
        struct FText RegularPriceText; // 0x58
        int32_t RegularPrice; // 0x70
        struct FText PriceText; // 0x78
        int32_t NumericPrice; // 0x90
        struct FString CurrencyCode; // 0x98
        struct FDateTime ReleaseDate; // 0xa8
        struct FDateTime ExpirationDate; // 0xb0
        enum class EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8
        struct TMap<struct FString, struct FString> DynamicFields; // 0xc0

    };

    struct FInAppPurchaseRestoreInfo //ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString Identifier; // 0x0
        struct FString ReceiptData; // 0x10
        struct FString TransactionIdentifier; // 0x20

    };

    struct FInAppPurchaseRestoreInfo2 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString ItemName; // 0x0
        struct FString ItemId; // 0x10
        struct FString ValidationInfo; // 0x20

    };

    struct FAKWaapiJsonObject //ScriptStruct AkAudio.AKWaapiJsonObject
    {
    public:


    };

    struct FAkWaapiSubscriptionId //ScriptStruct AkAudio.AkWaapiSubscriptionId
    {
    public:


    };

    struct FDistributionLookupTable //ScriptStruct Engine.DistributionLookupTable
    {
    //Children Prop Count (Fields): 8
    public:

        float TimeScale; // 0x0
        float TimeBias; // 0x4
        struct TArray<float> Values; // 0x8
        char Op; // 0x18
        char EntryCount; // 0x19
        char EntryStride; // 0x1a
        char SubEntryStride; // 0x1b
        char LockFlag; // 0x1c

    };

    struct FRawDistribution //ScriptStruct Engine.RawDistribution
    {
    //Children Prop Count (Fields): 1
    public:

        struct FDistributionLookupTable Table; // 0x0

    };

    struct FFloatDistribution //ScriptStruct Engine.FloatDistribution
    {
    //Children Prop Count (Fields): 1
    public:

        struct FDistributionLookupTable Table; // 0x0

    };

    struct FVectorDistribution //ScriptStruct Engine.VectorDistribution
    {
    //Children Prop Count (Fields): 1
    public:

        struct FDistributionLookupTable Table; // 0x0

    };

    struct FVector4Distribution //ScriptStruct Engine.Vector4Distribution
    {
    //Children Prop Count (Fields): 1
    public:

        struct FDistributionLookupTable Table; // 0x0

    };

    struct FFloatRK4SpringInterpolator //ScriptStruct Engine.FloatRK4SpringInterpolator
    {
    //Children Prop Count (Fields): 2
    public:

        float StiffnessConstant; // 0x0
        float DampeningRatio; // 0x4

    };

    struct FVectorRK4SpringInterpolator //ScriptStruct Engine.VectorRK4SpringInterpolator
    {
    //Children Prop Count (Fields): 2
    public:

        float StiffnessConstant; // 0x0
        float DampeningRatio; // 0x4

    };

    struct FFormatArgumentData //ScriptStruct Engine.FormatArgumentData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FString ArgumentName; // 0x0
        enum class EFormatArgumentType ArgumentValueType; // 0x10
        struct FText ArgumentValue; // 0x18
        int32_t ArgumentValueInt; // 0x30
        float ArgumentValueFloat; // 0x34
        enum class ETextGender ArgumentValueGender; // 0x38

    };

    struct FExpressionInput //ScriptStruct Engine.ExpressionInput
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t OutputIndex; // 0x0
        struct FName ExpressionName; // 0x4

    };

    struct FMaterialAttributesInput : FExpressionInput //ScriptStruct Engine.MaterialAttributesInput
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t PropertyConnectedBitmask; // 0xc

    };

    struct FExpressionOutput //ScriptStruct Engine.ExpressionOutput
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName OutputName; // 0x0

    };

    struct FMaterialInput //ScriptStruct Engine.MaterialInput
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t OutputIndex; // 0x0
        struct FName ExpressionName; // 0x4

    };

    struct FColorMaterialInput : FMaterialInput //ScriptStruct Engine.ColorMaterialInput
    {
    public:


    };

    struct FScalarMaterialInput : FMaterialInput //ScriptStruct Engine.ScalarMaterialInput
    {
    public:


    };

    struct FShadingModelMaterialInput : FMaterialInput //ScriptStruct Engine.ShadingModelMaterialInput
    {
    public:


    };

    struct FVectorMaterialInput : FMaterialInput //ScriptStruct Engine.VectorMaterialInput
    {
    public:


    };

    struct FVector2MaterialInput : FMaterialInput //ScriptStruct Engine.Vector2MaterialInput
    {
    public:


    };

    struct FHitResult //ScriptStruct Engine.HitResult
    {
    //Children Prop Count (Fields): 18
    public:

        char bBlockingHit; // 0x0
        char bStartPenetrating; // 0x0
        int32_t FaceIndex; // 0x4
        float Time; // 0x8
        float Distance; // 0xc
        struct FVector_NetQuantize Location; // 0x10
        struct FVector_NetQuantize ImpactPoint; // 0x1c
        struct FVector_NetQuantizeNormal Normal; // 0x28
        struct FVector_NetQuantizeNormal ImpactNormal; // 0x34
        struct FVector_NetQuantize TraceStart; // 0x40
        struct FVector_NetQuantize TraceEnd; // 0x4c
        float PenetrationDepth; // 0x58
        int32_t Item; // 0x5c
        struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x60
        struct TWeakObjectPtr<struct AActor> Actor; // 0x68
        struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x70
        struct FName BoneName; // 0x78
        struct FName MyBoneName; // 0x80

    };

    struct FVector_NetQuantize : FVector //ScriptStruct Engine.Vector_NetQuantize
    {
    public:


    };

    struct FVector_NetQuantizeNormal : FVector //ScriptStruct Engine.Vector_NetQuantizeNormal
    {
    public:


    };

    struct FKey //ScriptStruct InputCore.Key
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName KeyName; // 0x0

    };

    struct FBranchingPointNotifyPayload //ScriptStruct Engine.BranchingPointNotifyPayload
    {
    public:


    };

    struct FSimpleMemberReference //ScriptStruct Engine.SimpleMemberReference
    {
    //Children Prop Count (Fields): 3
    public:

        class UObject* MemberParent; // 0x0
        struct FName MemberName; // 0x8
        struct FGuid MemberGuid; // 0x10

    };

    struct FTickFunction //ScriptStruct Engine.TickFunction
    {
    //Children Prop Count (Fields): 7
    public:

        enum class ETickingGroup TickGroup; // 0x8
        enum class ETickingGroup EndTickGroup; // 0x9
        char bTickEvenWhenPaused; // 0xa
        char bCanEverTick; // 0xa
        char bStartWithTickEnabled; // 0xa
        char bAllowTickOnDedicatedServer; // 0xa
        float TickInterval; // 0xc

    };

    struct FActorComponentTickFunction : FTickFunction //ScriptStruct Engine.ActorComponentTickFunction
    {
    public:


    };

    struct FSubtitleCue //ScriptStruct Engine.SubtitleCue
    {
    //Children Prop Count (Fields): 2
    public:

        struct FText Text; // 0x0
        float Time; // 0x18

    };

    struct FInterpControlPoint //ScriptStruct Engine.InterpControlPoint
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector PositionControlPoint; // 0x0
        bool bPositionIsRelative; // 0xc

    };

    struct FPlatformInterfaceDelegateResult //ScriptStruct Engine.PlatformInterfaceDelegateResult
    {
    //Children Prop Count (Fields): 2
    public:

        bool bSuccessful; // 0x0
        struct FPlatformInterfaceData Data; // 0x8

    };

    struct FPlatformInterfaceData //ScriptStruct Engine.PlatformInterfaceData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName DataName; // 0x0
        enum class EPlatformInterfaceDataType Type; // 0x8
        int32_t IntValue; // 0xc
        float FloatValue; // 0x10
        struct FString StringValue; // 0x18
        class UObject* ObjectValue; // 0x28

    };

    struct FDebugFloatHistory //ScriptStruct Engine.DebugFloatHistory
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<float> Samples; // 0x0
        float MaxSamples; // 0x10
        float MinValue; // 0x14
        float MaxValue; // 0x18
        bool bAutoAdjustMinMax; // 0x1c

    };

    struct FLatentActionInfo //ScriptStruct Engine.LatentActionInfo
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t Linkage; // 0x0
        int32_t UUID; // 0x4
        struct FName ExecutionFunction; // 0x8
        class UObject* CallbackTarget; // 0x10

    };

    struct FTimerHandle //ScriptStruct Engine.TimerHandle
    {
    //Children Prop Count (Fields): 1
    public:

        uint64_t Handle; // 0x0

    };

    struct FCollisionProfileName //ScriptStruct Engine.CollisionProfileName
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName Name; // 0x0

    };

    struct FGenericStruct //ScriptStruct Engine.GenericStruct
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Data; // 0x0

    };

    struct FUserActivity //ScriptStruct Engine.UserActivity
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString ActionName; // 0x0

    };

    struct FMagicLeapARPinState //ScriptStruct MagicLeapARPin.MagicLeapARPinState
    {
    //Children Prop Count (Fields): 4
    public:

        float Confidence; // 0x0
        float ValidRadius; // 0x4
        float RotationError; // 0x8
        float TranslationError; // 0xc

    };

    struct FPurchaseItemDetails //ScriptStruct MagicLeap.PurchaseItemDetails
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString Price; // 0x10
        struct FString Name; // 0x20
        enum class PurchaseType Type; // 0x30

    };

    struct FPurchaseConfirmation //ScriptStruct MagicLeap.PurchaseConfirmation
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString PackageName; // 0x10
        enum class PurchaseType Type; // 0x48

    };

    struct FMagicLeapMeshBlockRequest //ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid BlockID; // 0x0
        enum class EMagicLeapMeshLOD LevelOfDetail; // 0x10

    };

    struct FMagicLeapTrackingMeshInfo //ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FTimespan Timestamp; // 0x0
        struct TArray<struct FMagicLeapMeshBlockInfo> BlockData; // 0x8

    };

    struct FMagicLeapMeshBlockInfo //ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
    {
    //Children Prop Count (Fields): 6
    public:

        struct FGuid BlockID; // 0x0
        struct FVector BlockPosition; // 0x10
        struct FRotator BlockOrientation; // 0x1c
        struct FVector BlockDimensions; // 0x28
        struct FTimespan Timestamp; // 0x38
        enum class EMagicLeapMeshState BlockState; // 0x40

    };

    struct FMagicLeapRaycastHitResult //ScriptStruct MagicLeap.MagicLeapRaycastHitResult
    {
    //Children Prop Count (Fields): 5
    public:

        enum class EMagicLeapRaycastResultState HitState; // 0x0
        struct FVector HitPoint; // 0x4
        struct FVector Normal; // 0x10
        float Confidence; // 0x1c
        int32_t UserData; // 0x20

    };

    struct FMagicLeapRaycastQueryParams //ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
    {
    //Children Prop Count (Fields): 8
    public:

        struct FVector Position; // 0x0
        struct FVector Direction; // 0xc
        struct FVector UpVector; // 0x18
        int32_t Width; // 0x24
        int32_t Height; // 0x28
        float HorizontalFovDegrees; // 0x2c
        bool CollideWithUnobserved; // 0x30
        int32_t UserData; // 0x34

    };

    struct FMagicLeapTouchpadGesture //ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
    {
    //Children Prop Count (Fields): 10
    public:

        enum class EControllerHand Hand; // 0x0
        struct FName MotionSource; // 0x4
        enum class EMagicLeapTouchpadGestureType Type; // 0xc
        enum class EMagicLeapTouchpadGestureDirection Direction; // 0xd
        struct FVector PositionAndForce; // 0x10
        float Speed; // 0x1c
        float Distance; // 0x20
        float FingerGap; // 0x24
        float Radius; // 0x28
        float Angle; // 0x2c

    };

    struct FMagicLeapIdentityAttribute //ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EMagicLeapIdentityKey Attribute; // 0x0
        struct FString Value; // 0x8

    };

    struct FMagicLeapPlaneBoundaries //ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid ID; // 0x0
        struct TArray<struct FMagicLeapPlaneBoundary> Boundaries; // 0x10

    };

    struct FMagicLeapPlaneBoundary //ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMagicLeapPolygon Polygon; // 0x0
        struct TArray<struct FMagicLeapPolygon> Holes; // 0x10

    };

    struct FMagicLeapPolygon //ScriptStruct MagicLeapPlanes.MagicLeapPolygon
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FVector> Vertices; // 0x0

    };

    struct FMagicLeapPlaneResult //ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
    {
    //Children Prop Count (Fields): 7
    public:

        struct FVector PlanePosition; // 0x0
        struct FRotator PlaneOrientation; // 0xc
        struct FRotator ContentOrientation; // 0x18
        struct FVector2D PlaneDimensions; // 0x24
        struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30
        struct FGuid ID; // 0x40
        struct FGuid InnerID; // 0x50

    };

    struct FAppleImageUtilsImageConversionResult //ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Error; // 0x0
        struct TArray<char> ImageData; // 0x10

    };

    struct FLocationServicesData //ScriptStruct LocationServicesBPLibrary.LocationServicesData
    {
    //Children Prop Count (Fields): 6
    public:

        float Timestamp; // 0x0
        float Longitude; // 0x4
        float Latitude; // 0x8
        float HorizontalAccuracy; // 0xc
        float VerticalAccuracy; // 0x10
        float Altitude; // 0x14

    };

    struct FEnvSetting //ScriptStruct VeiledExperts.EnvSetting
    {
    //Children Prop Count (Fields): 19
    public:

        char bApplyLightIntensity; // 0x0
        float SkyLightIntensity; // 0x4
        float DirectionalLightIntensity; // 0x8
        struct FColor SkyLightColor; // 0xc
        struct FColor DirectionalLightColor; // 0x10
        char bUseFogSetting; // 0x14
        struct FLinearColor FogInscatteringColor; // 0x18
        float FogMaxOpacity; // 0x28
        float FogDensity; // 0x2c
        float FogHeightFalloff; // 0x30
        float FogStartDistance; // 0x34
        float FogDensity2; // 0x38
        float FogHeightFalloff2; // 0x3c
        float FogHeightOffset2; // 0x40
        struct FColor VolumetricFogAlbedo; // 0x44
        float VolumetricFogScatteringDistribution; // 0x48
        float VolumetricFogExtinctionScale; // 0x4c
        float VolumetricFogDistance; // 0x50
        struct FVector MovingObjectPosition; // 0x54

    };

    struct FGeometry //ScriptStruct SlateCore.Geometry
    {
    public:


    };

    struct FSlateBrush //ScriptStruct SlateCore.SlateBrush
    {
    //Children Prop Count (Fields): 12
    public:

        struct FVector2D ImageSize; // 0x8
        struct FMargin Margin; // 0x10
        struct FSlateColor TintColor; // 0x20
        class UObject* ResourceObject; // 0x48
        struct FName ResourceName; // 0x50
        struct FBox2D UVRegion; // 0x58
        enum class ESlateBrushDrawType DrawAs; // 0x6c
        enum class ESlateBrushTileType tiling; // 0x6d
        enum class ESlateBrushMirrorType Mirroring; // 0x6e
        enum class ESlateBrushImageType ImageType; // 0x6f
        char bIsDynamicallyLoaded; // 0x80
        char bHasUObject; // 0x80

    };

    struct FSlateColor //ScriptStruct SlateCore.SlateColor
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLinearColor SpecifiedColor; // 0x0
        enum class ESlateColorStylingMode ColorUseRule; // 0x10

    };

    struct FMargin //ScriptStruct SlateCore.Margin
    {
    //Children Prop Count (Fields): 4
    public:

        float Left; // 0x0
        float Top; // 0x4
        float Right; // 0x8
        float Bottom; // 0xc

    };

    struct FEventReply //ScriptStruct UMG.EventReply
    {
    public:


    };

    struct FInputEvent //ScriptStruct SlateCore.InputEvent
    {
    public:


    };

    struct FPointerEvent : FInputEvent //ScriptStruct SlateCore.PointerEvent
    {
    public:


    };

    struct FWidgetTransform //ScriptStruct UMG.WidgetTransform
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector2D Translation; // 0x0
        struct FVector2D Scale; // 0x8
        struct FVector2D Shear; // 0x10
        float Angle; // 0x18

    };

    struct FPaintContext //ScriptStruct UMG.PaintContext
    {
    public:


    };

    struct FCharacterEvent : FInputEvent //ScriptStruct SlateCore.CharacterEvent
    {
    public:


    };

    struct FKeyEvent : FInputEvent //ScriptStruct SlateCore.KeyEvent
    {
    public:


    };

    struct FNavigationEvent : FInputEvent //ScriptStruct SlateCore.NavigationEvent
    {
    public:


    };

    struct FAnalogInputEvent : FKeyEvent //ScriptStruct SlateCore.AnalogInputEvent
    {
    public:


    };

    struct FSlateFontInfo //ScriptStruct SlateCore.SlateFontInfo
    {
    //Children Prop Count (Fields): 5
    public:

        class UObject* FontObject; // 0x0
        class UObject* FontMaterial; // 0x8
        struct FFontOutlineSettings OutlineSettings; // 0x10
        struct FName TypefaceFontName; // 0x40
        int32_t Size; // 0x48

    };

    struct FFontOutlineSettings //ScriptStruct SlateCore.FontOutlineSettings
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t OutlineSize; // 0x0
        bool bSeparateFillAlpha; // 0x4
        bool bApplyOutlineToDropShadows; // 0x5
        class UObject* OutlineMaterial; // 0x8
        struct FLinearColor OutlineColor; // 0x10

    };

    struct FSlateWidgetStyle //ScriptStruct SlateCore.SlateWidgetStyle
    {
    public:


    };

    struct FTableRowStyle : FSlateWidgetStyle //ScriptStruct SlateCore.TableRowStyle
    {
    //Children Prop Count (Fields): 16
    public:

        struct FSlateBrush SelectorFocusedBrush; // 0x8
        struct FSlateBrush ActiveHoveredBrush; // 0x90
        struct FSlateBrush ActiveBrush; // 0x118
        struct FSlateBrush InactiveHoveredBrush; // 0x1a0
        struct FSlateBrush InactiveBrush; // 0x228
        struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2b0
        struct FSlateBrush EvenRowBackgroundBrush; // 0x338
        struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3c0
        struct FSlateBrush OddRowBackgroundBrush; // 0x448
        struct FSlateColor TextColor; // 0x4d0
        struct FSlateColor SelectedTextColor; // 0x4f8
        struct FSlateBrush DropIndicator_Above; // 0x520
        struct FSlateBrush DropIndicator_Onto; // 0x5a8
        struct FSlateBrush DropIndicator_Below; // 0x630
        struct FSlateBrush ActiveHighlightedBrush; // 0x6b8
        struct FSlateBrush InactiveHighlightedBrush; // 0x740

    };

    struct FComboBoxStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ComboBoxStyle
    {
    //Children Prop Count (Fields): 3
    public:

        struct FComboButtonStyle ComboButtonStyle; // 0x8
        struct FSlateSound PressedSlateSound; // 0x3c0
        struct FSlateSound SelectionChangeSlateSound; // 0x3d8

    };

    struct FSlateSound //ScriptStruct SlateCore.SlateSound
    {
    //Children Prop Count (Fields): 1
    public:

        class UObject* ResourceObject; // 0x0

    };

    struct FComboButtonStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ComboButtonStyle
    {
    //Children Prop Count (Fields): 6
    public:

        struct FButtonStyle ButtonStyle; // 0x8
        struct FSlateBrush DownArrowImage; // 0x280
        struct FVector2D ShadowOffset; // 0x308
        struct FLinearColor ShadowColorAndOpacity; // 0x310
        struct FSlateBrush MenuBorderBrush; // 0x320
        struct FMargin MenuBorderPadding; // 0x3a8

    };

    struct FButtonStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ButtonStyle
    {
    //Children Prop Count (Fields): 8
    public:

        struct FSlateBrush Normal; // 0x8
        struct FSlateBrush Hovered; // 0x90
        struct FSlateBrush Pressed; // 0x118
        struct FSlateBrush Disabled; // 0x1a0
        struct FMargin NormalPadding; // 0x228
        struct FMargin PressedPadding; // 0x238
        struct FSlateSound PressedSlateSound; // 0x248
        struct FSlateSound HoveredSlateSound; // 0x260

    };

    struct FShapedTextOptions //ScriptStruct UMG.ShapedTextOptions
    {
    //Children Prop Count (Fields): 4
    public:

        char bOverride_TextShapingMethod; // 0x0
        char bOverride_TextFlowDirection; // 0x0
        enum class ETextShapingMethod TextShapingMethod; // 0x1
        enum class ETextFlowDirection TextFlowDirection; // 0x2

    };

    struct FVirtualKeyboardOptions //ScriptStruct Slate.VirtualKeyboardOptions
    {
    //Children Prop Count (Fields): 1
    public:

        bool bEnableAutocorrect; // 0x0

    };

    struct FEditableTextStyle : FSlateWidgetStyle //ScriptStruct SlateCore.EditableTextStyle
    {
    //Children Prop Count (Fields): 5
    public:

        struct FSlateFontInfo Font; // 0x8
        struct FSlateColor ColorAndOpacity; // 0x58
        struct FSlateBrush BackgroundImageSelected; // 0x80
        struct FSlateBrush BackgroundImageComposing; // 0x108
        struct FSlateBrush CaretImage; // 0x190

    };

    struct FEditableTextBoxStyle : FSlateWidgetStyle //ScriptStruct SlateCore.EditableTextBoxStyle
    {
    //Children Prop Count (Fields): 12
    public:

        struct FSlateBrush BackgroundImageNormal; // 0x8
        struct FSlateBrush BackgroundImageHovered; // 0x90
        struct FSlateBrush BackgroundImageFocused; // 0x118
        struct FSlateBrush BackgroundImageReadOnly; // 0x1a0
        struct FMargin Padding; // 0x228
        struct FSlateFontInfo Font; // 0x238
        struct FSlateColor ForegroundColor; // 0x288
        struct FSlateColor BackgroundColor; // 0x2b0
        struct FSlateColor ReadOnlyForegroundColor; // 0x2d8
        struct FMargin HScrollBarPadding; // 0x300
        struct FMargin VScrollBarPadding; // 0x310
        struct FScrollBarStyle ScrollBarStyle; // 0x320

    };

    struct FScrollBarStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ScrollBarStyle
    {
    //Children Prop Count (Fields): 9
    public:

        struct FSlateBrush HorizontalBackgroundImage; // 0x8
        struct FSlateBrush VerticalBackgroundImage; // 0x90
        struct FSlateBrush VerticalTopSlotImage; // 0x118
        struct FSlateBrush HorizontalTopSlotImage; // 0x1a0
        struct FSlateBrush VerticalBottomSlotImage; // 0x228
        struct FSlateBrush HorizontalBottomSlotImage; // 0x2b0
        struct FSlateBrush NormalThumbImage; // 0x338
        struct FSlateBrush HoveredThumbImage; // 0x3c0
        struct FSlateBrush DraggedThumbImage; // 0x448

    };

    struct FInputChord //ScriptStruct Slate.InputChord
    {
    //Children Prop Count (Fields): 5
    public:

        struct FKey Key; // 0x0
        char bShift; // 0x18
        char bCtrl; // 0x18
        char bAlt; // 0x18
        char bCmd; // 0x18

    };

    struct FTextBlockStyle : FSlateWidgetStyle //ScriptStruct SlateCore.TextBlockStyle
    {
    //Children Prop Count (Fields): 9
    public:

        struct FSlateFontInfo Font; // 0x8
        struct FSlateColor ColorAndOpacity; // 0x58
        struct FVector2D ShadowOffset; // 0x80
        struct FLinearColor ShadowColorAndOpacity; // 0x88
        struct FSlateColor SelectedBackgroundColor; // 0x98
        struct FLinearColor HighlightColor; // 0xc0
        struct FSlateBrush HighlightShape; // 0xd0
        struct FSlateBrush StrikeBrush; // 0x158
        struct FSlateBrush UnderlineBrush; // 0x1e0

    };

    struct FSpinBoxStyle : FSlateWidgetStyle //ScriptStruct SlateCore.SpinBoxStyle
    {
    //Children Prop Count (Fields): 7
    public:

        struct FSlateBrush BackgroundBrush; // 0x8
        struct FSlateBrush HoveredBackgroundBrush; // 0x90
        struct FSlateBrush ActiveFillBrush; // 0x118
        struct FSlateBrush InactiveFillBrush; // 0x1a0
        struct FSlateBrush ArrowsImage; // 0x228
        struct FSlateColor ForegroundColor; // 0x2b0
        struct FMargin TextPadding; // 0x2d8

    };

    struct FGameplayResourceSet //ScriptStruct GameplayTasks.GameplayResourceSet
    {
    public:


    };

    struct FAIRequestID //ScriptStruct AIModule.AIRequestID
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t RequestID; // 0x0

    };

    struct FAIStimulus //ScriptStruct AIModule.AIStimulus
    {
    //Children Prop Count (Fields): 7
    public:

        float Age; // 0x0
        float ExpirationAge; // 0x4
        float Strength; // 0x8
        struct FVector StimulusLocation; // 0xc
        struct FVector ReceiverLocation; // 0x18
        struct FName Tag; // 0x24
        char bSuccessfullySensed; // 0x38

    };

    struct FChaosPhysicsCollisionInfo //ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
    {
    //Children Prop Count (Fields): 11
    public:

        class UPrimitiveComponent* Component; // 0x0
        class UPrimitiveComponent* OtherComponent; // 0x8
        struct FVector Location; // 0x10
        struct FVector Normal; // 0x1c
        struct FVector AccumulatedImpulse; // 0x28
        struct FVector Velocity; // 0x34
        struct FVector OtherVelocity; // 0x40
        struct FVector AngularVelocity; // 0x4c
        struct FVector OtherAngularVelocity; // 0x58
        float Mass; // 0x64
        float OtherMass; // 0x68

    };

    struct FChaosBreakEvent //ScriptStruct ChaosSolverEngine.ChaosBreakEvent
    {
    //Children Prop Count (Fields): 5
    public:

        class UPrimitiveComponent* Component; // 0x0
        struct FVector Location; // 0x8
        struct FVector Velocity; // 0x14
        struct FVector AngularVelocity; // 0x20
        float Mass; // 0x2c

    };

    struct FWalkableSlopeOverride //ScriptStruct Engine.WalkableSlopeOverride
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
        float WalkableSlopeAngle; // 0x4

    };

    struct FBodyInstance //ScriptStruct Engine.BodyInstance
    {
    //Children Prop Count (Fields): 44
    public:

        enum class ECollisionChannel ObjectType; // 0x6
        enum class ECollisionEnabled CollisionEnabled; // 0x8
        enum class ESleepFamily SleepFamily; // 0xa
        enum class EDOFMode DOFMode; // 0xb
        char bUseCCD; // 0xc
        char bIgnoreAnalyticCollisions; // 0xc
        char bNotifyRigidBodyCollision; // 0xc
        char bSimulatePhysics; // 0xc
        char bOverrideMass; // 0xc
        char bEnableGravity; // 0xc
        char bAutoWeld; // 0xc
        char bStartAwake; // 0xd
        char bGenerateWakeEvents; // 0xd
        char bUpdateMassWhenScaleChanges; // 0xd
        char bLockTranslation; // 0xd
        char bLockRotation; // 0xd
        char bLockXTranslation; // 0xd
        char bLockYTranslation; // 0xd
        char bLockZTranslation; // 0xd
        char bLockXRotation; // 0xe
        char bLockYRotation; // 0xe
        char bLockZRotation; // 0xe
        char bOverrideMaxAngularVelocity; // 0xe
        char bOverrideMaxDepenetrationVelocity; // 0xe
        char bOverrideWalkableSlopeOnInstance; // 0xe
        char bInterpolateWhenSubStepping; // 0xf
        struct FName CollisionProfileName; // 0x1c
        char PositionSolverIterationCount; // 0x24
        char VelocitySolverIterationCount; // 0x25
        struct FCollisionResponse CollisionResponses; // 0x28
        float MaxDepenetrationVelocity; // 0x58
        float MassInKgOverride; // 0x5c
        float LinearDamping; // 0x68
        float AngularDamping; // 0x6c
        struct FVector CustomDOFPlaneNormal; // 0x70
        struct FVector COMNudge; // 0x7c
        float MassScale; // 0x88
        struct FVector InertiaTensorScale; // 0x8c
        struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8
        class UPhysicalMaterial* PhysMaterialOverride; // 0xb8
        float MaxAngularVelocity; // 0xc0
        float CustomSleepThresholdMultiplier; // 0xc4
        float StabilizationThresholdMultiplier; // 0xc8
        float PhysicsBlendWeight; // 0xcc

    };

    struct FCollisionResponse //ScriptStruct Engine.CollisionResponse
    {
    //Children Prop Count (Fields): 2
    public:

        struct FCollisionResponseContainer ResponseToChannels; // 0x0
        struct TArray<struct FResponseChannel> ResponseArray; // 0x20

    };

    struct FResponseChannel //ScriptStruct Engine.ResponseChannel
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Channel; // 0x0
        enum class ECollisionResponse Response; // 0x8

    };

    struct FCollisionResponseContainer //ScriptStruct Engine.CollisionResponseContainer
    {
    //Children Prop Count (Fields): 32
    public:

        enum class ECollisionResponse WorldStatic; // 0x0
        enum class ECollisionResponse WorldDynamic; // 0x1
        enum class ECollisionResponse Pawn; // 0x2
        enum class ECollisionResponse Visibility; // 0x3
        enum class ECollisionResponse Camera; // 0x4
        enum class ECollisionResponse PhysicsBody; // 0x5
        enum class ECollisionResponse Vehicle; // 0x6
        enum class ECollisionResponse Destructible; // 0x7
        enum class ECollisionResponse EngineTraceChannel1; // 0x8
        enum class ECollisionResponse EngineTraceChannel2; // 0x9
        enum class ECollisionResponse EngineTraceChannel3; // 0xa
        enum class ECollisionResponse EngineTraceChannel4; // 0xb
        enum class ECollisionResponse EngineTraceChannel5; // 0xc
        enum class ECollisionResponse EngineTraceChannel6; // 0xd
        enum class ECollisionResponse GameTraceChannel1; // 0xe
        enum class ECollisionResponse GameTraceChannel2; // 0xf
        enum class ECollisionResponse GameTraceChannel3; // 0x10
        enum class ECollisionResponse GameTraceChannel4; // 0x11
        enum class ECollisionResponse GameTraceChannel5; // 0x12
        enum class ECollisionResponse GameTraceChannel6; // 0x13
        enum class ECollisionResponse GameTraceChannel7; // 0x14
        enum class ECollisionResponse GameTraceChannel8; // 0x15
        enum class ECollisionResponse GameTraceChannel9; // 0x16
        enum class ECollisionResponse GameTraceChannel10; // 0x17
        enum class ECollisionResponse GameTraceChannel11; // 0x18
        enum class ECollisionResponse GameTraceChannel12; // 0x19
        enum class ECollisionResponse GameTraceChannel13; // 0x1a
        enum class ECollisionResponse GameTraceChannel14; // 0x1b
        enum class ECollisionResponse GameTraceChannel15; // 0x1c
        enum class ECollisionResponse GameTraceChannel16; // 0x1d
        enum class ECollisionResponse GameTraceChannel17; // 0x1e
        enum class ECollisionResponse GameTraceChannel18; // 0x1f

    };

    struct FCustomPrimitiveData //ScriptStruct Engine.CustomPrimitiveData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<float> Data; // 0x0

    };

    struct FLightingChannels //ScriptStruct Engine.LightingChannels
    {
    //Children Prop Count (Fields): 3
    public:

        char bChannel0; // 0x0
        char bChannel1; // 0x0
        char bChannel2; // 0x0

    };

    struct FGeomComponentCacheParameters //ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
    {
    //Children Prop Count (Fields): 20
    public:

        enum class EGeometryCollectionCacheType CacheMode; // 0x0
        class UGeometryCollectionCache* TargetCache; // 0x8
        float ReverseCacheBeginTime; // 0x10
        bool SaveCollisionData; // 0x14
        bool DoGenerateCollisionData; // 0x15
        int32_t CollisionDataSizeMax; // 0x18
        bool DoCollisionDataSpatialHash; // 0x1c
        float CollisionDataSpatialHashRadius; // 0x20
        int32_t MaxCollisionPerCell; // 0x24
        bool SaveBreakingData; // 0x28
        bool DoGenerateBreakingData; // 0x29
        int32_t BreakingDataSizeMax; // 0x2c
        bool DoBreakingDataSpatialHash; // 0x30
        float BreakingDataSpatialHashRadius; // 0x34
        int32_t MaxBreakingPerCell; // 0x38
        bool SaveTrailingData; // 0x3c
        bool DoGenerateTrailingData; // 0x3d
        int32_t TrailingDataSizeMax; // 0x40
        float TrailingMinSpeedThreshold; // 0x44
        float TrailingMinVolumeThreshold; // 0x48

    };

    struct FChaosCollisionEventData //ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
    {
    //Children Prop Count (Fields): 7
    public:

        struct FVector Location; // 0x0
        struct FVector Normal; // 0xc
        struct FVector Velocity1; // 0x18
        struct FVector Velocity2; // 0x24
        float Mass1; // 0x30
        float Mass2; // 0x34
        struct FVector Impulse; // 0x38

    };

    struct FChaosBreakingEventData //ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Location; // 0x0
        struct FVector Velocity; // 0xc
        float Mass; // 0x18

    };

    struct FChaosTrailingEventData //ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector Location; // 0x0
        struct FVector Velocity; // 0xc
        struct FVector AngularVelocity; // 0x18
        float Mass; // 0x24
        int32_t ParticleIndex; // 0x28

    };

    struct FSubstanceInstanceDesc //ScriptStruct SubstanceCore.SubstanceInstanceDesc
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Name; // 0x0
        struct TArray<struct FSubstanceInputDesc> Inputs; // 0x10

    };

    struct FSubstanceInputDesc //ScriptStruct SubstanceCore.SubstanceInputDesc
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Name; // 0x0
        enum class ESubstanceInputType Type; // 0x10

    };

    struct FSubstanceFloatInputDesc : FSubstanceInputDesc //ScriptStruct SubstanceCore.SubstanceFloatInputDesc
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<float> Min; // 0x18
        struct TArray<float> Max; // 0x28
        struct TArray<float> Default; // 0x38

    };

    struct FSubstanceIntInputDesc : FSubstanceInputDesc //ScriptStruct SubstanceCore.SubstanceIntInputDesc
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<int32_t> Min; // 0x18
        struct TArray<int32_t> Max; // 0x28
        struct TArray<int32_t> Default; // 0x38

    };

    struct FSubstanceConnection //ScriptStruct SubstanceCore.SubstanceConnection
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString OutputIdentifier; // 0x0
        struct FString InputImageIdentifier; // 0x10

    };

    struct FPrefabricatorAssetCollectionItem //ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
    {
    //Children Prop Count (Fields): 2
    public:

        struct TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset; // 0x0
        float Weight; // 0x28

    };

    struct FPrefabricatorActorData //ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FGuid PrefabItemID; // 0x0
        struct FTransform RelativeTransform; // 0x10
        struct FString ClassPath; // 0x40
        struct FSoftClassPath ClassPathRef; // 0x50
        struct TArray<class UPrefabricatorProperty*> Properties; // 0x68
        struct TArray<struct FPrefabricatorComponentData> Components; // 0x78

    };

    struct FPrefabricatorComponentData //ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FTransform RelativeTransform; // 0x0
        struct FString ComponentName; // 0x30
        struct TArray<class UPrefabricatorProperty*> Properties; // 0x40

    };

    struct FPrefabricatorPropertyAssetMapping //ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
    {
    //Children Prop Count (Fields): 4
    public:

        struct FSoftObjectPath AssetReference; // 0x0
        struct FString AssetClassName; // 0x18
        struct FName AssetObjectPath; // 0x28
        bool bUseQuotes; // 0x30

    };

    struct FConstructionSystemSavePlayerInfo //ScriptStruct ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
    {
    //Children Prop Count (Fields): 3
    public:

        bool bRestorePlayerInfo; // 0x0
        struct FTransform Transform; // 0x10
        struct FRotator ControlRotation; // 0x40

    };

    struct FConstructionSystemSaveConstructedItem //ScriptStruct ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
    {
    //Children Prop Count (Fields): 3
    public:

        class UPrefabricatorAssetInterface* PrefabAsset; // 0x0
        int32_t Seed; // 0x8
        struct FTransform Transform; // 0x10

    };

    struct FPCSnapConstraintWall //ScriptStruct ConstructionSystemRuntime.PCSnapConstraintWall
    {
    //Children Prop Count (Fields): 4
    public:

        bool AttachTop; // 0x0
        bool AttachBottom; // 0x1
        bool AttachLeft; // 0x2
        bool AttachRight; // 0x3

    };

    struct FPCSnapConstraintFloor //ScriptStruct ConstructionSystemRuntime.PCSnapConstraintFloor
    {
    //Children Prop Count (Fields): 6
    public:

        bool AttachX; // 0x0
        bool AttachXNegative; // 0x1
        bool AttachY; // 0x2
        bool AttachYNegative; // 0x3
        bool AttachZ; // 0x4
        bool AttachZNegative; // 0x5

    };

    struct FConstructionSystemUICategory //ScriptStruct ConstructionSystemRuntime.ConstructionSystemUICategory
    {
    //Children Prop Count (Fields): 3
    public:

        struct FText DisplayName; // 0x0
        class UTexture2D* Icon; // 0x18
        struct TArray<struct FConstructionSystemUIPrefabEntry> PrefabEntries; // 0x20

    };

    struct FConstructionSystemUIPrefabEntry //ScriptStruct ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
    {
    //Children Prop Count (Fields): 4
    public:

        struct FText DisplayName; // 0x0
        struct FText Tooltip; // 0x18
        class UTexture2D* Icon; // 0x30
        class UPrefabricatorAssetInterface* Prefab; // 0x38

    };

    struct FDestructibleChunkParameters //ScriptStruct ApexDestruction.DestructibleChunkParameters
    {
    //Children Prop Count (Fields): 4
    public:

        bool bIsSupportChunk; // 0x0
        bool bDoNotFracture; // 0x1
        bool bDoNotDamage; // 0x2
        bool bDoNotCrumble; // 0x3

    };

    struct FFractureMaterial //ScriptStruct ApexDestruction.FractureMaterial
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector2D UVScale; // 0x0
        struct FVector2D UVOffset; // 0x8
        struct FVector Tangent; // 0x10
        float UAngle; // 0x1c
        int32_t InteriorElementIndex; // 0x20

    };

    struct FDestructibleParameters //ScriptStruct ApexDestruction.DestructibleParameters
    {
    //Children Prop Count (Fields): 6
    public:

        struct FDestructibleDamageParameters DamageParameters; // 0x0
        struct FDestructibleDebrisParameters DebrisParameters; // 0x1c
        struct FDestructibleAdvancedParameters AdvancedParameters; // 0x48
        struct FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
        struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70
        struct FDestructibleParametersFlag Flags; // 0x80

    };

    struct FDestructibleParametersFlag //ScriptStruct ApexDestruction.DestructibleParametersFlag
    {
    //Children Prop Count (Fields): 9
    public:

        char bAccumulateDamage; // 0x0
        char bAssetDefinedSupport; // 0x0
        char bWorldSupport; // 0x0
        char bDebrisTimeout; // 0x0
        char bDebrisMaxSeparation; // 0x0
        char bCrumbleSmallestChunks; // 0x0
        char bAccurateRaycasts; // 0x0
        char bUseValidBounds; // 0x0
        char bFormExtendedStructures; // 0x1

    };

    struct FDestructibleDepthParameters //ScriptStruct ApexDestruction.DestructibleDepthParameters
    {
    //Children Prop Count (Fields): 1
    public:

        enum class EImpactDamageOverride ImpactDamageOverride; // 0x0

    };

    struct FDestructibleSpecialHierarchyDepths //ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t SupportDepth; // 0x0
        int32_t MinimumFractureDepth; // 0x4
        bool bEnableDebris; // 0x8
        int32_t DebrisDepth; // 0xc
        int32_t EssentialDepth; // 0x10

    };

    struct FDestructibleAdvancedParameters //ScriptStruct ApexDestruction.DestructibleAdvancedParameters
    {
    //Children Prop Count (Fields): 4
    public:

        float DamageCap; // 0x0
        float ImpactVelocityThreshold; // 0x4
        float MaxChunkSpeed; // 0x8
        float FractureImpulseScale; // 0xc

    };

    struct FDestructibleDebrisParameters //ScriptStruct ApexDestruction.DestructibleDebrisParameters
    {
    //Children Prop Count (Fields): 5
    public:

        float DebrisLifetimeMin; // 0x0
        float DebrisLifetimeMax; // 0x4
        float DebrisMaxSeparationMin; // 0x8
        float DebrisMaxSeparationMax; // 0xc
        struct FBox ValidBounds; // 0x10

    };

    struct FDestructibleDamageParameters //ScriptStruct ApexDestruction.DestructibleDamageParameters
    {
    //Children Prop Count (Fields): 7
    public:

        float DamageThreshold; // 0x0
        float DamageSpread; // 0x4
        bool bEnableImpactDamage; // 0x8
        float ImpactDamage; // 0xc
        int32_t DefaultImpactDamageDepth; // 0x10
        bool bCustomImpactResistance; // 0x14
        float ImpactResistance; // 0x18

    };

    struct FProcMeshSection //ScriptStruct ProceduralMeshComponent.ProcMeshSection
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x0
        struct TArray<uint32_t> ProcIndexBuffer; // 0x10
        struct FBox SectionLocalBox; // 0x20
        bool bEnableCollision; // 0x3c
        bool bSectionVisible; // 0x3d

    };

    struct FProcMeshVertex //ScriptStruct ProceduralMeshComponent.ProcMeshVertex
    {
    //Children Prop Count (Fields): 8
    public:

        struct FVector Position; // 0x0
        struct FVector Normal; // 0xc
        struct FProcMeshTangent Tangent; // 0x18
        struct FColor Color; // 0x28
        struct FVector2D UV0; // 0x2c
        struct FVector2D UV1; // 0x34
        struct FVector2D UV2; // 0x3c
        struct FVector2D UV3; // 0x44

    };

    struct FProcMeshTangent //ScriptStruct ProceduralMeshComponent.ProcMeshTangent
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector TangentX; // 0x0
        bool bFlipTangentY; // 0xc

    };

    struct FAnimNode_Base //ScriptStruct Engine.AnimNode_Base
    {
    public:


    };

    struct FAnimNode_Mirror : FAnimNode_Base //ScriptStruct MirrorAnimationSystem.AnimNode_Mirror
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPoseLink BasePose; // 0x10
        class UMirrorTable* MirrorTable; // 0x20

    };

    struct FPoseLinkBase //ScriptStruct Engine.PoseLinkBase
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t LinkID; // 0x0

    };

    struct FPoseLink : FPoseLinkBase //ScriptStruct Engine.PoseLink
    {
    public:


    };

    struct FAnimNode_SkeletalControlBase : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
    {
    //Children Prop Count (Fields): 10
    public:

        struct FComponentSpacePoseLink ComponentPose; // 0x10
        int32_t LODThreshold; // 0x20
        float ActualAlpha; // 0x24
        enum class EAnimAlphaInputType AlphaInputType; // 0x28
        bool bAlphaBoolEnabled; // 0x29
        float Alpha; // 0x2c
        struct FInputScaleBias AlphaScaleBias; // 0x30
        struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
        struct FName AlphaCurveName; // 0x80
        struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88

    };

    struct FInputScaleBiasClamp //ScriptStruct Engine.InputScaleBiasClamp
    {
    //Children Prop Count (Fields): 11
    public:

        bool bMapRange; // 0x0
        bool bClampResult; // 0x1
        bool bInterpResult; // 0x2
        struct FInputRange InRange; // 0x4
        struct FInputRange OutRange; // 0xc
        float Scale; // 0x14
        float Bias; // 0x18
        float ClampMin; // 0x1c
        float ClampMax; // 0x20
        float InterpSpeedIncreasing; // 0x24
        float InterpSpeedDecreasing; // 0x28

    };

    struct FInputRange //ScriptStruct Engine.InputRange
    {
    //Children Prop Count (Fields): 2
    public:

        float Min; // 0x0
        float Max; // 0x4

    };

    struct FInputAlphaBoolBlend //ScriptStruct Engine.InputAlphaBoolBlend
    {
    //Children Prop Count (Fields): 6
    public:

        float BlendInTime; // 0x0
        float BlendOutTime; // 0x4
        enum class EAlphaBlendOption BlendOption; // 0x8
        bool bInitialized; // 0x9
        class UCurveFloat* CustomCurve; // 0x10
        struct FAlphaBlend AlphaBlend; // 0x18

    };

    struct FAlphaBlend //ScriptStruct Engine.AlphaBlend
    {
    //Children Prop Count (Fields): 3
    public:

        class UCurveFloat* CustomCurve; // 0x0
        float BlendTime; // 0x8
        enum class EAlphaBlendOption BlendOption; // 0x24

    };

    struct FInputScaleBias //ScriptStruct Engine.InputScaleBias
    {
    //Children Prop Count (Fields): 2
    public:

        float Scale; // 0x0
        float Bias; // 0x4

    };

    struct FComponentSpacePoseLink : FPoseLinkBase //ScriptStruct Engine.ComponentSpacePoseLink
    {
    public:


    };

    struct FAnimNode_MirrorCS : FAnimNode_SkeletalControlBase //ScriptStruct MirrorAnimationSystem.AnimNode_MirrorCS
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EAxis MirrorAxis; // 0xc8
        bool CompletlySymmetrical; // 0xc9
        struct FString Substring_A; // 0xd0
        struct FString Substring_B; // 0xe0

    };

    struct FMirrorBone //ScriptStruct MirrorAnimationSystem.MirrorBone
    {
    //Children Prop Count (Fields): 10
    public:

        struct FName BoneName; // 0x0
        enum class EAxis MirrorAxis; // 0x8
        enum class EAxis FlipAxis; // 0x9
        bool IsTwinBone; // 0xa
        struct FName TwinBoneName; // 0xc
        bool MirrorTranslation; // 0x14
        struct FRotator RotationOffset; // 0x18
        bool InvertTwinRotationX; // 0x24
        bool InvertTwinRotationY; // 0x25
        bool InvertTwinRotationZ; // 0x26

    };

    struct FTableRowBase //ScriptStruct Engine.TableRowBase
    {
    public:


    };

    struct FVtaAsset : FTableRowBase //ScriptStruct VaTexAtlasPlugin.VtaAsset
    {
    //Children Prop Count (Fields): 2
    public:

        struct TSoftObjectPtr<UMaterialInstanceConstant> Material; // 0x8
        struct TSoftObjectPtr<UVtaSlateTexture> SlateTexture; // 0x30

    };

    struct FNamedInterfaceDef //ScriptStruct OnlineSubsystem.NamedInterfaceDef
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName InterfaceName; // 0x0
        struct FString InterfaceClassName; // 0x8

    };

    struct FNamedInterface //ScriptStruct OnlineSubsystem.NamedInterface
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName InterfaceName; // 0x0
        class UObject* InterfaceObject; // 0x8

    };

    struct FInAppPurchaseProductRequest //ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString ProductIdentifier; // 0x0
        bool bIsConsumable; // 0x10

    };

    struct FInAppPurchaseReceiptInfo //ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString ItemName; // 0x0
        struct FString ItemId; // 0x10
        struct FString ValidationInfo; // 0x20

    };

    struct FInAppPurchaseProductInfo2 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
    {
    //Children Prop Count (Fields): 12
    public:

        struct FString Identifier; // 0x0
        struct FString TransactionIdentifier; // 0x10
        struct FString DisplayName; // 0x20
        struct FString DisplayDescription; // 0x30
        struct FString DisplayPrice; // 0x40
        float RawPrice; // 0x50
        struct FString CurrencyCode; // 0x58
        struct FString CurrencySymbol; // 0x68
        struct FString DecimalSeparator; // 0x78
        struct FString GroupingSeparator; // 0x88
        struct FString ReceiptData; // 0x98
        struct TMap<struct FString, struct FString> DynamicFields; // 0xa8

    };

    struct FInAppPurchaseProductRequest2 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString ProductIdentifier; // 0x0
        bool bIsConsumable; // 0x10

    };

    struct FPlayerReservation //ScriptStruct OnlineSubsystemUtils.PlayerReservation
    {
    //Children Prop Count (Fields): 5
    public:

        struct FUniqueNetIdRepl UniqueId; // 0x0
        struct FString ValidationStr; // 0x28
        struct FString Platform; // 0x38
        bool bAllowCrossplay; // 0x48
        float ElapsedTime; // 0x4c

    };

    struct FUniqueNetIdRepl : FUniqueNetIdWrapper //ScriptStruct Engine.UniqueNetIdRepl
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> ReplicationBytes; // 0x18

    };

    struct FPIELoginSettingsInternal //ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
    {
    //Children Prop Count (Fields): 4
    public:

        struct FString ID; // 0x0
        struct FString Token; // 0x10
        struct FString Type; // 0x20
        struct TArray<char> TokenBytes; // 0x30

    };

    struct FPartyReservation //ScriptStruct OnlineSubsystemUtils.PartyReservation
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t TeamNum; // 0x0
        struct FUniqueNetIdRepl PartyLeader; // 0x8
        struct TArray<struct FPlayerReservation> PartyMembers; // 0x30
        struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x40

    };

    struct FSpectatorReservation //ScriptStruct OnlineSubsystemUtils.SpectatorReservation
    {
    //Children Prop Count (Fields): 2
    public:

        struct FUniqueNetIdRepl SpectatorId; // 0x0
        struct FPlayerReservation Spectator; // 0x28

    };

    struct FEditPivotTarget //ScriptStruct MeshModelingTools.EditPivotTarget
    {
    //Children Prop Count (Fields): 2
    public:

        class UTransformProxy* TransformProxy; // 0x0
        class UTransformGizmo* TransformGizmo; // 0x8

    };

    struct FTransformMeshesTarget //ScriptStruct MeshModelingTools.TransformMeshesTarget
    {
    //Children Prop Count (Fields): 2
    public:

        class UTransformProxy* TransformProxy; // 0x0
        class UTransformGizmo* TransformGizmo; // 0x8

    };

    struct FAkAdvancedInitializationSettings //ScriptStruct AkAudio.AkAdvancedInitializationSettings
    {
    //Children Prop Count (Fields): 11
    public:

        uint32_t IO_MemorySize; // 0x0
        uint32_t IO_Granularity; // 0x4
        float TargetAutoStreamBufferLength; // 0x8
        bool UseStreamCache; // 0xc
        uint32_t MaximumPinnedBytesInCache; // 0x10
        bool EnableGameSyncPreparation; // 0x14
        uint32_t ContinuousPlaybackLookAhead; // 0x18
        uint32_t MonitorQueuePoolSize; // 0x1c
        uint32_t MaximumHardwareTimeoutMs; // 0x20
        bool DebugOutOfRangeCheckEnabled; // 0x24
        float DebugOutOfRangeLimit; // 0x28

    };

    struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings //ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
    {
    //Children Prop Count (Fields): 1
    public:

        bool EnableMultiCoreRendering; // 0x2c

    };

    struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering //ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        uint32_t AudioAPI; // 0x30
        bool RoundFrameSizeToHardwareSize; // 0x34

    };

    struct FAkAudioSession //ScriptStruct AkAudio.AkAudioSession
    {
    //Children Prop Count (Fields): 3
    public:

        enum class EAkAudioSessionCategory AudioSessionCategory; // 0x0
        uint32_t AudioSessionCategoryOptions; // 0x4
        enum class EAkAudioSessionMode AudioSessionMode; // 0x8

    };

    struct FAkExternalSourceInfo //ScriptStruct AkAudio.AkExternalSourceInfo
    {
    //Children Prop Count (Fields): 5
    public:

        struct FString ExternalSrcName; // 0x0
        enum class AkCodecId CodecID; // 0x10
        struct FString Filename; // 0x18
        class UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
        bool IsStreamed; // 0x30

    };

    struct FAkSegmentInfo //ScriptStruct AkAudio.AkSegmentInfo
    {
    //Children Prop Count (Fields): 9
    public:

        int32_t CurrentPosition; // 0x0
        int32_t PreEntryDuration; // 0x4
        int32_t ActiveDuration; // 0x8
        int32_t PostExitDuration; // 0xc
        int32_t RemainingLookAheadTime; // 0x10
        float BeatDuration; // 0x14
        float BarDuration; // 0x18
        float GridDuration; // 0x1c
        float GridOffset; // 0x20

    };

    struct FAkMidiEventBase //ScriptStruct AkAudio.AkMidiEventBase
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EAkMidiEventType Type; // 0x0
        char Chan; // 0x1

    };

    struct FAkMidiProgramChange : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiProgramChange
    {
    //Children Prop Count (Fields): 1
    public:

        char ProgramNum; // 0x2

    };

    struct FAkMidiChannelAftertouch : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiChannelAftertouch
    {
    //Children Prop Count (Fields): 1
    public:

        char Value; // 0x2

    };

    struct FAkMidiNoteAftertouch : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiNoteAftertouch
    {
    //Children Prop Count (Fields): 2
    public:

        char Note; // 0x2
        char Value; // 0x3

    };

    struct FAkMidiPitchBend : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiPitchBend
    {
    //Children Prop Count (Fields): 3
    public:

        char ValueLsb; // 0x2
        char ValueMsb; // 0x3
        int32_t FullValue; // 0x4

    };

    struct FAkMidiCc : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiCc
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EAkMidiCcValues Cc; // 0x2
        char Value; // 0x3

    };

    struct FAkMidiNoteOnOff : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiNoteOnOff
    {
    //Children Prop Count (Fields): 2
    public:

        char Note; // 0x2
        char Velocity; // 0x3

    };

    struct FAkMidiGeneric : FAkMidiEventBase //ScriptStruct AkAudio.AkMidiGeneric
    {
    //Children Prop Count (Fields): 2
    public:

        char Param1; // 0x2
        char Param2; // 0x3

    };

    struct FAkChannelMask //ScriptStruct AkAudio.AkChannelMask
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t ChannelMask; // 0x0

    };

    struct FAkGeometrySurfaceOverride //ScriptStruct AkAudio.AkGeometrySurfaceOverride
    {
    //Children Prop Count (Fields): 4
    public:

        class UAkAcousticTexture* AcousticTexture; // 0x0
        char bEnableOcclusionOverride; // 0x8
        float OcclusionValue; // 0xc
        float SurfaceArea; // 0x10

    };

    struct FAkGeometryData //ScriptStruct AkAudio.AkGeometryData
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FVector> Vertices; // 0x0
        struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10
        struct TArray<struct FAkTriangle> Triangles; // 0x20
        struct TArray<class UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
        struct TArray<class UPhysicalMaterial*> ToOverrideOcclusion; // 0x40

    };

    struct FAkTriangle //ScriptStruct AkAudio.AkTriangle
    {
    //Children Prop Count (Fields): 4
    public:

        uint16_t Point0; // 0x0
        uint16_t Point1; // 0x2
        uint16_t Point2; // 0x4
        uint16_t Surface; // 0x6

    };

    struct FAkAcousticSurface //ScriptStruct AkAudio.AkAcousticSurface
    {
    //Children Prop Count (Fields): 3
    public:

        uint32_t Texture; // 0x0
        float Occlusion; // 0x4
        struct FString Name; // 0x8

    };

    struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering //ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
    {
    //Children Prop Count (Fields): 1
    public:

        bool UseHeadMountedDisplayAudioDevice; // 0x30

    };

    struct FAkPluginInfo //ScriptStruct AkAudio.AkPluginInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString Name; // 0x0
        uint32_t PluginID; // 0x10
        struct FString dll; // 0x18

    };

    struct FAkCommonInitializationSettings //ScriptStruct AkAudio.AkCommonInitializationSettings
    {
    //Children Prop Count (Fields): 8
    public:

        uint32_t MaximumNumberOfMemoryPools; // 0x0
        uint32_t MaximumNumberOfPositioningPaths; // 0x4
        uint32_t CommandQueueSize; // 0x8
        uint32_t SamplesPerFrame; // 0xc
        struct FAkMainOutputSettings MainOutputSettings; // 0x10
        float StreamingLookAheadRatio; // 0x38
        uint16_t NumberOfRefillsInVoice; // 0x3c
        struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40

    };

    struct FAkSpatialAudioSettings //ScriptStruct AkAudio.AkSpatialAudioSettings
    {
    //Children Prop Count (Fields): 11
    public:

        uint32_t MaxSoundPropagationDepth; // 0x0
        float MovementThreshold; // 0x4
        uint32_t NumberOfPrimaryRays; // 0x8
        uint32_t ReflectionOrder; // 0xc
        float MaximumPathLength; // 0x10
        float CPULimitPercentage; // 0x14
        bool EnableDiffractionOnReflections; // 0x18
        bool EnableGeometricDiffractionAndTransmission; // 0x19
        bool CalcEmitterVirtualPosition; // 0x1a
        bool UseObstruction; // 0x1b
        bool UseOcclusion; // 0x1c

    };

    struct FAkMainOutputSettings //ScriptStruct AkAudio.AkMainOutputSettings
    {
    //Children Prop Count (Fields): 6
    public:

        struct FString AudioDeviceShareset; // 0x0
        uint32_t DeviceID; // 0x10
        enum class EAkPanningRule PanningRule; // 0x14
        enum class EAkChannelConfigType ChannelConfigType; // 0x18
        uint32_t ChannelMask; // 0x1c
        uint32_t NumberOfChannels; // 0x20

    };

    struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings //ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t SampleRate; // 0x60

    };

    struct FAkCommunicationSettings //ScriptStruct AkAudio.AkCommunicationSettings
    {
    //Children Prop Count (Fields): 5
    public:

        uint32_t PoolSize; // 0x0
        uint16_t DiscoveryBroadcastPort; // 0x4
        uint16_t CommandPort; // 0x6
        uint16_t NotificationPort; // 0x8
        struct FString NetworkName; // 0x10

    };

    struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings //ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
    {
    //Children Prop Count (Fields): 1
    public:

        enum class EAkCommSystem CommunicationSystem; // 0x20

    };

    struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings //ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
    {
    //Children Prop Count (Fields): 1
    public:

        bool InitializeSystemComms; // 0x20

    };

    struct FAkBoolPropertyToControl //ScriptStruct AkAudio.AkBoolPropertyToControl
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString ItemProperty; // 0x0

    };

    struct FAkPropertyToControl //ScriptStruct AkAudio.AkPropertyToControl
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString ItemProperty; // 0x0

    };

    struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering //ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        uint32_t ACPBatchBufferSize; // 0x30
        bool UseHardwareCodecLowLatencyMode; // 0x34

    };

    struct FAkReverbDescriptor //ScriptStruct AkAudio.AkReverbDescriptor
    {
    public:


    };

    struct FAkAcousticTextureParams //ScriptStruct AkAudio.AkAcousticTextureParams
    {
    //Children Prop Count (Fields): 1
    public:

        struct FVector4 AbsorptionValues; // 0x0

    };

    struct FAkGeometrySurfacePropertiesToMap //ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
    {
    //Children Prop Count (Fields): 2
    public:

        struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
        float OcclusionValue; // 0x28

    };

    struct FAkWwiseItemToControl //ScriptStruct AkAudio.AkWwiseItemToControl
    {
    //Children Prop Count (Fields): 2
    public:

        struct FAkWwiseObjectDetails ItemPicked; // 0x0
        struct FString ItemPath; // 0x30

    };

    struct FAkWwiseObjectDetails //ScriptStruct AkAudio.AkWwiseObjectDetails
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString ItemName; // 0x0
        struct FString ItemPath; // 0x10
        struct FString ItemId; // 0x20

    };

    struct FAkSurfaceProperties //ScriptStruct AkAudio.AkSurfaceProperties
    {
    public:


    };

    struct FAkEdgeInfo //ScriptStruct AkAudio.AkEdgeInfo
    {
    public:


    };

    struct FAkPoly //ScriptStruct AkAudio.AkPoly
    {
    //Children Prop Count (Fields): 4
    public:

        class UAkAcousticTexture* Texture; // 0x0
        float Occlusion; // 0x8
        bool EnableSurface; // 0xc
        float SurfaceArea; // 0x10

    };

    struct FAkWaapiFieldNames //ScriptStruct AkAudio.AkWaapiFieldNames
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString FieldName; // 0x0

    };

    struct FAkWaapiUri //ScriptStruct AkAudio.AkWaapiUri
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString Uri; // 0x0

    };

    struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering //ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        bool UseHeadMountedDisplayAudioDevice; // 0x30
        uint32_t MaxSystemAudioObjects; // 0x34

    };

    struct FAkXboxOneApuHeapInitializationSettings //ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        uint32_t CachedSize; // 0x0
        uint32_t NonCachedSize; // 0x4

    };

    struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering //ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        uint16_t MaximumNumberOfXMAVoices; // 0x30
        bool UseHardwareCodecLowLatencyMode; // 0x32

    };

    struct FAkAudioEventTrackKey //ScriptStruct AkAudio.AkAudioEventTrackKey
    {
    //Children Prop Count (Fields): 3
    public:

        float Time; // 0x0
        class UAkAudioEvent* AkAudioEvent; // 0x8
        struct FString EventName; // 0x10

    };

    struct FMovieSceneEvalTemplateBase //ScriptStruct MovieScene.MovieSceneEvalTemplateBase
    {
    public:


    };

    struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase //ScriptStruct MovieScene.MovieSceneEvalTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EMovieSceneCompletionMode CompletionMode; // 0x10
        struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0x14

    };

    struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate //ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        class UMovieSceneAkAudioEventSection* Section; // 0x20

    };

    struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate //ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        class UMovieSceneAkAudioRTPCSection* Section; // 0x20

    };

    struct FMovieSceneFloatChannelSerializationHelper //ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
    {
    //Children Prop Count (Fields): 6
    public:

        enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x0
        enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x1
        struct TArray<int32_t> Times; // 0x8
        struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18
        float DefaultValue; // 0x28
        bool bHasDefaultValue; // 0x2c

    };

    struct FMovieSceneFloatValueSerializationHelper //ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
    {
    //Children Prop Count (Fields): 4
    public:

        float Value; // 0x0
        enum class ERichCurveInterpMode InterpMode; // 0x4
        enum class ERichCurveTangentMode TangentMode; // 0x5
        struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x8

    };

    struct FMovieSceneTangentDataSerializationHelper //ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
    {
    //Children Prop Count (Fields): 5
    public:

        float ArriveTangent; // 0x0
        float LeaveTangent; // 0x4
        enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x8
        float ArriveTangentWeight; // 0xc
        float LeaveTangentWeight; // 0x10

    };

    struct FIntMargin //ScriptStruct Paper2D.IntMargin
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t Left; // 0x0
        int32_t Top; // 0x4
        int32_t Right; // 0x8
        int32_t Bottom; // 0xc

    };

    struct FPaperFlipbookKeyFrame //ScriptStruct Paper2D.PaperFlipbookKeyFrame
    {
    //Children Prop Count (Fields): 2
    public:

        class UPaperSprite* Sprite; // 0x0
        int32_t FrameRun; // 0x8

    };

    struct FSpriteInstanceData //ScriptStruct Paper2D.SpriteInstanceData
    {
    //Children Prop Count (Fields): 4
    public:

        struct FMatrix Transform; // 0x0
        class UPaperSprite* SourceSprite; // 0x40
        struct FColor VertexColor; // 0x48
        int32_t MaterialIndex; // 0x4c

    };

    struct FPaperSpriteSocket //ScriptStruct Paper2D.PaperSpriteSocket
    {
    //Children Prop Count (Fields): 2
    public:

        struct FTransform LocalTransform; // 0x0
        struct FName SocketName; // 0x30

    };

    struct FPaperSpriteAtlasSlot //ScriptStruct Paper2D.PaperSpriteAtlasSlot
    {
    //Children Prop Count (Fields): 6
    public:

        struct TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
        int32_t AtlasIndex; // 0x28
        int32_t X; // 0x2c
        int32_t Y; // 0x30
        int32_t Width; // 0x34
        int32_t Height; // 0x38

    };

    struct FPaperTerrainMaterialRule //ScriptStruct Paper2D.PaperTerrainMaterialRule
    {
    //Children Prop Count (Fields): 8
    public:

        class UPaperSprite* StartCap; // 0x0
        struct TArray<class UPaperSprite*> Body; // 0x8
        class UPaperSprite* EndCap; // 0x18
        float MinimumAngle; // 0x20
        float MaximumAngle; // 0x24
        bool bEnableCollision; // 0x28
        float CollisionOffset; // 0x2c
        int32_t DrawOrder; // 0x30

    };

    struct FPaperTileInfo //ScriptStruct Paper2D.PaperTileInfo
    {
    //Children Prop Count (Fields): 2
    public:

        class UPaperTileSet* TileSet; // 0x0
        int32_t PackedTileIndex; // 0x8

    };

    struct FPaperTileSetTerrain //ScriptStruct Paper2D.PaperTileSetTerrain
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString TerrainName; // 0x0
        int32_t CenterTileIndex; // 0x10

    };

    struct FPaperTileMetadata //ScriptStruct Paper2D.PaperTileMetadata
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName UserDataName; // 0x0
        struct FSpriteGeometryCollection CollisionData; // 0x8
        char TerrainMembership; // 0x38

    };

    struct FSpriteGeometryCollection //ScriptStruct Paper2D.SpriteGeometryCollection
    {
    //Children Prop Count (Fields): 8
    public:

        struct TArray<struct FSpriteGeometryShape> Shapes; // 0x0
        enum class ESpritePolygonMode GeometryType; // 0x10
        int32_t PixelsPerSubdivisionX; // 0x14
        int32_t PixelsPerSubdivisionY; // 0x18
        bool bAvoidVertexMerging; // 0x1c
        float AlphaThreshold; // 0x20
        float DetailAmount; // 0x24
        float SimplifyEpsilon; // 0x28

    };

    struct FSpriteGeometryShape //ScriptStruct Paper2D.SpriteGeometryShape
    {
    //Children Prop Count (Fields): 6
    public:

        enum class ESpriteShapeType ShapeType; // 0x0
        struct TArray<struct FVector2D> Vertices; // 0x8
        struct FVector2D BoxSize; // 0x18
        struct FVector2D BoxPosition; // 0x20
        float Rotation; // 0x28
        bool bNegativeWinding; // 0x2c

    };

    struct FSpriteDrawCallRecord //ScriptStruct Paper2D.SpriteDrawCallRecord
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Destination; // 0x0
        class UTexture* BaseTexture; // 0x10
        struct FColor Color; // 0x48

    };

    struct FSpriteAssetInitParameters //ScriptStruct Paper2D.SpriteAssetInitParameters
    {
    public:


    };

    struct FTickAnimationSharingFunction : FTickFunction //ScriptStruct AnimationSharing.TickAnimationSharingFunction
    {
    public:


    };

    struct FAnimationSharingScalability //ScriptStruct AnimationSharing.AnimationSharingScalability
    {
    //Children Prop Count (Fields): 4
    public:

        struct FPerPlatformBool UseBlendTransitions; // 0x0
        struct FPerPlatformFloat BlendSignificanceValue; // 0x4
        struct FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
        struct FPerPlatformFloat TickSignificanceValue; // 0xc

    };

    struct FPerPlatformFloat //ScriptStruct Engine.PerPlatformFloat
    {
    //Children Prop Count (Fields): 1
    public:

        float Default; // 0x0

    };

    struct FPerPlatformInt //ScriptStruct Engine.PerPlatformInt
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Default; // 0x0

    };

    struct FPerPlatformBool //ScriptStruct Engine.PerPlatformBool
    {
    //Children Prop Count (Fields): 1
    public:

        bool Default; // 0x0

    };

    struct FPerSkeletonAnimationSharingSetup //ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
    {
    //Children Prop Count (Fields): 6
    public:

        class USkeleton* Skeleton; // 0x0
        class USkeletalMesh* SkeletalMesh; // 0x8
        class UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
        class UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
        class UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
        struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x28

    };

    struct FAnimationStateEntry //ScriptStruct AnimationSharing.AnimationStateEntry
    {
    //Children Prop Count (Fields): 11
    public:

        char State; // 0x0
        struct TArray<struct FAnimationSetup> AnimationSetups; // 0x8
        bool bOnDemand; // 0x18
        bool bAdditive; // 0x19
        float BlendTime; // 0x1c
        bool bReturnToPreviousState; // 0x20
        bool bSetNextState; // 0x21
        char NextState; // 0x22
        struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24
        float WiggleTimePercentage; // 0x28
        bool bRequiresCurves; // 0x2c

    };

    struct FAnimationSetup //ScriptStruct AnimationSharing.AnimationSetup
    {
    //Children Prop Count (Fields): 4
    public:

        class UAnimSequence* AnimSequence; // 0x0
        class UAnimSharingStateInstance* AnimBlueprint; // 0x8
        struct FPerPlatformInt NumRandomizedInstances; // 0x10
        struct FPerPlatformBool Enabled; // 0x14

    };

    struct FMyPluginStruct //ScriptStruct UObjectPlugin.MyPluginStruct
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString TestString; // 0x0

    };

    struct FDatasmithCameraLookatTrackingSettingsTemplate //ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
    {
    //Children Prop Count (Fields): 3
    public:

        char bEnableLookAtTracking; // 0x0
        char bAllowRoll; // 0x0
        struct TSoftObjectPtr<AActor> ActorToTrack; // 0x8

    };

    struct FDatasmithPostProcessSettingsTemplate //ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
    {
    //Children Prop Count (Fields): 16
    public:

        char bOverride_WhiteTemp; // 0x0
        char bOverride_ColorSaturation; // 0x0
        char bOverride_VignetteIntensity; // 0x0
        char bOverride_FilmWhitePoint; // 0x0
        char bOverride_AutoExposureMethod; // 0x0
        char bOverride_CameraISO; // 0x0
        char bOverride_CameraShutterSpeed; // 0x0
        char bOverride_DepthOfFieldFstop; // 0x4
        float WhiteTemp; // 0x8
        float VignetteIntensity; // 0xc
        struct FLinearColor FilmWhitePoint; // 0x10
        struct FVector4 ColorSaturation; // 0x20
        enum class EAutoExposureMethod AutoExposureMethod; // 0x30
        float CameraISO; // 0x34
        float CameraShutterSpeed; // 0x38
        float DepthOfFieldFstop; // 0x3c

    };

    struct FDatasmithCameraFocusSettingsTemplate //ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ECameraFocusMethod FocusMethod; // 0x0
        float ManualFocusDistance; // 0x4

    };

    struct FDatasmithCameraLensSettingsTemplate //ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        float MaxFStop; // 0x0

    };

    struct FDatasmithCameraFilmbackSettingsTemplate //ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        float SensorWidth; // 0x0
        float SensorHeight; // 0x4

    };

    struct FDatasmithTessellationOptions //ScriptStruct DatasmithContent.DatasmithTessellationOptions
    {
    //Children Prop Count (Fields): 4
    public:

        float ChordTolerance; // 0x0
        float MaxEdgeLength; // 0x4
        float NormalTolerance; // 0x8
        enum class EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc

    };

    struct FDatasmithImportBaseOptions //ScriptStruct DatasmithContent.DatasmithImportBaseOptions
    {
    //Children Prop Count (Fields): 8
    public:

        enum class EDatasmithImportScene SceneHandling; // 0x0
        bool bIncludeGeometry; // 0x1
        bool bIncludeMaterial; // 0x2
        bool bIncludeLight; // 0x3
        bool bIncludeCamera; // 0x4
        bool bIncludeAnimation; // 0x5
        struct FDatasmithAssetImportOptions AssetOptions; // 0x8
        struct FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10

    };

    struct FDatasmithStaticMeshImportOptions //ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
        enum class EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
        bool bGenerateLightmapUVs; // 0x2
        bool bRemoveDegenerates; // 0x3

    };

    struct FDatasmithAssetImportOptions //ScriptStruct DatasmithContent.DatasmithAssetImportOptions
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName PackagePath; // 0x0

    };

    struct FDatasmithReimportOptions //ScriptStruct DatasmithContent.DatasmithReimportOptions
    {
    //Children Prop Count (Fields): 2
    public:

        bool bUpdateActors; // 0x0
        bool bRespawnDeletedActors; // 0x1

    };

    struct FDatasmithStaticParameterSetTemplate //ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<struct FName, bool> StaticSwitchParameters; // 0x0

    };

    struct FDatasmithMeshSectionInfoMapTemplate //ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; // 0x0

    };

    struct FDatasmithMeshSectionInfoTemplate //ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t MaterialIndex; // 0x0

    };

    struct FDatasmithStaticMaterialTemplate //ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName MaterialSlotName; // 0x0
        class UMaterialInterface* MaterialInterface; // 0x8

    };

    struct FDatasmithMeshBuildSettingsTemplate //ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
    {
    //Children Prop Count (Fields): 11
    public:

        char bUseMikkTSpace; // 0x0
        char bRecomputeNormals; // 0x0
        char bRecomputeTangents; // 0x0
        char bRemoveDegenerates; // 0x0
        char bBuildAdjacencyBuffer; // 0x0
        char bUseHighPrecisionTangentBasis; // 0x0
        char bUseFullPrecisionUVs; // 0x0
        char bGenerateLightmapUVs; // 0x0
        int32_t MinLightmapResolution; // 0x4
        int32_t SrcLightmapIndex; // 0x8
        int32_t DstLightmapIndex; // 0xc

    };

    struct FFunctionCaller //ScriptStruct VariantManagerContent.FunctionCaller
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName FunctionName; // 0x0

    };

    struct FCapturedPropSegment //ScriptStruct VariantManagerContent.CapturedPropSegment
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString PropertyName; // 0x0
        int32_t PropertyIndex; // 0x10
        struct FString ComponentName; // 0x18

    };

    struct FTrackRenderData //ScriptStruct GeometryCache.TrackRenderData
    {
    public:


    };

    struct FGeometryCacheMeshData //ScriptStruct GeometryCache.GeometryCacheMeshData
    {
    public:


    };

    struct FGeometryCacheVertexInfo //ScriptStruct GeometryCache.GeometryCacheVertexInfo
    {
    public:


    };

    struct FGeometryCacheMeshBatchInfo //ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
    {
    public:


    };

    struct FMovieSceneGeometryCacheParams //ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
    {
    //Children Prop Count (Fields): 9
    public:

        class UGeometryCache* GeometryCacheAsset; // 0x0
        struct FFrameNumber FirstLoopStartFrameOffset; // 0x8
        struct FFrameNumber StartFrameOffset; // 0xc
        struct FFrameNumber EndFrameOffset; // 0x10
        float PlayRate; // 0x14
        char bReverse; // 0x18
        float StartOffset; // 0x1c
        float EndOffset; // 0x20
        struct FSoftObjectPath GeometryCache; // 0x28

    };

    struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20

    };

    struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams //ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameNumber SectionStartTime; // 0x40
        struct FFrameNumber SectionEndTime; // 0x44

    };

    struct FAdaptorPolygon2Group //ScriptStruct EditableMesh.AdaptorPolygon2Group
    {
    //Children Prop Count (Fields): 3
    public:

        uint32_t RenderingSectionIndex; // 0x0
        int32_t MaterialIndex; // 0x4
        int32_t MaxTriangles; // 0x8

    };

    struct FAdaptorPolygon //ScriptStruct EditableMesh.AdaptorPolygon
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPolygonGroupID PolygonGroupID; // 0x0
        struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8

    };

    struct FElementID //ScriptStruct MeshDescription.ElementID
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t IDValue; // 0x0

    };

    struct FAdaptorTriangleID : FElementID //ScriptStruct EditableMesh.AdaptorTriangleID
    {
    public:


    };

    struct FPolygonGroupID : FElementID //ScriptStruct MeshDescription.PolygonGroupID
    {
    public:


    };

    struct FPolygonGroupForPolygon //ScriptStruct EditableMesh.PolygonGroupForPolygon
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPolygonID PolygonID; // 0x0
        struct FPolygonGroupID PolygonGroupID; // 0x4

    };

    struct FPolygonID : FElementID //ScriptStruct MeshDescription.PolygonID
    {
    public:


    };

    struct FPolygonGroupToCreate //ScriptStruct EditableMesh.PolygonGroupToCreate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMeshElementAttributeList PolygonGroupAttributes; // 0x0
        struct FPolygonGroupID OriginalPolygonGroupID; // 0x10

    };

    struct FMeshElementAttributeList //ScriptStruct EditableMesh.MeshElementAttributeList
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FMeshElementAttributeData> Attributes; // 0x0

    };

    struct FMeshElementAttributeData //ScriptStruct EditableMesh.MeshElementAttributeData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName AttributeName; // 0x0
        int32_t AttributeIndex; // 0x8
        struct FMeshElementAttributeValue AttributeValue; // 0x10

    };

    struct FMeshElementAttributeValue //ScriptStruct EditableMesh.MeshElementAttributeValue
    {
    public:


    };

    struct FVertexToMove //ScriptStruct EditableMesh.VertexToMove
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVertexID VertexID; // 0x0
        struct FVector NewVertexPosition; // 0x4

    };

    struct FVertexID : FElementID //ScriptStruct MeshDescription.VertexID
    {
    public:


    };

    struct FChangeVertexInstancesForPolygon //ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPolygonID PolygonID; // 0x0
        struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
        struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18

    };

    struct FVertexInstancesForPolygonHole //ScriptStruct EditableMesh.VertexInstancesForPolygonHole
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0

    };

    struct FVertexIndexAndInstanceID //ScriptStruct EditableMesh.VertexIndexAndInstanceID
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t ContourIndex; // 0x0
        struct FVertexInstanceID VertexInstanceID; // 0x4

    };

    struct FVertexInstanceID : FElementID //ScriptStruct MeshDescription.VertexInstanceID
    {
    public:


    };

    struct FVertexAttributesForPolygon //ScriptStruct EditableMesh.VertexAttributesForPolygon
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPolygonID PolygonID; // 0x0
        struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
        struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18

    };

    struct FVertexAttributesForPolygonHole //ScriptStruct EditableMesh.VertexAttributesForPolygonHole
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x0

    };

    struct FAttributesForEdge //ScriptStruct EditableMesh.AttributesForEdge
    {
    //Children Prop Count (Fields): 2
    public:

        struct FEdgeID EdgeID; // 0x0
        struct FMeshElementAttributeList EdgeAttributes; // 0x8

    };

    struct FEdgeID : FElementID //ScriptStruct MeshDescription.EdgeID
    {
    public:


    };

    struct FAttributesForVertexInstance //ScriptStruct EditableMesh.AttributesForVertexInstance
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVertexInstanceID VertexInstanceID; // 0x0
        struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8

    };

    struct FAttributesForVertex //ScriptStruct EditableMesh.AttributesForVertex
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVertexID VertexID; // 0x0
        struct FMeshElementAttributeList VertexAttributes; // 0x8

    };

    struct FPolygonToSplit //ScriptStruct EditableMesh.PolygonToSplit
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPolygonID PolygonID; // 0x0
        struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x8

    };

    struct FVertexPair //ScriptStruct EditableMesh.VertexPair
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVertexID VertexID0; // 0x0
        struct FVertexID VertexID1; // 0x4

    };

    struct FPolygonToCreate //ScriptStruct EditableMesh.PolygonToCreate
    {
    //Children Prop Count (Fields): 4
    public:

        struct FPolygonGroupID PolygonGroupID; // 0x0
        struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x8
        struct FPolygonID OriginalPolygonID; // 0x18
        enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c

    };

    struct FVertexAndAttributes //ScriptStruct EditableMesh.VertexAndAttributes
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVertexInstanceID VertexInstanceID; // 0x0
        struct FVertexID VertexID; // 0x4
        struct FMeshElementAttributeList PolygonVertexAttributes; // 0x8

    };

    struct FEdgeToCreate //ScriptStruct EditableMesh.EdgeToCreate
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVertexID VertexID0; // 0x0
        struct FVertexID VertexID1; // 0x4
        struct FMeshElementAttributeList EdgeAttributes; // 0x8
        struct FEdgeID OriginalEdgeID; // 0x18

    };

    struct FVertexInstanceToCreate //ScriptStruct EditableMesh.VertexInstanceToCreate
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVertexID VertexID; // 0x0
        struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8
        struct FVertexInstanceID OriginalVertexInstanceID; // 0x18

    };

    struct FVertexToCreate //ScriptStruct EditableMesh.VertexToCreate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMeshElementAttributeList VertexAttributes; // 0x0
        struct FVertexID OriginalVertexID; // 0x10

    };

    struct FSubdivisionLimitData //ScriptStruct EditableMesh.SubdivisionLimitData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FVector> VertexPositions; // 0x0
        struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10
        struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20

    };

    struct FSubdividedWireEdge //ScriptStruct EditableMesh.SubdividedWireEdge
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t EdgeVertex0PositionIndex; // 0x0
        int32_t EdgeVertex1PositionIndex; // 0x4

    };

    struct FSubdivisionLimitSection //ScriptStruct EditableMesh.SubdivisionLimitSection
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x0

    };

    struct FSubdividedQuad //ScriptStruct EditableMesh.SubdividedQuad
    {
    //Children Prop Count (Fields): 4
    public:

        struct FSubdividedQuadVertex QuadVertex0; // 0x0
        struct FSubdividedQuadVertex QuadVertex1; // 0x34
        struct FSubdividedQuadVertex QuadVertex2; // 0x68
        struct FSubdividedQuadVertex QuadVertex3; // 0x9c

    };

    struct FSubdividedQuadVertex //ScriptStruct EditableMesh.SubdividedQuadVertex
    {
    //Children Prop Count (Fields): 7
    public:

        int32_t VertexPositionIndex; // 0x0
        struct FVector2D TextureCoordinate0; // 0x4
        struct FVector2D TextureCoordinate1; // 0xc
        struct FColor VertexColor; // 0x14
        struct FVector VertexNormal; // 0x18
        struct FVector VertexTangent; // 0x24
        float VertexBinormalSign; // 0x30

    };

    struct FRenderingPolygonGroup //ScriptStruct EditableMesh.RenderingPolygonGroup
    {
    //Children Prop Count (Fields): 3
    public:

        uint32_t RenderingSectionIndex; // 0x0
        int32_t MaterialIndex; // 0x4
        int32_t MaxTriangles; // 0x8

    };

    struct FRenderingPolygon //ScriptStruct EditableMesh.RenderingPolygon
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPolygonGroupID PolygonGroupID; // 0x0
        struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8

    };

    struct FTriangleID : FElementID //ScriptStruct MeshDescription.TriangleID
    {
    public:


    };

    struct FMovieSceneGeometryCollectionParams //ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
    {
    //Children Prop Count (Fields): 4
    public:

        struct FSoftObjectPath GeometryCollectionCache; // 0x8
        struct FFrameNumber StartFrameOffset; // 0x20
        struct FFrameNumber EndFrameOffset; // 0x24
        float PlayRate; // 0x28

    };

    struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20

    };

    struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams //ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameNumber SectionStartTime; // 0x30
        struct FFrameNumber SectionEndTime; // 0x34

    };

    struct FChaosDestructionEvent //ScriptStruct ChaosNiagara.ChaosDestructionEvent
    {
    //Children Prop Count (Fields): 9
    public:

        struct FVector Position; // 0x0
        struct FVector Normal; // 0xc
        struct FVector Velocity; // 0x18
        struct FVector AngularVelocity; // 0x24
        float ExtentMin; // 0x30
        float ExtentMax; // 0x34
        int32_t ParticleID; // 0x38
        float Time; // 0x3c
        int32_t Type; // 0x40

    };

    struct FNiagaraCompileHash //ScriptStruct NiagaraCore.NiagaraCompileHash
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> DataHash; // 0x0

    };

    struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FNiagaraVariable Parameter; // 0x20

    };

    struct FNiagaraVariableBase //ScriptStruct Niagara.NiagaraVariableBase
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        struct FNiagaraTypeDefinition TypeDef; // 0x8

    };

    struct FNiagaraTypeDefinition //ScriptStruct Niagara.NiagaraTypeDefinition
    {
    //Children Prop Count (Fields): 2
    public:

        class UObject* ClassStructOrEnum; // 0x0
        uint16_t UnderlyingType; // 0x8

    };

    struct FNiagaraVariable : FNiagaraVariableBase //ScriptStruct Niagara.NiagaraVariable
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> VarData; // 0x18

    };

    struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate //ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneBoolChannel BoolChannel; // 0x48

    };

    struct FMovieSceneChannel //ScriptStruct MovieScene.MovieSceneChannel
    {
    public:


    };

    struct FMovieSceneBoolChannel : FMovieSceneChannel //ScriptStruct MovieScene.MovieSceneBoolChannel
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FFrameNumber> Times; // 0x8
        bool DefaultValue; // 0x18
        bool bHasDefaultValue; // 0x19
        struct TArray<bool> Values; // 0x20

    };

    struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate //ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
    {
    //Children Prop Count (Fields): 4
    public:

        struct FMovieSceneFloatChannel RedChannel; // 0x48
        struct FMovieSceneFloatChannel GreenChannel; // 0xe8
        struct FMovieSceneFloatChannel BlueChannel; // 0x188
        struct FMovieSceneFloatChannel AlphaChannel; // 0x228

    };

    struct FMovieSceneFloatChannel : FMovieSceneChannel //ScriptStruct MovieScene.MovieSceneFloatChannel
    {
    //Children Prop Count (Fields): 8
    public:

        enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x8
        enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x9
        struct TArray<struct FFrameNumber> Times; // 0x10
        struct TArray<struct FMovieSceneFloatValue> Values; // 0x20
        float DefaultValue; // 0x30
        bool bHasDefaultValue; // 0x34
        struct FMovieSceneKeyHandleMap KeyHandles; // 0x38
        struct FFrameRate TickResolution; // 0x98

    };

    struct FKeyHandleLookupTable //ScriptStruct Engine.KeyHandleLookupTable
    {
    public:


    };

    struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable //ScriptStruct MovieScene.MovieSceneKeyHandleMap
    {
    public:


    };

    struct FMovieSceneFloatValue //ScriptStruct MovieScene.MovieSceneFloatValue
    {
    //Children Prop Count (Fields): 5
    public:

        float Value; // 0x0
        struct FMovieSceneTangentData Tangent; // 0x4
        enum class ERichCurveInterpMode InterpMode; // 0x18
        enum class ERichCurveTangentMode TangentMode; // 0x19
        char PaddingByte; // 0x1a

    };

    struct FMovieSceneTangentData //ScriptStruct MovieScene.MovieSceneTangentData
    {
    //Children Prop Count (Fields): 5
    public:

        float ArriveTangent; // 0x0
        float LeaveTangent; // 0x4
        float ArriveTangentWeight; // 0x8
        float LeaveTangentWeight; // 0xc
        enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x10

    };

    struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate //ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneFloatChannel FloatChannel; // 0x48

    };

    struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate //ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneIntegerChannel IntegerChannel; // 0x48

    };

    struct FMovieSceneIntegerChannel : FMovieSceneChannel //ScriptStruct MovieScene.MovieSceneIntegerChannel
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FFrameNumber> Times; // 0x8
        int32_t DefaultValue; // 0x18
        bool bHasDefaultValue; // 0x1c
        struct TArray<int32_t> Values; // 0x20

    };

    struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase //ScriptStruct MovieScene.MovieSceneTrackImplementation
    {
    public:


    };

    struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation //ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
    {
    //Children Prop Count (Fields): 6
    public:

        struct FFrameNumber SpawnSectionStartFrame; // 0x10
        struct FFrameNumber SpawnSectionEndFrame; // 0x14
        enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
        enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
        enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
        enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24

    };

    struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate //ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
    {
    public:


    };

    struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate //ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneFloatChannel VectorChannels; // 0x48
        int32_t ChannelsUsed; // 0x2c8

    };

    struct FNiagaraRandInfo //ScriptStruct Niagara.NiagaraRandInfo
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t Seed1; // 0x0
        int32_t Seed2; // 0x4
        int32_t Seed3; // 0x8

    };

    struct FNiagaraUserParameterBinding //ScriptStruct Niagara.NiagaraUserParameterBinding
    {
    //Children Prop Count (Fields): 1
    public:

        struct FNiagaraVariable Parameter; // 0x0

    };

    struct FNiagaraScriptVariableBinding //ScriptStruct Niagara.NiagaraScriptVariableBinding
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName Name; // 0x0

    };

    struct FNiagaraVariableDataInterfaceBinding //ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
    {
    //Children Prop Count (Fields): 1
    public:

        struct FNiagaraVariable BoundVariable; // 0x0

    };

    struct FNiagaraVariableAttributeBinding //ScriptStruct Niagara.NiagaraVariableAttributeBinding
    {
    //Children Prop Count (Fields): 3
    public:

        struct FNiagaraVariable BoundVariable; // 0x0
        struct FNiagaraVariable DataSetVariable; // 0x28
        struct FNiagaraVariable DefaultValueIfNonExistent; // 0x50

    };

    struct FNiagaraVariableInfo //ScriptStruct Niagara.NiagaraVariableInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FNiagaraVariable Variable; // 0x0
        struct FText Definition; // 0x28
        class UNiagaraDataInterface* DataInterface; // 0x40

    };

    struct FNiagaraSystemUpdateContext //ScriptStruct Niagara.NiagaraSystemUpdateContext
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<class UNiagaraComponent*> ComponentsToReset; // 0x0
        struct TArray<class UNiagaraComponent*> ComponentsToReInit; // 0x10
        struct TArray<class UNiagaraSystem*> SystemSimsToDestroy; // 0x20

    };

    struct FVMExternalFunctionBindingInfo //ScriptStruct Niagara.VMExternalFunctionBindingInfo
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Name; // 0x0
        struct FName OwnerName; // 0x8
        struct TArray<bool> InputParamLocations; // 0x10
        int32_t NumOutputs; // 0x20
        struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x28

    };

    struct FVMFunctionSpecifier //ScriptStruct Niagara.VMFunctionSpecifier
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Key; // 0x0
        struct FName Value; // 0x8

    };

    struct FNiagaraStatScope //ScriptStruct Niagara.NiagaraStatScope
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName FullName; // 0x0
        struct FName FriendlyName; // 0x8

    };

    struct FNiagaraScriptDataInterfaceCompileInfo //ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName Name; // 0x0
        int32_t UserPtrIdx; // 0x8
        struct FNiagaraTypeDefinition Type; // 0x10
        struct FName RegisteredParameterMapRead; // 0x20
        struct FName RegisteredParameterMapWrite; // 0x28
        bool bIsPlaceholder; // 0x30

    };

    struct FNiagaraScriptDataInterfaceInfo //ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
    {
    //Children Prop Count (Fields): 6
    public:

        class UNiagaraDataInterface* DataInterface; // 0x0
        struct FName Name; // 0x8
        int32_t UserPtrIdx; // 0x10
        struct FNiagaraTypeDefinition Type; // 0x18
        struct FName RegisteredParameterMapRead; // 0x28
        struct FName RegisteredParameterMapWrite; // 0x30

    };

    struct FNiagaraFunctionSignature //ScriptStruct Niagara.NiagaraFunctionSignature
    {
    //Children Prop Count (Fields): 11
    public:

        struct FName Name; // 0x0
        struct TArray<struct FNiagaraVariable> Inputs; // 0x8
        struct TArray<struct FNiagaraVariable> Outputs; // 0x18
        struct FName OwnerName; // 0x28
        char bRequiresContext; // 0x30
        char bMemberFunction; // 0x30
        char bExperimental; // 0x30
        char bSupportsCPU; // 0x30
        char bSupportsGPU; // 0x30
        char bWriteFunction; // 0x30
        struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x38

    };

    struct FNiagaraScriptDataUsageInfo //ScriptStruct Niagara.NiagaraScriptDataUsageInfo
    {
    //Children Prop Count (Fields): 1
    public:

        bool bReadsAttributeData; // 0x0

    };

    struct FNiagaraDataSetProperties //ScriptStruct Niagara.NiagaraDataSetProperties
    {
    //Children Prop Count (Fields): 2
    public:

        struct FNiagaraDataSetID ID; // 0x0
        struct TArray<struct FNiagaraVariable> Variables; // 0x10

    };

    struct FNiagaraDataSetID //ScriptStruct Niagara.NiagaraDataSetID
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        enum class ENiagaraDataSetType Type; // 0x8

    };

    struct FNCPool //ScriptStruct Niagara.NCPool
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FNCPoolElement> FreeElements; // 0x0
        struct TArray<class UNiagaraComponent*> InUseComponents_Auto; // 0x10
        struct TArray<class UNiagaraComponent*> InUseComponents_Manual; // 0x20

    };

    struct FNCPoolElement //ScriptStruct Niagara.NCPoolElement
    {
    //Children Prop Count (Fields): 1
    public:

        class UNiagaraComponent* Component; // 0x0

    };

    struct FBasicParticleData //ScriptStruct Niagara.BasicParticleData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Position; // 0x0
        float Size; // 0xc
        struct FVector Velocity; // 0x10

    };

    struct FMeshTriCoordinate //ScriptStruct Niagara.MeshTriCoordinate
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t Tri; // 0x0
        struct FVector BaryCoord; // 0x4

    };

    struct FNDIStaticMeshSectionFilter //ScriptStruct Niagara.NDIStaticMeshSectionFilter
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<int32_t> AllowedMaterialSlots; // 0x0

    };

    struct FNiagaraDataSetCompiledData //ScriptStruct Niagara.NiagaraDataSetCompiledData
    {
    //Children Prop Count (Fields): 7
    public:

        struct TArray<struct FNiagaraVariable> Variables; // 0x0
        struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
        uint32_t TotalFloatComponents; // 0x20
        uint32_t TotalInt32Components; // 0x24
        char bRequiresPersistentIDs; // 0x28
        struct FNiagaraDataSetID ID; // 0x2c
        enum class ENiagaraSimTarget SimTarget; // 0x38

    };

    struct FNiagaraVariableLayoutInfo //ScriptStruct Niagara.NiagaraVariableLayoutInfo
    {
    //Children Prop Count (Fields): 3
    public:

        uint32_t FloatComponentStart; // 0x0
        uint32_t Int32ComponentStart; // 0x4
        struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x8

    };

    struct FNiagaraTypeLayoutInfo //ScriptStruct Niagara.NiagaraTypeLayoutInfo
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<uint32_t> FloatComponentByteOffsets; // 0x0
        struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
        struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
        struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30

    };

    struct FNiagaraGraphViewSettings //ScriptStruct Niagara.NiagaraGraphViewSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector2D Location; // 0x0
        float Zoom; // 0x8
        bool bIsValid; // 0xc

    };

    struct FNiagaraEmitterScalabilityOverrides //ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x0

    };

    struct FNiagaraEmitterScalabilitySettings //ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct FNiagaraPlatformSet Platforms; // 0x0
        char bScaleSpawnCount; // 0x20
        float SpawnCountScale; // 0x24

    };

    struct FNiagaraPlatformSet //ScriptStruct Niagara.NiagaraPlatformSet
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t QualityLevelMask; // 0x0
        struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8

    };

    struct FNiagaraDeviceProfileStateEntry //ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName ProfileName; // 0x0
        uint32_t QualityLevelMask; // 0x8
        uint32_t SetQualityLevelMask; // 0xc

    };

    struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings //ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
    {
    //Children Prop Count (Fields): 1
    public:

        char bOverrideSpawnCountScale; // 0x28

    };

    struct FNiagaraEmitterScalabilitySettingsArray //ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x0

    };

    struct FNiagaraSystemScalabilityOverrides //ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x0

    };

    struct FNiagaraSystemScalabilitySettings //ScriptStruct Niagara.NiagaraSystemScalabilitySettings
    {
    //Children Prop Count (Fields): 7
    public:

        struct FNiagaraPlatformSet Platforms; // 0x0
        char bCullByDistance; // 0x20
        char bCullMaxInstanceCount; // 0x20
        char bCullByMaxTimeWithoutRender; // 0x20
        float MaxDistance; // 0x24
        float MaxInstances; // 0x28
        float MaxTimeWithoutRender; // 0x2c

    };

    struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings //ScriptStruct Niagara.NiagaraSystemScalabilityOverride
    {
    //Children Prop Count (Fields): 3
    public:

        char bOverrideDistanceSettings; // 0x30
        char bOverrideInstanceCountSettings; // 0x30
        char bOverrideTimeSinceRendererSettings; // 0x30

    };

    struct FNiagaraSystemScalabilitySettingsArray //ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x0

    };

    struct FNiagaraDetailsLevelScaleOverrides //ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
    {
    //Children Prop Count (Fields): 5
    public:

        float Low; // 0x0
        float Medium; // 0x4
        float High; // 0x8
        float Epic; // 0xc
        float Cine; // 0x10

    };

    struct FNiagaraEmitterScriptProperties //ScriptStruct Niagara.NiagaraEmitterScriptProperties
    {
    //Children Prop Count (Fields): 3
    public:

        class UNiagaraScript* Script; // 0x0
        struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x8
        struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18

    };

    struct FNiagaraEventGeneratorProperties //ScriptStruct Niagara.NiagaraEventGeneratorProperties
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t MaxEventsPerFrame; // 0x0
        struct FName ID; // 0x4
        struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10

    };

    struct FNiagaraEventReceiverProperties //ScriptStruct Niagara.NiagaraEventReceiverProperties
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x0
        struct FName SourceEventGenerator; // 0x8
        struct FName SourceEmitter; // 0x10

    };

    struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties //ScriptStruct Niagara.NiagaraEventScriptProperties
    {
    //Children Prop Count (Fields): 7
    public:

        enum class EScriptExecutionMode ExecutionMode; // 0x28
        uint32_t SpawnNumber; // 0x2c
        uint32_t MaxEventsPerFrame; // 0x30
        struct FGuid SourceEmitterID; // 0x34
        struct FName SourceEventName; // 0x44
        bool bRandomSpawnNumber; // 0x4c
        uint32_t MinSpawnNumber; // 0x50

    };

    struct FNiagaraEmitterHandle //ScriptStruct Niagara.NiagaraEmitterHandle
    {
    //Children Prop Count (Fields): 5
    public:

        struct FGuid ID; // 0x0
        struct FName IdName; // 0x10
        bool bIsEnabled; // 0x18
        struct FName Name; // 0x1c
        class UNiagaraEmitter* Instance; // 0x28

    };

    struct FNiagaraCollisionEventPayload //ScriptStruct Niagara.NiagaraCollisionEventPayload
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector CollisionPos; // 0x0
        struct FVector CollisionNormal; // 0xc
        struct FVector CollisionVelocity; // 0x18
        int32_t ParticleIndex; // 0x24
        int32_t PhysicalMaterialIndex; // 0x28

    };

    struct FNiagaraMeshMaterialOverride //ScriptStruct Niagara.NiagaraMeshMaterialOverride
    {
    //Children Prop Count (Fields): 2
    public:

        class UMaterialInterface* ExplicitMat; // 0x0
        struct FNiagaraUserParameterBinding UserParamBinding; // 0x8

    };

    struct FNiagaraParameters //ScriptStruct Niagara.NiagaraParameters
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FNiagaraVariable> Parameters; // 0x0

    };

    struct FNiagaraParameterStore //ScriptStruct Niagara.NiagaraParameterStore
    {
    //Children Prop Count (Fields): 5
    public:

        class UObject* Owner; // 0x8
        struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
        struct TArray<char> ParameterData; // 0x20
        struct TArray<class UNiagaraDataInterface*> DataInterfaces; // 0x30
        struct TArray<class UObject*> UObjects; // 0x40

    };

    struct FNiagaraVariableWithOffset : FNiagaraVariableBase //ScriptStruct Niagara.NiagaraVariableWithOffset
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Offset; // 0x18

    };

    struct FNiagaraBoundParameter //ScriptStruct Niagara.NiagaraBoundParameter
    {
    //Children Prop Count (Fields): 3
    public:

        struct FNiagaraVariable Parameter; // 0x0
        int32_t SrcOffset; // 0x28
        int32_t DestOffset; // 0x2c

    };

    struct FNiagaraPlatformSetConflictInfo //ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t SetAIndex; // 0x0
        int32_t SetBIndex; // 0x4
        struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8

    };

    struct FNiagaraPlatformSetConflictEntry //ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ProfileName; // 0x0
        int32_t QualityLevelMask; // 0x8

    };

    struct FNiagaraScalabilityManager //ScriptStruct Niagara.NiagaraScalabilityManager
    {
    //Children Prop Count (Fields): 2
    public:

        class UNiagaraEffectType* EffectType; // 0x0
        struct TArray<class UNiagaraComponent*> ManagedComponents; // 0x8

    };

    struct FNiagaraVMExecutableData //ScriptStruct Niagara.NiagaraVMExecutableData
    {
    //Children Prop Count (Fields): 17
    public:

        struct TArray<char> ByteCode; // 0x0
        struct TArray<char> OptimizedByteCode; // 0x10
        int32_t NumTempRegisters; // 0x20
        int32_t NumUserPtrs; // 0x24
        struct FNiagaraParameters Parameters; // 0x28
        struct FNiagaraParameters InternalParameters; // 0x38
        struct TMap<struct FName, struct FNiagaraParameters> DataSetToParameters; // 0x48
        struct TArray<struct FNiagaraVariable> Attributes; // 0x98
        struct FNiagaraScriptDataUsageInfo DataUsage; // 0xa8
        struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xb0
        struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xc0
        struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0xd0
        struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0xe0
        struct TArray<struct FNiagaraStatScope> StatScopes; // 0xf0
        struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x100
        enum class ENiagaraScriptCompileStatus LastCompileStatus; // 0x110
        struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0x118

    };

    struct FSimulationStageMetaData //ScriptStruct Niagara.SimulationStageMetaData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName IterationSource; // 0x0
        char bSpawnOnly; // 0x8
        char bWritesParticles; // 0x8
        struct TArray<struct FName> OutputDestinations; // 0x10
        int32_t MinStage; // 0x20
        int32_t MaxStage; // 0x24

    };

    struct FNiagaraDataInterfaceGPUParamInfo //ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString DataInterfaceHLSLSymbol; // 0x0
        struct FString DIClassName; // 0x10
        struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20

    };

    struct FNiagaraDataInterfaceGeneratedFunction //ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
    {
    public:


    };

    struct FNiagaraVMExecutableDataId //ScriptStruct Niagara.NiagaraVMExecutableDataId
    {
    //Children Prop Count (Fields): 8
    public:

        struct FGuid CompilerVersionID; // 0x0
        enum class ENiagaraScriptUsage ScriptUsageType; // 0x10
        struct FGuid ScriptUsageTypeID; // 0x14
        char bUsesRapidIterationParams; // 0x24
        char bInterpolatedSpawn; // 0x24
        char bRequiresPersistentIDs; // 0x24
        struct FGuid BaseScriptID; // 0x28
        struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38

    };

    struct FNiagaraModuleDependency //ScriptStruct Niagara.NiagaraModuleDependency
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName ID; // 0x0
        enum class ENiagaraModuleDependencyType Type; // 0x8
        enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
        struct FText Description; // 0x10

    };

    struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore //ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t ParameterSize; // 0xb8
        uint32_t PaddedParameterSize; // 0xbc
        struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xc0
        char bInitialized; // 0xd0

    };

    struct FNiagaraScriptExecutionPaddingInfo //ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
    {
    //Children Prop Count (Fields): 4
    public:

        uint16_t SrcOffset; // 0x0
        uint16_t DestOffset; // 0x2
        uint16_t SrcSize; // 0x4
        uint16_t DestSize; // 0x6

    };

    struct FNiagaraScriptHighlight //ScriptStruct Niagara.NiagaraScriptHighlight
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLinearColor Color; // 0x0
        struct FText DisplayName; // 0x10

    };

    struct FNiagaraSystemCompileRequest //ScriptStruct Niagara.NiagaraSystemCompileRequest
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<class UObject*> RootObjects; // 0x8

    };

    struct FEmitterCompiledScriptPair //ScriptStruct Niagara.EmitterCompiledScriptPair
    {
    public:


    };

    struct FNiagaraSystemCompiledData //ScriptStruct Niagara.NiagaraSystemCompiledData
    {
    //Children Prop Count (Fields): 12
    public:

        struct FNiagaraParameterStore InstanceParamStore; // 0x0
        struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xb8
        struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xf8
        struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x138
        struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x178
        struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x198
        struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x1b8
        struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1d8
        struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1e8
        struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x208
        struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x228
        struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x248

    };

    struct FNiagaraParameterDataSetBindingCollection //ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
        struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10

    };

    struct FNiagaraParameterDataSetBinding //ScriptStruct Niagara.NiagaraParameterDataSetBinding
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t ParameterOffset; // 0x0
        int32_t DataSetComponentOffset; // 0x4

    };

    struct FNiagaraEmitterCompiledData //ScriptStruct Niagara.NiagaraEmitterCompiledData
    {
    //Children Prop Count (Fields): 8
    public:

        struct TArray<struct FName> SpawnAttributes; // 0x0
        struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
        struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x38
        struct FNiagaraVariable EmitterSpawnGroupVar; // 0x60
        struct FNiagaraVariable EmitterAgeVar; // 0x88
        struct FNiagaraVariable EmitterRandomSeedVar; // 0xb0
        struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd8
        struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x100

    };

    struct FNiagaraVariableMetaData //ScriptStruct Niagara.NiagaraVariableMetaData
    {
    //Children Prop Count (Fields): 17
    public:

        struct FText Description; // 0x0
        struct FText CategoryName; // 0x18
        bool bAdvancedDisplay; // 0x30
        int32_t EditorSortPriority; // 0x34
        bool bInlineEditConditionToggle; // 0x38
        struct FNiagaraInputConditionMetadata EditCondition; // 0x40
        struct FNiagaraInputConditionMetadata VisibleCondition; // 0x58
        struct TMap<struct FName, struct FString> PropertyMetaData; // 0x70
        struct FName ScopeName; // 0xc0
        enum class ENiagaraScriptParameterUsage Usage; // 0xc8
        bool bIsStaticSwitch; // 0xcc
        int32_t StaticSwitchDefaultValue; // 0xd0
        bool bAddedToNodeGraphDeepCopy; // 0xd4
        bool bOutputIsPersistent; // 0xd5
        struct FName CachedNamespacelessVariableName; // 0xd8
        bool bCreatedInSystemEditor; // 0xe0
        bool bUseLegacyNameString; // 0xe1

    };

    struct FNiagaraInputConditionMetadata //ScriptStruct Niagara.NiagaraInputConditionMetadata
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName InputName; // 0x0
        struct TArray<struct FString> TargetValues; // 0x8

    };

    struct FNiagaraParameterScopeInfo //ScriptStruct Niagara.NiagaraParameterScopeInfo
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ENiagaraParameterScope Scope; // 0x0
        struct FString NamespaceString; // 0x8

    };

    struct FNiagaraCompileHashVisitorDebugInfo //ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString Object; // 0x0
        struct TArray<struct FString> PropertyKeys; // 0x10
        struct TArray<struct FString> PropertyValues; // 0x20

    };

    struct FNiagaraID //ScriptStruct Niagara.NiagaraID
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t Index; // 0x0
        int32_t AcquireTag; // 0x4

    };

    struct FNiagaraSpawnInfo //ScriptStruct Niagara.NiagaraSpawnInfo
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t Count; // 0x0
        float InterpStartDt; // 0x4
        float IntervalDt; // 0x8
        int32_t SpawnGroup; // 0xc

    };

    struct FNiagaraMatrix //ScriptStruct Niagara.NiagaraMatrix
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector4 Row0; // 0x0
        struct FVector4 Row1; // 0x10
        struct FVector4 Row2; // 0x20
        struct FVector4 Row3; // 0x30

    };

    struct FNiagaraTestStruct //ScriptStruct Niagara.NiagaraTestStruct
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector Vector1; // 0x0
        struct FVector Vector2; // 0xc
        struct FNiagaraTestStructInner InnerStruct1; // 0x18
        struct FNiagaraTestStructInner InnerStruct2; // 0x30

    };

    struct FNiagaraTestStructInner //ScriptStruct Niagara.NiagaraTestStructInner
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector InnerVector1; // 0x0
        struct FVector InnerVector2; // 0xc

    };

    struct FNiagaraParameterMap //ScriptStruct Niagara.NiagaraParameterMap
    {
    public:


    };

    struct FNiagaraNumeric //ScriptStruct Niagara.NiagaraNumeric
    {
    public:


    };

    struct FNiagaraBool //ScriptStruct Niagara.NiagaraBool
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Value; // 0x0

    };

    struct FNiagaraInt32 //ScriptStruct Niagara.NiagaraInt32
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Value; // 0x0

    };

    struct FNiagaraFloat //ScriptStruct Niagara.NiagaraFloat
    {
    //Children Prop Count (Fields): 1
    public:

        float Value; // 0x0

    };

    struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore //ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0xb8

    };

    struct FNiagaraVariant //ScriptStruct Niagara.NiagaraVariant
    {
    //Children Prop Count (Fields): 4
    public:

        class UObject* Object; // 0x0
        class UNiagaraDataInterface* DataInterface; // 0x8
        struct TArray<char> Bytes; // 0x10
        enum class ENiagaraVariantMode CurrentMode; // 0x20

    };

    struct FNiagaraWorldManagerTickFunction : FTickFunction //ScriptStruct Niagara.NiagaraWorldManagerTickFunction
    {
    public:


    };

    struct FNiagaraCompileEvent //ScriptStruct NiagaraShader.NiagaraCompileEvent
    {
    //Children Prop Count (Fields): 5
    public:

        enum class FNiagaraCompileEventSeverity Severity; // 0x0
        struct FString Message; // 0x8
        struct FGuid NodeGuid; // 0x18
        struct FGuid PinGuid; // 0x28
        struct TArray<struct FGuid> StackGuids; // 0x38

    };

    struct FRepAttachment //ScriptStruct Engine.RepAttachment
    {
    //Children Prop Count (Fields): 6
    public:

        class AActor* AttachParent; // 0x0
        struct FVector_NetQuantize100 LocationOffset; // 0x8
        struct FVector_NetQuantize100 RelativeScale3D; // 0x14
        struct FRotator RotationOffset; // 0x20
        struct FName AttachSocket; // 0x2c
        class USceneComponent* AttachComponent; // 0x38

    };

    struct FVector_NetQuantize100 : FVector //ScriptStruct Engine.Vector_NetQuantize100
    {
    public:


    };

    struct FRepMovement //ScriptStruct Engine.RepMovement
    {
    //Children Prop Count (Fields): 9
    public:

        struct FVector LinearVelocity; // 0x0
        struct FVector AngularVelocity; // 0xc
        struct FVector Location; // 0x18
        struct FRotator Rotation; // 0x24
        char bSimulatedPhysicSleep; // 0x30
        char bRepPhysics; // 0x30
        enum class EVectorQuantization LocationQuantizationLevel; // 0x31
        enum class EVectorQuantization VelocityQuantizationLevel; // 0x32
        enum class ERotatorQuantization RotationQuantizationLevel; // 0x33

    };

    struct FActorTickFunction : FTickFunction //ScriptStruct Engine.ActorTickFunction
    {
    public:


    };

    struct FMagicLeapSharedWorldSharedData //ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FGuid> PinIDs; // 0x0

    };

    struct FMagicLeapSharedWorldAlignmentTransforms //ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FTransform> AlignmentTransforms; // 0x0

    };

    struct FMagicLeapSharedWorldLocalData //ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FMagicLeapSharedWorldPinData> LocalPins; // 0x0

    };

    struct FMagicLeapSharedWorldPinData //ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid PinID; // 0x0
        struct FMagicLeapARPinState PinState; // 0x10

    };

    struct FMagicLeapGraphicsClientPerformanceInfo //ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
    {
    //Children Prop Count (Fields): 7
    public:

        float FrameStartCPUCompAcquireCPUTimeMs; // 0x0
        float FrameStartCPUFrameEndGPUTimeMs; // 0x4
        float FrameStartCPUFrameStartCPUTimeMs; // 0x8
        float FrameDurationCPUTimeMs; // 0xc
        float FrameDurationGPUTimeMs; // 0x10
        float FrameInternalDurationCPUTimeMs; // 0x14
        float FrameInternalDurationGPUTimeMs; // 0x18

    };

    struct FMagicLeapHeadTrackingState //ScriptStruct MagicLeap.MagicLeapHeadTrackingState
    {
    //Children Prop Count (Fields): 3
    public:

        enum class EMagicLeapHeadTrackingMode Mode; // 0x0
        enum class EMagicLeapHeadTrackingError Error; // 0x1
        float Confidence; // 0x4

    };

    struct FMagicLeapAudioDummyStruct //ScriptStruct MagicLeapAudio.MagicLeapAudioDummyStruct
    {
    public:


    };

    struct FMagicLeapEyeBlinkState //ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
    {
    //Children Prop Count (Fields): 2
    public:

        bool LeftEyeBlinked; // 0x0
        bool RightEyeBlinked; // 0x1

    };

    struct FMagicLeapImageTrackerTarget //ScriptStruct MagicLeapImageTracker.MagicLeapImageTrackerTarget
    {
    public:


    };

    struct FMagicLeapPlanesQuery //ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
    {
    //Children Prop Count (Fields): 11
    public:

        struct TArray<enum class EMagicLeapPlaneQueryFlags> Flags; // 0x0
        class UBoxComponent* SearchVolume; // 0x10
        int32_t MaxResults; // 0x18
        float MinHoleLength; // 0x1c
        float MinPlaneArea; // 0x20
        struct FVector SearchVolumePosition; // 0x24
        struct FQuat SearchVolumeOrientation; // 0x30
        struct FVector SearchVolumeExtents; // 0x40
        float SimilarityThreshold; // 0x4c
        bool bSearchVolumeTrackingSpace; // 0x50
        bool bResultTrackingSpace; // 0x51

    };

    struct FMagicLeapHandMesh //ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t Version; // 0x0
        int32_t DataCount; // 0x4
        struct TArray<struct FMagicLeapHandMeshBlock> Data; // 0x8

    };

    struct FMagicLeapHandMeshBlock //ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t IndexCount; // 0x0
        int32_t VertexCount; // 0x4
        struct TArray<struct FVector> Vertex; // 0x8
        struct TArray<int32_t> Index; // 0x18

    };

    struct FMagicLeapLightEstimationColorTemperatureState //ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
    {
    //Children Prop Count (Fields): 3
    public:

        float ColorTemperatureKelvin; // 0x0
        struct FLinearColor AmbientColor; // 0x4
        struct FTimespan Timestamp; // 0x18

    };

    struct FMagicLeapLightEstimationAmbientGlobalState //ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<float> AmbientIntensityNits; // 0x0
        struct FTimespan Timestamp; // 0x10

    };

    struct FUdpMockMessage //ScriptStruct UdpMessaging.UdpMockMessage
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> Data; // 0x0

    };

    struct FActorSequenceObjectReferenceMap //ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FGuid> BindingIds; // 0x0
        struct TArray<struct FActorSequenceObjectReferences> References; // 0x10

    };

    struct FActorSequenceObjectReferences //ScriptStruct ActorSequence.ActorSequenceObjectReferences
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FActorSequenceObjectReference> Array; // 0x0

    };

    struct FActorSequenceObjectReference //ScriptStruct ActorSequence.ActorSequenceObjectReference
    {
    //Children Prop Count (Fields): 3
    public:

        enum class EActorSequenceObjectReferenceType Type; // 0x0
        struct FGuid ActorId; // 0x4
        struct FString PathToComponent; // 0x18

    };

    struct FTemplateSequenceBindingOverrideData //ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TWeakObjectPtr<struct UObject> Object; // 0x0
        bool bOverridesDefault; // 0x8

    };

    struct FMovieSceneSequenceInstanceData //ScriptStruct MovieScene.MovieSceneSequenceInstanceData
    {
    public:


    };

    struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData //ScriptStruct TemplateSequence.TemplateSequenceInstanceData
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneEvaluationOperand Operand; // 0x8

    };

    struct FMovieSceneEvaluationOperand //ScriptStruct MovieScene.MovieSceneEvaluationOperand
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid ObjectBindingID; // 0x0
        struct FMovieSceneSequenceID SequenceID; // 0x10

    };

    struct FMovieSceneSequenceID //ScriptStruct MovieScene.MovieSceneSequenceID
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t Value; // 0x0

    };

    struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFrameNumber SectionStartTime; // 0x20
        struct FGuid OuterBindingId; // 0x24
        struct FMovieSceneEvaluationOperand InnerOperand; // 0x34

    };

    struct FAudioCaptureDeviceInfo //ScriptStruct AudioCapture.AudioCaptureDeviceInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName DeviceName; // 0x0
        int32_t NumInputChannels; // 0x8
        int32_t SampleRate; // 0xc

    };

    struct FCustomMeshTriangle //ScriptStruct CustomMeshComponent.CustomMeshTriangle
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Vertex0; // 0x0
        struct FVector Vertex1; // 0xc
        struct FVector Vertex2; // 0x18

    };

    struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase //ScriptStruct PhysXVehicles.AnimNode_WheelHandler
    {
    public:


    };

    struct FTireConfigMaterialFriction //ScriptStruct PhysXVehicles.TireConfigMaterialFriction
    {
    //Children Prop Count (Fields): 2
    public:

        class UPhysicalMaterial* PhysicalMaterial; // 0x0
        float FrictionScale; // 0x8

    };

    struct FAnimInstanceProxy //ScriptStruct Engine.AnimInstanceProxy
    {
    public:


    };

    struct FVehicleAnimInstanceProxy : FAnimInstanceProxy //ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
    {
    public:


    };

    struct FVehicleInputRate //ScriptStruct PhysXVehicles.VehicleInputRate
    {
    //Children Prop Count (Fields): 2
    public:

        float RiseRate; // 0x0
        float FallRate; // 0x4

    };

    struct FReplicatedVehicleState //ScriptStruct PhysXVehicles.ReplicatedVehicleState
    {
    //Children Prop Count (Fields): 5
    public:

        float SteeringInput; // 0x0
        float ThrottleInput; // 0x4
        float BrakeInput; // 0x8
        float HandbrakeInput; // 0xc
        int32_t CurrentGear; // 0x10

    };

    struct FWheelSetup //ScriptStruct PhysXVehicles.WheelSetup
    {
    //Children Prop Count (Fields): 4
    public:

        class UVehicleWheel* WheelClass; // 0x0
        struct FName BoneName; // 0x8
        struct FVector AdditionalOffset; // 0x10
        bool bDisableSteering; // 0x1c

    };

    struct FVehicleTransmissionData //ScriptStruct PhysXVehicles.VehicleTransmissionData
    {
    //Children Prop Count (Fields): 8
    public:

        bool bUseGearAutoBox; // 0x0
        float GearSwitchTime; // 0x4
        float GearAutoBoxLatency; // 0x8
        float FinalRatio; // 0xc
        struct TArray<struct FVehicleGearData> ForwardGears; // 0x10
        float ReverseGearRatio; // 0x20
        float NeutralGearUpRatio; // 0x24
        float ClutchStrength; // 0x28

    };

    struct FVehicleGearData //ScriptStruct PhysXVehicles.VehicleGearData
    {
    //Children Prop Count (Fields): 3
    public:

        float Ratio; // 0x0
        float DownRatio; // 0x4
        float UpRatio; // 0x8

    };

    struct FVehicleEngineData //ScriptStruct PhysXVehicles.VehicleEngineData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FRuntimeFloatCurve TorqueCurve; // 0x0
        float MaxRPM; // 0x88
        float MOI; // 0x8c
        float DampingRateFullThrottle; // 0x90
        float DampingRateZeroThrottleClutchEngaged; // 0x94
        float DampingRateZeroThrottleClutchDisengaged; // 0x98

    };

    struct FRuntimeFloatCurve //ScriptStruct Engine.RuntimeFloatCurve
    {
    //Children Prop Count (Fields): 2
    public:

        struct FRichCurve EditorCurveData; // 0x0
        class UCurveFloat* ExternalCurve; // 0x80

    };

    struct FIndexedCurve //ScriptStruct Engine.IndexedCurve
    {
    //Children Prop Count (Fields): 1
    public:

        struct FKeyHandleMap KeyHandlesToIndices; // 0x8

    };

    struct FKeyHandleMap //ScriptStruct Engine.KeyHandleMap
    {
    public:


    };

    struct FRealCurve : FIndexedCurve //ScriptStruct Engine.RealCurve
    {
    //Children Prop Count (Fields): 3
    public:

        float DefaultValue; // 0x68
        enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
        enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x6d

    };

    struct FRichCurve : FRealCurve //ScriptStruct Engine.RichCurve
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FRichCurveKey> Keys; // 0x70

    };

    struct FRichCurveKey //ScriptStruct Engine.RichCurveKey
    {
    //Children Prop Count (Fields): 9
    public:

        enum class ERichCurveInterpMode InterpMode; // 0x0
        enum class ERichCurveTangentMode TangentMode; // 0x1
        enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x2
        float Time; // 0x4
        float Value; // 0x8
        float ArriveTangent; // 0xc
        float ArriveTangentWeight; // 0x10
        float LeaveTangent; // 0x14
        float LeaveTangentWeight; // 0x18

    };

    struct FVehicleDifferential4WData //ScriptStruct PhysXVehicles.VehicleDifferential4WData
    {
    //Children Prop Count (Fields): 7
    public:

        enum class EVehicleDifferential4W DifferentialType; // 0x0
        float FrontRearSplit; // 0x4
        float FrontLeftRightSplit; // 0x8
        float RearLeftRightSplit; // 0xc
        float CentreBias; // 0x10
        float FrontBias; // 0x14
        float RearBias; // 0x18

    };

    struct FModularSynthPresetBankEntry //ScriptStruct Synthesis.ModularSynthPresetBankEntry
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString PresetName; // 0x0
        struct FModularSynthPreset Preset; // 0x10

    };

    struct FModularSynthPreset : FTableRowBase //ScriptStruct Synthesis.ModularSynthPreset
    {
    //Children Prop Count (Fields): 59
    public:

        char bEnablePolyphony; // 0x8
        enum class ESynth1OscType Osc1Type; // 0xc
        float Osc1Gain; // 0x10
        float Osc1Octave; // 0x14
        float Osc1Semitones; // 0x18
        float Osc1Cents; // 0x1c
        float Osc1PulseWidth; // 0x20
        enum class ESynth1OscType Osc2Type; // 0x24
        float Osc2Gain; // 0x28
        float Osc2Octave; // 0x2c
        float Osc2Semitones; // 0x30
        float Osc2Cents; // 0x34
        float Osc2PulseWidth; // 0x38
        float Portamento; // 0x3c
        char bEnableUnison; // 0x40
        char bEnableOscillatorSync; // 0x40
        float Spread; // 0x44
        float Pan; // 0x48
        float LFO1Frequency; // 0x4c
        float LFO1Gain; // 0x50
        enum class ESynthLFOType LFO1Type; // 0x54
        enum class ESynthLFOMode LFO1Mode; // 0x55
        enum class ESynthLFOPatchType LFO1PatchType; // 0x56
        float LFO2Frequency; // 0x58
        float LFO2Gain; // 0x5c
        enum class ESynthLFOType LFO2Type; // 0x60
        enum class ESynthLFOMode LFO2Mode; // 0x61
        enum class ESynthLFOPatchType LFO2PatchType; // 0x62
        float GainDb; // 0x64
        float AttackTime; // 0x68
        float DecayTime; // 0x6c
        float SustainGain; // 0x70
        float ReleaseTime; // 0x74
        enum class ESynthModEnvPatch ModEnvPatchType; // 0x78
        enum class ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79
        char bInvertModulationEnvelope; // 0x7c
        char bInvertModulationEnvelopeBias; // 0x7c
        float ModulationEnvelopeDepth; // 0x80
        float ModulationEnvelopeAttackTime; // 0x84
        float ModulationEnvelopeDecayTime; // 0x88
        float ModulationEnvelopeSustainGain; // 0x8c
        float ModulationEnvelopeReleaseTime; // 0x90
        char bLegato; // 0x94
        char bRetrigger; // 0x94
        float FilterFrequency; // 0x98
        float FilterQ; // 0x9c
        enum class ESynthFilterType FilterType; // 0xa0
        enum class ESynthFilterAlgorithm FilterAlgorithm; // 0xa1
        char bStereoDelayEnabled; // 0xa4
        enum class ESynthStereoDelayMode StereoDelayMode; // 0xa8
        float StereoDelayTime; // 0xac
        float StereoDelayFeedback; // 0xb0
        float StereoDelayWetlevel; // 0xb4
        float StereoDelayRatio; // 0xb8
        char bChorusEnabled; // 0xbc
        float ChorusDepth; // 0xc0
        float ChorusFeedback; // 0xc4
        float ChorusFrequency; // 0xc8
        struct TArray<struct FEpicSynth1Patch> Patches; // 0xd0

    };

    struct FEpicSynth1Patch //ScriptStruct Synthesis.EpicSynth1Patch
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ESynth1PatchSource PatchSource; // 0x0
        struct TArray<struct FSynth1PatchCable> PatchCables; // 0x8

    };

    struct FSynth1PatchCable //ScriptStruct Synthesis.Synth1PatchCable
    {
    //Children Prop Count (Fields): 2
    public:

        float Depth; // 0x0
        enum class ESynth1PatchDestination Destination; // 0x4

    };

    struct FPatchId //ScriptStruct Synthesis.PatchId
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t ID; // 0x0

    };

    struct FSourceEffectBitCrusherSettings //ScriptStruct Synthesis.SourceEffectBitCrusherSettings
    {
    //Children Prop Count (Fields): 2
    public:

        float CrushedSampleRate; // 0x0
        float CrushedBits; // 0x4

    };

    struct FSourceEffectChorusSettings //ScriptStruct Synthesis.SourceEffectChorusSettings
    {
    //Children Prop Count (Fields): 6
    public:

        float Depth; // 0x0
        float Frequency; // 0x4
        float Feedback; // 0x8
        float WetLevel; // 0xc
        float DryLevel; // 0x10
        float Spread; // 0x14

    };

    struct FSourceEffectDynamicsProcessorSettings //ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
    {
    //Children Prop Count (Fields): 12
    public:

        enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
        enum class ESourceEffectDynamicsPeakMode PeakMode; // 0x1
        float LookAheadMsec; // 0x4
        float AttackTimeMsec; // 0x8
        float ReleaseTimeMsec; // 0xc
        float ThresholdDb; // 0x10
        float Ratio; // 0x14
        float KneeBandwidthDb; // 0x18
        float InputGainDb; // 0x1c
        float OutputGainDb; // 0x20
        char bStereoLinked; // 0x24
        char bAnalogMode; // 0x24

    };

    struct FSourceEffectEnvelopeFollowerSettings //ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
    {
    //Children Prop Count (Fields): 4
    public:

        float AttackTime; // 0x0
        float ReleaseTime; // 0x4
        enum class EEnvelopeFollowerPeakMode PeakMode; // 0x8
        bool bIsAnalogMode; // 0x9

    };

    struct FSourceEffectEQSettings //ScriptStruct Synthesis.SourceEffectEQSettings
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FSourceEffectEQBand> EQBands; // 0x0

    };

    struct FSourceEffectEQBand //ScriptStruct Synthesis.SourceEffectEQBand
    {
    //Children Prop Count (Fields): 4
    public:

        float Frequency; // 0x0
        float Bandwidth; // 0x4
        float GainDb; // 0x8
        char bEnabled; // 0xc

    };

    struct FSourceEffectFilterSettings //ScriptStruct Synthesis.SourceEffectFilterSettings
    {
    //Children Prop Count (Fields): 4
    public:

        enum class ESourceEffectFilterCircuit FilterCircuit; // 0x0
        enum class ESourceEffectFilterType FilterType; // 0x1
        float CutoffFrequency; // 0x4
        float FilterQ; // 0x8

    };

    struct FSourceEffectFoldbackDistortionSettings //ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
    {
    //Children Prop Count (Fields): 3
    public:

        float InputGainDb; // 0x0
        float ThresholdDb; // 0x4
        float OutputGainDb; // 0x8

    };

    struct FSourceEffectMidSideSpreaderSettings //ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EStereoChannelMode InputMode; // 0x0
        float SpreadAmount; // 0x4
        enum class EStereoChannelMode OutputMode; // 0x8
        bool bEqualPower; // 0x9

    };

    struct FSourceEffectPannerSettings //ScriptStruct Synthesis.SourceEffectPannerSettings
    {
    //Children Prop Count (Fields): 2
    public:

        float Spread; // 0x0
        float Pan; // 0x4

    };

    struct FSourceEffectPhaserSettings //ScriptStruct Synthesis.SourceEffectPhaserSettings
    {
    //Children Prop Count (Fields): 5
    public:

        float WetLevel; // 0x0
        float Frequency; // 0x4
        float Feedback; // 0x8
        enum class EPhaserLFOType LFOType; // 0xc
        bool UseQuadraturePhase; // 0xd

    };

    struct FSourceEffectRingModulationSettings //ScriptStruct Synthesis.SourceEffectRingModulationSettings
    {
    //Children Prop Count (Fields): 5
    public:

        enum class ERingModulatorTypeSourceEffect ModulatorType; // 0x0
        float Frequency; // 0x4
        float Depth; // 0x8
        float DryLevel; // 0xc
        float WetLevel; // 0x10

    };

    struct FSourceEffectSimpleDelaySettings //ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
    {
    //Children Prop Count (Fields): 6
    public:

        float SpeedOfSound; // 0x0
        float DelayAmount; // 0x4
        float DryAmount; // 0x8
        float WetAmount; // 0xc
        float Feedback; // 0x10
        char bDelayBasedOnDistance; // 0x14

    };

    struct FSourceEffectStereoDelaySettings //ScriptStruct Synthesis.SourceEffectStereoDelaySettings
    {
    //Children Prop Count (Fields): 5
    public:

        enum class EStereoDelaySourceEffect DelayMode; // 0x0
        float DelayTimeMsec; // 0x4
        float Feedback; // 0x8
        float DelayRatio; // 0xc
        float WetLevel; // 0x10

    };

    struct FSourceEffectWaveShaperSettings //ScriptStruct Synthesis.SourceEffectWaveShaperSettings
    {
    //Children Prop Count (Fields): 2
    public:

        float Amount; // 0x0
        float OutputGainDb; // 0x4

    };

    struct FSubmixEffectConvolutionReverbSettings //ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
    {
    //Children Prop Count (Fields): 7
    public:

        float NormalizationVolumeDb; // 0x0
        float SurroundRearChannelBleedDb; // 0x4
        bool bInvertRearChannelBleedPhase; // 0x8
        bool bSurroundRearChannelFlip; // 0x9
        float SurroundRearChannelBleedAmount; // 0xc
        class UAudioImpulseResponse* ImpulseResponse; // 0x10
        bool AllowHArdwareAcceleration; // 0x18

    };

    struct FSubmixEffectDelaySettings //ScriptStruct Synthesis.SubmixEffectDelaySettings
    {
    //Children Prop Count (Fields): 3
    public:

        float MaximumDelayLength; // 0x0
        float InterpolationTime; // 0x4
        float DelayLength; // 0x8

    };

    struct FSubmixEffectFilterSettings //ScriptStruct Synthesis.SubmixEffectFilterSettings
    {
    //Children Prop Count (Fields): 4
    public:

        enum class ESubmixFilterType FilterType; // 0x0
        enum class ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
        float FilterFrequency; // 0x4
        float FilterQ; // 0x8

    };

    struct FSubmixEffectFlexiverbSettings //ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
    {
    //Children Prop Count (Fields): 4
    public:

        float PreDelay; // 0x0
        float DecayTime; // 0x4
        float RoomDampening; // 0x8
        int32_t Complexity; // 0xc

    };

    struct FSubmixEffectTapDelaySettings //ScriptStruct Synthesis.SubmixEffectTapDelaySettings
    {
    //Children Prop Count (Fields): 3
    public:

        float MaximumDelayLength; // 0x0
        float InterpolationTime; // 0x4
        struct TArray<struct FTapDelayInfo> Taps; // 0x8

    };

    struct FTapDelayInfo //ScriptStruct Synthesis.TapDelayInfo
    {
    //Children Prop Count (Fields): 6
    public:

        enum class ETapLineMode TapLineMode; // 0x0
        float DelayLength; // 0x4
        float Gain; // 0x8
        int32_t OutputChannel; // 0xc
        float PanInDegrees; // 0x10
        int32_t TapId; // 0x14

    };

    struct FSynth2DSliderStyle : FSlateWidgetStyle //ScriptStruct Synthesis.Synth2DSliderStyle
    {
    //Children Prop Count (Fields): 6
    public:

        struct FSlateBrush NormalThumbImage; // 0x8
        struct FSlateBrush DisabledThumbImage; // 0x90
        struct FSlateBrush NormalBarImage; // 0x118
        struct FSlateBrush DisabledBarImage; // 0x1a0
        struct FSlateBrush BackgroundImage; // 0x228
        float BarThickness; // 0x2b0

    };

    struct FSynthKnobStyle : FSlateWidgetStyle //ScriptStruct Synthesis.SynthKnobStyle
    {
    //Children Prop Count (Fields): 7
    public:

        struct FSlateBrush LargeKnob; // 0x8
        struct FSlateBrush LargeKnobOverlay; // 0x90
        struct FSlateBrush MediumKnob; // 0x118
        struct FSlateBrush MediumKnobOverlay; // 0x1a0
        float MinValueAngle; // 0x228
        float MaxValueAngle; // 0x22c
        enum class ESynthKnobSize KnobSize; // 0x230

    };

    struct FSynthSlateStyle : FSlateWidgetStyle //ScriptStruct Synthesis.SynthSlateStyle
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ESynthSlateSizeType SizeType; // 0x8
        enum class ESynthSlateColorStyle ColorStyle; // 0x9

    };

    struct FGroupRangeInfo //ScriptStruct VeiledExperts.GroupRangeInfo
    {
    //Children Prop Count (Fields): 9
    public:

        int32_t DefScore; // 0x0
        int32_t PlayerExistWeight; // 0x4
        int32_t PlayerNoneWeight; // 0x8
        float Height; // 0xc
        float ARadius; // 0x10
        float BRadius; // 0x14
        struct FColor AColor; // 0x18
        struct FColor BColor; // 0x1c
        float Bold; // 0x20

    };

    struct FActionNotifyData //ScriptStruct VeiledExperts.ActionNotifyData
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName EventName; // 0x0
        class UCurveBase* Curve; // 0x8
        struct FVector EventVector; // 0x10
        class UAnimSequenceBase* NotifyAnimSequence; // 0x28
        enum class ECameraMovementType CameraMovement; // 0x30

    };

    struct FParkourHandOffset : FTableRowBase //ScriptStruct VeiledExperts.ParkourHandOffset
    {
    //Children Prop Count (Fields): 2
    public:

        float LeftHandOffset; // 0x8
        float RightHandOffset; // 0xc

    };

    struct FPDAS_HPAnimEvent //ScriptStruct VeiledExperts.PDAS_HPAnimEvent
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t HP; // 0x0
        int32_t AnimIndex; // 0x4
        int32_t EffectID; // 0x8
        struct FName SocketName; // 0xc
        struct FString SoundName; // 0x18
        class UStaticMesh* MeshForDS; // 0x28

    };

    struct FPDAudioSwitch //ScriptStruct VeiledExperts.PDAudioSwitch
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Group; // 0x0
        struct FString Switch; // 0x10

    };

    struct FAutoBreakSettings //ScriptStruct VeiledExperts.AutoBreakSettings
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EGameModeInternal GameMode; // 0x0
        struct TArray<struct FAutoBreakSetting> Settings; // 0x8

    };

    struct FAutoBreakSetting //ScriptStruct VeiledExperts.AutoBreakSetting
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t Round; // 0x0
        int32_t MinTimeToBreak; // 0x4
        int32_t MaxTimeToBreak; // 0x8

    };

    struct FPDButtonOutLine //ScriptStruct VeiledExperts.PDButtonOutLine
    {
    //Children Prop Count (Fields): 6
    public:

        struct FAnchors Anchors; // 0x0
        struct FMargin Offsets; // 0x10
        struct FVector2D Alignment; // 0x20
        bool bSizeToContent; // 0x28
        struct FSlateBrush OutLineStyle; // 0x30
        struct FLinearColor BrushColor; // 0xb8

    };

    struct FAnchors //ScriptStruct Slate.Anchors
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector2D Minimum; // 0x0
        struct FVector2D Maximum; // 0x8

    };

    struct FPDCameraGroupPlayData //ScriptStruct VeiledExperts.PDCameraGroupPlayData
    {
    //Children Prop Count (Fields): 3
    public:

        enum class EPDCamGroupPlayParam Type; // 0x0
        float Duration; // 0x4
        class UCurveFloat* SpeedCurve; // 0x8

    };

    struct FPDCameraPlayData //ScriptStruct VeiledExperts.PDCameraPlayData
    {
    //Children Prop Count (Fields): 5
    public:

        enum class EPDCamPlayParam Type; // 0x0
        struct FVector TargetLocation; // 0x4
        struct FText TargetString; // 0x10
        float StartTime; // 0x28
        float Duration; // 0x2c

    };

    struct FActionTaskData //ScriptStruct VeiledExperts.ActionTaskData
    {
    //Children Prop Count (Fields): 11
    public:

        bool BoolValue0; // 0x0
        bool BoolValue1; // 0x1
        int32_t IntValue0; // 0x4
        int32_t IntValue1; // 0x8
        float FloatValue0; // 0xc
        float FloatValue1; // 0x10
        struct FVector VectorValue0; // 0x14
        struct FVector VectorValue1; // 0x20
        struct FTransform TransformValue; // 0x30
        class UObject* ObjectValue0; // 0x60
        class UObject* ObjectValue1; // 0x68

    };

    struct FPDAnimGraphAimingValues //ScriptStruct VeiledExperts.PDAnimGraphAimingValues
    {
    //Children Prop Count (Fields): 1
    public:

        struct FRotator SpineRotation; // 0x0

    };

    struct FWeaponAnimDataSet //ScriptStruct VeiledExperts.WeaponAnimDataSet
    {
    //Children Prop Count (Fields): 1
    public:

        class UAnimMontage* Fire; // 0x0

    };

    struct FBulletWeaponAnimDataSet : FWeaponAnimDataSet //ScriptStruct VeiledExperts.BulletWeaponAnimDataSet
    {
    //Children Prop Count (Fields): 1
    public:

        class UAnimMontage* Reload; // 0x8

    };

    struct FPDPlayerAnimDatas : FTableRowBase //ScriptStruct VeiledExperts.PDPlayerAnimDatas
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPDPerCharacterAnimDatas PerCharacterAnimDatas; // 0x8
        struct FPDPerWeaponAnimDatas PerWeaponAnimDatas; // 0xe88
        struct FPDPerSpecificWeaponAnimDatas PerSpecificWeaponAnimDatas; // 0x4110

    };

    struct FPDPerSpecificWeaponAnimDatas //ScriptStruct VeiledExperts.PDPerSpecificWeaponAnimDatas
    {
    //Children Prop Count (Fields): 31
    public:

        class UAnimSequence* Stance; // 0x0
        class UAnimMontage* ReloadWeapon_Stand; // 0x8
        class UAnimMontage* ReloadWeapon_Crouch; // 0x10
        class UAnimMontage* QuickReloadWeapon_Stand; // 0x18
        class UAnimMontage* QuickReloadWeapon_Crouch; // 0x20
        class UAnimMontage* SlowReloadWeapon_Stand; // 0x28
        class UAnimMontage* SlowReloadWeapon_Crouch; // 0x30
        class UAnimMontage* FireWeapon_FP; // 0x38
        class UAnimMontage* BoltActionFP; // 0x40
        class UAnimSequence* Weapon_ReloadEmpty; // 0x48
        class UAnimSequence* Weapon_ReloadNotEmpty; // 0x50
        class UAnimSequence* Weapon_FireEmpty; // 0x58
        class UAnimSequence* Weapon_FireNotEmpty; // 0x60
        class UAnimSequence* Weapon_BoltAction; // 0x68
        class UAnimSequence* Weapon_ReloadEmptyEnd; // 0x70
        class UAnimSequence* Weapon_Idle; // 0x78
        class UAnimSequence* Weapon_QuickReloadEmpty; // 0x80
        class UAnimSequence* Weapon_QuickReloadEmptyEnd; // 0x88
        class UAnimSequence* Weapon_Slow_Reload_Empty; // 0x90
        class UAnimSequence* Weapon_Slow_Reload_EmptyEnd; // 0x98
        class UAnimSequence* Weapon_Slow_Reload_NotEmpty; // 0xa0
        class UAnimSequence* Weapon_Draw; // 0xa8
        class UAnimMontage* Aim_Charge_Stand; // 0xb0
        class UAnimMontage* Aim_Charge_Crouch; // 0xb8
        float ADSAimYaw; // 0xc0
        float ADSPlusAimPitch_Stn; // 0xc4
        float ADSPlusAimPitch_Cro; // 0xc8
        float ADSPlusAimPitch_CroWalk; // 0xcc
        float ADSPlusAimPitch_Stn_Lean; // 0xd0
        float ADSPlusAimPitch_Cro_Lean; // 0xd4
        float ADSPlusAimPitch_CroWalk_Lean; // 0xd8

    };

    struct FPDPerWeaponAnimDatas //ScriptStruct VeiledExperts.PDPerWeaponAnimDatas
    {
    //Children Prop Count (Fields): 5
    public:

        struct FPDPWUsingInABPAnimDatas UsingInABPAnimDatas; // 0x0
        struct FPDLandActionAnimDatas LandAnimDatas; // 0x128
        struct FPDMeleeActionAnimDatas MeleeActionAnimDatas; // 0x130
        struct FPDWeaponHandlingAnimDatas WeaponHandlingAnimDatas; // 0x150
        struct FPDPWParkourAnimDatas ParkourDatas; // 0x220

    };

    struct FPDPWParkourAnimDatas //ScriptStruct VeiledExperts.PDPWParkourAnimDatas
    {
    //Children Prop Count (Fields): 9
    public:

        class UAnimMontage* Roll_F; // 0x0
        class UAnimMontage* Roll_F02; // 0x8
        class UAnimMontage* Roll_F03; // 0x10
        class UAnimMontage* Roll_F04; // 0x18
        class UAnimMontage* Roll_B; // 0x20
        class UAnimMontage* Roll_L; // 0x28
        class UAnimMontage* Roll_R; // 0x30
        class UAnimMontage* Jump_FP; // 0x38
        class UAnimMontage* Land_FP; // 0x40

    };

    struct FPDWeaponHandlingAnimDatas //ScriptStruct VeiledExperts.PDWeaponHandlingAnimDatas
    {
    //Children Prop Count (Fields): 26
    public:

        class UAnimMontage* Stand_FireWeapon; // 0x0
        class UAnimMontage* Crouch_FireWeapon; // 0x8
        class UAnimMontage* Stand_Fire_HipFire; // 0x10
        class UAnimMontage* Crouch_Fire_HipFire; // 0x18
        class UAnimMontage* Stand_FireWeapon_FP; // 0x20
        class UAnimMontage* Crouch_FireWeapon_FP; // 0x28
        class UAnimMontage* Crouch_Walk_Fire_HipFire; // 0x30
        class UAnimMontage* Crouch_Walk_Fire_ADS; // 0x38
        class UBlendSpace* Stand_FireRecoil_HipFire; // 0x40
        class UBlendSpace* Crouch_FireRecoil_HipFire; // 0x48
        class UBlendSpace* Stand_FireRecoil_ADS; // 0x50
        class UBlendSpace* Crouch_FireRecoil_ADS; // 0x58
        class UBlendSpace* Stand_FireRecoil_ADS_FP; // 0x60
        class UBlendSpace* Crouch_FireRecoil_ADS_FP; // 0x68
        class UBlendSpace* Crouch_Walk_FireRecoil_HipFire; // 0x70
        class UPDFireRecoilLevelData* FireRecoilLeveldata; // 0x78
        class UPDFireRecoilLevelData* FireRecoilLeveldata_FP; // 0x80
        class UAnimMontage* ReloadWeapon_Stand; // 0x88
        class UAnimMontage* ReloadWeapon_Crouch; // 0x90
        class UAnimMontage* ReloadWeapon_Groggy; // 0x98
        class UAnimMontage* HolsterWeapon; // 0xa0
        class UAnimMontage* DrawWeapon; // 0xa8
        class UAnimMontage* DrawWeapon_FP; // 0xb0
        class UAnimMontage* BoltAction; // 0xb8
        class UAnimMontage* BoltAction_Crouch; // 0xc0
        class UAnimMontage* BoltAction_Groggy; // 0xc8

    };

    struct FPDMeleeActionAnimDatas //ScriptStruct VeiledExperts.PDMeleeActionAnimDatas
    {
    //Children Prop Count (Fields): 4
    public:

        class UAnimMontage* Melee_Attack_DefAtt; // 0x0
        class UAnimMontage* Melee_Attack_LBTAtt; // 0x8
        class UAnimMontage* Melee_Attack_RBTAtt; // 0x10
        class UAnimMontage* Melee_Attack_FallAtt; // 0x18

    };

    struct FPDLandActionAnimDatas //ScriptStruct VeiledExperts.PDLandActionAnimDatas
    {
    //Children Prop Count (Fields): 1
    public:

        class UAnimMontage* SoftLand; // 0x0

    };

    struct FPDPWUsingInABPAnimDatas //ScriptStruct VeiledExperts.PDPWUsingInABPAnimDatas
    {
    //Children Prop Count (Fields): 37
    public:

        class UAnimSequence* Loco_Stand_Idle; // 0x0
        class UAnimSequence* Loco_Crouch_Idle; // 0x8
        class UAnimSequence* Loco_Stand_HipFireIdle; // 0x10
        class UAnimSequence* Loco_Crouch_HipFireIdle; // 0x18
        class UAnimSequence* Loco_Stand_ADSIdle; // 0x20
        class UAnimSequence* Loco_Crouch_ADSIdle; // 0x28
        class UAnimSequence* Loco_Stand_Fall; // 0x30
        class UAnimSequence* Loco_Crouch_Fall; // 0x38
        class UAnimSequence* StandToCrouch; // 0x40
        class UAnimSequence* CrouchToStand; // 0x48
        class UAnimSequence* StandToCrouch_ADS; // 0x50
        class UAnimSequence* CrouchToStand_ADS; // 0x58
        class UAnimSequence* Loco_Crouch_Walk_HipFireIdle; // 0x60
        class UBlendSpace* Loco_Stand_Run; // 0x68
        class UBlendSpace* Loco_Crouch_Run; // 0x70
        class UBlendSpace* Loco_Stand_Run_ADS; // 0x78
        class UBlendSpace* Loco_Crouch_Run_ADS; // 0x80
        class UBlendSpace* Loco_Stand_RunStart; // 0x88
        class UAnimSequence* Loco_Stand_RunStart_L; // 0x90
        class UAnimSequence* Loco_Stand_RunStart_R; // 0x98
        class UBlendSpace* Loco_Crouch_RunStart; // 0xa0
        class UAnimSequence* Loco_Stand_Fall_FP; // 0xa8
        class UBlendSpace* Loco_Stand_Walk_FP; // 0xb0
        class UAnimSequence* WaitBeforePlay_Stand_FP; // 0xb8
        class UAnimSequence* Stance; // 0xc0
        class UBlendSpaceBase* AO_Lean_Stand; // 0xc8
        class UBlendSpaceBase* AO_Lean_Crouch; // 0xd0
        class UBlendSpaceBase* AO_Stand_HipFire; // 0xd8
        class UBlendSpaceBase* AO_Crouch_HipFire; // 0xe0
        class UBlendSpaceBase* AO_Stand_ADS; // 0xe8
        class UBlendSpaceBase* AO_Crouch_ADS; // 0xf0
        class UBlendSpaceBase* AO_Crouch_Walk_HipFire; // 0xf8
        class UAnimSequence* Stand_LeanR_ADS; // 0x100
        class UAnimSequence* Crouch_LeanR_ADS; // 0x108
        class UAnimSequence* Stand_LeanR_HF; // 0x110
        class UAnimSequence* Crouch_LeanR_HF; // 0x118
        class UAnimSequence* Crouch_LeanR_Walk_HF; // 0x120

    };

    struct FPDPerCharacterAnimDatas //ScriptStruct VeiledExperts.PDPerCharacterAnimDatas
    {
    //Children Prop Count (Fields): 20
    public:

        struct FPDPCUsingInABPAnimDatas UsingInABPAnimDatas; // 0x0
        struct FPDLeanAnimDatas LeanAnimData; // 0x60
        struct FPDTurnAnimDatas TurnAnimDatas; // 0x68
        struct FPDParkourActionAnimDatas ParkourAnimDatas; // 0x128
        struct FPDClimbActionAnimDatas ClimbActionAnimDatas; // 0x2d8
        struct FPDGroggyActionAnimDatas GroggyActionAnimDatas; // 0x340
        struct FPDInteractionActionAnimDatas InteractionActionAnimDatas; // 0x3c0
        struct FPDItemUseActionAnimDatas ItemUseActionAnimDatas; // 0x408
        struct FPDDeathAnimData DeathAnimData; // 0x438
        struct FPDKnockbackAnimData KnockbackAnimData; // 0x478
        struct FPDPerkAnimDatas PerkAnimData; // 0x4c8
        struct FPDZiplineAnimData ZipLineAnimData; // 0x4e8
        struct FPDSignatureAnimDatas SignatureAnimData; // 0x4f8
        struct FPDSlideAnimDatas SlideAnimData; // 0x560
        struct FPDHitReactionAnimData HitReactionAnimData; // 0x580
        struct FPDWearJuggernautAnimData WearJuggernautAnimData; // 0x6d0
        struct FPDCQCAnimData CQC_FemaleCommonAnimData; // 0x700
        struct FPDCQCAnimData CQC_MaleCommonAnimData; // 0x718
        struct FPDSummonNPCAnimData SummonNPC_AnimData; // 0x730
        struct FPDPerAgentAnimData PerAgentAnimData; // 0x748

    };

    struct FPDPerAgentAnimData //ScriptStruct VeiledExperts.PDPerAgentAnimData
    {
    //Children Prop Count (Fields): 4
    public:

        struct FPDAFKAnimData AFKAnimData; // 0x0
        struct FPDSceneDirectionAnimData SceneDirectionAnimData; // 0x58
        struct FPDAttackAnimData AttackAnimData; // 0x88
        struct FPDCQCAnimData CQC_AnimData; // 0x90

    };

    struct FPDCQCAnimData //ScriptStruct VeiledExperts.PDCQCAnimData
    {
    //Children Prop Count (Fields): 4
    public:

        class UAnimMontage* CQCAttack; // 0x0
        class UAnimMontage* CQCDamage; // 0x8
        float CQC_KnockBackSpaceCheckLength; // 0x10
        float CQC_KnockBackSpaceCheckLength_Groggy; // 0x14

    };

    struct FPDAttackAnimData //ScriptStruct VeiledExperts.PDAttackAnimData
    {
    //Children Prop Count (Fields): 1
    public:

        class UAnimMontage* Execution; // 0x0

    };

    struct FPDSceneDirectionAnimData //ScriptStruct VeiledExperts.PDSceneDirectionAnimData
    {
    //Children Prop Count (Fields): 4
    public:

        class UAnimMontage* RoundEnterSeriousAnim; // 0x0
        struct TArray<int32_t> SeriousAnimLinkedKeyType; // 0x8
        class UAnimMontage* RoundEnterLightAnim; // 0x18
        struct TArray<int32_t> LightAnimLinkedKeyType; // 0x20

    };

    struct FPDAFKAnimData //ScriptStruct VeiledExperts.PDAFKAnimData
    {
    //Children Prop Count (Fields): 11
    public:

        class UAnimMontage* RifleStand; // 0x0
        class UAnimMontage* RifleCrouch; // 0x8
        uint32_t RiflePercentTypeD; // 0x10
        class UAnimMontage* HGStand; // 0x18
        class UAnimMontage* HGCrouch; // 0x20
        class UAnimMontage* ThrowStand; // 0x28
        class UAnimMontage* ThrowCrouch; // 0x30
        class UAnimMontage* MeleeStand; // 0x38
        class UAnimMontage* MeleeCrouch; // 0x40
        class UAnimMontage* BowStand; // 0x48
        class UAnimMontage* BowCrouch; // 0x50

    };

    struct FPDSummonNPCAnimData //ScriptStruct VeiledExperts.PDSummonNPCAnimData
    {
    //Children Prop Count (Fields): 3
    public:

        class UAnimMontage* Common; // 0x0
        class UAnimMontage* SummonUPS; // 0x8
        class UAnimMontage* SummonDrone; // 0x10

    };

    struct FPDWearJuggernautAnimData //ScriptStruct VeiledExperts.PDWearJuggernautAnimData
    {
    //Children Prop Count (Fields): 3
    public:

        class UAnimMontage* WearJuggernaut; // 0x0
        class UAnimMontage* JuggernautDash; // 0x8
        class UAnimMontage* JuggernautLauncher; // 0x10

    };

    struct FPDHitReactionAnimData //ScriptStruct VeiledExperts.PDHitReactionAnimData
    {
    //Children Prop Count (Fields): 36
    public:

        class UAnimMontage* AM_BurnReactionAnim; // 0x0
        class UAnimMontage* AM_NormalHitAnimA; // 0x8
        class UAnimMontage* AM_NormalHitAnimB; // 0x10
        class UAnimMontage* AM_NormalHitAnimC; // 0x18
        struct TArray<class UAnimMontage*> FowardNormalHitAnims; // 0x20
        struct TArray<class UAnimMontage*> BackNormalHitAnims; // 0x30
        struct TArray<class UAnimMontage*> LeftNormalHitAnims; // 0x40
        struct TArray<class UAnimMontage*> RightNormalHitAnims; // 0x50
        struct TArray<class UAnimMontage*> HitHeadAnims; // 0x60
        struct TArray<class UAnimMontage*> BulletGrazeAnimsStand; // 0x70
        struct TArray<class UAnimMontage*> BulletGrazeAnimsCrouch; // 0x80
        struct TArray<class UAnimMontage*> BombGrazeAnimsStand; // 0x90
        struct TArray<class UAnimMontage*> BombGrazeAnimsCrouch; // 0xa0
        class UAnimMontage* AM_RunHitAnimA; // 0xb0
        class UAnimMontage* AM_RunHitAnimB; // 0xb8
        class UAnimMontage* AM_RunHitAnimC; // 0xc0
        struct FRotator HitReactionRotation; // 0xc8
        float HitReactionAngleFoward; // 0xd4
        float HitReactionAngleLeft; // 0xd8
        float HitReactionAngleRight; // 0xdc
        float HitReactionAngleBack; // 0xe0
        class UCurveFloat* HitReactionRotationCurve; // 0xe8
        float NoramlHitMotionFrequency_Local; // 0xf0
        float NoramlHitMotionFrequency_Remote; // 0xf4
        float RunHitMotionFrequency_Local; // 0xf8
        float RunHitMotionFrequency_Remote; // 0xfc
        float FirstHitTime; // 0x100
        class UAnimMontage* AM_Lower_Right_HitAnim; // 0x108
        class UAnimMontage* AM_Lower_Left_HitAnim; // 0x110
        float HitDelay; // 0x118
        class UAnimMontage* AM_UpperBody_WeakCenter; // 0x120
        class UAnimMontage* AM_UpperBody_WeakLeft; // 0x128
        class UAnimMontage* AM_UpperBody_WeakRight; // 0x130
        class UAnimMontage* AM_UpperBody_StrongCenter; // 0x138
        class UAnimMontage* AM_UpperBody_StrongLeft; // 0x140
        class UAnimMontage* AM_UpperBody_StrongRight; // 0x148

    };

    struct FPDSlideAnimDatas //ScriptStruct VeiledExperts.PDSlideAnimDatas
    {
    //Children Prop Count (Fields): 4
    public:

        class UAnimMontage* SlideEnter; // 0x0
        class UAnimMontage* SlideExitDefault; // 0x8
        class UAnimMontage* SlideExitRoll; // 0x10
        class UAnimMontage* SlideExitGroggy; // 0x18

    };

    struct FPDSignatureAnimDatas //ScriptStruct VeiledExperts.PDSignatureAnimDatas
    {
    //Children Prop Count (Fields): 13
    public:

        class UAnimMontage* RevolverSpinning; // 0x0
        class UAnimMontage* DrinkBottle; // 0x8
        class UAnimMontage* EatHotDog; // 0x10
        class UAnimMontage* LickKnife; // 0x18
        class UAnimMontage* CoinToss; // 0x20
        class UAnimMontage* GlassesScan; // 0x28
        class UAnimMontage* LookMagnifier; // 0x30
        class UAnimMontage* ShootFlare; // 0x38
        class UAnimMontage* SprayMoney; // 0x40
        class UAnimMontage* Warcry; // 0x48
        class UAnimMontage* SpinSickle; // 0x50
        class UAnimMontage* TurnTable; // 0x58
        class UAnimMontage* FeverTurnTable; // 0x60

    };

    struct FPDZiplineAnimData //ScriptStruct VeiledExperts.PDZiplineAnimData
    {
    //Children Prop Count (Fields): 2
    public:

        class UAnimMontage* ZiplineEnter; // 0x0
        class UAnimMontage* ZiplineRide; // 0x8

    };

    struct FPDPerkAnimDatas //ScriptStruct VeiledExperts.PDPerkAnimDatas
    {
    //Children Prop Count (Fields): 4
    public:

        class UAnimMontage* RobCoin; // 0x0
        class UAnimMontage* ReviveInGroggy; // 0x8
        class UAnimMontage* Hacking; // 0x10
        class UAnimMontage* Maintenance; // 0x18

    };

    struct FPDKnockbackAnimData //ScriptStruct VeiledExperts.PDKnockbackAnimData
    {
    //Children Prop Count (Fields): 10
    public:

        class UAnimMontage* Knockback_WeakCenter; // 0x0
        class UAnimMontage* Knockback_WeakLeft; // 0x8
        class UAnimMontage* Knockback_WeakRight; // 0x10
        class UAnimMontage* Knockback_MidCenter; // 0x18
        class UAnimMontage* Knockback_MidLeft; // 0x20
        class UAnimMontage* Knockback_MidRight; // 0x28
        class UAnimMontage* Knockback_StrongCenter; // 0x30
        class UAnimMontage* Knockback_StrongLeft; // 0x38
        class UAnimMontage* Knockback_StrongRight; // 0x40
        class UAnimMontage* Knockback_FallingObject; // 0x48

    };

    struct FPDDeathAnimData //ScriptStruct VeiledExperts.PDDeathAnimData
    {
    //Children Prop Count (Fields): 8
    public:

        class UAnimMontage* Death_Random; // 0x0
        class UAnimMontage* Death_GROGGY_Random; // 0x8
        class UAnimMontage* Death_Groggy_By_Soccer_Kick; // 0x10
        class UAnimMontage* Death_GROGGY_Fall; // 0x18
        class UAnimMontage* Death_CLIMB_2P; // 0x20
        class UAnimMontage* Death_CLIMB_4P; // 0x28
        class UAnimMontage* Death_Front_KnockBack; // 0x30
        class UAnimMontage* Death_Back_KnockBack; // 0x38

    };

    struct FPDItemUseActionAnimDatas //ScriptStruct VeiledExperts.PDItemUseActionAnimDatas
    {
    //Children Prop Count (Fields): 6
    public:

        class UAnimMontage* Bandage; // 0x0
        class UAnimMontage* Painkiller; // 0x8
        class UAnimMontage* ArmorPlateReplaceKit; // 0x10
        class UAnimMontage* Bandage_CLI; // 0x18
        class UAnimMontage* Painkiller_CLI; // 0x20
        class UAnimMontage* ArmorPlateReplaceKit_CLI; // 0x28

    };

    struct FPDInteractionActionAnimDatas //ScriptStruct VeiledExperts.PDInteractionActionAnimDatas
    {
    //Children Prop Count (Fields): 9
    public:

        class UAnimMontage* PickItem_Crouch_Left; // 0x0
        class UAnimMontage* PickItem_Crouch_Right; // 0x8
        class UAnimMontage* PickItem_Stand_Left; // 0x10
        class UAnimMontage* PickItem_Stand_Right; // 0x18
        class UAnimMontage* Door_HingeOpen; // 0x20
        class UAnimMontage* GroggyRescue; // 0x28
        class UAnimMontage* Bomb; // 0x30
        class UAnimMontage* Bomb_Crouch; // 0x38
        class UAnimMontage* Bomb_Groggy; // 0x40

    };

    struct FPDGroggyActionAnimDatas //ScriptStruct VeiledExperts.PDGroggyActionAnimDatas
    {
    //Children Prop Count (Fields): 16
    public:

        class UAnimMontage* Enter_MeleeHit; // 0x0
        class UAnimMontage* Enter_Random_Hit_Head; // 0x8
        class UAnimMontage* Enter_Random_Hit_Chest; // 0x10
        class UAnimMontage* Enter_Random_Hit_Abdomen; // 0x18
        class UAnimMontage* Enter_Random_Hit_LeftLeg; // 0x20
        class UAnimMontage* Enter_Random_Hit_RightLeg; // 0x28
        class UAnimMontage* Exit; // 0x30
        class UAnimMontage* FallEnter; // 0x38
        class UAnimMontage* FallLand; // 0x40
        class UAnimMontage* Climb2PEnter; // 0x48
        class UAnimMontage* Climb4PEnter; // 0x50
        class UAnimMontage* SlideEnter; // 0x58
        class UAnimMontage* InertiaEnter; // 0x60
        class UAnimMontage* FrontKnockBackEnter; // 0x68
        class UAnimMontage* BackKnockBackEnter; // 0x70
        class UAnimMontage* BurnEnter; // 0x78

    };

    struct FPDClimbActionAnimDatas //ScriptStruct VeiledExperts.PDClimbActionAnimDatas
    {
    //Children Prop Count (Fields): 13
    public:

        class UAnimMontage* ClimbEnter; // 0x0
        class UAnimMontage* ClimbLedgeGrap; // 0x8
        class UAnimMontage* ClimbExit; // 0x10
        class UAnimMontage* ClimbExit_2PJump; // 0x18
        class UAnimMontage* ClimbExit_4PJump; // 0x20
        class UAnimMontage* ClimbMove_Turn; // 0x28
        class UAnimMontage* ClimbMove_2P; // 0x30
        class UAnimMontage* ClimbMove_2PWide; // 0x38
        class UAnimMontage* ClimbMove_4P; // 0x40
        class UAnimMontage* ClimbMove_4PWide; // 0x48
        class UAnimMontage* ClimbJump_2P; // 0x50
        class UAnimMontage* ClimbJump_4P; // 0x58
        class UAnimMontage* ClimbLongJump_4P; // 0x60

    };

    struct FPDParkourActionAnimDatas //ScriptStruct VeiledExperts.PDParkourActionAnimDatas
    {
    //Children Prop Count (Fields): 54
    public:

        class UAnimMontage* Jump; // 0x0
        class UAnimMontage* Jump_Sprint; // 0x8
        class UAnimMontage* Jump_Long01; // 0x10
        class UAnimMontage* Jump_Long02; // 0x18
        class UAnimMontage* Jump_Long03; // 0x20
        class UAnimMontage* Jump_Long04; // 0x28
        class UAnimMontage* SoftLand; // 0x30
        class UAnimMontage* AutoRollLand; // 0x38
        class UAnimMontage* HardLand; // 0x40
        class UAnimMontage* HardLand1; // 0x48
        class UAnimMontage* HardLand2; // 0x50
        class UAnimMontage* HardLand1_Move; // 0x58
        class UAnimMontage* HardLand2_Move; // 0x60
        class UAnimMontage* groggyland; // 0x68
        class UAnimMontage* DamageLand; // 0x70
        class UAnimMontage* Roll_F01; // 0x78
        class UAnimMontage* Roll_F02; // 0x80
        class UAnimMontage* Roll_F03; // 0x88
        class UAnimMontage* Roll_F04; // 0x90
        class UAnimMontage* Roll_B; // 0x98
        class UAnimMontage* Roll_L; // 0xa0
        class UAnimMontage* Roll_R; // 0xa8
        class UAnimMontage* GRO_Roll_F; // 0xb0
        class UAnimMontage* GRO_Roll_B; // 0xb8
        class UAnimMontage* GRO_Roll_L; // 0xc0
        class UAnimMontage* GRO_Roll_R; // 0xc8
        class UAnimMontage* Vault_100_Walk; // 0xd0
        class UAnimMontage* Vault_100_Run; // 0xd8
        class UAnimMontage* Vault_150_Walk; // 0xe0
        class UAnimMontage* Vault_150_Run; // 0xe8
        class UAnimMontage* Vault_200_Walk; // 0xf0
        class UAnimMontage* Vault_200_Run; // 0xf8
        class UAnimMontage* Vault_250_Walk; // 0x100
        class UAnimMontage* Vault_250_Run; // 0x108
        class UAnimMontage* Vault_300_Walk; // 0x110
        class UAnimMontage* Vault_300_Run; // 0x118
        class UAnimMontage* Climbup_51; // 0x120
        class UAnimMontage* Climbup_100_Walk; // 0x128
        class UAnimMontage* Climbup_100_Run; // 0x130
        class UAnimMontage* Climbup_150_Walk; // 0x138
        class UAnimMontage* Climbup_150_Run; // 0x140
        class UAnimMontage* Climbup_200_Walk; // 0x148
        class UAnimMontage* Climbup_200_Run; // 0x150
        class UAnimMontage* Climbup_250_Walk; // 0x158
        class UAnimMontage* Climbup_250_Run; // 0x160
        class UAnimMontage* Climbup_300_Walk; // 0x168
        class UAnimMontage* Climbup_300_Run; // 0x170
        class UAnimMontage* Climbup_2P_Walk; // 0x178
        class UAnimMontage* Climbup_2P_Run; // 0x180
        class UAnimMontage* ClimbupMoveStart_101; // 0x188
        class UAnimMontage* ClimbupMoveStart_200_301; // 0x190
        class UAnimMontage* LedgeGrapVault; // 0x198
        class UAnimMontage* LedgeGrapClimbupFull; // 0x1a0
        class UAnimMontage* LedgeGrapClimbupHalf; // 0x1a8

    };

    struct FPDTurnAnimDatas //ScriptStruct VeiledExperts.PDTurnAnimDatas
    {
    //Children Prop Count (Fields): 24
    public:

        class UAnimMontage* Loco_Stand_TurnInPlaceLeft; // 0x0
        class UAnimMontage* Loco_Stand_TurnInPlaceRight; // 0x8
        class UAnimMontage* Loco_Stand_TurnInPlaceLeft_GunStance; // 0x10
        class UAnimMontage* Loco_Stand_TurnInPlaceRight_GunStance; // 0x18
        class UAnimMontage* Loco_Crouch_TurnInPlaceLeft; // 0x20
        class UAnimMontage* Loco_Crouch_TurnInPlaceRight; // 0x28
        class UAnimMontage* Loco_Crouch_TurnInPlaceLeft_GunStance; // 0x30
        class UAnimMontage* Loco_Crouch_TurnInPlaceRight_GunStance; // 0x38
        class UAnimMontage* Loco_Groggy_TurnInPlaceLeft; // 0x40
        class UAnimMontage* Loco_Groggy_TurnInPlaceRight; // 0x48
        class UAnimMontage* Stand_AlignRotation_TurnLeft; // 0x50
        class UAnimMontage* Stand_AlignRoatation_TurnRight; // 0x58
        class UAnimMontage* Crouch_AlignRoatation_TurnLeft; // 0x60
        class UAnimMontage* Crouch_AlignRotation_TurnRight; // 0x68
        class UAnimMontage* Mirror_Turn_Stn; // 0x70
        class UAnimMontage* Mirror_Turn_Cro; // 0x78
        class UAnimMontage* Stand_TurnInPlaceLeft_Glock; // 0x80
        class UAnimMontage* Stand_TurnInPlaceRight_Glock; // 0x88
        class UAnimMontage* Crouch_TurnInPlaceLeft_Glock; // 0x90
        class UAnimMontage* Crouch_TurnInPlaceRight_Glock; // 0x98
        class UAnimMontage* Stand_TurnInPlaceLeft_Bow; // 0xa0
        class UAnimMontage* Stand_TurnInPlaceRight_Bow; // 0xa8
        class UAnimMontage* Crouch_TurnInPlaceLeft_Bow; // 0xb0
        class UAnimMontage* Crouch_TurnInPlaceRight_Bow; // 0xb8

    };

    struct FPDLeanAnimDatas //ScriptStruct VeiledExperts.PDLeanAnimDatas
    {
    //Children Prop Count (Fields): 1
    public:

        class UAnimMontage* Lean_Loop; // 0x0

    };

    struct FPDPCUsingInABPAnimDatas //ScriptStruct VeiledExperts.PDPCUsingInABPAnimDatas
    {
    //Children Prop Count (Fields): 12
    public:

        class UBlendSpace* Loco_Climb_2P; // 0x0
        class UBlendSpace* Loco_Climb_4P; // 0x8
        class UAnimSequence* Loco_Groggy_Idle_Bare; // 0x10
        class UAnimSequence* Loco_Groggy_Idle_HG; // 0x18
        class UBlendSpace* Loco_Groggy_Run_Bare; // 0x20
        class UBlendSpace* Loco_Groggy_Run_HG; // 0x28
        class UAnimSequence* Loco_Fall_Groggy_Idle_Bare; // 0x30
        class UAnimSequence* Loco_Climb_Groggy_Idle_Bare; // 0x38
        class UBlendSpaceBase* AO_Groggy_Bare; // 0x40
        class UBlendSpaceBase* AO_Groggy_HG; // 0x48
        class UBlendSpace* Loco_Slide_Default; // 0x50
        class UBlendSpace* Loco_Slide_Groggy; // 0x58

    };

    struct FPDLobbyCharacterAnimData : FTableRowBase //ScriptStruct VeiledExperts.PDLobbyCharacterAnimData
    {
    //Children Prop Count (Fields): 1
    public:

        struct FPDLobbyAnimData LobbyAnimData; // 0x8

    };

    struct FPDLobbyAnimData //ScriptStruct VeiledExperts.PDLobbyAnimData
    {
    //Children Prop Count (Fields): 16
    public:

        class UAnimSequence* Lobby_Scene_Select; // 0x0
        class UAnimSequence* Lobby_Scene_Idle_2; // 0x8
        class UAnimSequence* Lobby_Scene_Matching_Start; // 0x10
        class UAnimSequence* Lobby_Scene_Matching_Idle; // 0x18
        class UAnimSequence* Lobby_Scene_Matching_Cancel; // 0x20
        class UAnimSequence* Lobby_Scene_Customizing; // 0x28
        struct TArray<struct FPDResultAnimSequence> Result_Scene_Win; // 0x30
        struct TArray<struct FPDResultAnimSequence> Result_Scene_Lose; // 0x40
        class UAnimSequence* Lobby_Scene_Select_Hair; // 0x50
        class UAnimSequence* Lobby_Scene_Idle_Hair_2; // 0x58
        class UAnimSequence* Lobby_Scene_Matching_Start_Hair; // 0x60
        class UAnimSequence* Lobby_Scene_Matching_Idle_Hair; // 0x68
        class UAnimSequence* Lobby_Scene_Matching_Cancel_Hair; // 0x70
        class UAnimSequence* Lobby_Scene_Customizing_Hair; // 0x78
        struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Win_Hair; // 0x80
        struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Lose_Hair; // 0x90

    };

    struct FPDResultHairAnimSequence //ScriptStruct VeiledExperts.PDResultHairAnimSequence
    {
    //Children Prop Count (Fields): 2
    public:

        class UAnimSequence* ActionAnimData; // 0x0
        class UAnimSequence* IdleAnimData; // 0x8

    };

    struct FPDResultAnimSequence //ScriptStruct VeiledExperts.PDResultAnimSequence
    {
    //Children Prop Count (Fields): 3
    public:

        class UAnimSequence* ActionAnimData; // 0x0
        class UAnimSequence* IdleAnimData; // 0x8
        int32_t EquipWeaponIndex; // 0x10

    };

    struct FPDFacialAnimData : FTableRowBase //ScriptStruct VeiledExperts.PDFacialAnimData
    {
    //Children Prop Count (Fields): 1
    public:

        struct FPDIngameFacialAnimData IngameFacialAnimData; // 0x8

    };

    struct FPDIngameFacialAnimData //ScriptStruct VeiledExperts.PDIngameFacialAnimData
    {
    //Children Prop Count (Fields): 13
    public:

        class UAnimSequence* Idle; // 0x0
        class UAnimSequence* Crouch; // 0x8
        class UAnimSequence* Exhauted; // 0x10
        class UAnimSequence* ads; // 0x18
        class UAnimSequence* Groggy; // 0x20
        class UAnimSequence* Dead; // 0x28
        class UAnimSequence* Env1; // 0x30
        class UAnimMontage* Melee; // 0x38
        class UAnimMontage* Hipfire; // 0x40
        class UAnimMontage* ADSFire; // 0x48
        class UAnimMontage* Reload; // 0x50
        class UAnimMontage* Painful; // 0x58
        class UAnimMontage* Parkour; // 0x60

    };

    struct FPDHitReactionBSAnimData //ScriptStruct VeiledExperts.PDHitReactionBSAnimData
    {
    //Children Prop Count (Fields): 1
    public:

        class UBlendSpaceBase* HitReaction_BS; // 0x0

    };

    struct FNeighborInfoArray //ScriptStruct VeiledExperts.NeighborInfoArray
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<class APDClimbNodeActor*> ClimbNodeActors; // 0x0
        class APDClimbableActor* ClimbableActor; // 0x18

    };

    struct FNeighborInfo //ScriptStruct VeiledExperts.NeighborInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FClimbNodeInfo Self; // 0x0
        struct TArray<struct FClimbNodeInfo> NeighborActors; // 0x20
        struct TArray<struct FClimbNodeInfo> NeighborActorsToJump; // 0x30

    };

    struct FClimbNodeInfo //ScriptStruct VeiledExperts.ClimbNodeInfo
    {
    //Children Prop Count (Fields): 5
    public:

        bool bDataOverridden; // 0x0
        class APDClimbableActor* ClimbableActor; // 0x8
        enum class EPDClimbStanceState ClimbType; // 0x10
        enum class EPDClimbMoveType MoveType; // 0x11
        enum class EPDClimbPointUptype ClimbUpType; // 0x12

    };

    struct FSafeZoneDrawing //ScriptStruct VeiledExperts.SafeZoneDrawing
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ESafeZoneDrawStyle Style; // 0x0
        struct FColor Color; // 0x4

    };

    struct FHitFeedbackIcon //ScriptStruct VeiledExperts.HitFeedbackIcon
    {
    //Children Prop Count (Fields): 3
    public:

        class UPaperSprite* Sprite; // 0x0
        struct FLinearColor Color; // 0x8
        struct FVector2D Size; // 0x18

    };

    struct FIKAnimInstanceProxy : FAnimInstanceProxy //ScriptStruct PDAnimRuntime.IKAnimInstanceProxy
    {
    //Children Prop Count (Fields): 1
    public:

        struct FIKTargetBoneArray IKTargetBones; // 0x6e0

    };

    struct FIKTargetBoneArray //ScriptStruct PDAnimRuntime.IKTargetBoneArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FBoneReference> Array; // 0x0

    };

    struct FBoneReference //ScriptStruct Engine.BoneReference
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName BoneName; // 0x0

    };

    struct FPDIKAnimInstanceProxy : FIKAnimInstanceProxy //ScriptStruct VeiledExperts.PDIKAnimInstanceProxy
    {
    //Children Prop Count (Fields): 6
    public:

        struct FPDHandIKData HandIKData; // 0xab0
        float StanceExplicitTime; // 0xb50
        class UPDIKAnimInstance* IKAnimInstance; // 0xb58
        class UPDStateComponent* OwnerStateComponent; // 0xb60
        class APDCharacterEntity* OwnerCharacterEntity; // 0xb68
        float AimClampedYaw; // 0xb70

    };

    struct FPDHandIKData //ScriptStruct PDAnimRuntime.PDHandIKData
    {
    //Children Prop Count (Fields): 13
    public:

        char bEnableHandIK; // 0x0
        char bUseRightShoulder; // 0x0
        char bEnableTriggerHandOverride; // 0x0
        struct FName HandleAttachedBone; // 0x4
        struct FName MuzzleBone; // 0xc
        class UMeshComponent* WeaponMeshComponent; // 0x18
        struct FTransform TriggerHandOffset; // 0x20
        struct FTransform TriggerHandOverride; // 0x50
        struct FVector AimingTarget; // 0x80
        float HandleHandAlpha; // 0x8c
        float TriggerHandAlpha; // 0x90
        float StockAlpha; // 0x94
        float MuzzleAlpha; // 0x98

    };

    struct FPDIngameMapPos //ScriptStruct VeiledExperts.PDIngameMapPos
    {
    //Children Prop Count (Fields): 3
    public:

        struct FAnchors Anchors; // 0x0
        struct FMargin Offsets; // 0x10
        struct FVector2D Alignment; // 0x20

    };

    struct FPDActionExecutionInfo //ScriptStruct VeiledExperts.PDActionExecutionInfo
    {
    public:


    };

    struct FSmoothMoveInfo //ScriptStruct VeiledExperts.SmoothMoveInfo
    {
    //Children Prop Count (Fields): 7
    public:

        class UPrimitiveComponent* TargetRotationComponent; // 0x90
        class UPrimitiveComponent* TargetLocationComponent; // 0x98
        class AActor* TargetRotationActor; // 0xa0
        class AActor* TargetLocationActor; // 0xa8
        class UCurveFloat* CurrentSmoothRotationCurve; // 0xe8
        class UCurveFloat* CurrentSmoothLocationCurveFloat; // 0xf0
        class UCurveVector* CurrentSmoothLocationCurveVector; // 0xf8

    };

    struct FCameraMoveInfo //ScriptStruct VeiledExperts.CameraMoveInfo
    {
    //Children Prop Count (Fields): 10
    public:

        float ArmLength; // 0x0
        struct FVector SocketOffset; // 0x4
        struct FVector TargetOffset; // 0x10
        struct FRotator RelativeRotation; // 0x1c
        float FOV; // 0x28
        float InterpTime; // 0x2c
        float ReturnTime; // 0x30
        float DelayTime; // 0x34
        struct TWeakObjectPtr<struct UCurveFloat> BlendingCurve; // 0x38
        struct TWeakObjectPtr<struct UCurveFloat> ReturnCurve; // 0x40

    };

    struct FPDFootstepInfo //ScriptStruct VeiledExperts.PDFootstepInfo
    {
    //Children Prop Count (Fields): 1
    public:

        class UDecalComponent* Decal; // 0x0

    };

    struct FSkeletalMeshMergeParams //ScriptStruct VeiledExperts.SkeletalMeshMergeParams
    {
    //Children Prop Count (Fields): 8
    public:

        struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x0
        struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10
        struct TArray<class USkeletalMesh*> MeshesToMerge; // 0x20
        int32_t StripTopLODS; // 0x30
        char bNeedsCpuAccess; // 0x34
        char bSkeletonBefore; // 0x34
        class USkeleton* Skeleton; // 0x38
        class UPhysicsAsset* PhysicsAsset; // 0x40

    };

    struct FSkelMeshMergeUVTransformMapping //ScriptStruct VeiledExperts.SkelMeshMergeUVTransformMapping
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x0

    };

    struct FSkelMeshMergeUVTransform //ScriptStruct VeiledExperts.SkelMeshMergeUVTransform
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FTransform> UVTransforms; // 0x0

    };

    struct FSkelMeshMergeSectionMapping_BP //ScriptStruct VeiledExperts.SkelMeshMergeSectionMapping_BP
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<int32_t> SectionIDs; // 0x0

    };

    struct FAnimNode_AssetPlayerBase : FAnimNode_Base //ScriptStruct Engine.AnimNode_AssetPlayerBase
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t GroupIndex; // 0x10
        enum class EAnimGroupRole GroupRole; // 0x14
        bool bIgnoreForRelevancyTest; // 0x15
        float BlendWeight; // 0x18
        float InternalTimeAccumulator; // 0x1c

    };

    struct FAnimNode_PDAssetPlayerBase : FAnimNode_AssetPlayerBase //ScriptStruct PDAnimRuntime.AnimNode_PDAssetPlayerBase
    {
    //Children Prop Count (Fields): 3
    public:

        float BlendTime; // 0x30
        bool bResetOnActivated; // 0x34
        bool bPrintDebug; // 0x35

    };

    struct FAnimNode_PDBlendSpacePlayer : FAnimNode_PDAssetPlayerBase //ScriptStruct PDAnimRuntime.AnimNode_PDBlendSpacePlayer
    {
    //Children Prop Count (Fields): 9
    public:

        float X; // 0x48
        float Y; // 0x4c
        float Z; // 0x50
        float PlayRate; // 0x54
        bool bLoop; // 0x58
        bool bResetPlayTimeWhenBlendSpaceChanges; // 0x59
        float StartPosition; // 0x5c
        class UBlendSpaceBase* BlendSpace; // 0x60
        class UBlendSpaceBase* PreviousBlendSpace; // 0xe0

    };

    struct FAnimNode_PDIK : FAnimNode_SkeletalControlBase //ScriptStruct PDAnimRuntime.AnimNode_PDIK
    {
    //Children Prop Count (Fields): 14
    public:

        struct TArray<struct FName> PreHandleSlots; // 0xc8
        struct FPDHandIKData HandIKData; // 0x100
        float MaxArmStretchOffset; // 0x1a0
        struct FPoseLink StancePose; // 0x1a8
        struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x1b8
        struct FGuid SkeletonGuid; // 0x1cc
        struct FGuid VirtualBoneGuid; // 0x1dc
        struct FName IK_Handle_Off; // 0x240
        struct FName IK_Handle_MustOff; // 0x248
        struct FName IK_Weapon; // 0x250
        bool bAimingIdleState; // 0x258
        struct FName IKProfileName; // 0x25c
        struct TMap<struct FName, struct FPDIKProfileData> IKProfiles; // 0x268
        struct FBoneReference Hip; // 0x2b8

    };

    struct FPDIKProfileData //ScriptStruct PDAnimRuntime.PDIKProfileData
    {
    //Children Prop Count (Fields): 8
    public:

        struct FBoneReference TriggerHand; // 0x0
        struct FBoneReference HandleHand; // 0x10
        struct FBoneReference RightShoulder; // 0x20
        struct FBoneReference LeftShoulder; // 0x30
        struct FBoneReference RightWeaponAttached; // 0x40
        struct FBoneReference LeftWeaponAttached; // 0x50
        struct FBoneReference HandleHandPalm; // 0x60
        struct FBoneReference TriggerHandPalm; // 0x70

    };

    struct FPerBoneBlendWeight //ScriptStruct Engine.PerBoneBlendWeight
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t SourceIndex; // 0x0
        float BlendWeight; // 0x4

    };

    struct FAnimNode_PDSequenceEvaluator : FAnimNode_PDAssetPlayerBase //ScriptStruct PDAnimRuntime.AnimNode_PDSequenceEvaluator
    {
    //Children Prop Count (Fields): 6
    public:

        class UAnimSequenceBase* Sequence; // 0x48
        float ExplicitTime; // 0x50
        bool bShouldLoop; // 0x54
        bool bTeleportToExplicitTime; // 0x55
        enum class ESequenceEvalReinit ReinitializationBehavior; // 0x56
        float StartPosition; // 0x58

    };

    struct FAnimNode_PDSequencePlayer : FAnimNode_PDAssetPlayerBase //ScriptStruct PDAnimRuntime.AnimNode_PDSequencePlayer
    {
    //Children Prop Count (Fields): 7
    public:

        class UAnimSequenceBase* Sequence; // 0x48
        float PlayRateBasis; // 0x50
        float PlayRate; // 0x54
        struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x58
        float StartPosition; // 0x88
        bool bLoopAnimation; // 0x8c
        class UAnimSequenceBase* PreviousSequence; // 0x1c0

    };

    struct FPDIKTargetData //ScriptStruct PDAnimRuntime.PDIKTargetData
    {
    //Children Prop Count (Fields): 11
    public:

        class UIKTargetGetter* IKTargetGetter; // 0x0
        char bEnableTranslation; // 0x8
        char bEnableOrientation; // 0x8
        char bUseWorldOrientation; // 0x8
        char bCaptureTarget; // 0x8
        enum class EPDCaptureSpace CaptureSpace; // 0x9
        struct FName CapturedSocketName; // 0x60
        struct FTransform TargetOffset; // 0x70
        enum class EPDCaptureSpace OffsetSpace; // 0xa0
        struct FName OffsetSocketName; // 0xa4
        float BlendTime; // 0xac

    };

    struct FCompositeFont //ScriptStruct SlateCore.CompositeFont
    {
    //Children Prop Count (Fields): 3
    public:

        struct FTypeface DefaultTypeface; // 0x0
        struct FCompositeFallbackFont FallbackTypeface; // 0x10
        struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28

    };

    struct FCompositeFallbackFont //ScriptStruct SlateCore.CompositeFallbackFont
    {
    //Children Prop Count (Fields): 2
    public:

        struct FTypeface Typeface; // 0x0
        float ScalingFactor; // 0x10

    };

    struct FTypeface //ScriptStruct SlateCore.Typeface
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FTypefaceEntry> Fonts; // 0x0

    };

    struct FTypefaceEntry //ScriptStruct SlateCore.TypefaceEntry
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        struct FFontData Font; // 0x8

    };

    struct FFontData //ScriptStruct SlateCore.FontData
    {
    //Children Prop Count (Fields): 5
    public:

        struct FString FontFilename; // 0x0
        enum class EFontHinting Hinting; // 0x10
        enum class EFontLoadingPolicy LoadingPolicy; // 0x11
        int32_t SubFaceIndex; // 0x14
        class UObject* FontFaceAsset; // 0x18

    };

    struct FCompositeSubFont : FCompositeFallbackFont //ScriptStruct SlateCore.CompositeSubFont
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FInt32Range> CharacterRanges; // 0x18
        struct FString Cultures; // 0x28

    };

    struct FMotionEvent : FInputEvent //ScriptStruct SlateCore.MotionEvent
    {
    public:


    };

    struct FCaptureLostEvent //ScriptStruct SlateCore.CaptureLostEvent
    {
    public:


    };

    struct FFocusEvent //ScriptStruct SlateCore.FocusEvent
    {
    public:


    };

    struct FWindowStyle : FSlateWidgetStyle //ScriptStruct SlateCore.WindowStyle
    {
    //Children Prop Count (Fields): 14
    public:

        struct FButtonStyle MinimizeButtonStyle; // 0x8
        struct FButtonStyle MaximizeButtonStyle; // 0x280
        struct FButtonStyle RestoreButtonStyle; // 0x4f8
        struct FButtonStyle CloseButtonStyle; // 0x770
        struct FTextBlockStyle TitleTextStyle; // 0x9e8
        struct FSlateBrush ActiveTitleBrush; // 0xc50
        struct FSlateBrush InactiveTitleBrush; // 0xcd8
        struct FSlateBrush FlashTitleBrush; // 0xd60
        struct FSlateColor BackgroundColor; // 0xde8
        struct FSlateBrush OutlineBrush; // 0xe10
        struct FSlateColor OutlineColor; // 0xe98
        struct FSlateBrush BorderBrush; // 0xec0
        struct FSlateBrush BackgroundBrush; // 0xf48
        struct FSlateBrush ChildBackgroundBrush; // 0xfd0

    };

    struct FScrollBorderStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ScrollBorderStyle
    {
    //Children Prop Count (Fields): 2
    public:

        struct FSlateBrush TopShadowBrush; // 0x8
        struct FSlateBrush BottomShadowBrush; // 0x90

    };

    struct FScrollBoxStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ScrollBoxStyle
    {
    //Children Prop Count (Fields): 4
    public:

        struct FSlateBrush TopShadowBrush; // 0x8
        struct FSlateBrush BottomShadowBrush; // 0x90
        struct FSlateBrush LeftShadowBrush; // 0x118
        struct FSlateBrush RightShadowBrush; // 0x1a0

    };

    struct FDockTabStyle : FSlateWidgetStyle //ScriptStruct SlateCore.DockTabStyle
    {
    //Children Prop Count (Fields): 12
    public:

        struct FButtonStyle CloseButtonStyle; // 0x8
        struct FSlateBrush NormalBrush; // 0x280
        struct FSlateBrush ActiveBrush; // 0x308
        struct FSlateBrush ColorOverlayTabBrush; // 0x390
        struct FSlateBrush ColorOverlayIconBrush; // 0x418
        struct FSlateBrush ForegroundBrush; // 0x4a0
        struct FSlateBrush HoveredBrush; // 0x528
        struct FSlateBrush ContentAreaBrush; // 0x5b0
        struct FSlateBrush TabWellBrush; // 0x638
        struct FMargin TabPadding; // 0x6c0
        float OverlapWidth; // 0x6d0
        struct FSlateColor FlashColor; // 0x6d8

    };

    struct FHeaderRowStyle : FSlateWidgetStyle //ScriptStruct SlateCore.HeaderRowStyle
    {
    //Children Prop Count (Fields): 5
    public:

        struct FTableColumnHeaderStyle ColumnStyle; // 0x8
        struct FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
        struct FSplitterStyle ColumnSplitterStyle; // 0x9a8
        struct FSlateBrush BackgroundBrush; // 0xac0
        struct FSlateColor ForegroundColor; // 0xb48

    };

    struct FSplitterStyle : FSlateWidgetStyle //ScriptStruct SlateCore.SplitterStyle
    {
    //Children Prop Count (Fields): 2
    public:

        struct FSlateBrush HandleNormalBrush; // 0x8
        struct FSlateBrush HandleHighlightBrush; // 0x90

    };

    struct FTableColumnHeaderStyle : FSlateWidgetStyle //ScriptStruct SlateCore.TableColumnHeaderStyle
    {
    //Children Prop Count (Fields): 9
    public:

        struct FSlateBrush SortPrimaryAscendingImage; // 0x8
        struct FSlateBrush SortPrimaryDescendingImage; // 0x90
        struct FSlateBrush SortSecondaryAscendingImage; // 0x118
        struct FSlateBrush SortSecondaryDescendingImage; // 0x1a0
        struct FSlateBrush NormalBrush; // 0x228
        struct FSlateBrush HoveredBrush; // 0x2b0
        struct FSlateBrush MenuDropdownImage; // 0x338
        struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3c0
        struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448

    };

    struct FInlineTextImageStyle : FSlateWidgetStyle //ScriptStruct SlateCore.InlineTextImageStyle
    {
    //Children Prop Count (Fields): 2
    public:

        struct FSlateBrush Image; // 0x8
        int16_t Baseline; // 0x90

    };

    struct FVolumeControlStyle : FSlateWidgetStyle //ScriptStruct SlateCore.VolumeControlStyle
    {
    //Children Prop Count (Fields): 6
    public:

        struct FSliderStyle SliderStyle; // 0x8
        struct FSlateBrush HighVolumeImage; // 0x348
        struct FSlateBrush MidVolumeImage; // 0x3d0
        struct FSlateBrush LowVolumeImage; // 0x458
        struct FSlateBrush NoVolumeImage; // 0x4e0
        struct FSlateBrush MutedImage; // 0x568

    };

    struct FSliderStyle : FSlateWidgetStyle //ScriptStruct SlateCore.SliderStyle
    {
    //Children Prop Count (Fields): 7
    public:

        struct FSlateBrush NormalBarImage; // 0x8
        struct FSlateBrush HoveredBarImage; // 0x90
        struct FSlateBrush DisabledBarImage; // 0x118
        struct FSlateBrush NormalThumbImage; // 0x1a0
        struct FSlateBrush HoveredThumbImage; // 0x228
        struct FSlateBrush DisabledThumbImage; // 0x2b0
        float BarThickness; // 0x338

    };

    struct FSearchBoxStyle : FSlateWidgetStyle //ScriptStruct SlateCore.SearchBoxStyle
    {
    //Children Prop Count (Fields): 8
    public:

        struct FEditableTextBoxStyle TextBoxStyle; // 0x8
        struct FSlateFontInfo ActiveFontInfo; // 0x7f8
        struct FSlateBrush UpArrowImage; // 0x848
        struct FSlateBrush DownArrowImage; // 0x8d0
        struct FSlateBrush GlassImage; // 0x958
        struct FSlateBrush ClearImage; // 0x9e0
        struct FMargin ImagePadding; // 0xa68
        bool bLeftAlignButtons; // 0xa78

    };

    struct FExpandableAreaStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ExpandableAreaStyle
    {
    //Children Prop Count (Fields): 3
    public:

        struct FSlateBrush CollapsedImage; // 0x8
        struct FSlateBrush ExpandedImage; // 0x90
        float RolloutAnimationSeconds; // 0x118

    };

    struct FProgressBarStyle : FSlateWidgetStyle //ScriptStruct SlateCore.ProgressBarStyle
    {
    //Children Prop Count (Fields): 3
    public:

        struct FSlateBrush BackgroundImage; // 0x8
        struct FSlateBrush FillImage; // 0x90
        struct FSlateBrush MarqueeImage; // 0x118

    };

    struct FInlineEditableTextBlockStyle : FSlateWidgetStyle //ScriptStruct SlateCore.InlineEditableTextBlockStyle
    {
    //Children Prop Count (Fields): 2
    public:

        struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
        struct FTextBlockStyle TextStyle; // 0x7f8

    };

    struct FHyperlinkStyle : FSlateWidgetStyle //ScriptStruct SlateCore.HyperlinkStyle
    {
    //Children Prop Count (Fields): 3
    public:

        struct FButtonStyle UnderlineStyle; // 0x8
        struct FTextBlockStyle TextStyle; // 0x280
        struct FMargin Padding; // 0x4e8

    };

    struct FCheckBoxStyle : FSlateWidgetStyle //ScriptStruct SlateCore.CheckBoxStyle
    {
    //Children Prop Count (Fields): 16
    public:

        enum class ESlateCheckBoxType CheckBoxType; // 0x8
        struct FSlateBrush UncheckedImage; // 0x10
        struct FSlateBrush UncheckedHoveredImage; // 0x98
        struct FSlateBrush UncheckedPressedImage; // 0x120
        struct FSlateBrush CheckedImage; // 0x1a8
        struct FSlateBrush CheckedHoveredImage; // 0x230
        struct FSlateBrush CheckedPressedImage; // 0x2b8
        struct FSlateBrush UndeterminedImage; // 0x340
        struct FSlateBrush UndeterminedHoveredImage; // 0x3c8
        struct FSlateBrush UndeterminedPressedImage; // 0x450
        struct FMargin Padding; // 0x4d8
        struct FSlateColor ForegroundColor; // 0x4e8
        struct FSlateColor BorderBackgroundColor; // 0x510
        struct FSlateSound CheckedSlateSound; // 0x538
        struct FSlateSound UncheckedSlateSound; // 0x550
        struct FSlateSound HoveredSlateSound; // 0x568

    };

    struct FCustomizedToolMenu //ScriptStruct Slate.CustomizedToolMenu
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Name; // 0x0
        struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x8
        struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58
        struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
        struct TArray<struct FName> SectionOrder; // 0xf8

    };

    struct FCustomizedToolMenuNameArray //ScriptStruct Slate.CustomizedToolMenuNameArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FName> Names; // 0x0

    };

    struct FCustomizedToolMenuSection //ScriptStruct Slate.CustomizedToolMenuSection
    {
    //Children Prop Count (Fields): 1
    public:

        enum class ECustomizedToolMenuVisibility Visibility; // 0x0

    };

    struct FCustomizedToolMenuEntry //ScriptStruct Slate.CustomizedToolMenuEntry
    {
    //Children Prop Count (Fields): 1
    public:

        enum class ECustomizedToolMenuVisibility Visibility; // 0x0

    };

    struct FImageWriteOptions //ScriptStruct ImageWriteQueue.ImageWriteOptions
    {
    //Children Prop Count (Fields): 5
    public:

        enum class EDesiredImageFormat Format; // 0x0
        struct FDelegate OnComplete; // 0x4
        int32_t CompressionQuality; // 0x14
        bool bOverwriteFile; // 0x18
        bool bAsync; // 0x19

    };

    struct FMaterialQualityOverrides //ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
    {
    //Children Prop Count (Fields): 9
    public:

        bool bDiscardQualityDuringCook; // 0x0
        bool bEnableOverride; // 0x1
        bool bForceFullyRough; // 0x2
        bool bForceNonMetal; // 0x3
        bool bForceDisableLMDirectionality; // 0x4
        bool bForceLQReflections; // 0x5
        bool bForceDisablePreintegratedGF; // 0x6
        bool bDisableMaterialNormalCalculation; // 0x7
        enum class EMobileCSMQuality MobileCSMQuality; // 0x8

    };

    struct FLightPropagationVolumeSettings //ScriptStruct Renderer.LightPropagationVolumeSettings
    {
    //Children Prop Count (Fields): 28
    public:

        char bOverride_LPVIntensity; // 0x0
        char bOverride_LPVDirectionalOcclusionIntensity; // 0x0
        char bOverride_LPVDirectionalOcclusionRadius; // 0x0
        char bOverride_LPVDiffuseOcclusionExponent; // 0x0
        char bOverride_LPVSpecularOcclusionExponent; // 0x0
        char bOverride_LPVDiffuseOcclusionIntensity; // 0x0
        char bOverride_LPVSpecularOcclusionIntensity; // 0x0
        char bOverride_LPVSize; // 0x0
        char bOverride_LPVSecondaryOcclusionIntensity; // 0x1
        char bOverride_LPVSecondaryBounceIntensity; // 0x1
        char bOverride_LPVGeometryVolumeBias; // 0x1
        char bOverride_LPVVplInjectionBias; // 0x1
        char bOverride_LPVEmissiveInjectionIntensity; // 0x1
        float LPVIntensity; // 0x4
        float LPVVplInjectionBias; // 0x8
        float LPVSize; // 0xc
        float LPVSecondaryOcclusionIntensity; // 0x10
        float LPVSecondaryBounceIntensity; // 0x14
        float LPVGeometryVolumeBias; // 0x18
        float LPVEmissiveInjectionIntensity; // 0x1c
        float LPVDirectionalOcclusionIntensity; // 0x20
        float LPVDirectionalOcclusionRadius; // 0x24
        float LPVDiffuseOcclusionExponent; // 0x28
        float LPVSpecularOcclusionExponent; // 0x2c
        float LPVDiffuseOcclusionIntensity; // 0x30
        float LPVSpecularOcclusionIntensity; // 0x34
        float LPVFadeRange; // 0x38
        float LPVDirectionalOcclusionFadeRange; // 0x3c

    };

    struct FAutoCompleteCommand //ScriptStruct EngineSettings.AutoCompleteCommand
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Command; // 0x0
        struct FString Desc; // 0x10

    };

    struct FGameModeName //ScriptStruct EngineSettings.GameModeName
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Name; // 0x0
        struct FSoftClassPath GameMode; // 0x10

    };

    struct FMRMeshConfiguration //ScriptStruct MRMesh.MRMeshConfiguration
    {
    public:


    };

    struct FARSharedWorldReplicationState //ScriptStruct AugmentedReality.ARSharedWorldReplicationState
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t PreviewImageOffset; // 0x0
        int32_t ARWorldOffset; // 0x4

    };

    struct FARTraceResult //ScriptStruct AugmentedReality.ARTraceResult
    {
    //Children Prop Count (Fields): 4
    public:

        float DistanceFromCamera; // 0x0
        enum class EARLineTraceChannels TraceChannel; // 0x4
        struct FTransform LocalToTrackingTransform; // 0x10
        class UARTrackedGeometry* TrackedGeometry; // 0x40

    };

    struct FARPose3D //ScriptStruct AugmentedReality.ARPose3D
    {
    //Children Prop Count (Fields): 4
    public:

        struct FARSkeletonDefinition SkeletonDefinition; // 0x0
        struct TArray<struct FTransform> JointTransforms; // 0x28
        struct TArray<bool> IsJointTracked; // 0x38
        enum class EARJointTransformSpace JointTransformSpace; // 0x48

    };

    struct FARSkeletonDefinition //ScriptStruct AugmentedReality.ARSkeletonDefinition
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t NumJoints; // 0x0
        struct TArray<struct FName> JointNames; // 0x8
        struct TArray<int32_t> ParentIndices; // 0x18

    };

    struct FARPose2D //ScriptStruct AugmentedReality.ARPose2D
    {
    //Children Prop Count (Fields): 3
    public:

        struct FARSkeletonDefinition SkeletonDefinition; // 0x0
        struct TArray<struct FVector2D> JointLocations; // 0x28
        struct TArray<bool> IsJointTracked; // 0x38

    };

    struct FARVideoFormat //ScriptStruct AugmentedReality.ARVideoFormat
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t FPS; // 0x0
        int32_t Width; // 0x4
        int32_t Height; // 0x8

    };

    struct FARSessionStatus //ScriptStruct AugmentedReality.ARSessionStatus
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString AdditionalInfo; // 0x0
        enum class EARSessionStatus Status; // 0x10

    };

    struct FXRDeviceId //ScriptStruct HeadMountedDisplay.XRDeviceId
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName SystemName; // 0x0
        int32_t DeviceID; // 0x8

    };

    struct FFileManifestData //ScriptStruct BuildPatchServices.FileManifestData
    {
    //Children Prop Count (Fields): 8
    public:

        struct FString Filename; // 0x0
        struct FSHAHashData FileHash; // 0x10
        struct TArray<struct FChunkPartData> FileChunkParts; // 0x28
        struct TArray<struct FString> InstallTags; // 0x38
        bool bIsUnixExecutable; // 0x48
        struct FString SymlinkTarget; // 0x50
        bool bIsReadOnly; // 0x60
        bool bIsCompressed; // 0x61

    };

    struct FChunkPartData //ScriptStruct BuildPatchServices.ChunkPartData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FGuid Guid; // 0x0
        uint32_t Offset; // 0x10
        uint32_t Size; // 0x14

    };

    struct FSHAHashData //ScriptStruct BuildPatchServices.SHAHashData
    {
    //Children Prop Count (Fields): 1
    public:

        char Hash; // 0x0

    };

    struct FChunkInfoData //ScriptStruct BuildPatchServices.ChunkInfoData
    {
    //Children Prop Count (Fields): 5
    public:

        struct FGuid Guid; // 0x0
        uint64_t Hash; // 0x10
        struct FSHAHashData ShaHash; // 0x18
        int64_t FileSize; // 0x30
        char GroupNumber; // 0x38

    };

    struct FCustomFieldData //ScriptStruct BuildPatchServices.CustomFieldData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Key; // 0x0
        struct FString Value; // 0x10

    };

    struct FFoliageVertexColorChannelMask //ScriptStruct Foliage.FoliageVertexColorChannelMask
    {
    //Children Prop Count (Fields): 3
    public:

        char UseMask; // 0x0
        float MaskThreshold; // 0x4
        char InvertMask; // 0x8

    };

    struct FFoliageTypeObject //ScriptStruct Foliage.FoliageTypeObject
    {
    //Children Prop Count (Fields): 4
    public:

        class UObject* FoliageTypeObject; // 0x0
        class UFoliageType* TypeInstance; // 0x8
        bool bIsAsset; // 0x10
        class UFoliageType_InstancedStaticMesh* Type; // 0x18

    };

    struct FProceduralFoliageInstance //ScriptStruct Foliage.ProceduralFoliageInstance
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector Location; // 0x0
        struct FQuat Rotation; // 0x10
        struct FVector Normal; // 0x20
        float Age; // 0x2c
        float Scale; // 0x30
        class UFoliageType* Type; // 0x38

    };

    struct FLandscapeLayer //ScriptStruct Landscape.LandscapeLayer
    {
    //Children Prop Count (Fields): 9
    public:

        struct FGuid Guid; // 0x0
        struct FName Name; // 0x10
        bool bVisible; // 0x18
        bool bLocked; // 0x19
        float HeightmapAlpha; // 0x1c
        float WeightmapAlpha; // 0x20
        enum class ELandscapeBlendMode BlendMode; // 0x24
        struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28
        struct TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38

    };

    struct FLandscapeLayerBrush //ScriptStruct Landscape.LandscapeLayerBrush
    {
    public:


    };

    struct FWeightmapSource //ScriptStruct Landscape.WeightmapSource
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> Data; // 0x0

    };

    struct FLandscapeLayerComponentData //ScriptStruct Landscape.LandscapeLayerComponentData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FHeightmapData HeightmapData; // 0x0
        struct FWeightmapData WeightmapData; // 0x8

    };

    struct FWeightmapData //ScriptStruct Landscape.WeightmapData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<class UTexture2D*> Textures; // 0x0
        struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
        struct TArray<class ULandscapeWeightmapUsage*> TextureUsages; // 0x20

    };

    struct FWeightmapLayerAllocationInfo //ScriptStruct Landscape.WeightmapLayerAllocationInfo
    {
    //Children Prop Count (Fields): 3
    public:

        class ULandscapeLayerInfoObject* LayerInfo; // 0x0
        char WeightmapTextureIndex; // 0x8
        char WeightmapTextureChannel; // 0x9

    };

    struct FHeightmapData //ScriptStruct Landscape.HeightmapData
    {
    //Children Prop Count (Fields): 1
    public:

        class UTexture2D* Texture; // 0x0

    };

    struct FLandscapeComponentMaterialOverride //ScriptStruct Landscape.LandscapeComponentMaterialOverride
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPerPlatformInt LODIndex; // 0x0
        class UMaterialInterface* Material; // 0x8

    };

    struct FLandscapeEditToolRenderData //ScriptStruct Landscape.LandscapeEditToolRenderData
    {
    //Children Prop Count (Fields): 9
    public:

        class UMaterialInterface* ToolMaterial; // 0x0
        class UMaterialInterface* GizmoMaterial; // 0x8
        int32_t SelectedType; // 0x10
        int32_t DebugChannelR; // 0x14
        int32_t DebugChannelG; // 0x18
        int32_t DebugChannelB; // 0x1c
        class UTexture2D* DataTexture; // 0x20
        class UTexture2D* LayerContributionTexture; // 0x28
        class UTexture2D* DirtyTexture; // 0x30

    };

    struct FGizmoSelectData //ScriptStruct Landscape.GizmoSelectData
    {
    public:


    };

    struct FGrassVariety //ScriptStruct Landscape.GrassVariety
    {
    //Children Prop Count (Fields): 18
    public:

        class UStaticMesh* GrassMesh; // 0x0
        struct FPerPlatformFloat GrassDensity; // 0x8
        bool bUseGrid; // 0xc
        float PlacementJitter; // 0x10
        struct FPerPlatformInt StartCullDistance; // 0x14
        struct FPerPlatformInt EndCullDistance; // 0x18
        int32_t MinLOD; // 0x1c
        enum class EGrassScaling Scaling; // 0x20
        struct FFloatInterval ScaleX; // 0x24
        struct FFloatInterval ScaleY; // 0x2c
        struct FFloatInterval ScaleZ; // 0x34
        bool RandomRotation; // 0x3c
        bool AlignToSurface; // 0x3d
        bool bUseLandscapeLightmap; // 0x3e
        struct FLightingChannels LightingChannels; // 0x3f
        bool bReceivesDecals; // 0x40
        bool bCastDynamicShadow; // 0x41
        bool bKeepInstanceBufferCPUCopy; // 0x42

    };

    struct FLandscapeInfoLayerSettings //ScriptStruct Landscape.LandscapeInfoLayerSettings
    {
    //Children Prop Count (Fields): 2
    public:

        class ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
        struct FName LayerName; // 0x8

    };

    struct FLandscapeMaterialTextureStreamingInfo //ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName TextureName; // 0x0
        float TexelFactor; // 0x8

    };

    struct FLandscapeProxyMaterialOverride //ScriptStruct Landscape.LandscapeProxyMaterialOverride
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPerPlatformInt LODIndex; // 0x0
        class UMaterialInterface* Material; // 0x8

    };

    struct FLandscapeImportLayerInfo //ScriptStruct Landscape.LandscapeImportLayerInfo
    {
    public:


    };

    struct FLandscapeLayerStruct //ScriptStruct Landscape.LandscapeLayerStruct
    {
    //Children Prop Count (Fields): 1
    public:

        class ULandscapeLayerInfoObject* LayerInfoObj; // 0x0

    };

    struct FLandscapeEditorLayerSettings //ScriptStruct Landscape.LandscapeEditorLayerSettings
    {
    public:


    };

    struct FLandscapeSplineConnection //ScriptStruct Landscape.LandscapeSplineConnection
    {
    //Children Prop Count (Fields): 2
    public:

        class ULandscapeSplineSegment* Segment; // 0x0
        char End; // 0x8

    };

    struct FForeignWorldSplineData //ScriptStruct Landscape.ForeignWorldSplineData
    {
    public:


    };

    struct FForeignSplineSegmentData //ScriptStruct Landscape.ForeignSplineSegmentData
    {
    public:


    };

    struct FForeignControlPointData //ScriptStruct Landscape.ForeignControlPointData
    {
    public:


    };

    struct FLandscapeSplineMeshEntry //ScriptStruct Landscape.LandscapeSplineMeshEntry
    {
    //Children Prop Count (Fields): 9
    public:

        class UStaticMesh* Mesh; // 0x0
        struct TArray<class UMaterialInterface*> MaterialOverrides; // 0x8
        char bCenterH; // 0x18
        struct FVector2D CenterAdjust; // 0x1c
        char bScaleToWidth; // 0x24
        struct FVector Scale; // 0x28
        enum class LandscapeSplineMeshOrientation Orientation; // 0x34
        enum class ESplineMeshAxis ForwardAxis; // 0x35
        enum class ESplineMeshAxis UpAxis; // 0x36

    };

    struct FLandscapeSplineSegmentConnection //ScriptStruct Landscape.LandscapeSplineSegmentConnection
    {
    //Children Prop Count (Fields): 3
    public:

        class ULandscapeSplineControlPoint* ControlPoint; // 0x0
        float TangentLen; // 0x8
        struct FName SocketName; // 0xc

    };

    struct FLandscapeSplineInterpPoint //ScriptStruct Landscape.LandscapeSplineInterpPoint
    {
    //Children Prop Count (Fields): 10
    public:

        struct FVector Center; // 0x0
        struct FVector Left; // 0xc
        struct FVector Right; // 0x18
        struct FVector FalloffLeft; // 0x24
        struct FVector FalloffRight; // 0x30
        struct FVector LayerLeft; // 0x3c
        struct FVector LayerRight; // 0x48
        struct FVector LayerFalloffLeft; // 0x54
        struct FVector LayerFalloffRight; // 0x60
        float StartEndFalloff; // 0x6c

    };

    struct FGrassInput //ScriptStruct Landscape.GrassInput
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x0
        class ULandscapeGrassType* GrassType; // 0x8
        struct FExpressionInput Input; // 0x10

    };

    struct FLayerBlendInput //ScriptStruct Landscape.LayerBlendInput
    {
    //Children Prop Count (Fields): 7
    public:

        struct FName LayerName; // 0x0
        enum class ELandscapeLayerBlendType BlendType; // 0x8
        struct FExpressionInput LayerInput; // 0xc
        struct FExpressionInput HeightInput; // 0x20
        float PreviewWeight; // 0x34
        struct FVector ConstLayerInput; // 0x38
        float ConstHeightInput; // 0x44

    };

    struct FTimedDataInputEvaluationData //ScriptStruct TimeManagement.TimedDataInputEvaluationData
    {
    //Children Prop Count (Fields): 2
    public:

        float DistanceToNewestSampleSeconds; // 0x0
        float DistanceToOldestSampleSeconds; // 0x4

    };

    struct FTimedDataChannelSampleTime //ScriptStruct TimeManagement.TimedDataChannelSampleTime
    {
    public:


    };

    struct FMovieSceneSectionGroup //ScriptStruct MovieScene.MovieSceneSectionGroup
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x0

    };

    struct FMovieSceneObjectBindingIDs //ScriptStruct MovieScene.MovieSceneObjectBindingIDs
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FMovieSceneObjectBindingID> IDs; // 0x0

    };

    struct FMovieSceneObjectBindingID //ScriptStruct MovieScene.MovieSceneObjectBindingID
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t SequenceID; // 0x0
        enum class EMovieSceneObjectBindingSpace Space; // 0x4
        struct FGuid Guid; // 0x8

    };

    struct FMovieSceneTrackLabels //ScriptStruct MovieScene.MovieSceneTrackLabels
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FString> Strings; // 0x0

    };

    struct FMovieSceneEditorData //ScriptStruct MovieScene.MovieSceneEditorData
    {
    //Children Prop Count (Fields): 9
    public:

        struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0
        struct TArray<struct FString> PinnedNodes; // 0x50
        double ViewStart; // 0x60
        double ViewEnd; // 0x68
        double WorkStart; // 0x70
        double WorkEnd; // 0x78
        struct TSet<struct FFrameNumber> MarkedFrames; // 0x80
        struct FFloatRange WorkingRange; // 0xd0
        struct FFloatRange ViewRange; // 0xe0

    };

    struct FMovieSceneExpansionState //ScriptStruct MovieScene.MovieSceneExpansionState
    {
    //Children Prop Count (Fields): 1
    public:

        bool bExpanded; // 0x0

    };

    struct FMovieSceneMarkedFrame //ScriptStruct MovieScene.MovieSceneMarkedFrame
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameNumber FrameNumber; // 0x0
        struct FString Label; // 0x8

    };

    struct FMovieSceneTimecodeSource //ScriptStruct MovieScene.MovieSceneTimecodeSource
    {
    //Children Prop Count (Fields): 2
    public:

        struct FTimecode Timecode; // 0x0
        struct FFrameNumber DeltaFrame; // 0x14

    };

    struct FMovieSceneBinding //ScriptStruct MovieScene.MovieSceneBinding
    {
    //Children Prop Count (Fields): 3
    public:

        struct FGuid ObjectGuid; // 0x0
        struct FString BindingName; // 0x10
        struct TArray<class UMovieSceneTrack*> Tracks; // 0x20

    };

    struct FMovieSceneBindingOverrideData //ScriptStruct MovieScene.MovieSceneBindingOverrideData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneObjectBindingID ObjectBindingID; // 0x0
        struct TWeakObjectPtr<struct UObject> Object; // 0x18
        bool bOverridesDefault; // 0x20

    };

    struct FOptionalMovieSceneBlendType //ScriptStruct MovieScene.OptionalMovieSceneBlendType
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EMovieSceneBlendType BlendType; // 0x0
        bool bIsValid; // 0x1

    };

    struct FMovieSceneByteChannel : FMovieSceneChannel //ScriptStruct MovieScene.MovieSceneByteChannel
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FFrameNumber> Times; // 0x8
        char DefaultValue; // 0x18
        bool bHasDefaultValue; // 0x19
        struct TArray<char> Values; // 0x20
        class UEnum* Enum; // 0x30

    };

    struct FMovieSceneEvalTemplatePtr //ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
    {
    public:


    };

    struct FMovieSceneEmptyStruct //ScriptStruct MovieScene.MovieSceneEmptyStruct
    {
    public:


    };

    struct FMovieSceneEvaluationField //ScriptStruct MovieScene.MovieSceneEvaluationField
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x0
        struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10
        struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20

    };

    struct FMovieSceneEvaluationMetaData //ScriptStruct MovieScene.MovieSceneEvaluationMetaData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0
        struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
        struct TMap<struct FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20

    };

    struct FMovieSceneOrderedEvaluationKey //ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneEvaluationKey Key; // 0x0
        uint16_t SetupIndex; // 0xc
        uint16_t TearDownIndex; // 0xe

    };

    struct FMovieSceneEvaluationKey //ScriptStruct MovieScene.MovieSceneEvaluationKey
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneSequenceID SequenceID; // 0x0
        struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
        uint32_t SectionIndex; // 0x8

    };

    struct FMovieSceneTrackIdentifier //ScriptStruct MovieScene.MovieSceneTrackIdentifier
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t Value; // 0x0

    };

    struct FMovieSceneEvaluationGroup //ScriptStruct MovieScene.MovieSceneEvaluationGroup
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
        struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10

    };

    struct FMovieSceneEvaluationFieldTrackPtr //ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneSequenceID SequenceID; // 0x0
        struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4

    };

    struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr //ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneSegmentIdentifier SegmentID; // 0x8

    };

    struct FMovieSceneSegmentIdentifier //ScriptStruct MovieScene.MovieSceneSegmentIdentifier
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t IdentifierIndex; // 0x0

    };

    struct FMovieSceneEvaluationGroupLUTIndex //ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t LUTOffset; // 0x0
        int32_t NumInitPtrs; // 0x4
        int32_t NumEvalPtrs; // 0x8

    };

    struct FMovieSceneFrameRange //ScriptStruct MovieScene.MovieSceneFrameRange
    {
    public:


    };

    struct FMovieSceneEvaluationTemplate //ScriptStruct MovieScene.MovieSceneEvaluationTemplate
    {
    //Children Prop Count (Fields): 8
    public:

        struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0
        struct FMovieSceneEvaluationField EvaluationField; // 0xa0
        struct FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
        struct FGuid SequenceSignature; // 0x170
        struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180
        struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188
        struct FMovieSceneTrackFieldData TrackFieldData; // 0x230
        struct FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290

    };

    struct FMovieSceneSubSectionFieldData //ScriptStruct MovieScene.MovieSceneSubSectionFieldData
    {
    public:


    };

    struct FMovieSceneTrackFieldData //ScriptStruct MovieScene.MovieSceneTrackFieldData
    {
    public:


    };

    struct FMovieSceneTemplateGenerationLedger //ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
        struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
        struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58

    };

    struct FMovieSceneEvaluationTemplateSerialNumber //ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t Value; // 0x0

    };

    struct FMovieSceneSequenceHierarchy //ScriptStruct MovieScene.MovieSceneSequenceHierarchy
    {
    //Children Prop Count (Fields): 2
    public:

        struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x0
        struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50

    };

    struct FMovieSceneSequenceHierarchyNode //ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneSequenceID ParentID; // 0x0
        struct TArray<struct FMovieSceneSequenceID> Children; // 0x8

    };

    struct FMovieSceneSubSequenceData //ScriptStruct MovieScene.MovieSceneSubSequenceData
    {
    //Children Prop Count (Fields): 13
    public:

        struct FSoftObjectPath Sequence; // 0x0
        struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18
        struct FFrameRate TickResolution; // 0x38
        struct FMovieSceneSequenceID DeterministicSequenceID; // 0x40
        struct FMovieSceneFrameRange PlayRange; // 0x44
        struct FMovieSceneFrameRange FullPlayRange; // 0x54
        struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x64
        struct FMovieSceneFrameRange PreRollRange; // 0x74
        struct FMovieSceneFrameRange PostRollRange; // 0x84
        int32_t HierarchicalBias; // 0x94
        struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98
        struct FGuid SubSectionSignature; // 0xb8
        struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xc8

    };

    struct FMovieSceneSequenceTransform //ScriptStruct MovieScene.MovieSceneSequenceTransform
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneTimeTransform LinearTransform; // 0x0
        struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10

    };

    struct FMovieSceneNestedSequenceTransform //ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneTimeTransform LinearTransform; // 0x0
        struct FMovieSceneTimeWarping Warping; // 0xc

    };

    struct FMovieSceneTimeWarping //ScriptStruct MovieScene.MovieSceneTimeWarping
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameNumber Start; // 0x0
        struct FFrameNumber End; // 0x4

    };

    struct FMovieSceneTimeTransform //ScriptStruct MovieScene.MovieSceneTimeTransform
    {
    //Children Prop Count (Fields): 2
    public:

        float TimeScale; // 0x0
        struct FFrameTime Offset; // 0x4

    };

    struct FMovieSceneSequenceInstanceDataPtr //ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
    {
    public:


    };

    struct FMovieSceneEvaluationTrack //ScriptStruct MovieScene.MovieSceneEvaluationTrack
    {
    //Children Prop Count (Fields): 12
    public:

        struct FGuid ObjectBindingID; // 0x0
        uint16_t EvaluationPriority; // 0x10
        enum class EEvaluationMethod EvaluationMethod; // 0x12
        struct FMovieSceneEvaluationTrackSegments Segments; // 0x18
        class UMovieSceneTrack* SourceTrack; // 0x38
        struct FSectionEvaluationDataTree EvaluationTree; // 0x40
        struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xa0
        struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0xb0
        struct FName EvaluationGroup; // 0xe8
        char bEvaluateInPreroll; // 0xf0
        char bEvaluateInPostroll; // 0xf0
        char bTearDownPriority; // 0xf0

    };

    struct FMovieSceneTrackImplementationPtr //ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
    {
    public:


    };

    struct FSectionEvaluationDataTree //ScriptStruct MovieScene.SectionEvaluationDataTree
    {
    public:


    };

    struct FMovieSceneEvaluationTrackSegments //ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<int32_t> SegmentIdentifierToIndex; // 0x0
        struct TArray<struct FMovieSceneSegment> SortedSegments; // 0x10

    };

    struct FMovieSceneSegment //ScriptStruct MovieScene.MovieSceneSegment
    {
    public:


    };

    struct FMovieSceneSubSectionData //ScriptStruct MovieScene.MovieSceneSubSectionData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0
        struct FGuid ObjectBindingID; // 0x8
        enum class ESectionEvaluationFlags Flags; // 0x18

    };

    struct FMovieSceneRootEvaluationTemplateInstance //ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances; // 0x18

    };

    struct FMovieSceneKeyStruct //ScriptStruct MovieScene.MovieSceneKeyStruct
    {
    public:


    };

    struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct //ScriptStruct MovieScene.MovieSceneKeyTimeStruct
    {
    //Children Prop Count (Fields): 1
    public:

        struct FFrameNumber Time; // 0x8

    };

    struct FGeneratedMovieSceneKeyStruct //ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
    {
    public:


    };

    struct FMovieSceneObjectPathChannel : FMovieSceneChannel //ScriptStruct MovieScene.MovieSceneObjectPathChannel
    {
    //Children Prop Count (Fields): 4
    public:

        class UObject* PropertyClass; // 0x8
        struct TArray<struct FFrameNumber> Times; // 0x10
        struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
        struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30

    };

    struct FMovieSceneObjectPathChannelKeyValue //ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
    {
    //Children Prop Count (Fields): 2
    public:

        struct TSoftObjectPtr<UObject> SoftPtr; // 0x0
        class UObject* HardPtr; // 0x28

    };

    struct FMovieScenePossessable //ScriptStruct MovieScene.MovieScenePossessable
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FName> Tags; // 0x0
        struct FGuid Guid; // 0x10
        struct FString Name; // 0x20
        class UObject* PossessedObjectClass; // 0x30
        struct FGuid ParentGuid; // 0x38

    };

    struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieScene.MovieScenePropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieScenePropertySectionData PropertyData; // 0x20

    };

    struct FMovieScenePropertySectionData //ScriptStruct MovieScene.MovieScenePropertySectionData
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName PropertyName; // 0x0
        struct FString PropertyPath; // 0x8
        struct FName FunctionName; // 0x18
        struct FName NotifyFunctionName; // 0x20

    };

    struct FMovieSceneEasingSettings //ScriptStruct MovieScene.MovieSceneEasingSettings
    {
    //Children Prop Count (Fields): 8
    public:

        int32_t AutoEaseInDuration; // 0x0
        int32_t AutoEaseOutDuration; // 0x4
        struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8
        bool bManualEaseIn; // 0x18
        int32_t ManualEaseInDuration; // 0x1c
        struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20
        bool bManualEaseOut; // 0x30
        int32_t ManualEaseOutDuration; // 0x34

    };

    struct FMovieSceneSectionEvalOptions //ScriptStruct MovieScene.MovieSceneSectionEvalOptions
    {
    //Children Prop Count (Fields): 2
    public:

        bool bCanEditCompletionMode; // 0x0
        enum class EMovieSceneCompletionMode CompletionMode; // 0x1

    };

    struct FMovieSceneSectionParameters //ScriptStruct MovieScene.MovieSceneSectionParameters
    {
    //Children Prop Count (Fields): 9
    public:

        struct FFrameNumber StartFrameOffset; // 0x0
        bool bCanLoop; // 0x4
        struct FFrameNumber EndFrameOffset; // 0x8
        struct FFrameNumber FirstLoopStartFrameOffset; // 0xc
        float TimeScale; // 0x10
        int32_t HierarchicalBias; // 0x14
        float StartOffset; // 0x18
        float PrerollTime; // 0x1c
        float PostrollTime; // 0x20

    };

    struct FSectionEvaluationData //ScriptStruct MovieScene.SectionEvaluationData
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t ImplIndex; // 0x0
        struct FFrameNumber ForcedTime; // 0x4
        enum class ESectionEvaluationFlags Flags; // 0x8

    };

    struct FMovieSceneSequencePlaybackSettings //ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
    {
    //Children Prop Count (Fields): 12
    public:

        char bAutoPlay; // 0x0
        struct FMovieSceneSequenceLoopCount LoopCount; // 0x4
        float PlayRate; // 0x8
        float StartTime; // 0xc
        char bRandomStartTime; // 0x10
        char bRestoreState; // 0x10
        char bDisableMovementInput; // 0x10
        char bDisableLookAtInput; // 0x10
        char bHidePlayer; // 0x10
        char bHideHud; // 0x10
        char bDisableCameraCuts; // 0x10
        char bPauseAtEnd; // 0x10

    };

    struct FMovieSceneSequenceLoopCount //ScriptStruct MovieScene.MovieSceneSequenceLoopCount
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t Value; // 0x0

    };

    struct FMovieSceneSequenceReplProperties //ScriptStruct MovieScene.MovieSceneSequenceReplProperties
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFrameTime LastKnownPosition; // 0x0
        enum class EMovieScenePlayerStatus LastKnownStatus; // 0x8
        int32_t LastKnownNumLoops; // 0xc

    };

    struct FMovieSceneWarpCounter //ScriptStruct MovieScene.MovieSceneWarpCounter
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<uint32_t> WarpCounts; // 0x0

    };

    struct FMovieSceneSpawnable //ScriptStruct MovieScene.MovieSceneSpawnable
    {
    //Children Prop Count (Fields): 9
    public:

        struct FTransform SpawnTransform; // 0x0
        struct TArray<struct FName> Tags; // 0x30
        bool bContinuouslyRespawn; // 0x40
        struct FGuid Guid; // 0x44
        struct FString Name; // 0x58
        class UObject* ObjectTemplate; // 0x68
        struct TArray<struct FGuid> ChildPossessables; // 0x70
        enum class ESpawnOwnership Ownership; // 0x80
        struct FName LevelName; // 0x84

    };

    struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieScene.TestMovieSceneEvalTemplate
    {
    public:


    };

    struct FMovieSceneTrackDisplayOptions //ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
    {
    //Children Prop Count (Fields): 1
    public:

        char bShowVerticalFrames; // 0x0

    };

    struct FMovieSceneTrackEvalOptions //ScriptStruct MovieScene.MovieSceneTrackEvalOptions
    {
    //Children Prop Count (Fields): 5
    public:

        char bCanEvaluateNearestSection; // 0x0
        char bEvalNearestSection; // 0x0
        char bEvaluateInPreroll; // 0x0
        char bEvaluateInPostroll; // 0x0
        char bEvaluateNearestSection; // 0x0

    };

    struct FCCDIKChainLink //ScriptStruct AnimationCore.CCDIKChainLink
    {
    public:


    };

    struct FAxis //ScriptStruct AnimationCore.Axis
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Axis; // 0x0
        bool bInLocalSpace; // 0xc

    };

    struct FConstraintData //ScriptStruct AnimationCore.ConstraintData
    {
    //Children Prop Count (Fields): 5
    public:

        struct FConstraintDescriptor Constraint; // 0x0
        float Weight; // 0x10
        bool bMaintainOffset; // 0x14
        struct FTransform Offset; // 0x20
        struct FTransform CurrentTransform; // 0x50

    };

    struct FConstraintDescriptor //ScriptStruct AnimationCore.ConstraintDescriptor
    {
    //Children Prop Count (Fields): 1
    public:

        enum class EConstraintType Type; // 0x0

    };

    struct FConstraintDescriptionEx //ScriptStruct AnimationCore.ConstraintDescriptionEx
    {
    //Children Prop Count (Fields): 1
    public:

        struct FFilterOptionPerAxis AxesFilterOption; // 0x8

    };

    struct FFilterOptionPerAxis //ScriptStruct AnimationCore.FilterOptionPerAxis
    {
    //Children Prop Count (Fields): 3
    public:

        bool bX; // 0x0
        bool bY; // 0x1
        bool bZ; // 0x2

    };

    struct FAimConstraintDescription : FConstraintDescriptionEx //ScriptStruct AnimationCore.AimConstraintDescription
    {
    //Children Prop Count (Fields): 4
    public:

        struct FAxis LookAt_Axis; // 0x10
        struct FAxis LookUp_Axis; // 0x20
        bool bUseLookUp; // 0x30
        struct FVector LookUpTarget; // 0x34

    };

    struct FTransformConstraintDescription : FConstraintDescriptionEx //ScriptStruct AnimationCore.TransformConstraintDescription
    {
    //Children Prop Count (Fields): 1
    public:

        enum class ETransformConstraintType TransformType; // 0x10

    };

    struct FTransformConstraint //ScriptStruct AnimationCore.TransformConstraint
    {
    //Children Prop Count (Fields): 5
    public:

        struct FConstraintDescription Operator; // 0x0
        struct FName SourceNode; // 0x10
        struct FName TargetNode; // 0x18
        float Weight; // 0x20
        bool bMaintainOffset; // 0x24

    };

    struct FConstraintDescription //ScriptStruct AnimationCore.ConstraintDescription
    {
    //Children Prop Count (Fields): 7
    public:

        bool bTranslation; // 0x0
        bool bRotation; // 0x1
        bool bScale; // 0x2
        bool bParent; // 0x3
        struct FFilterOptionPerAxis TranslationAxes; // 0x4
        struct FFilterOptionPerAxis RotationAxes; // 0x7
        struct FFilterOptionPerAxis ScaleAxes; // 0xa

    };

    struct FConstraintOffset //ScriptStruct AnimationCore.ConstraintOffset
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector Translation; // 0x0
        struct FQuat Rotation; // 0x10
        struct FVector Scale; // 0x20
        struct FTransform Parent; // 0x30

    };

    struct FTransformFilter //ScriptStruct AnimationCore.TransformFilter
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFilterOptionPerAxis TranslationFilter; // 0x0
        struct FFilterOptionPerAxis RotationFilter; // 0x3
        struct FFilterOptionPerAxis ScaleFilter; // 0x6

    };

    struct FEulerTransform //ScriptStruct AnimationCore.EulerTransform
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Location; // 0x0
        struct FRotator Rotation; // 0xc
        struct FVector Scale; // 0x18

    };

    struct FFABRIKChainLink //ScriptStruct AnimationCore.FABRIKChainLink
    {
    public:


    };

    struct FNodeChain //ScriptStruct AnimationCore.NodeChain
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FName> Nodes; // 0x0

    };

    struct FNodeHierarchyWithUserData //ScriptStruct AnimationCore.NodeHierarchyWithUserData
    {
    //Children Prop Count (Fields): 1
    public:

        struct FNodeHierarchyData Hierarchy; // 0x8

    };

    struct FNodeHierarchyData //ScriptStruct AnimationCore.NodeHierarchyData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FNodeObject> Nodes; // 0x0
        struct TArray<struct FTransform> Transforms; // 0x10
        struct TMap<struct FName, int32_t> NodeNameToIndexMapping; // 0x20

    };

    struct FNodeObject //ScriptStruct AnimationCore.NodeObject
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        struct FName ParentName; // 0x8

    };

    struct FTransformNoScale //ScriptStruct AnimationCore.TransformNoScale
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Location; // 0x0
        struct FQuat Rotation; // 0x10

    };

    struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase //ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
    {
    //Children Prop Count (Fields): 9
    public:

        float X; // 0x30
        float Y; // 0x34
        float Z; // 0x38
        float PlayRate; // 0x3c
        bool bLoop; // 0x40
        bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
        float StartPosition; // 0x44
        class UBlendSpaceBase* BlendSpace; // 0x48
        class UBlendSpaceBase* PreviousBlendSpace; // 0xd8

    };

    struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer //ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
    {
    //Children Prop Count (Fields): 7
    public:

        struct FPoseLink BasePose; // 0x140
        int32_t LODThreshold; // 0x150
        struct FName SourceSocketName; // 0x154
        struct FName PivotSocketName; // 0x15c
        struct FVector LookAtLocation; // 0x164
        struct FVector SocketAxis; // 0x170
        float Alpha; // 0x17c

    };

    struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
    {
    //Children Prop Count (Fields): 38
    public:

        float LinearDampingOverride; // 0xc8
        float AngularDampingOverride; // 0xcc
        struct FBoneReference RelativeSpaceBone; // 0x130
        struct FBoneReference BoundBone; // 0x140
        struct FBoneReference ChainEnd; // 0x150
        struct FVector BoxExtents; // 0x160
        struct FVector LocalJointOffset; // 0x16c
        float GravityScale; // 0x178
        struct FVector GravityOverride; // 0x17c
        float LinearSpringConstant; // 0x188
        float AngularSpringConstant; // 0x18c
        float WindScale; // 0x190
        struct FVector ComponentLinearAccScale; // 0x194
        struct FVector ComponentLinearVelScale; // 0x1a0
        struct FVector ComponentAppliedLinearAccClamp; // 0x1ac
        float AngularBiasOverride; // 0x1b8
        int32_t NumSolverIterationsPreUpdate; // 0x1bc
        int32_t NumSolverIterationsPostUpdate; // 0x1c0
        struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1c4
        struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x210
        float SphereCollisionRadius; // 0x220
        struct FVector ExternalForce; // 0x224
        struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x230
        enum class AnimPhysCollisionType CollisionType; // 0x240
        enum class AnimPhysSimSpaceType SimulationSpace; // 0x241
        char bUseSphericalLimits; // 0x244
        char bUsePlanarLimit; // 0x244
        char bDoUpdate; // 0x244
        char bDoEval; // 0x244
        char bOverrideLinearDamping; // 0x244
        char bOverrideAngularBias; // 0x244
        char bOverrideAngularDamping; // 0x244
        char bEnableWind; // 0x244
        char bUseGravityOverride; // 0x245
        char bLinearSpring; // 0x245
        char bAngularSpring; // 0x245
        char bChain; // 0x245
        struct FRotationRetargetingInfo RetargetingSettings; // 0x250

    };

    struct FRotationRetargetingInfo //ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
    {
    //Children Prop Count (Fields): 15
    public:

        bool bEnabled; // 0x0
        struct FTransform Source; // 0x10
        struct FTransform Target; // 0x40
        enum class ERotationComponent RotationComponent; // 0x70
        struct FVector TwistAxis; // 0x74
        bool bUseAbsoluteAngle; // 0x80
        float SourceMinimum; // 0x84
        float SourceMaximum; // 0x88
        float TargetMinimum; // 0x8c
        float TargetMaximum; // 0x90
        enum class EEasingFuncType EasingType; // 0x94
        struct FRuntimeFloatCurve CustomCurve; // 0x98
        bool bFlipEasing; // 0x120
        float EasingWeight; // 0x124
        bool bClamp; // 0x128

    };

    struct FAnimPhysPlanarLimit //ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
    {
    //Children Prop Count (Fields): 2
    public:

        struct FBoneReference DrivingBone; // 0x0
        struct FTransform PlaneTransform; // 0x10

    };

    struct FAnimPhysSphericalLimit //ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
    {
    //Children Prop Count (Fields): 4
    public:

        struct FBoneReference DrivingBone; // 0x0
        struct FVector SphereLocalOffset; // 0x10
        float LimitRadius; // 0x1c
        enum class ESphericalLimitType LimitType; // 0x20

    };

    struct FAnimPhysConstraintSetup //ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
    {
    //Children Prop Count (Fields): 12
    public:

        enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x0
        enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x1
        enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x2
        struct FVector LinearAxesMin; // 0x4
        struct FVector LinearAxesMax; // 0x10
        enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c
        enum class AnimPhysTwistAxis TwistAxis; // 0x1d
        enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1e
        float ConeAngle; // 0x20
        struct FVector AngularLimitsMin; // 0x24
        struct FVector AngularLimitsMax; // 0x30
        struct FVector AngularTarget; // 0x3c

    };

    struct FAnimNode_ApplyAdditive : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
    {
    //Children Prop Count (Fields): 10
    public:

        struct FPoseLink base; // 0x10
        struct FPoseLink Additive; // 0x20
        float Alpha; // 0x30
        struct FInputScaleBias AlphaScaleBias; // 0x34
        int32_t LODThreshold; // 0x3c
        struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
        struct FName AlphaCurveName; // 0x88
        struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
        enum class EAnimAlphaInputType AlphaInputType; // 0xc4
        bool bAlphaBoolEnabled; // 0xc5

    };

    struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xc8
        struct TArray<struct FVector> AngularOffsets; // 0xd8

    };

    struct FAngularRangeLimit //ScriptStruct AnimGraphRuntime.AngularRangeLimit
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector LimitMin; // 0x0
        struct FVector LimitMax; // 0xc
        struct FBoneReference Bone; // 0x18

    };

    struct FAnimNode_BlendBoneByChannel : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
    {
    //Children Prop Count (Fields): 6
    public:

        struct FPoseLink A; // 0x10
        struct FPoseLink B; // 0x20
        struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
        float Alpha; // 0x50
        struct FInputScaleBias AlphaScaleBias; // 0x58
        enum class EBoneControlSpace TransformsSpace; // 0x60

    };

    struct FBlendBoneByChannelEntry //ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
    {
    //Children Prop Count (Fields): 5
    public:

        struct FBoneReference SourceBone; // 0x0
        struct FBoneReference TargetBone; // 0x10
        bool bBlendTranslation; // 0x20
        bool bBlendRotation; // 0x21
        bool bBlendScale; // 0x22

    };

    struct FAnimNode_BlendListBase : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
    {
    //Children Prop Count (Fields): 7
    public:

        struct TArray<struct FPoseLink> BlendPose; // 0x10
        struct TArray<float> BlendTime; // 0x20
        enum class EBlendListTransitionType TransitionType; // 0x30
        enum class EAlphaBlendOption BlendType; // 0x31
        bool bResetChildOnActivation; // 0x32
        class UCurveFloat* CustomBlendCurve; // 0x38
        class UBlendProfile* BlendProfile; // 0x40

    };

    struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase //ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
    {
    //Children Prop Count (Fields): 1
    public:

        bool bActiveValue; // 0x98

    };

    struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase //ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<int32_t> EnumToPoseIndex; // 0x98
        char ActiveEnumValue; // 0xa8

    };

    struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase //ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t ActiveChildIndex; // 0x98

    };

    struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer //ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
    {
    //Children Prop Count (Fields): 1
    public:

        float NormalizedTime; // 0xe0

    };

    struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
    {
    //Children Prop Count (Fields): 22
    public:

        struct FBoneReference SourceBone; // 0xc8
        class UCurveFloat* DrivingCurve; // 0xd8
        float Multiplier; // 0xe0
        float RangeMin; // 0xe4
        float RangeMax; // 0xe8
        float RemappedMin; // 0xec
        float RemappedMax; // 0xf0
        struct FName ParameterName; // 0xf4
        struct FBoneReference TargetBone; // 0xfc
        enum class EDrivenDestinationMode DestinationMode; // 0x10c
        enum class EDrivenBoneModificationMode ModificationMode; // 0x10d
        enum class EComponentType SourceComponent; // 0x10e
        char bUseRange; // 0x10f
        char bAffectTargetTranslationX; // 0x10f
        char bAffectTargetTranslationY; // 0x10f
        char bAffectTargetTranslationZ; // 0x10f
        char bAffectTargetRotationX; // 0x10f
        char bAffectTargetRotationY; // 0x10f
        char bAffectTargetRotationZ; // 0x10f
        char bAffectTargetScaleX; // 0x10f
        char bAffectTargetScaleY; // 0x110
        char bAffectTargetScaleZ; // 0x110

    };

    struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
    {
    //Children Prop Count (Fields): 10
    public:

        struct FVector EffectorLocation; // 0xc8
        enum class EBoneControlSpace EffectorLocationSpace; // 0xd4
        struct FBoneSocketTarget EffectorTarget; // 0xe0
        struct FBoneReference TipBone; // 0x140
        struct FBoneReference RootBone; // 0x150
        float Precision; // 0x160
        int32_t MaxIterations; // 0x164
        bool bStartFromTail; // 0x168
        bool bEnableRotationLimit; // 0x169
        struct TArray<float> RotationLimitPerJoints; // 0x170

    };

    struct FBoneSocketTarget //ScriptStruct AnimGraphRuntime.BoneSocketTarget
    {
    //Children Prop Count (Fields): 3
    public:

        bool bUseSocket; // 0x0
        struct FBoneReference BoneReference; // 0x4
        struct FSocketReference SocketReference; // 0x20

    };

    struct FSocketReference //ScriptStruct AnimGraphRuntime.SocketReference
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName SocketName; // 0x30

    };

    struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_Constraint
    {
    //Children Prop Count (Fields): 3
    public:

        struct FBoneReference BoneToModify; // 0xc8
        struct TArray<struct FConstraint> ConstraintSetup; // 0xd8
        struct TArray<float> ConstraintWeights; // 0xe8

    };

    struct FConstraint //ScriptStruct AnimGraphRuntime.Constraint
    {
    //Children Prop Count (Fields): 4
    public:

        struct FBoneReference TargetBone; // 0x0
        enum class EConstraintOffsetOption OffsetOption; // 0x10
        enum class ETransformConstraintType TransformType; // 0x11
        struct FFilterOptionPerAxis PerAxis; // 0x12

    };

    struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
    {
    //Children Prop Count (Fields): 6
    public:

        struct FBoneReference SourceBone; // 0xc8
        struct FBoneReference TargetBone; // 0xd8
        bool bCopyTranslation; // 0xe8
        bool bCopyRotation; // 0xe9
        bool bCopyScale; // 0xea
        enum class EBoneControlSpace ControlSpace; // 0xeb

    };

    struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
    {
    //Children Prop Count (Fields): 9
    public:

        struct FBoneReference SourceBone; // 0xc8
        struct FBoneReference TargetBone; // 0xd8
        bool bCopyTranslation; // 0xe8
        bool bCopyRotation; // 0xe9
        bool bCopyScale; // 0xea
        enum class CopyBoneDeltaMode CopyMode; // 0xeb
        float TranslationMultiplier; // 0xec
        float RotationMultiplier; // 0xf0
        float ScaleMultiplier; // 0xf4

    };

    struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
    {
    //Children Prop Count (Fields): 3
    public:

        struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10
        bool bUseAttachedParent; // 0x18
        bool bCopyCurves; // 0x19

    };

    struct FAnimNode_CurveSource : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
    {
    //Children Prop Count (Fields): 4
    public:

        struct FPoseLink SourcePose; // 0x10
        struct FName SourceBinding; // 0x20
        float Alpha; // 0x28
        struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30

    };

    struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
    {
    //Children Prop Count (Fields): 8
    public:

        struct FTransform EffectorTransform; // 0xd0
        struct FBoneSocketTarget EffectorTarget; // 0x100
        struct FBoneReference TipBone; // 0x160
        struct FBoneReference RootBone; // 0x170
        float Precision; // 0x180
        int32_t MaxIterations; // 0x184
        enum class EBoneControlSpace EffectorTransformSpace; // 0x188
        enum class EBoneRotationSource EffectorRotationSource; // 0x189

    };

    struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
    {
    //Children Prop Count (Fields): 6
    public:

        struct FBoneReference RightHandFK; // 0xc8
        struct FBoneReference LeftHandFK; // 0xd8
        struct FBoneReference RightHandIK; // 0xe8
        struct FBoneReference LeftHandIK; // 0xf8
        struct TArray<struct FBoneReference> IKBonesToMove; // 0x108
        float HandFKWeight; // 0x118

    };

    struct FAnimNode_LayeredBoneBlend : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
    {
    //Children Prop Count (Fields): 12
    public:

        struct FPoseLink BasePose; // 0x10
        struct TArray<struct FPoseLink> BlendPoses; // 0x20
        struct TArray<struct FInputBlendPose> LayerSetup; // 0x30
        struct TArray<float> BlendWeights; // 0x40
        bool bMeshSpaceRotationBlend; // 0x50
        bool bMeshSpaceScaleBlend; // 0x51
        enum class ECurveBlendOption CurveBlendOption; // 0x52
        bool bBlendRootMotionBasedOnRootBone; // 0x53
        int32_t LODThreshold; // 0x58
        struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60
        struct FGuid SkeletonGuid; // 0x70
        struct FGuid VirtualBoneGuid; // 0x80

    };

    struct FInputBlendPose //ScriptStruct Engine.InputBlendPose
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FBranchFilter> BranchFilters; // 0x0

    };

    struct FBranchFilter //ScriptStruct Engine.BranchFilter
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName BoneName; // 0x0
        int32_t BlendDepth; // 0x8

    };

    struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_LegIK
    {
    //Children Prop Count (Fields): 3
    public:

        float ReachPrecision; // 0xc8
        int32_t MaxIterations; // 0xcc
        struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xd0

    };

    struct FAnimLegIKDefinition //ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
    {
    //Children Prop Count (Fields): 8
    public:

        struct FBoneReference IKFootBone; // 0x0
        struct FBoneReference FKFootBone; // 0x10
        int32_t NumBonesInLimb; // 0x20
        float MinRotationAngle; // 0x24
        enum class EAxis FootBoneForwardAxis; // 0x28
        enum class EAxis HingeRotationAxis; // 0x29
        bool bEnableRotationLimit; // 0x2a
        bool bEnableKneeTwistCorrection; // 0x2b

    };

    struct FAnimLegIKData //ScriptStruct AnimGraphRuntime.AnimLegIKData
    {
    public:


    };

    struct FIKChain //ScriptStruct AnimGraphRuntime.IKChain
    {
    public:


    };

    struct FIKChainLink //ScriptStruct AnimGraphRuntime.IKChainLink
    {
    public:


    };

    struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_LookAt
    {
    //Children Prop Count (Fields): 10
    public:

        struct FBoneReference BoneToModify; // 0xc8
        struct FBoneSocketTarget LookAtTarget; // 0xe0
        struct FVector LookAtLocation; // 0x140
        struct FAxis LookAt_Axis; // 0x14c
        bool bUseLookUpAxis; // 0x15c
        enum class EInterpolationBlend InterpolationType; // 0x15d
        struct FAxis LookUp_Axis; // 0x160
        float LookAtClamp; // 0x170
        float InterpolationTime; // 0x174
        float InterpolationTriggerThreashold; // 0x178

    };

    struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPoseLink base; // 0x10
        struct FPoseLink Additive; // 0x20
        bool bMeshSpaceAdditive; // 0x30

    };

    struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
    {
    //Children Prop Count (Fields): 10
    public:

        struct FBoneReference BoneToModify; // 0xc8
        struct FVector Translation; // 0xd8
        struct FRotator Rotation; // 0xe4
        struct FVector Scale; // 0xf0
        enum class EBoneModificationMode TranslationMode; // 0xfc
        enum class EBoneModificationMode RotationMode; // 0xfd
        enum class EBoneModificationMode ScaleMode; // 0xfe
        enum class EBoneControlSpace TranslationSpace; // 0xff
        enum class EBoneControlSpace RotationSpace; // 0x100
        enum class EBoneControlSpace ScaleSpace; // 0x101

    };

    struct FAnimNode_ModifyCurve : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
    {
    //Children Prop Count (Fields): 5
    public:

        struct FPoseLink SourcePose; // 0x10
        struct TArray<float> CurveValues; // 0x20
        struct TArray<struct FName> CurveNames; // 0x30
        float Alpha; // 0x50
        enum class EModifyCurveApplyMode ApplyMode; // 0x54

    };

    struct FAnimNode_MultiWayBlend : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FPoseLink> Poses; // 0x10
        struct TArray<float> DesiredAlphas; // 0x20
        struct FInputScaleBias AlphaScaleBias; // 0x40
        bool bAdditiveNode; // 0x48
        bool bNormalizeAlpha; // 0x49

    };

    struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
    {
    //Children Prop Count (Fields): 6
    public:

        struct FBoneReference BoneToObserve; // 0xc8
        enum class EBoneControlSpace DisplaySpace; // 0xd8
        bool bRelativeToRefPose; // 0xd9
        struct FVector Translation; // 0xdc
        struct FRotator Rotation; // 0xe8
        struct FVector Scale; // 0xf4

    };

    struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase //ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
    {
    //Children Prop Count (Fields): 1
    public:

        class UPoseAsset* PoseAsset; // 0x30

    };

    struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler //ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPoseLink SourcePose; // 0x78
        enum class EAlphaBlendOption BlendOption; // 0x88
        class UCurveFloat* CustomCurve; // 0x90

    };

    struct FAnimNode_PoseByName : FAnimNode_PoseHandler //ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName PoseName; // 0x78
        float PoseWeight; // 0x80

    };

    struct FAnimNode_PoseDriver : FAnimNode_PoseHandler //ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
    {
    //Children Prop Count (Fields): 9
    public:

        struct FPoseLink SourcePose; // 0x78
        struct TArray<struct FBoneReference> SourceBones; // 0x88
        struct TArray<struct FBoneReference> OnlyDriveBones; // 0x98
        struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xa8
        struct FBoneReference EvalSpaceBone; // 0xe8
        struct FRBFParams RBFParams; // 0xf8
        enum class EPoseDriverSource DriveSource; // 0x124
        enum class EPoseDriverOutput DriveOutput; // 0x125
        char bOnlyDriveSelectedBones; // 0x126

    };

    struct FRBFParams //ScriptStruct AnimGraphRuntime.RBFParams
    {
    //Children Prop Count (Fields): 11
    public:

        int32_t TargetDimensions; // 0x0
        enum class ERBFSolverType SolverType; // 0x4
        float Radius; // 0x8
        enum class ERBFFunctionType Function; // 0xc
        enum class ERBFDistanceMethod DistanceMethod; // 0xd
        enum class EBoneAxis TwistAxis; // 0xe
        float WeightThreshold; // 0x10
        enum class ERBFNormalizeMethod NormalizeMethod; // 0x14
        struct FVector MedianReference; // 0x18
        float MedianMin; // 0x24
        float MedianMax; // 0x28

    };

    struct FPoseDriverTarget //ScriptStruct AnimGraphRuntime.PoseDriverTarget
    {
    //Children Prop Count (Fields): 9
    public:

        struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x0
        struct FRotator TargetRotation; // 0x10
        float TargetScale; // 0x1c
        enum class ERBFDistanceMethod DistanceMethod; // 0x20
        enum class ERBFFunctionType FunctionType; // 0x21
        bool bApplyCustomCurve; // 0x22
        struct FRichCurve CustomCurve; // 0x28
        struct FName DrivenName; // 0xa8
        bool bIsHidden; // 0xb8

    };

    struct FPoseDriverTransform //ScriptStruct AnimGraphRuntime.PoseDriverTransform
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector TargetTranslation; // 0x0
        struct FRotator TargetRotation; // 0xc

    };

    struct FAnimNode_PoseSnapshot : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName SnapshotName; // 0x10
        struct FPoseSnapshot Snapshot; // 0x18
        enum class ESnapshotSourceMode Mode; // 0x50

    };

    struct FPoseSnapshot //ScriptStruct Engine.PoseSnapshot
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FTransform> LocalTransforms; // 0x0
        struct TArray<struct FName> BoneNames; // 0x10
        struct FName SkeletalMeshName; // 0x20
        struct FName SnapshotName; // 0x28
        bool bIsValid; // 0x30

    };

    struct FAnimNode_RandomPlayer : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10
        bool bShuffleMode; // 0x70

    };

    struct FRandomPlayerSequenceEntry //ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
    {
    //Children Prop Count (Fields): 7
    public:

        class UAnimSequence* Sequence; // 0x0
        float ChanceToPlay; // 0x8
        int32_t MinLoopCount; // 0xc
        int32_t MaxLoopCount; // 0x10
        float MinPlayRate; // 0x14
        float MaxPlayRate; // 0x18
        struct FAlphaBlend BlendIn; // 0x20

    };

    struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
    {
    public:


    };

    struct FAnimNode_RefPose : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_RefPose
    {
    //Children Prop Count (Fields): 1
    public:

        enum class ERefPoseType RefPoseType; // 0x10

    };

    struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
    {
    public:


    };

    struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
    {
    //Children Prop Count (Fields): 17
    public:

        class UPhysicsAsset* OverridePhysicsAsset; // 0xc8
        struct FVector OverrideWorldGravity; // 0x168
        struct FVector ExternalForce; // 0x174
        struct FVector ComponentLinearAccScale; // 0x180
        struct FVector ComponentLinearVelScale; // 0x18c
        struct FVector ComponentAppliedLinearAccClamp; // 0x198
        float CachedBoundsScale; // 0x1a4
        struct FBoneReference BaseBoneRef; // 0x1a8
        enum class ECollisionChannel OverlapChannel; // 0x1b8
        enum class ESimulationSpace SimulationSpace; // 0x1b9
        bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ba
        char bEnableWorldGeometry; // 0x1bc
        char bOverrideWorldGravity; // 0x1bc
        char bTransferBoneVelocities; // 0x1bc
        char bFreezeIncomingPoseOnStart; // 0x1bc
        char bClampLinearTranslationLimitToRefPose; // 0x1bc
        struct FSolverIterations OverrideSolverIterations; // 0x1c0

    };

    struct FSolverIterations //ScriptStruct Engine.SolverIterations
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t SolverIterations; // 0x0
        int32_t JointIterations; // 0x4
        int32_t CollisionIterations; // 0x8
        int32_t SolverPushOutIterations; // 0xc
        int32_t JointPushOutIterations; // 0x10
        int32_t CollisionPushOutIterations; // 0x14

    };

    struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
    {
    //Children Prop Count (Fields): 17
    public:

        class UPhysicsAsset* OverridePhysicsAsset; // 0xc8
        struct FVector OverrideWorldGravity; // 0xd0
        struct FVector ExternalForce; // 0xdc
        struct FVector ComponentLinearAccScale; // 0xe8
        struct FVector ComponentLinearVelScale; // 0xf4
        struct FVector ComponentAppliedLinearAccClamp; // 0x100
        float CachedBoundsScale; // 0x10c
        struct FBoneReference BaseBoneRef; // 0x110
        enum class ECollisionChannel OverlapChannel; // 0x120
        enum class ESimulationSpace SimulationSpace; // 0x121
        bool bForceDisableCollisionBetweenConstraintBodies; // 0x122
        char bEnableWorldGeometry; // 0x123
        char bOverrideWorldGravity; // 0x123
        char bTransferBoneVelocities; // 0x123
        char bFreezeIncomingPoseOnStart; // 0x123
        char bClampLinearTranslationLimitToRefPose; // 0x123
        struct FSolverIterations OverrideSolverIterations; // 0x124

    };

    struct FAnimNode_RotateRootBone : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
    {
    //Children Prop Count (Fields): 6
    public:

        struct FPoseLink BasePose; // 0x10
        float Pitch; // 0x20
        float Yaw; // 0x24
        struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
        struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
        struct FRotator MeshToComponent; // 0x88

    };

    struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
    {
    //Children Prop Count (Fields): 5
    public:

        struct FBoneReference TargetBone; // 0xc8
        struct FBoneReference SourceBone; // 0xd8
        float Multiplier; // 0xe8
        enum class EBoneAxis RotationAxisToRefer; // 0xec
        bool bIsAdditive; // 0xed

    };

    struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer //ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
    {
    //Children Prop Count (Fields): 9
    public:

        struct FPoseLink BasePose; // 0xe0
        int32_t LODThreshold; // 0xf0
        float Alpha; // 0xf4
        struct FInputScaleBias AlphaScaleBias; // 0xf8
        struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x100
        struct FName AlphaCurveName; // 0x148
        struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x150
        enum class EAnimAlphaInputType AlphaInputType; // 0x184
        bool bAlphaBoolEnabled; // 0x185

    };

    struct FAnimNode_ScaleChainLength : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
    {
    //Children Prop Count (Fields): 8
    public:

        struct FPoseLink InputPose; // 0x10
        float DefaultChainLength; // 0x20
        struct FBoneReference ChainStartBone; // 0x24
        struct FBoneReference ChainEndBone; // 0x34
        struct FVector TargetLocation; // 0x44
        float Alpha; // 0x50
        struct FInputScaleBias AlphaScaleBias; // 0x58
        enum class EScaleChainInitialLength ChainInitialLength; // 0x60

    };

    struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase //ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
    {
    //Children Prop Count (Fields): 6
    public:

        class UAnimSequenceBase* Sequence; // 0x30
        float ExplicitTime; // 0x38
        bool bShouldLoop; // 0x3c
        bool bTeleportToExplicitTime; // 0x3d
        enum class ESequenceEvalReinit ReinitializationBehavior; // 0x3e
        float StartPosition; // 0x40

    };

    struct FAnimNode_Slot : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_Slot
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPoseLink Source; // 0x10
        struct FName SlotName; // 0x20
        bool bAlwaysUpdateSourcePose; // 0x28

    };

    struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
    {
    //Children Prop Count (Fields): 12
    public:

        struct FBoneReference StartBone; // 0xc8
        struct FBoneReference EndBone; // 0xd8
        enum class ESplineBoneAxis BoneAxis; // 0xe8
        bool bAutoCalculateSpline; // 0xe9
        int32_t PointCount; // 0xec
        struct TArray<struct FTransform> ControlPoints; // 0xf0
        float Roll; // 0x100
        float TwistStart; // 0x104
        float TwistEnd; // 0x108
        struct FAlphaBlend TwistBlend; // 0x110
        float Stretch; // 0x140
        float Offset; // 0x144

    };

    struct FSplineIKCachedBoneData //ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FBoneReference Bone; // 0x0
        int32_t RefSkeletonIndex; // 0x10

    };

    struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
    {
    //Children Prop Count (Fields): 12
    public:

        struct FBoneReference SpringBone; // 0xc8
        float MaxDisplacement; // 0xd8
        float SpringStiffness; // 0xdc
        float SpringDamping; // 0xe0
        float ErrorResetThresh; // 0xe4
        char bLimitDisplacement; // 0x124
        char bTranslateX; // 0x124
        char bTranslateY; // 0x124
        char bTranslateZ; // 0x124
        char bRotateX; // 0x124
        char bRotateY; // 0x124
        char bRotateZ; // 0x124

    };

    struct FAnimNode_Root : FAnimNode_Base //ScriptStruct Engine.AnimNode_Root
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPoseLink Result; // 0x10
        struct FName Name; // 0x20
        struct FName Group; // 0x28

    };

    struct FAnimNode_StateResult : FAnimNode_Root //ScriptStruct AnimGraphRuntime.AnimNode_StateResult
    {
    public:


    };

    struct FAnimNode_Trail : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_Trail
    {
    //Children Prop Count (Fields): 20
    public:

        struct FBoneReference TrailBone; // 0x100
        int32_t ChainLength; // 0x110
        enum class EAxis ChainBoneAxis; // 0x114
        char bInvertChainBoneAxis; // 0x115
        char bLimitStretch; // 0x115
        char bLimitRotation; // 0x115
        char bUsePlanarLimit; // 0x115
        char bActorSpaceFakeVel; // 0x115
        char bReorientParentToChild; // 0x115
        float MaxDeltaTime; // 0x118
        float RelaxationSpeedScale; // 0x11c
        struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120
        struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8
        struct TArray<struct FRotationLimit> RotationLimits; // 0x1d8
        struct TArray<struct FVector> RotationOffsets; // 0x1e8
        struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8
        float StretchLimit; // 0x208
        struct FVector FakeVelocity; // 0x20c
        struct FBoneReference BaseJoint; // 0x218
        float LastBoneRotationAnimAlphaBlend; // 0x228

    };

    struct FRotationLimit //ScriptStruct AnimGraphRuntime.RotationLimit
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector LimitMin; // 0x0
        struct FVector LimitMax; // 0xc

    };

    struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
    {
    //Children Prop Count (Fields): 7
    public:

        struct FReferenceBoneFrame BaseFrame; // 0xc8
        struct FReferenceBoneFrame TwistFrame; // 0xe8
        struct FAxis TwistPlaneNormalAxis; // 0x108
        float RangeMax; // 0x118
        float RemappedMin; // 0x11c
        float RemappedMax; // 0x120
        struct FAnimCurveParam Curve; // 0x124

    };

    struct FAnimCurveParam //ScriptStruct Engine.AnimCurveParam
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName Name; // 0x0

    };

    struct FReferenceBoneFrame //ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
    {
    //Children Prop Count (Fields): 2
    public:

        struct FBoneReference Bone; // 0x0
        struct FAxis Axis; // 0x10

    };

    struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase //ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
    {
    //Children Prop Count (Fields): 14
    public:

        struct FBoneReference IKBone; // 0xc8
        float StartStretchRatio; // 0xd8
        float MaxStretchScale; // 0xdc
        struct FVector EffectorLocation; // 0xe0
        struct FBoneSocketTarget EffectorTarget; // 0xf0
        struct FVector JointTargetLocation; // 0x150
        struct FBoneSocketTarget JointTarget; // 0x160
        struct FAxis TwistAxis; // 0x1c0
        enum class EBoneControlSpace EffectorLocationSpace; // 0x1d0
        enum class EBoneControlSpace JointTargetLocationSpace; // 0x1d1
        char bAllowStretching; // 0x1d2
        char bTakeRotationFromEffectorSpace; // 0x1d2
        char bMaintainEffectorRelRot; // 0x1d2
        char bAllowTwist; // 0x1d2

    };

    struct FAnimNode_TwoWayBlend : FAnimNode_Base //ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
    {
    //Children Prop Count (Fields): 10
    public:

        struct FPoseLink A; // 0x10
        struct FPoseLink B; // 0x20
        enum class EAnimAlphaInputType AlphaInputType; // 0x30
        char bAlphaBoolEnabled; // 0x31
        char bResetChildOnActivation; // 0x31
        float Alpha; // 0x34
        struct FInputScaleBias AlphaScaleBias; // 0x38
        struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
        struct FName AlphaCurveName; // 0x88
        struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90

    };

    struct FAnimSequencerInstanceProxy : FAnimInstanceProxy //ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
    {
    public:


    };

    struct FPositionHistory //ScriptStruct AnimGraphRuntime.PositionHistory
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FVector> Positions; // 0x0
        float Range; // 0x10

    };

    struct FRBFEntry //ScriptStruct AnimGraphRuntime.RBFEntry
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<float> Values; // 0x0

    };

    struct FRBFTarget : FRBFEntry //ScriptStruct AnimGraphRuntime.RBFTarget
    {
    //Children Prop Count (Fields): 5
    public:

        float ScaleFactor; // 0x10
        bool bApplyCustomCurve; // 0x14
        struct FRichCurve CustomCurve; // 0x18
        enum class ERBFDistanceMethod DistanceMethod; // 0x98
        enum class ERBFFunctionType FunctionType; // 0x99

    };

    struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
    {
    //Children Prop Count (Fields): 9
    public:

        struct FMovieSceneObjectBindingID AttachBindingID; // 0x20
        struct FName AttachSocketName; // 0x38
        struct FName AttachComponentName; // 0x40
        enum class EAttachmentRule AttachmentLocationRule; // 0x48
        enum class EAttachmentRule AttachmentRotationRule; // 0x49
        enum class EAttachmentRule AttachmentScaleRule; // 0x4a
        enum class EDetachmentRule DetachmentLocationRule; // 0x4b
        enum class EDetachmentRule DetachmentRotationRule; // 0x4c
        enum class EDetachmentRule DetachmentScaleRule; // 0x4d

    };

    struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
    {
    //Children Prop Count (Fields): 7
    public:

        struct FMovieSceneObjectBindingID PathBindingID; // 0x20
        struct FMovieSceneFloatChannel TimingCurve; // 0x38
        enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
        enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
        char bFollow; // 0xdc
        char bReverse; // 0xdc
        char bForceUpright; // 0xdc

    };

    struct FMovieSceneTransformMask //ScriptStruct MovieSceneTracks.MovieSceneTransformMask
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t mask; // 0x0

    };

    struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct //ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector Location; // 0x8
        struct FRotator Rotation; // 0x14
        struct FVector Scale; // 0x20
        struct FFrameNumber Time; // 0x2c

    };

    struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct //ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Scale; // 0x8
        struct FFrameNumber Time; // 0x14

    };

    struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct //ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
    {
    //Children Prop Count (Fields): 2
    public:

        struct FRotator Rotation; // 0x8
        struct FFrameNumber Time; // 0x14

    };

    struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct //ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Location; // 0x8
        struct FFrameNumber Time; // 0x14

    };

    struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieScene3DTransformTemplateData TemplateData; // 0x20

    };

    struct FMovieScene3DTransformTemplateData //ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
    {
    //Children Prop Count (Fields): 7
    public:

        struct FMovieSceneFloatChannel TranslationCurve; // 0x0
        struct FMovieSceneFloatChannel RotationCurve; // 0x1e0
        struct FMovieSceneFloatChannel ScaleCurve; // 0x3c0
        struct FMovieSceneFloatChannel ManualWeight; // 0x5a0
        enum class EMovieSceneBlendType BlendType; // 0x640
        struct FMovieSceneTransformMask mask; // 0x644
        bool bUseQuaternionInterpolation; // 0x648

    };

    struct FMovieSceneActorReferenceData : FMovieSceneChannel //ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FFrameNumber> KeyTimes; // 0x8
        struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40

    };

    struct FMovieSceneActorReferenceKey //ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneObjectBindingID Object; // 0x0
        struct FName ComponentName; // 0x18
        struct FName SocketName; // 0x20

    };

    struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieScenePropertySectionData PropertyData; // 0x20
        struct FMovieSceneActorReferenceData ActorReferenceData; // 0x48

    };

    struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        class UMovieSceneAudioSection* AudioSection; // 0x20

    };

    struct FMovieSceneCameraAnimSectionData //ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
    {
    //Children Prop Count (Fields): 6
    public:

        class UCameraAnim* CameraAnim; // 0x0
        float PlayRate; // 0x8
        float PlayScale; // 0xc
        float BlendInTime; // 0x10
        float BlendOutTime; // 0x14
        bool bLooping; // 0x18

    };

    struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
    {
    public:


    };

    struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneCameraShakeSectionData SourceData; // 0x20
        struct FFrameNumber SectionStartTime; // 0x40

    };

    struct FMovieSceneCameraShakeSectionData //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
    {
    //Children Prop Count (Fields): 4
    public:

        class UCameraShake* ShakeClass; // 0x0
        float PlayScale; // 0x8
        enum class ECameraAnimPlaySpace PlaySpace; // 0xc
        struct FRotator UserDefinedPlaySpace; // 0x10

    };

    struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate //ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneCameraAnimSectionData SourceData; // 0x20
        struct FFrameNumber SectionStartTime; // 0x40

    };

    struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
    {
    //Children Prop Count (Fields): 4
    public:

        struct FMovieSceneObjectBindingID CameraBindingID; // 0x20
        struct FTransform CutTransform; // 0x40
        bool bHasCutTransform; // 0x70
        bool bIsFinalSection; // 0x71

    };

    struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct //ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLinearColor Color; // 0x8
        struct FFrameNumber Time; // 0x18

    };

    struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneFloatChannel Curves; // 0x48
        enum class EMovieSceneBlendType BlendType; // 0x2c8

    };

    struct FMovieSceneEvent //ScriptStruct MovieSceneTracks.MovieSceneEvent
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneEventPtrs Ptrs; // 0x0

    };

    struct FMovieSceneEventPtrs //ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
    {
    //Children Prop Count (Fields): 2
    public:

        class UFunction* Function; // 0x0
        struct TFieldPath<FProperty> BoundObjectProperty; // 0x8

    };

    struct FMovieSceneEventPayloadVariable //ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString Value; // 0x0

    };

    struct FMovieSceneEventChannel : FMovieSceneChannel //ScriptStruct MovieSceneTracks.MovieSceneEventChannel
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FFrameNumber> KeyTimes; // 0x8
        struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18

    };

    struct FMovieSceneEventSectionData : FMovieSceneChannel //ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FFrameNumber> Times; // 0x8
        struct TArray<struct FEventPayload> KeyValues; // 0x18

    };

    struct FEventPayload //ScriptStruct MovieSceneTracks.EventPayload
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName EventName; // 0x0
        struct FMovieSceneEventParameters Parameters; // 0x8

    };

    struct FMovieSceneEventParameters //ScriptStruct MovieSceneTracks.MovieSceneEventParameters
    {
    public:


    };

    struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x20
        char bFireEventsWhenForwards; // 0x30
        char bFireEventsWhenBackwards; // 0x30

    };

    struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase //ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneEventPtrs EventToTrigger; // 0x38

    };

    struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase //ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FFrameNumber> EventTimes; // 0x38
        struct TArray<struct FMovieSceneEventPtrs> Events; // 0x48

    };

    struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase //ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneEventSectionData EventData; // 0x38

    };

    struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneFloatChannel FadeCurve; // 0x20
        struct FLinearColor FadeColor; // 0xc0
        char bFadeAudio; // 0xd0

    };

    struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ELevelVisibility Visibility; // 0x20
        struct TArray<struct FName> LevelNames; // 0x28

    };

    struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
    {
    //Children Prop Count (Fields): 6
    public:

        struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20
        struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30
        struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
        struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50
        struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60
        struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70

    };

    struct FTransformParameterNameAndCurves //ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName ParameterName; // 0x0
        struct FMovieSceneFloatChannel Translation; // 0x8
        struct FMovieSceneFloatChannel Rotation; // 0x1e8
        struct FMovieSceneFloatChannel Scale; // 0x3c8

    };

    struct FColorParameterNameAndCurves //ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName ParameterName; // 0x0
        struct FMovieSceneFloatChannel RedCurve; // 0x8
        struct FMovieSceneFloatChannel GreenCurve; // 0xa8
        struct FMovieSceneFloatChannel BlueCurve; // 0x148
        struct FMovieSceneFloatChannel AlphaCurve; // 0x1e8

    };

    struct FVectorParameterNameAndCurves //ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName ParameterName; // 0x0
        struct FMovieSceneFloatChannel XCurve; // 0x8
        struct FMovieSceneFloatChannel YCurve; // 0xa8
        struct FMovieSceneFloatChannel ZCurve; // 0x148

    };

    struct FVector2DParameterNameAndCurves //ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName ParameterName; // 0x0
        struct FMovieSceneFloatChannel XCurve; // 0x8
        struct FMovieSceneFloatChannel YCurve; // 0xa8

    };

    struct FBoolParameterNameAndCurve //ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ParameterName; // 0x0
        struct FMovieSceneBoolChannel ParameterCurve; // 0x8

    };

    struct FScalarParameterNameAndCurve //ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ParameterName; // 0x0
        struct FMovieSceneFloatChannel ParameterCurve; // 0x8

    };

    struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        class UMaterialParameterCollection* MPC; // 0x80

    };

    struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneObjectPathChannel ObjectChannel; // 0x48

    };

    struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t MaterialIndex; // 0x80

    };

    struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
    {
    public:


    };

    struct FMovieSceneParticleChannel : FMovieSceneByteChannel //ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
    {
    public:


    };

    struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneParticleChannel ParticleKeys; // 0x20

    };

    struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t MaterialIndex; // 0x20
        struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28

    };

    struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieScene3DTransformTemplateData TemplateData; // 0x48

    };

    struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieScene3DTransformTemplateData TemplateData; // 0x48

    };

    struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMovieSceneFloatChannel ComponentCurves; // 0x48
        int32_t NumChannelsUsed; // 0x2c8
        enum class EMovieSceneBlendType BlendType; // 0x2cc

    };

    struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneStringChannel StringCurve; // 0x48

    };

    struct FMovieSceneStringChannel : FMovieSceneChannel //ScriptStruct MovieSceneTracks.MovieSceneStringChannel
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FFrameNumber> Times; // 0x8
        struct TArray<struct FString> Values; // 0x18
        struct FString DefaultValue; // 0x28
        bool bHasDefaultValue; // 0x38

    };

    struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneIntegerChannel IntegerCurve; // 0x48
        enum class EMovieSceneBlendType BlendType; // 0xd8

    };

    struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneByteChannel EnumCurve; // 0x48

    };

    struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneByteChannel ByteCurve; // 0x48

    };

    struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
    {
    //Children Prop Count (Fields): 2
    public:

        struct FMovieSceneFloatChannel FloatFunction; // 0x48
        enum class EMovieSceneBlendType BlendType; // 0xe8

    };

    struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneBoolChannel BoolCurve; // 0x48

    };

    struct FMovieSceneSkeletalAnimationParams //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
    {
    //Children Prop Count (Fields): 12
    public:

        class UAnimSequenceBase* Animation; // 0x0
        struct FFrameNumber FirstLoopStartFrameOffset; // 0x8
        struct FFrameNumber StartFrameOffset; // 0xc
        struct FFrameNumber EndFrameOffset; // 0x10
        float PlayRate; // 0x14
        char bReverse; // 0x18
        struct FName SlotName; // 0x1c
        struct FMovieSceneFloatChannel Weight; // 0x28
        bool bSkipAnimNotifiers; // 0xc8
        bool bForceCustomMode; // 0xc9
        float StartOffset; // 0xcc
        float EndOffset; // 0xd0

    };

    struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20

    };

    struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameNumber SectionStartTime; // 0xd8
        struct FFrameNumber SectionEndTime; // 0xdc

    };

    struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneFloatChannel SlomoCurve; // 0x20

    };

    struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate //ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMovieSceneBoolChannel Curve; // 0x20

    };

    struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct //ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
    {
    //Children Prop Count (Fields): 1
    public:

        struct FFrameNumber Time; // 0x8

    };

    struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase //ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
    {
    //Children Prop Count (Fields): 1
    public:

        struct FVector4 Vector; // 0x30

    };

    struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase //ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
    {
    //Children Prop Count (Fields): 1
    public:

        struct FVector Vector; // 0x28

    };

    struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase //ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
    {
    //Children Prop Count (Fields): 1
    public:

        struct FVector2D Vector; // 0x28

    };

    struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate //ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
    {
    public:


    };

    struct FCachedPropertyPath //ScriptStruct PropertyPath.CachedPropertyPath
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FPropertyPathSegment> Segments; // 0x0
        class UFunction* CachedFunction; // 0x18

    };

    struct FPropertyPathSegment //ScriptStruct PropertyPath.PropertyPathSegment
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x0
        int32_t ArrayIndex; // 0x8
        class UStruct* Struct; // 0x10

    };

    struct FAnchorData //ScriptStruct UMG.AnchorData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMargin Offsets; // 0x0
        struct FAnchors Anchors; // 0x10
        struct FVector2D Alignment; // 0x20

    };

    struct FDynamicPropertyPath : FCachedPropertyPath //ScriptStruct UMG.DynamicPropertyPath
    {
    public:


    };

    struct FMovieScene2DTransformMask //ScriptStruct UMG.MovieScene2DTransformMask
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t mask; // 0x0

    };

    struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct UMG.MovieScene2DTransformSectionTemplate
    {
    //Children Prop Count (Fields): 6
    public:

        struct FMovieSceneFloatChannel Translation; // 0x48
        struct FMovieSceneFloatChannel Rotation; // 0x188
        struct FMovieSceneFloatChannel Scale; // 0x228
        struct FMovieSceneFloatChannel Shear; // 0x368
        enum class EMovieSceneBlendType BlendType; // 0x4a8
        struct FMovieScene2DTransformMask mask; // 0x4ac

    };

    struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate //ScriptStruct UMG.MovieSceneMarginSectionTemplate
    {
    //Children Prop Count (Fields): 5
    public:

        struct FMovieSceneFloatChannel TopCurve; // 0x48
        struct FMovieSceneFloatChannel LeftCurve; // 0xe8
        struct FMovieSceneFloatChannel RightCurve; // 0x188
        struct FMovieSceneFloatChannel BottomCurve; // 0x228
        enum class EMovieSceneBlendType BlendType; // 0x2c8

    };

    struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate //ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FName> BrushPropertyNamePath; // 0x80

    };

    struct FRichTextStyleRow : FTableRowBase //ScriptStruct UMG.RichTextStyleRow
    {
    //Children Prop Count (Fields): 1
    public:

        struct FTextBlockStyle TextStyle; // 0x8

    };

    struct FRichImageRow : FTableRowBase //ScriptStruct UMG.RichImageRow
    {
    //Children Prop Count (Fields): 1
    public:

        struct FSlateBrush Brush; // 0x8

    };

    struct FSlateMeshVertex //ScriptStruct UMG.SlateMeshVertex
    {
    //Children Prop Count (Fields): 8
    public:

        struct FVector2D Position; // 0x0
        struct FColor Color; // 0x8
        struct FVector2D UV0; // 0xc
        struct FVector2D UV1; // 0x14
        struct FVector2D UV2; // 0x1c
        struct FVector2D UV3; // 0x24
        struct FVector2D UV4; // 0x2c
        struct FVector2D UV5; // 0x34

    };

    struct FSlateChildSize //ScriptStruct UMG.SlateChildSize
    {
    //Children Prop Count (Fields): 2
    public:

        float Value; // 0x0
        enum class ESlateSizeRule SizeRule; // 0x4

    };

    struct FNamedSlotBinding //ScriptStruct UMG.NamedSlotBinding
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        class UWidget* Content; // 0x8

    };

    struct FAnimationEventBinding //ScriptStruct UMG.AnimationEventBinding
    {
    //Children Prop Count (Fields): 4
    public:

        class UWidgetAnimation* Animation; // 0x0
        struct FDelegate Delegate; // 0x8
        enum class EWidgetAnimationEvent AnimationEvent; // 0x18
        struct FName UserTag; // 0x1c

    };

    struct FUserWidgetPool //ScriptStruct UMG.UserWidgetPool
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<class UUserWidget*> ActiveWidgets; // 0x0
        struct TArray<class UUserWidget*> InactiveWidgets; // 0x10

    };

    struct FWidgetAnimationBinding //ScriptStruct UMG.WidgetAnimationBinding
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName WidgetName; // 0x0
        struct FName SlotWidgetName; // 0x8
        struct FGuid AnimationGuid; // 0x10
        bool bIsRootWidget; // 0x20

    };

    struct FBlueprintWidgetAnimationDelegateBinding //ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EWidgetAnimationEvent Action; // 0x0
        struct FName AnimationToBind; // 0x4
        struct FName FunctionNameToBind; // 0xc
        struct FName UserTag; // 0x14

    };

    struct FDelegateRuntimeBinding //ScriptStruct UMG.DelegateRuntimeBinding
    {
    //Children Prop Count (Fields): 5
    public:

        struct FString ObjectName; // 0x0
        struct FName PropertyName; // 0x10
        struct FName FunctionName; // 0x18
        struct FDynamicPropertyPath SourcePath; // 0x20
        enum class EBindingKind Kind; // 0x48

    };

    struct FActorComponentInstanceData //ScriptStruct Engine.ActorComponentInstanceData
    {
    //Children Prop Count (Fields): 7
    public:

        class UObject* SourceComponentTemplate; // 0x8
        enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10
        int32_t SourceComponentTypeSerializedIndex; // 0x14
        struct TArray<char> SavedProperties; // 0x18
        struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
        struct TArray<class UObject*> ReferencedObjects; // 0x38
        struct TArray<struct FName> ReferencedNames; // 0x48

    };

    struct FActorComponentDuplicatedObjectData //ScriptStruct Engine.ActorComponentDuplicatedObjectData
    {
    public:


    };

    struct FSceneComponentInstanceData : FActorComponentInstanceData //ScriptStruct Engine.SceneComponentInstanceData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<class USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x58

    };

    struct FWidgetComponentInstanceData : FSceneComponentInstanceData //ScriptStruct UMG.WidgetComponentInstanceData
    {
    public:


    };

    struct FWidgetNavigationData //ScriptStruct UMG.WidgetNavigationData
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EUINavigationRule Rule; // 0x0
        struct FName WidgetToFocus; // 0x4
        struct TWeakObjectPtr<struct UWidget> Widget; // 0xc
        struct FDelegate CustomDelegate; // 0x14

    };

    struct FCameraLookatTrackingSettings //ScriptStruct CinematicCamera.CameraLookatTrackingSettings
    {
    //Children Prop Count (Fields): 6
    public:

        char bEnableLookAtTracking; // 0x0
        char bDrawDebugLookAtTrackingPosition; // 0x0
        float LookAtTrackingInterpSpeed; // 0x4
        struct TSoftObjectPtr<AActor> ActorToTrack; // 0x18
        struct FVector RelativeOffset; // 0x40
        char bAllowRoll; // 0x4c

    };

    struct FCameraFocusSettings //ScriptStruct CinematicCamera.CameraFocusSettings
    {
    //Children Prop Count (Fields): 8
    public:

        enum class ECameraFocusMethod FocusMethod; // 0x0
        float ManualFocusDistance; // 0x4
        struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
        char bDrawDebugFocusPlane; // 0x40
        struct FColor DebugFocusPlaneColor; // 0x44
        char bSmoothFocusChanges; // 0x48
        float FocusSmoothingInterpSpeed; // 0x4c
        float FocusOffset; // 0x50

    };

    struct FCameraTrackingFocusSettings //ScriptStruct CinematicCamera.CameraTrackingFocusSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct TSoftObjectPtr<AActor> ActorToTrack; // 0x0
        struct FVector RelativeOffset; // 0x28
        char bDrawDebugTrackingFocusPoint; // 0x34

    };

    struct FNamedLensPreset //ScriptStruct CinematicCamera.NamedLensPreset
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Name; // 0x0
        struct FCameraLensSettings LensSettings; // 0x10

    };

    struct FCameraLensSettings //ScriptStruct CinematicCamera.CameraLensSettings
    {
    //Children Prop Count (Fields): 6
    public:

        float MinFocalLength; // 0x0
        float MaxFocalLength; // 0x4
        float MinFStop; // 0x8
        float MaxFStop; // 0xc
        float MinimumFocusDistance; // 0x10
        int32_t DiaphragmBladeCount; // 0x14

    };

    struct FNamedFilmbackPreset //ScriptStruct CinematicCamera.NamedFilmbackPreset
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Name; // 0x0
        struct FCameraFilmbackSettings FilmbackSettings; // 0x10

    };

    struct FCameraFilmbackSettings //ScriptStruct CinematicCamera.CameraFilmbackSettings
    {
    //Children Prop Count (Fields): 3
    public:

        float SensorWidth; // 0x0
        float SensorHeight; // 0x4
        float SensorAspectRatio; // 0x8

    };

    struct FPlatformRuntimeAudioCompressionOverrides //ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
    {
    //Children Prop Count (Fields): 4
    public:

        bool bOverrideCompressionTimes; // 0x0
        float DurationThreshold; // 0x4
        int32_t MaxNumRandomBranches; // 0x8
        int32_t SoundCueQualityIndex; // 0xc

    };

    struct FSoundModulationParameter //ScriptStruct AudioExtensions.SoundModulationParameter
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Control; // 0x0
        float Value; // 0x8

    };

    struct FSoundModulation //ScriptStruct AudioExtensions.SoundModulation
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<class USoundModulationPluginSourceSettingsBase*> Settings; // 0x0

    };

    struct FSubmixEffectDynamicsProcessorSettings //ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
    {
    //Children Prop Count (Fields): 18
    public:

        enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
        enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
        enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2
        float InputGainDb; // 0x4
        float ThresholdDb; // 0x8
        float Ratio; // 0xc
        float KneeBandwidthDb; // 0x10
        float LookAheadMsec; // 0x14
        float AttackTimeMsec; // 0x18
        float ReleaseTimeMsec; // 0x1c
        class USoundSubmix* ExternalSubmix; // 0x20
        char bChannelLinked; // 0x28
        char bAnalogMode; // 0x28
        char bKeyAudition; // 0x28
        float KeyGainDb; // 0x2c
        float OutputGainDb; // 0x30
        struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34
        struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40

    };

    struct FSubmixEffectDynamicProcessorFilterSettings //ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
    {
    //Children Prop Count (Fields): 3
    public:

        char bEnabled; // 0x0
        float Cutoff; // 0x4
        float GainDb; // 0x8

    };

    struct FSubmixEffectSubmixEQSettings //ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x0

    };

    struct FSubmixEffectEQBand //ScriptStruct AudioMixer.SubmixEffectEQBand
    {
    //Children Prop Count (Fields): 4
    public:

        float Frequency; // 0x0
        float Bandwidth; // 0x4
        float GainDb; // 0x8
        char bEnabled; // 0xc

    };

    struct FSubmixEffectReverbSettings //ScriptStruct AudioMixer.SubmixEffectReverbSettings
    {
    //Children Prop Count (Fields): 13
    public:

        float Density; // 0x0
        float Diffusion; // 0x4
        float Gain; // 0x8
        float GainHF; // 0xc
        float DecayTime; // 0x10
        float DecayHFRatio; // 0x14
        float ReflectionsGain; // 0x18
        float ReflectionsDelay; // 0x1c
        float LateGain; // 0x20
        float LateDelay; // 0x24
        float AirAbsorptionGainHF; // 0x28
        float WetLevel; // 0x2c
        float DryLevel; // 0x30

    };

    struct FSubmixEffectReverbFastSettings //ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
    {
    //Children Prop Count (Fields): 14
    public:

        bool bBypass; // 0x0
        float Density; // 0x4
        float Diffusion; // 0x8
        float Gain; // 0xc
        float GainHF; // 0x10
        float DecayTime; // 0x14
        float DecayHFRatio; // 0x18
        float ReflectionsGain; // 0x1c
        float ReflectionsDelay; // 0x20
        float LateGain; // 0x24
        float LateDelay; // 0x28
        float AirAbsorptionGainHF; // 0x2c
        float WetLevel; // 0x30
        float DryLevel; // 0x34

    };

    struct FNetAnalyticsDataConfig //ScriptStruct NetCore.NetAnalyticsDataConfig
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName DataName; // 0x0
        bool bEnabled; // 0x8

    };

    struct FARFilter //ScriptStruct AssetRegistry.ARFilter
    {
    //Children Prop Count (Fields): 8
    public:

        struct TArray<struct FName> PackageNames; // 0x0
        struct TArray<struct FName> PackagePaths; // 0x10
        struct TArray<struct FName> ObjectPaths; // 0x20
        struct TArray<struct FName> ClassNames; // 0x30
        struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90
        bool bRecursivePaths; // 0xe0
        bool bRecursiveClasses; // 0xe1
        bool bIncludeOnlyOnDiskAssets; // 0xe2

    };

    struct FAssetBundleData //ScriptStruct AssetRegistry.AssetBundleData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FAssetBundleEntry> Bundles; // 0x0

    };

    struct FAssetBundleEntry //ScriptStruct AssetRegistry.AssetBundleEntry
    {
    //Children Prop Count (Fields): 3
    public:

        struct FPrimaryAssetId BundleScope; // 0x0
        struct FName BundleName; // 0x10
        struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18

    };

    struct FAssetData //ScriptStruct AssetRegistry.AssetData
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName ObjectPath; // 0x0
        struct FName PackageName; // 0x8
        struct FName PackagePath; // 0x10
        struct FName AssetName; // 0x18
        struct FName AssetClass; // 0x20

    };

    struct FTagAndValue //ScriptStruct AssetRegistry.TagAndValue
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Tag; // 0x0
        struct FString Value; // 0x8

    };

    struct FAssetRegistryDependencyOptions //ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
    {
    //Children Prop Count (Fields): 5
    public:

        bool bIncludeSoftPackageReferences; // 0x0
        bool bIncludeHardPackageReferences; // 0x1
        bool bIncludeSearchableNames; // 0x2
        bool bIncludeSoftManagementReferences; // 0x3
        bool bIncludeHardManagementReferences; // 0x4

    };

    struct FEngineServiceNotification //ScriptStruct EngineMessages.EngineServiceNotification
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Text; // 0x0
        double TimeSeconds; // 0x10

    };

    struct FEngineServiceTerminate //ScriptStruct EngineMessages.EngineServiceTerminate
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString UserName; // 0x0

    };

    struct FEngineServiceExecuteCommand //ScriptStruct EngineMessages.EngineServiceExecuteCommand
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Command; // 0x0
        struct FString UserName; // 0x10

    };

    struct FEngineServiceAuthGrant //ScriptStruct EngineMessages.EngineServiceAuthGrant
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString UserName; // 0x0
        struct FString UserToGrant; // 0x10

    };

    struct FEngineServiceAuthDeny //ScriptStruct EngineMessages.EngineServiceAuthDeny
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString UserName; // 0x0
        struct FString UserToDeny; // 0x10

    };

    struct FEngineServicePong //ScriptStruct EngineMessages.EngineServicePong
    {
    //Children Prop Count (Fields): 7
    public:

        struct FString CurrentLevel; // 0x0
        int32_t EngineVersion; // 0x10
        bool HasBegunPlay; // 0x14
        struct FGuid InstanceId; // 0x18
        struct FString InstanceType; // 0x28
        struct FGuid SessionId; // 0x38
        float WorldTimeSeconds; // 0x48

    };

    struct FEngineServicePing //ScriptStruct EngineMessages.EngineServicePing
    {
    public:


    };

    struct FGameplayTagQuery //ScriptStruct GameplayTags.GameplayTagQuery
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t TokenStreamVersion; // 0x0
        struct TArray<struct FGameplayTag> TagDictionary; // 0x8
        struct TArray<char> QueryTokenStream; // 0x18
        struct FString UserDescription; // 0x28
        struct FString AutoDescription; // 0x38

    };

    struct FGameplayTag //ScriptStruct GameplayTags.GameplayTag
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName TagName; // 0x0

    };

    struct FGameplayTagCreationWidgetHelper //ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
    {
    public:


    };

    struct FGameplayTagReferenceHelper //ScriptStruct GameplayTags.GameplayTagReferenceHelper
    {
    public:


    };

    struct FGameplayTagContainer //ScriptStruct GameplayTags.GameplayTagContainer
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FGameplayTag> GameplayTags; // 0x0
        struct TArray<struct FGameplayTag> ParentTags; // 0x10

    };

    struct FGameplayTagNode //ScriptStruct GameplayTags.GameplayTagNode
    {
    public:


    };

    struct FGameplayTagSource //ScriptStruct GameplayTags.GameplayTagSource
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName SourceName; // 0x0
        enum class EGameplayTagSourceType SourceType; // 0x8
        class UGameplayTagsList* SourceTagList; // 0x10
        class URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18

    };

    struct FGameplayTagTableRow : FTableRowBase //ScriptStruct GameplayTags.GameplayTagTableRow
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Tag; // 0x8
        struct FString DevComment; // 0x10

    };

    struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow //ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
    {
    //Children Prop Count (Fields): 1
    public:

        bool bAllowNonRestrictedChildren; // 0x20

    };

    struct FRestrictedConfigInfo //ScriptStruct GameplayTags.RestrictedConfigInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString RestrictedConfigName; // 0x0
        struct TArray<struct FString> Owners; // 0x10

    };

    struct FGameplayTagCategoryRemap //ScriptStruct GameplayTags.GameplayTagCategoryRemap
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString BaseCategory; // 0x0
        struct TArray<struct FString> RemapCategories; // 0x10

    };

    struct FGameplayTagRedirect //ScriptStruct GameplayTags.GameplayTagRedirect
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName OldTagName; // 0x0
        struct FName NewTagName; // 0x8

    };

    struct FUVMapSettings //ScriptStruct StaticMeshDescription.UVMapSettings
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector Size; // 0x0
        struct FVector2D UVTile; // 0xc
        struct FVector Position; // 0x14
        struct FRotator Rotation; // 0x20
        struct FVector Scale; // 0x2c

    };

    struct FRecordedTransformTrack //ScriptStruct GeometryCollectionCore.RecordedTransformTrack
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FRecordedFrame> Records; // 0x0

    };

    struct FRecordedFrame //ScriptStruct GeometryCollectionCore.RecordedFrame
    {
    //Children Prop Count (Fields): 8
    public:

        struct TArray<struct FTransform> Transforms; // 0x0
        struct TArray<int32_t> TransformIndices; // 0x10
        struct TArray<int32_t> PreviousTransformIndices; // 0x20
        struct TArray<bool> DisabledFlags; // 0x30
        struct TArray<struct FSolverCollisionData> Collisions; // 0x40
        struct TArray<struct FSolverBreakingData> Breakings; // 0x50
        struct TSet<struct FSolverTrailingData> Trailings; // 0x60
        float Timestamp; // 0xb0

    };

    struct FSolverTrailingData //ScriptStruct GeometryCollectionCore.SolverTrailingData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector Location; // 0x0
        struct FVector Velocity; // 0xc
        struct FVector AngularVelocity; // 0x18
        float Mass; // 0x24
        int32_t ParticleIndex; // 0x28
        int32_t ParticleIndexMesh; // 0x2c

    };

    struct FSolverBreakingData //ScriptStruct GeometryCollectionCore.SolverBreakingData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector Location; // 0x0
        struct FVector Velocity; // 0xc
        struct FVector AngularVelocity; // 0x18
        float Mass; // 0x24
        int32_t ParticleIndex; // 0x28
        int32_t ParticleIndexMesh; // 0x2c

    };

    struct FSolverCollisionData //ScriptStruct GeometryCollectionCore.SolverCollisionData
    {
    //Children Prop Count (Fields): 13
    public:

        struct FVector Location; // 0x0
        struct FVector AccumulatedImpulse; // 0xc
        struct FVector Normal; // 0x18
        struct FVector Velocity1; // 0x24
        struct FVector Velocity2; // 0x30
        struct FVector AngularVelocity1; // 0x3c
        struct FVector AngularVelocity2; // 0x48
        float Mass1; // 0x54
        float Mass2; // 0x58
        int32_t ParticleIndex; // 0x5c
        int32_t LevelsetIndex; // 0x60
        int32_t ParticleIndexMesh; // 0x64
        int32_t LevelsetIndexMesh; // 0x68

    };

    struct FSolverBreakingFilterSettings //ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
    {
    //Children Prop Count (Fields): 4
    public:

        bool FilterEnabled; // 0x0
        float MinMass; // 0x4
        float MinSpeed; // 0x8
        float MinVolume; // 0xc

    };

    struct FSolverCollisionFilterSettings //ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
    {
    //Children Prop Count (Fields): 4
    public:

        bool FilterEnabled; // 0x0
        float MinMass; // 0x4
        float MinSpeed; // 0x8
        float MinImpulse; // 0xc

    };

    struct FSolverTrailingFilterSettings //ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
    {
    //Children Prop Count (Fields): 4
    public:

        bool FilterEnabled; // 0x0
        float MinMass; // 0x4
        float MinSpeed; // 0x8
        float MinVolume; // 0xc

    };

    struct FClothCollisionData //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x0
        struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
        struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20
        struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30

    };

    struct FClothCollisionPrim_Box //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector LocalPosition; // 0x0
        struct FQuat LocalRotation; // 0x10
        struct FVector HalfExtents; // 0x20
        int32_t BoneIndex; // 0x2c

    };

    struct FClothCollisionPrim_Convex //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FPlane> Planes; // 0x0
        struct TArray<struct FVector> SurfacePoints; // 0x10
        int32_t BoneIndex; // 0x20

    };

    struct FClothCollisionPrim_SphereConnection //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t SphereIndices; // 0x0

    };

    struct FClothCollisionPrim_Sphere //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t BoneIndex; // 0x0
        float Radius; // 0x4
        struct FVector LocalPosition; // 0x8

    };

    struct FClothVertBoneData //ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t NumInfluences; // 0x0
        uint16_t BoneIndices; // 0x4
        float BoneWeights; // 0x1c

    };

    struct FEyeTrackerStereoGazeData //ScriptStruct EyeTracker.EyeTrackerStereoGazeData
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector LeftEyeOrigin; // 0x0
        struct FVector LeftEyeDirection; // 0xc
        struct FVector RightEyeOrigin; // 0x18
        struct FVector RightEyeDirection; // 0x24
        struct FVector FixationPoint; // 0x30
        float ConfidenceValue; // 0x3c

    };

    struct FEyeTrackerGazeData //ScriptStruct EyeTracker.EyeTrackerGazeData
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector GazeOrigin; // 0x0
        struct FVector GazeDirection; // 0xc
        struct FVector FixationPoint; // 0x18
        float ConfidenceValue; // 0x24

    };

    struct FJsonObjectWrapper //ScriptStruct JsonUtilities.JsonObjectWrapper
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString JsonString; // 0x0

    };

    struct FMediaPlayerOptions //ScriptStruct MediaUtils.MediaPlayerOptions
    {
    //Children Prop Count (Fields): 4
    public:

        struct FMediaPlayerTrackOptions Tracks; // 0x0
        struct FTimespan SeekTime; // 0x20
        enum class EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
        enum class EMediaPlayerOptionBooleanOverride Loop; // 0x29

    };

    struct FMediaPlayerTrackOptions //ScriptStruct MediaUtils.MediaPlayerTrackOptions
    {
    //Children Prop Count (Fields): 7
    public:

        int32_t Audio; // 0x0
        int32_t Caption; // 0x4
        int32_t MetaData; // 0x8
        int32_t Script; // 0xc
        int32_t Subtitle; // 0x10
        int32_t Text; // 0x14
        int32_t Video; // 0x18

    };

    struct FMediaCaptureDevice //ScriptStruct MediaAssets.MediaCaptureDevice
    {
    //Children Prop Count (Fields): 2
    public:

        struct FText DisplayName; // 0x0
        struct FString URL; // 0x18

    };

    struct FMediaSoundComponentSpectralData //ScriptStruct MediaAssets.MediaSoundComponentSpectralData
    {
    //Children Prop Count (Fields): 2
    public:

        float FrequencyHz; // 0x0
        float Magnitude; // 0x4

    };

    struct FLevelSequenceCameraSettings //ScriptStruct LevelSequence.LevelSequenceCameraSettings
    {
    //Children Prop Count (Fields): 2
    public:

        bool bOverrideAspectRatioAxisConstraint; // 0x0
        enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1

    };

    struct FBoundActorProxy //ScriptStruct LevelSequence.BoundActorProxy
    {
    public:


    };

    struct FLevelSequenceBindingReferences //ScriptStruct LevelSequence.LevelSequenceBindingReferences
    {
    //Children Prop Count (Fields): 2
    public:

        struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
        struct TSet<struct FGuid> AnimSequenceInstances; // 0x50

    };

    struct FLevelSequenceBindingReferenceArray //ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FLevelSequenceBindingReference> References; // 0x0

    };

    struct FLevelSequenceBindingReference //ScriptStruct LevelSequence.LevelSequenceBindingReference
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString PackageName; // 0x0
        struct FSoftObjectPath ExternalObjectPath; // 0x10
        struct FString ObjectPath; // 0x28

    };

    struct FLevelSequenceObjectReferenceMap //ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
    {
    public:


    };

    struct FLevelSequenceLegacyObjectReference //ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
    {
    public:


    };

    struct FLevelSequenceObject //ScriptStruct LevelSequence.LevelSequenceObject
    {
    //Children Prop Count (Fields): 3
    public:

        struct FLazyObjectProperty ObjectOrOwner; // 0x0
        struct FString ComponentName; // 0x20
        struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x30

    };

    struct FLevelSequencePlayerSnapshot //ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
    {
    //Children Prop Count (Fields): 11
    public:

        struct FString MasterName; // 0x0
        struct FQualifiedFrameTime MasterTime; // 0x10
        struct FQualifiedFrameTime SourceTime; // 0x20
        struct FString CurrentShotName; // 0x30
        struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40
        struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50
        struct FString SourceTimecode; // 0x60
        struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70
        struct FLevelSequenceSnapshotSettings Settings; // 0x98
        class ULevelSequence* ActiveShot; // 0xa8
        struct FMovieSceneSequenceID ShotID; // 0xb0

    };

    struct FLevelSequenceSnapshotSettings //ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
    {
    //Children Prop Count (Fields): 2
    public:

        char ZeroPadAmount; // 0x0
        struct FFrameRate FrameRate; // 0x4

    };

    struct FCompositionGraphCapturePasses //ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FString> Value; // 0x0

    };

    struct FFrameMetrics //ScriptStruct MovieSceneCapture.FrameMetrics
    {
    //Children Prop Count (Fields): 4
    public:

        float TotalElapsedTime; // 0x0
        float FrameDelta; // 0x4
        int32_t FrameNumber; // 0x8
        int32_t NumDroppedFrames; // 0xc

    };

    struct FMovieSceneCaptureSettings //ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
    {
    //Children Prop Count (Fields): 21
    public:

        struct FDirectoryPath OutputDirectory; // 0x0
        class AGameModeBase* GameModeOverride; // 0x10
        struct FString OutputFormat; // 0x18
        bool bOverwriteExisting; // 0x28
        bool bUseRelativeFrameNumbers; // 0x29
        int32_t HandleFrames; // 0x2c
        struct FString MovieExtension; // 0x30
        char ZeroPadFrameNumbers; // 0x40
        struct FFrameRate FrameRate; // 0x44
        bool bUseCustomFrameRate; // 0x4c
        struct FFrameRate CustomFrameRate; // 0x50
        struct FCaptureResolution Resolution; // 0x58
        bool bEnableTextureStreaming; // 0x60
        bool bCinematicEngineScalability; // 0x61
        bool bCinematicMode; // 0x62
        bool bAllowMovement; // 0x63
        bool bAllowTurning; // 0x64
        bool bShowPlayer; // 0x65
        bool bShowHUD; // 0x66
        bool bUsePathTracer; // 0x67
        int32_t PathTracerSamplePerPixel; // 0x68

    };

    struct FCaptureResolution //ScriptStruct MovieSceneCapture.CaptureResolution
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t ResX; // 0x0
        int32_t ResY; // 0x4

    };

    struct FDirectoryPath //ScriptStruct Engine.DirectoryPath
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString Path; // 0x0

    };

    struct FCapturedPixels //ScriptStruct MovieSceneCapture.CapturedPixels
    {
    public:


    };

    struct FCapturedPixelsID //ScriptStruct MovieSceneCapture.CapturedPixelsID
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<struct FName, struct FName> Identifiers; // 0x0

    };

    struct FKAggregateGeom //ScriptStruct Engine.KAggregateGeom
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FKSphereElem> SphereElems; // 0x0
        struct TArray<struct FKBoxElem> BoxElems; // 0x10
        struct TArray<struct FKSphylElem> SphylElems; // 0x20
        struct TArray<struct FKConvexElem> ConvexElems; // 0x30
        struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40

    };

    struct FKShapeElem //ScriptStruct Engine.KShapeElem
    {
    //Children Prop Count (Fields): 3
    public:

        float RestOffset; // 0x8
        struct FName Name; // 0xc
        char bContributeToMass; // 0x18

    };

    struct FKTaperedCapsuleElem : FKShapeElem //ScriptStruct Engine.KTaperedCapsuleElem
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector Center; // 0x30
        struct FRotator Rotation; // 0x3c
        float Radius0; // 0x48
        float Radius1; // 0x4c
        float Length; // 0x50

    };

    struct FKConvexElem : FKShapeElem //ScriptStruct Engine.KConvexElem
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FVector> VertexData; // 0x30
        struct TArray<int32_t> IndexData; // 0x40
        struct FBox ElemBox; // 0x50
        struct FTransform Transform; // 0x70

    };

    struct FKSphylElem : FKShapeElem //ScriptStruct Engine.KSphylElem
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector Center; // 0x30
        struct FRotator Rotation; // 0x3c
        float Radius; // 0x48
        float Length; // 0x4c

    };

    struct FKBoxElem : FKShapeElem //ScriptStruct Engine.KBoxElem
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector Center; // 0x30
        struct FRotator Rotation; // 0x3c
        float X; // 0x48
        float Y; // 0x4c
        float Z; // 0x50

    };

    struct FKSphereElem : FKShapeElem //ScriptStruct Engine.KSphereElem
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Center; // 0x30
        float Radius; // 0x3c

    };

    struct FAnimationGroupReference //ScriptStruct Engine.AnimationGroupReference
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName GroupName; // 0x0
        enum class EAnimGroupRole GroupRole; // 0x8

    };

    struct FRootMotionMovementParams //ScriptStruct Engine.RootMotionMovementParams
    {
    //Children Prop Count (Fields): 3
    public:

        bool bHasRootMotion; // 0x0
        float BlendWeight; // 0x4
        struct FTransform RootMotionTransform; // 0x10

    };

    struct FAnimGroupInstance //ScriptStruct Engine.AnimGroupInstance
    {
    public:


    };

    struct FAnimTickRecord //ScriptStruct Engine.AnimTickRecord
    {
    //Children Prop Count (Fields): 1
    public:

        class UAnimationAsset* SourceAsset; // 0x0

    };

    struct FMarkerSyncAnimPosition //ScriptStruct Engine.MarkerSyncAnimPosition
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName PreviousMarkerName; // 0x0
        struct FName NextMarkerName; // 0x8
        float PositionBetweenMarkers; // 0x10

    };

    struct FBlendFilter //ScriptStruct Engine.BlendFilter
    {
    public:


    };

    struct FBlendSampleData //ScriptStruct Engine.BlendSampleData
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t SampleDataIndex; // 0x0
        class UAnimSequence* Animation; // 0x8
        float TotalWeight; // 0x10
        float Time; // 0x14
        float PreviousTime; // 0x18
        float SamplePlayRate; // 0x1c

    };

    struct FAnimationRecordingSettings //ScriptStruct Engine.AnimationRecordingSettings
    {
    //Children Prop Count (Fields): 7
    public:

        bool bRecordInWorldSpace; // 0x0
        bool bRemoveRootAnimation; // 0x1
        bool bAutoSaveAsset; // 0x2
        float SampleRate; // 0x4
        float Length; // 0x8
        enum class ERichCurveInterpMode InterpMode; // 0xc
        enum class ERichCurveTangentMode TangentMode; // 0xd

    };

    struct FComponentSpacePose //ScriptStruct Engine.ComponentSpacePose
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FTransform> Transforms; // 0x0
        struct TArray<struct FName> Names; // 0x10

    };

    struct FLocalSpacePose //ScriptStruct Engine.LocalSpacePose
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FTransform> Transforms; // 0x0
        struct TArray<struct FName> Names; // 0x10

    };

    struct FNamedTransform //ScriptStruct Engine.NamedTransform
    {
    //Children Prop Count (Fields): 2
    public:

        struct FTransform Value; // 0x0
        struct FName Name; // 0x30

    };

    struct FNamedColor //ScriptStruct Engine.NamedColor
    {
    //Children Prop Count (Fields): 2
    public:

        struct FColor Value; // 0x0
        struct FName Name; // 0x4

    };

    struct FNamedVector //ScriptStruct Engine.NamedVector
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Value; // 0x0
        struct FName Name; // 0xc

    };

    struct FNamedFloat //ScriptStruct Engine.NamedFloat
    {
    //Children Prop Count (Fields): 2
    public:

        float Value; // 0x0
        struct FName Name; // 0x4

    };

    struct FAnimParentNodeAssetOverride //ScriptStruct Engine.AnimParentNodeAssetOverride
    {
    //Children Prop Count (Fields): 2
    public:

        class UAnimationAsset* NewAsset; // 0x0
        struct FGuid ParentNodeGuid; // 0x8

    };

    struct FAnimGroupInfo //ScriptStruct Engine.AnimGroupInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        struct FLinearColor Color; // 0x8

    };

    struct FAnimBlueprintDebugData //ScriptStruct Engine.AnimBlueprintDebugData
    {
    public:


    };

    struct FAnimationFrameSnapshot //ScriptStruct Engine.AnimationFrameSnapshot
    {
    public:


    };

    struct FStateMachineDebugData //ScriptStruct Engine.StateMachineDebugData
    {
    public:


    };

    struct FStateMachineStateDebugData //ScriptStruct Engine.StateMachineStateDebugData
    {
    public:


    };

    struct FAnimBlueprintFunctionData //ScriptStruct Engine.AnimBlueprintFunctionData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
        struct TArray<struct TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
        struct TArray<struct TFieldPath<FProperty>> InputProperties; // 0x30

    };

    struct FAnimGraphBlendOptions //ScriptStruct Engine.AnimGraphBlendOptions
    {
    //Children Prop Count (Fields): 2
    public:

        float BlendInTime; // 0x0
        float BlendOutTime; // 0x4

    };

    struct FGraphAssetPlayerInformation //ScriptStruct Engine.GraphAssetPlayerInformation
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<int32_t> PlayerNodeIndices; // 0x0

    };

    struct FCachedPoseIndices //ScriptStruct Engine.CachedPoseIndices
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0

    };

    struct FAnimBlueprintFunction //ScriptStruct Engine.AnimBlueprintFunction
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName Name; // 0x0
        struct FName Group; // 0x8
        int32_t OutputPoseNodeIndex; // 0x10
        struct TArray<struct FName> InputPoseNames; // 0x18
        struct TArray<int32_t> InputPoseNodeIndices; // 0x28
        bool bImplemented; // 0x60

    };

    struct FAnimTrack //ScriptStruct Engine.AnimTrack
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FAnimSegment> AnimSegments; // 0x0

    };

    struct FAnimSegment //ScriptStruct Engine.AnimSegment
    {
    //Children Prop Count (Fields): 6
    public:

        class UAnimSequenceBase* AnimReference; // 0x0
        float StartPos; // 0x8
        float AnimStartTime; // 0xc
        float AnimEndTime; // 0x10
        float AnimPlayRate; // 0x14
        int32_t LoopingCount; // 0x18

    };

    struct FRootMotionExtractionStep //ScriptStruct Engine.RootMotionExtractionStep
    {
    //Children Prop Count (Fields): 3
    public:

        class UAnimSequence* AnimSequence; // 0x0
        float StartPosition; // 0x8
        float EndPosition; // 0xc

    };

    struct FAnimationErrorStats //ScriptStruct Engine.AnimationErrorStats
    {
    public:


    };

    struct FRawCurveTracks //ScriptStruct Engine.RawCurveTracks
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FFloatCurve> FloatCurves; // 0x0

    };

    struct FAnimCurveBase //ScriptStruct Engine.AnimCurveBase
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName LastObservedName; // 0x0
        struct FSmartName Name; // 0x8
        int32_t CurveTypeFlags; // 0x14

    };

    struct FSmartName //ScriptStruct Engine.SmartName
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName DisplayName; // 0x0

    };

    struct FFloatCurve : FAnimCurveBase //ScriptStruct Engine.FloatCurve
    {
    //Children Prop Count (Fields): 1
    public:

        struct FRichCurve FloatCurve; // 0x18

    };

    struct FTransformCurve : FAnimCurveBase //ScriptStruct Engine.TransformCurve
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVectorCurve TranslationCurve; // 0x18
        struct FVectorCurve RotationCurve; // 0x1b0
        struct FVectorCurve ScaleCurve; // 0x348

    };

    struct FVectorCurve : FAnimCurveBase //ScriptStruct Engine.VectorCurve
    {
    //Children Prop Count (Fields): 1
    public:

        struct FRichCurve FloatCurves; // 0x18

    };

    struct FSlotEvaluationPose //ScriptStruct Engine.SlotEvaluationPose
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EAdditiveAnimationType AdditiveType; // 0x0
        float Weight; // 0x4

    };

    struct FA2Pose //ScriptStruct Engine.A2Pose
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FTransform> Bones; // 0x0

    };

    struct FA2CSPose : FA2Pose //ScriptStruct Engine.A2CSPose
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> ComponentSpaceFlags; // 0x18

    };

    struct FQueuedDrawDebugItem //ScriptStruct Engine.QueuedDrawDebugItem
    {
    //Children Prop Count (Fields): 14
    public:

        enum class EDrawDebugItemType ItemType; // 0x0
        struct FVector StartLoc; // 0x4
        struct FVector EndLoc; // 0x10
        struct FVector Center; // 0x1c
        struct FRotator Rotation; // 0x28
        float Radius; // 0x34
        float Size; // 0x38
        int32_t Segments; // 0x3c
        struct FColor Color; // 0x40
        bool bPersistentLines; // 0x44
        float LifeTime; // 0x48
        float Thickness; // 0x4c
        struct FString Message; // 0x50
        struct FVector2D TextScale; // 0x60

    };

    struct FAnimLinkableElement //ScriptStruct Engine.AnimLinkableElement
    {
    //Children Prop Count (Fields): 9
    public:

        class UAnimMontage* LinkedMontage; // 0x8
        int32_t SlotIndex; // 0x10
        int32_t SegmentIndex; // 0x14
        enum class EAnimLinkMethod LinkMethod; // 0x18
        enum class EAnimLinkMethod CachedLinkMethod; // 0x19
        float SegmentBeginTime; // 0x1c
        float SegmentLength; // 0x20
        float LinkValue; // 0x24
        class UAnimSequenceBase* LinkedSequence; // 0x28

    };

    struct FAnimMontageInstance //ScriptStruct Engine.AnimMontageInstance
    {
    //Children Prop Count (Fields): 10
    public:

        class UAnimMontage* Montage; // 0x0
        bool bPlaying; // 0x28
        float DefaultBlendTimeMultiplier; // 0x2c
        struct TArray<int32_t> NextSections; // 0xe8
        struct TArray<int32_t> PrevSections; // 0xf8
        struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
        float Position; // 0x128
        float PlayRate; // 0x12c
        struct FAlphaBlend Blend; // 0x130
        int32_t DisableRootMotionCount; // 0x188

    };

    struct FAnimNotifyEvent : FAnimLinkableElement //ScriptStruct Engine.AnimNotifyEvent
    {
    //Children Prop Count (Fields): 17
    public:

        float DisplayTime; // 0x30
        float TriggerTimeOffset; // 0x34
        float EndTriggerTimeOffset; // 0x38
        float TriggerWeightThreshold; // 0x3c
        struct FName NotifyName; // 0x40
        class UAnimNotify* Notify; // 0x48
        class UAnimNotifyState* NotifyStateClass; // 0x50
        float Duration; // 0x58
        struct FAnimLinkableElement EndLink; // 0x60
        bool bConvertedFromBranchingPoint; // 0x90
        enum class EMontageNotifyTickType MontageTickType; // 0x91
        float NotifyTriggerChance; // 0x94
        enum class ENotifyFilterType NotifyFilterType; // 0x98
        int32_t NotifyFilterLOD; // 0x9c
        bool bTriggerOnDedicatedServer; // 0xa0
        bool bTriggerOnFollower; // 0xa1
        int32_t TrackIndex; // 0xa4

    };

    struct FBranchingPointMarker //ScriptStruct Engine.BranchingPointMarker
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t NotifyIndex; // 0x0
        float TriggerTime; // 0x4
        enum class EAnimNotifyEventType NotifyEventType; // 0x8

    };

    struct FBranchingPoint : FAnimLinkableElement //ScriptStruct Engine.BranchingPoint
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName EventName; // 0x30
        float DisplayTime; // 0x38
        float TriggerTimeOffset; // 0x3c

    };

    struct FSlotAnimationTrack //ScriptStruct Engine.SlotAnimationTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName SlotName; // 0x0
        struct FAnimTrack AnimTrack; // 0x8

    };

    struct FCompositeSection : FAnimLinkableElement //ScriptStruct Engine.CompositeSection
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName SectionName; // 0x30
        float StartTime; // 0x38
        struct FName NextSectionName; // 0x3c
        struct TArray<class UAnimMetaData*> MetaData; // 0x48

    };

    struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base //ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
    {
    //Children Prop Count (Fields): 10
    public:

        struct FPoseLink base; // 0x10
        struct FPoseLink Additive; // 0x20
        enum class EAnimAlphaInputType AlphaInputType; // 0x30
        float Alpha; // 0x34
        char bAlphaBoolEnabled; // 0x38
        struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
        struct FName AlphaCurveName; // 0x88
        struct FInputScaleBias AlphaScaleBias; // 0x90
        struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98
        int32_t LODThreshold; // 0xc8

    };

    struct FAnimNode_CustomProperty : FAnimNode_Base //ScriptStruct Engine.AnimNode_CustomProperty
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FName> SourcePropertyNames; // 0x10
        struct TArray<struct FName> DestPropertyNames; // 0x20
        class UObject* TargetInstance; // 0x30

    };

    struct FAnimNode_Inertialization : FAnimNode_Base //ScriptStruct Engine.AnimNode_Inertialization
    {
    //Children Prop Count (Fields): 1
    public:

        struct FPoseLink Source; // 0x10

    };

    struct FInertializationPoseDiff //ScriptStruct Engine.InertializationPoseDiff
    {
    public:


    };

    struct FInertializationCurveDiff //ScriptStruct Engine.InertializationCurveDiff
    {
    public:


    };

    struct FInertializationBoneDiff //ScriptStruct Engine.InertializationBoneDiff
    {
    public:


    };

    struct FInertializationPose //ScriptStruct Engine.InertializationPose
    {
    public:


    };

    struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty //ScriptStruct Engine.AnimNode_LinkedAnimGraph
    {
    //Children Prop Count (Fields): 6
    public:

        struct TArray<struct FPoseLink> InputPoses; // 0x58
        struct TArray<struct FName> InputPoseNames; // 0x68
        class UAnimInstance* InstanceClass; // 0x78
        struct FName Tag; // 0x80
        char bReceiveNotifiesFromLinkedInstances; // 0x98
        char bPropagateNotifiesToLinkedInstances; // 0x98

    };

    struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph //ScriptStruct Engine.AnimNode_LinkedAnimLayer
    {
    //Children Prop Count (Fields): 2
    public:

        class UAnimLayerInterface* Interface; // 0xa0
        struct FName Layer; // 0xa8

    };

    struct FAnimNode_LinkedInputPose : FAnimNode_Base //ScriptStruct Engine.AnimNode_LinkedInputPose
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x10
        struct FName Graph; // 0x18
        struct FPoseLink InputPose; // 0x20

    };

    struct FAnimNode_SaveCachedPose : FAnimNode_Base //ScriptStruct Engine.AnimNode_SaveCachedPose
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPoseLink Pose; // 0x10
        struct FName CachePoseName; // 0x20

    };

    struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase //ScriptStruct Engine.AnimNode_SequencePlayer
    {
    //Children Prop Count (Fields): 6
    public:

        class UAnimSequenceBase* Sequence; // 0x30
        float PlayRateBasis; // 0x38
        float PlayRate; // 0x3c
        struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
        float StartPosition; // 0x70
        bool bLoopAnimation; // 0x74

    };

    struct FAnimNode_StateMachine : FAnimNode_Base //ScriptStruct Engine.AnimNode_StateMachine
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t StateMachineIndexInClass; // 0x10
        int32_t MaxTransitionsPerFrame; // 0x14
        bool bSkipFirstUpdateTransition; // 0x18
        bool bReinitializeOnBecomingRelevant; // 0x19

    };

    struct FAnimationPotentialTransition //ScriptStruct Engine.AnimationPotentialTransition
    {
    public:


    };

    struct FAnimationActiveTransitionEntry //ScriptStruct Engine.AnimationActiveTransitionEntry
    {
    //Children Prop Count (Fields): 1
    public:

        class UBlendProfile* BlendProfile; // 0xb8

    };

    struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base //ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t FramesToCachePose; // 0x48
        enum class EEvaluatorDataSource DataSource; // 0x50
        enum class EEvaluatorMode EvaluatorMode; // 0x51

    };

    struct FAnimNode_TransitionResult : FAnimNode_Base //ScriptStruct Engine.AnimNode_TransitionResult
    {
    //Children Prop Count (Fields): 1
    public:

        bool bCanEnterTransition; // 0x10

    };

    struct FAnimNode_UseCachedPose : FAnimNode_Base //ScriptStruct Engine.AnimNode_UseCachedPose
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPoseLink LinkToCachingNode; // 0x10
        struct FName CachePoseName; // 0x20

    };

    struct FExposedValueHandler //ScriptStruct Engine.ExposedValueHandler
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName BoundFunction; // 0x0
        struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x8
        class UFunction* Function; // 0x18
        struct TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20

    };

    struct FExposedValueCopyRecord //ScriptStruct Engine.ExposedValueCopyRecord
    {
    //Children Prop Count (Fields): 11
    public:

        struct FName SourcePropertyName; // 0x0
        struct FName SourceSubPropertyName; // 0x8
        int32_t SourceArrayIndex; // 0x10
        bool bInstanceIsTarget; // 0x14
        enum class EPostCopyOperation PostCopyOperation; // 0x15
        enum class ECopyType CopyType; // 0x16
        struct TFieldPath<FProperty> DestProperty; // 0x18
        int32_t DestArrayIndex; // 0x38
        int32_t Size; // 0x3c
        struct TFieldPath<FProperty> CachedSourceProperty; // 0x40
        struct TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x60

    };

    struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base //ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
    {
    //Children Prop Count (Fields): 1
    public:

        struct FPoseLink LocalPose; // 0x10

    };

    struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base //ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
    {
    //Children Prop Count (Fields): 1
    public:

        struct FComponentSpacePoseLink ComponentPose; // 0x10

    };

    struct FAnimNotifyQueue //ScriptStruct Engine.AnimNotifyQueue
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10
        struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20

    };

    struct FAnimNotifyArray //ScriptStruct Engine.AnimNotifyArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x0

    };

    struct FAnimNotifyEventReference //ScriptStruct Engine.AnimNotifyEventReference
    {
    //Children Prop Count (Fields): 1
    public:

        class UObject* NotifySource; // 0x8

    };

    struct FCompressedTrack //ScriptStruct Engine.CompressedTrack
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<char> ByteStream; // 0x0
        struct TArray<float> Times; // 0x10
        float Mins; // 0x20
        float Ranges; // 0x2c

    };

    struct FCurveTrack //ScriptStruct Engine.CurveTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName CurveName; // 0x0
        struct TArray<float> CurveWeights; // 0x8

    };

    struct FScaleTrack //ScriptStruct Engine.ScaleTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FVector> ScaleKeys; // 0x0
        struct TArray<float> Times; // 0x10

    };

    struct FRotationTrack //ScriptStruct Engine.RotationTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FQuat> RotKeys; // 0x0
        struct TArray<float> Times; // 0x10

    };

    struct FTranslationTrack //ScriptStruct Engine.TranslationTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FVector> PosKeys; // 0x0
        struct TArray<float> Times; // 0x10

    };

    struct FAnimSequenceTrackContainer //ScriptStruct Engine.AnimSequenceTrackContainer
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x0
        struct TArray<struct FName> TrackNames; // 0x10

    };

    struct FRawAnimSequenceTrack //ScriptStruct Engine.RawAnimSequenceTrack
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FVector> PosKeys; // 0x0
        struct TArray<struct FQuat> RotKeys; // 0x10
        struct TArray<struct FVector> ScaleKeys; // 0x20

    };

    struct FAnimSetMeshLinkup //ScriptStruct Engine.AnimSetMeshLinkup
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<int32_t> BoneToTrackTable; // 0x0

    };

    struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy //ScriptStruct Engine.AnimSingleNodeInstanceProxy
    {
    public:


    };

    struct FAnimNode_SingleNode : FAnimNode_Base //ScriptStruct Engine.AnimNode_SingleNode
    {
    //Children Prop Count (Fields): 1
    public:

        struct FPoseLink SourcePose; // 0x10

    };

    struct FBakedAnimationStateMachine //ScriptStruct Engine.BakedAnimationStateMachine
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName MachineName; // 0x0
        int32_t InitialState; // 0x8
        struct TArray<struct FBakedAnimationState> States; // 0x10
        struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20

    };

    struct FAnimationStateBase //ScriptStruct Engine.AnimationStateBase
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName StateName; // 0x0

    };

    struct FAnimationTransitionBetweenStates : FAnimationStateBase //ScriptStruct Engine.AnimationTransitionBetweenStates
    {
    //Children Prop Count (Fields): 10
    public:

        int32_t PreviousState; // 0x8
        int32_t NextState; // 0xc
        float CrossfadeDuration; // 0x10
        int32_t StartNotify; // 0x14
        int32_t EndNotify; // 0x18
        int32_t InterruptNotify; // 0x1c
        enum class EAlphaBlendOption BlendMode; // 0x20
        class UCurveFloat* CustomCurve; // 0x28
        class UBlendProfile* BlendProfile; // 0x30
        enum class ETransitionLogicType LogicType; // 0x38

    };

    struct FBakedAnimationState //ScriptStruct Engine.BakedAnimationState
    {
    //Children Prop Count (Fields): 11
    public:

        struct FName StateName; // 0x0
        struct TArray<struct FBakedStateExitTransition> Transitions; // 0x8
        int32_t StateRootNodeIndex; // 0x18
        int32_t StartNotify; // 0x1c
        int32_t EndNotify; // 0x20
        int32_t FullyBlendedNotify; // 0x24
        bool bIsAConduit; // 0x28
        int32_t EntryRuleNodeIndex; // 0x2c
        struct TArray<int32_t> PlayerNodeIndices; // 0x30
        struct TArray<int32_t> LayerNodeIndices; // 0x40
        bool bAlwaysResetOnEntry; // 0x50

    };

    struct FBakedStateExitTransition //ScriptStruct Engine.BakedStateExitTransition
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t CanTakeDelegateIndex; // 0x0
        int32_t CustomResultNodeIndex; // 0x4
        int32_t TransitionIndex; // 0x8
        bool bDesiredTransitionReturnValue; // 0xc
        bool bAutomaticRemainingTimeRule; // 0xd
        struct TArray<int32_t> PoseEvaluatorLinks; // 0x10

    };

    struct FAnimationState : FAnimationStateBase //ScriptStruct Engine.AnimationState
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FAnimationTransitionRule> Transitions; // 0x8
        int32_t StateRootNodeIndex; // 0x18
        int32_t StartNotify; // 0x1c
        int32_t EndNotify; // 0x20
        int32_t FullyBlendedNotify; // 0x24

    };

    struct FAnimationTransitionRule //ScriptStruct Engine.AnimationTransitionRule
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName RuleToExecute; // 0x0
        bool TransitionReturnVal; // 0x8
        int32_t TransitionIndex; // 0xc

    };

    struct FTrackToSkeletonMap //ScriptStruct Engine.TrackToSkeletonMap
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t BoneTreeIndex; // 0x0

    };

    struct FMarkerSyncData //ScriptStruct Engine.MarkerSyncData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x0

    };

    struct FAnimSyncMarker //ScriptStruct Engine.AnimSyncMarker
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName MarkerName; // 0x0
        float Time; // 0x8

    };

    struct FAnimNotifyTrack //ScriptStruct Engine.AnimNotifyTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName TrackName; // 0x0
        struct FLinearColor TrackColor; // 0x8

    };

    struct FPerBoneBlendWeights //ScriptStruct Engine.PerBoneBlendWeights
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x0

    };

    struct FAssetImportInfo //ScriptStruct Engine.AssetImportInfo
    {
    public:


    };

    struct FPrimaryAssetRulesCustomOverride //ScriptStruct Engine.PrimaryAssetRulesCustomOverride
    {
    //Children Prop Count (Fields): 4
    public:

        struct FPrimaryAssetType PrimaryAssetType; // 0x0
        struct FDirectoryPath FilterDirectory; // 0x8
        struct FString FilterString; // 0x18
        struct FPrimaryAssetRules Rules; // 0x28

    };

    struct FPrimaryAssetRules //ScriptStruct Engine.PrimaryAssetRules
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t Priority; // 0x0
        int32_t ChunkId; // 0x4
        bool bApplyRecursively; // 0x8
        enum class EPrimaryAssetCookRule CookRule; // 0x9

    };

    struct FPrimaryAssetRulesOverride //ScriptStruct Engine.PrimaryAssetRulesOverride
    {
    //Children Prop Count (Fields): 2
    public:

        struct FPrimaryAssetId PrimaryAssetId; // 0x0
        struct FPrimaryAssetRules Rules; // 0x10

    };

    struct FAssetManagerRedirect //ScriptStruct Engine.AssetManagerRedirect
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Old; // 0x0
        struct FString New; // 0x10

    };

    struct FPrimaryAssetTypeInfo //ScriptStruct Engine.PrimaryAssetTypeInfo
    {
    //Children Prop Count (Fields): 11
    public:

        struct FName PrimaryAssetType; // 0x0
        struct FSoftClassProperty AssetBaseClass; // 0x8
        class UObject* AssetBaseClassLoaded; // 0x30
        bool bHasBlueprintClasses; // 0x38
        bool bIsEditorOnly; // 0x39
        struct TArray<struct FDirectoryPath> Directories; // 0x40
        struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50
        struct FPrimaryAssetRules Rules; // 0x60
        struct TArray<struct FString> AssetScanPaths; // 0x70
        bool bIsDynamicAsset; // 0x80
        int32_t NumberOfAssets; // 0x84

    };

    struct FAssetMapping //ScriptStruct Engine.AssetMapping
    {
    //Children Prop Count (Fields): 2
    public:

        class UAnimationAsset* SourceAsset; // 0x0
        class UAnimationAsset* TargetAsset; // 0x8

    };

    struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.AtmospherePrecomputeInstanceData
    {
    public:


    };

    struct FAtmospherePrecomputeParameters //ScriptStruct Engine.AtmospherePrecomputeParameters
    {
    //Children Prop Count (Fields): 11
    public:

        float DensityHeight; // 0x0
        float DecayHeight; // 0x4
        int32_t MaxScatteringOrder; // 0x8
        int32_t TransmittanceTexWidth; // 0xc
        int32_t TransmittanceTexHeight; // 0x10
        int32_t IrradianceTexWidth; // 0x14
        int32_t IrradianceTexHeight; // 0x18
        int32_t InscatterAltitudeSampleNum; // 0x1c
        int32_t InscatterMuNum; // 0x20
        int32_t InscatterMuSNum; // 0x24
        int32_t InscatterNuNum; // 0x28

    };

    struct FBaseAttenuationSettings //ScriptStruct Engine.BaseAttenuationSettings
    {
    //Children Prop Count (Fields): 8
    public:

        enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x8
        enum class EAttenuationShape AttenuationShape; // 0x9
        float dBAttenuationAtMax; // 0xc
        enum class ENaturalSoundFalloffMode FalloffMode; // 0x10
        struct FVector AttenuationShapeExtents; // 0x14
        float ConeOffset; // 0x20
        float FalloffDistance; // 0x24
        struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28

    };

    struct FAudioComponentParam //ScriptStruct Engine.AudioComponentParam
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName ParamName; // 0x0
        float FloatParam; // 0x8
        bool BoolParam; // 0xc
        int32_t IntParam; // 0x10
        class USoundWave* SoundWaveParam; // 0x18

    };

    struct FAudioEffectParameters //ScriptStruct Engine.AudioEffectParameters
    {
    public:


    };

    struct FAudioReverbEffect : FAudioEffectParameters //ScriptStruct Engine.AudioReverbEffect
    {
    public:


    };

    struct FAudioQualitySettings //ScriptStruct Engine.AudioQualitySettings
    {
    //Children Prop Count (Fields): 2
    public:

        struct FText DisplayName; // 0x0
        int32_t MaxChannels; // 0x18

    };

    struct FInteriorSettings //ScriptStruct Engine.InteriorSettings
    {
    //Children Prop Count (Fields): 9
    public:

        bool bIsWorldSettings; // 0x0
        float ExteriorVolume; // 0x4
        float ExteriorTime; // 0x8
        float ExteriorLPF; // 0xc
        float ExteriorLPFTime; // 0x10
        float InteriorVolume; // 0x14
        float InteriorTime; // 0x18
        float InteriorLPF; // 0x1c
        float InteriorLPFTime; // 0x20

    };

    struct FLaunchOnTestSettings //ScriptStruct Engine.LaunchOnTestSettings
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFilePath LaunchOnTestmap; // 0x0
        struct FString DeviceID; // 0x10

    };

    struct FFilePath //ScriptStruct Engine.FilePath
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString FilePath; // 0x0

    };

    struct FEditorMapPerformanceTestDefinition //ScriptStruct Engine.EditorMapPerformanceTestDefinition
    {
    //Children Prop Count (Fields): 2
    public:

        struct FSoftObjectPath PerformanceTestmap; // 0x0
        int32_t TestTimer; // 0x18

    };

    struct FBuildPromotionTestSettings //ScriptStruct Engine.BuildPromotionTestSettings
    {
    //Children Prop Count (Fields): 5
    public:

        struct FFilePath DefaultStaticMeshAsset; // 0x0
        struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
        struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
        struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
        struct FFilePath SourceControlMaterial; // 0x1e0

    };

    struct FBuildPromotionNewProjectSettings //ScriptStruct Engine.BuildPromotionNewProjectSettings
    {
    //Children Prop Count (Fields): 2
    public:

        struct FDirectoryPath NewProjectFolderOverride; // 0x0
        struct FString NewProjectNameOverride; // 0x10

    };

    struct FBuildPromotionOpenAssetSettings //ScriptStruct Engine.BuildPromotionOpenAssetSettings
    {
    //Children Prop Count (Fields): 6
    public:

        struct FFilePath BlueprintAsset; // 0x0
        struct FFilePath MaterialAsset; // 0x10
        struct FFilePath ParticleSystemAsset; // 0x20
        struct FFilePath SkeletalMeshAsset; // 0x30
        struct FFilePath StaticMeshAsset; // 0x40
        struct FFilePath TextureAsset; // 0x50

    };

    struct FBuildPromotionImportWorkflowSettings //ScriptStruct Engine.BuildPromotionImportWorkflowSettings
    {
    //Children Prop Count (Fields): 11
    public:

        struct FEditorImportWorkflowDefinition Diffuse; // 0x0
        struct FEditorImportWorkflowDefinition Normal; // 0x20
        struct FEditorImportWorkflowDefinition StaticMesh; // 0x40
        struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60
        struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80
        struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0
        struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0
        struct FEditorImportWorkflowDefinition Animation; // 0xe0
        struct FEditorImportWorkflowDefinition Sound; // 0x100
        struct FEditorImportWorkflowDefinition SurroundSound; // 0x120
        struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140

    };

    struct FEditorImportWorkflowDefinition //ScriptStruct Engine.EditorImportWorkflowDefinition
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFilePath ImportFilePath; // 0x0
        struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10

    };

    struct FImportFactorySettingValues //ScriptStruct Engine.ImportFactorySettingValues
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString SettingName; // 0x0
        struct FString Value; // 0x10

    };

    struct FBlueprintEditorPromotionSettings //ScriptStruct Engine.BlueprintEditorPromotionSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFilePath FirstMeshPath; // 0x0
        struct FFilePath SecondMeshPath; // 0x10
        struct FFilePath DefaultParticleAsset; // 0x20

    };

    struct FParticleEditorPromotionSettings //ScriptStruct Engine.ParticleEditorPromotionSettings
    {
    //Children Prop Count (Fields): 1
    public:

        struct FFilePath DefaultParticleAsset; // 0x0

    };

    struct FMaterialEditorPromotionSettings //ScriptStruct Engine.MaterialEditorPromotionSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFilePath DefaultMaterialAsset; // 0x0
        struct FFilePath DefaultDiffuseTexture; // 0x10
        struct FFilePath DefaultNormalTexture; // 0x20

    };

    struct FEditorImportExportTestDefinition //ScriptStruct Engine.EditorImportExportTestDefinition
    {
    //Children Prop Count (Fields): 4
    public:

        struct FFilePath ImportFilePath; // 0x0
        struct FString ExportFileExtension; // 0x10
        bool bSkipExport; // 0x20
        struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28

    };

    struct FExternalToolDefinition //ScriptStruct Engine.ExternalToolDefinition
    {
    //Children Prop Count (Fields): 6
    public:

        struct FString ToolName; // 0x0
        struct FFilePath ExecutablePath; // 0x10
        struct FString CommandLineOptions; // 0x20
        struct FDirectoryPath WorkingDirectory; // 0x30
        struct FString ScriptExtension; // 0x40
        struct FDirectoryPath ScriptDirectory; // 0x50

    };

    struct FNavAvoidanceData //ScriptStruct Engine.NavAvoidanceData
    {
    public:


    };

    struct FBandwidthTestGenerator //ScriptStruct Engine.BandwidthTestGenerator
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x0

    };

    struct FBandwidthTestItem //ScriptStruct Engine.BandwidthTestItem
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> Kilobyte; // 0x0

    };

    struct FBlendProfileBoneEntry //ScriptStruct Engine.BlendProfileBoneEntry
    {
    //Children Prop Count (Fields): 2
    public:

        struct FBoneReference BoneReference; // 0x0
        float BlendScale; // 0x10

    };

    struct FPerBoneInterpolation //ScriptStruct Engine.PerBoneInterpolation
    {
    //Children Prop Count (Fields): 2
    public:

        struct FBoneReference BoneReference; // 0x0
        float InterpolationSpeedPerSec; // 0x10

    };

    struct FGridBlendSample //ScriptStruct Engine.GridBlendSample
    {
    //Children Prop Count (Fields): 2
    public:

        struct FEditorElement GridElement; // 0x0
        float BlendWeight; // 0x18

    };

    struct FEditorElement //ScriptStruct Engine.EditorElement
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t Indices; // 0x0
        float Weights; // 0xc

    };

    struct FBlendSample //ScriptStruct Engine.BlendSample
    {
    //Children Prop Count (Fields): 3
    public:

        class UAnimSequence* Animation; // 0x0
        struct FVector SampleValue; // 0x8
        float RateScale; // 0x14

    };

    struct FBlendParameter //ScriptStruct Engine.BlendParameter
    {
    //Children Prop Count (Fields): 4
    public:

        struct FString DisplayName; // 0x0
        float Min; // 0x10
        float Max; // 0x14
        int32_t GridNum; // 0x18

    };

    struct FInterpolationParameter //ScriptStruct Engine.InterpolationParameter
    {
    //Children Prop Count (Fields): 2
    public:

        float InterpolationTime; // 0x0
        enum class EFilterInterpolationType InterpolationType; // 0x4

    };

    struct FBPEditorBookmarkNode //ScriptStruct Engine.BPEditorBookmarkNode
    {
    //Children Prop Count (Fields): 3
    public:

        struct FGuid NodeGuid; // 0x0
        struct FGuid ParentGuid; // 0x10
        struct FText DisplayName; // 0x20

    };

    struct FEditedDocumentInfo //ScriptStruct Engine.EditedDocumentInfo
    {
    //Children Prop Count (Fields): 4
    public:

        struct FSoftObjectPath EditedObjectPath; // 0x0
        struct FVector2D SavedViewOffset; // 0x18
        float SavedZoomAmount; // 0x20
        class UObject* EditedObject; // 0x28

    };

    struct FBPInterfaceDescription //ScriptStruct Engine.BPInterfaceDescription
    {
    //Children Prop Count (Fields): 2
    public:

        class UInterface* Interface; // 0x0
        struct TArray<class UEdGraph*> Graphs; // 0x8

    };

    struct FBPVariableDescription //ScriptStruct Engine.BPVariableDescription
    {
    //Children Prop Count (Fields): 10
    public:

        struct FName VarName; // 0x0
        struct FGuid VarGuid; // 0x8
        struct FEdGraphPinType VarType; // 0x18
        struct FString FriendlyName; // 0x70
        struct FText Category; // 0x80
        uint64_t PropertyFlags; // 0x98
        struct FName RepNotifyFunc; // 0xa0
        enum class ELifetimeCondition ReplicationCondition; // 0xa8
        struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
        struct FString DefaultValue; // 0xc0

    };

    struct FBPVariableMetaDataEntry //ScriptStruct Engine.BPVariableMetaDataEntry
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName DataKey; // 0x0
        struct FString DataValue; // 0x8

    };

    struct FEdGraphPinType //ScriptStruct Engine.EdGraphPinType
    {
    //Children Prop Count (Fields): 10
    public:

        struct FName PinCategory; // 0x0
        struct FName PinSubCategory; // 0x8
        struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10
        struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18
        struct FEdGraphTerminalType PinValueType; // 0x38
        enum class EPinContainerType ContainerType; // 0x54
        char bIsArray; // 0x55
        char bIsReference; // 0x55
        char bIsConst; // 0x55
        char bIsWeakPointer; // 0x55

    };

    struct FEdGraphTerminalType //ScriptStruct Engine.EdGraphTerminalType
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName TerminalCategory; // 0x0
        struct FName TerminalSubCategory; // 0x8
        struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10
        bool bTerminalIsConst; // 0x18
        bool bTerminalIsWeakPointer; // 0x19

    };

    struct FBlueprintMacroCosmeticInfo //ScriptStruct Engine.BlueprintMacroCosmeticInfo
    {
    public:


    };

    struct FCompilerNativizationOptions //ScriptStruct Engine.CompilerNativizationOptions
    {
    //Children Prop Count (Fields): 7
    public:

        struct FName PlatformName; // 0x0
        bool ServerOnlyPlatform; // 0x8
        bool ClientOnlyPlatform; // 0x9
        bool bExcludeMonolithicHeaders; // 0xa
        struct TArray<struct FName> ExcludedModules; // 0x10
        struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20
        struct TArray<struct FString> ExcludedFolderPaths; // 0x70

    };

    struct FBPComponentClassOverride //ScriptStruct Engine.BPComponentClassOverride
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ComponentName; // 0x0
        class UObject* ComponentClass; // 0x8

    };

    struct FBlueprintCookedComponentInstancingData //ScriptStruct Engine.BlueprintCookedComponentInstancingData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
        bool bHasValidCookedData; // 0x21

    };

    struct FBlueprintComponentChangedPropertyInfo //ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName PropertyName; // 0x0
        int32_t ArrayIndex; // 0x8
        class UStruct* PropertyScope; // 0x10

    };

    struct FEventGraphFastCallPair //ScriptStruct Engine.EventGraphFastCallPair
    {
    //Children Prop Count (Fields): 2
    public:

        class UFunction* FunctionToPatch; // 0x0
        int32_t EventGraphCallOffset; // 0x8

    };

    struct FBlueprintDebugData //ScriptStruct Engine.BlueprintDebugData
    {
    public:


    };

    struct FPointerToUberGraphFrame //ScriptStruct Engine.PointerToUberGraphFrame
    {
    public:


    };

    struct FDebuggingInfoForSingleFunction //ScriptStruct Engine.DebuggingInfoForSingleFunction
    {
    public:


    };

    struct FNodeToCodeAssociation //ScriptStruct Engine.NodeToCodeAssociation
    {
    public:


    };

    struct FAnimCurveType //ScriptStruct Engine.AnimCurveType
    {
    public:


    };

    struct FBookmarkBaseJumpToSettings //ScriptStruct Engine.BookmarkBaseJumpToSettings
    {
    public:


    };

    struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings //ScriptStruct Engine.BookmarkJumpToSettings
    {
    public:


    };

    struct FBookmark2DJumpToSettings //ScriptStruct Engine.Bookmark2DJumpToSettings
    {
    public:


    };

    struct FGeomSelection //ScriptStruct Engine.GeomSelection
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t Type; // 0x0
        int32_t Index; // 0x4
        int32_t SelectionIndex; // 0x8

    };

    struct FBuilderPoly //ScriptStruct Engine.BuilderPoly
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<int32_t> VertexIndices; // 0x0
        int32_t Direction; // 0x10
        struct FName ItemName; // 0x14
        int32_t PolyFlags; // 0x1c

    };

    struct FCachedAnimTransitionData //ScriptStruct Engine.CachedAnimTransitionData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName StateMachineName; // 0x0
        struct FName FromStateName; // 0x8
        struct FName ToStateName; // 0x10

    };

    struct FCachedAnimRelevancyData //ScriptStruct Engine.CachedAnimRelevancyData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName StateMachineName; // 0x0
        struct FName StateName; // 0x8

    };

    struct FCachedAnimAssetPlayerData //ScriptStruct Engine.CachedAnimAssetPlayerData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName StateMachineName; // 0x0
        struct FName StateName; // 0x8

    };

    struct FCachedAnimStateArray //ScriptStruct Engine.CachedAnimStateArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FCachedAnimStateData> States; // 0x0

    };

    struct FCachedAnimStateData //ScriptStruct Engine.CachedAnimStateData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName StateMachineName; // 0x0
        struct FName StateName; // 0x8

    };

    struct FActiveCameraShakeInfo //ScriptStruct Engine.ActiveCameraShakeInfo
    {
    //Children Prop Count (Fields): 2
    public:

        class UCameraShake* ShakeInstance; // 0x0
        struct TWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x8

    };

    struct FPooledCameraShakes //ScriptStruct Engine.PooledCameraShakes
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<class UCameraShake*> PooledShakes; // 0x0

    };

    struct FVOscillator //ScriptStruct Engine.VOscillator
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFOscillator X; // 0x0
        struct FFOscillator Y; // 0xc
        struct FFOscillator Z; // 0x18

    };

    struct FFOscillator //ScriptStruct Engine.FOscillator
    {
    //Children Prop Count (Fields): 4
    public:

        float Amplitude; // 0x0
        float Frequency; // 0x4
        enum class EInitialOscillatorOffset InitialOffset; // 0x8
        enum class EOscillatorWaveform Waveform; // 0x9

    };

    struct FROscillator //ScriptStruct Engine.ROscillator
    {
    //Children Prop Count (Fields): 3
    public:

        struct FFOscillator Pitch; // 0x0
        struct FFOscillator Yaw; // 0xc
        struct FFOscillator Roll; // 0x18

    };

    struct FDummySpacerCameraTypes //ScriptStruct Engine.DummySpacerCameraTypes
    {
    public:


    };

    struct FMinimalViewInfo //ScriptStruct Engine.MinimalViewInfo
    {
    //Children Prop Count (Fields): 14
    public:

        struct FVector Location; // 0x0
        struct FRotator Rotation; // 0xc
        float FOV; // 0x18
        float DesiredFOV; // 0x1c
        float OrthoWidth; // 0x20
        float OrthoNearClipPlane; // 0x24
        float OrthoFarClipPlane; // 0x28
        float AspectRatio; // 0x2c
        char bConstrainAspectRatio; // 0x30
        char bUseFieldOfViewForLOD; // 0x30
        enum class ECameraProjectionMode ProjectionMode; // 0x34
        float PostProcessBlendWeight; // 0x38
        struct FPostProcessSettings PostProcessSettings; // 0x40
        struct FVector2D OffCenterProjectionOffset; // 0x5a0

    };

    struct FPostProcessSettings //ScriptStruct Engine.PostProcessSettings
    {
    //Children Prop Count (Fields): 368
    public:

        char bOverride_WhiteTemp; // 0x0
        char bOverride_WhiteTint; // 0x0
        char bOverride_ColorSaturation; // 0x0
        char bOverride_ColorContrast; // 0x0
        char bOverride_ColorGamma; // 0x0
        char bOverride_ColorGain; // 0x0
        char bOverride_ColorOffset; // 0x0
        char bOverride_ColorSaturationShadows; // 0x0
        char bOverride_ColorContrastShadows; // 0x1
        char bOverride_ColorGammaShadows; // 0x1
        char bOverride_ColorGainShadows; // 0x1
        char bOverride_ColorOffsetShadows; // 0x1
        char bOverride_ColorSaturationMidtones; // 0x1
        char bOverride_ColorContrastMidtones; // 0x1
        char bOverride_ColorGammaMidtones; // 0x1
        char bOverride_ColorGainMidtones; // 0x1
        char bOverride_ColorOffsetMidtones; // 0x2
        char bOverride_ColorSaturationHighlights; // 0x2
        char bOverride_ColorContrastHighlights; // 0x2
        char bOverride_ColorGammaHighlights; // 0x2
        char bOverride_ColorGainHighlights; // 0x2
        char bOverride_ColorOffsetHighlights; // 0x2
        char bOverride_ColorCorrectionShadowsMax; // 0x2
        char bOverride_ColorCorrectionHighlightsMin; // 0x2
        char bOverride_BlueCorrection; // 0x3
        char bOverride_ExpandGamut; // 0x3
        char bOverride_FilmWhitePoint; // 0x3
        char bOverride_FilmSaturation; // 0x3
        char bOverride_FilmChannelMixerRed; // 0x3
        char bOverride_FilmChannelMixerGreen; // 0x3
        char bOverride_FilmChannelMixerBlue; // 0x3
        char bOverride_FilmContrast; // 0x3
        char bOverride_FilmDynamicRange; // 0x4
        char bOverride_FilmHealAmount; // 0x4
        char bOverride_FilmToeAmount; // 0x4
        char bOverride_FilmShadowTint; // 0x4
        char bOverride_FilmShadowTintBlend; // 0x4
        char bOverride_FilmShadowTintAmount; // 0x4
        char bOverride_FilmSlope; // 0x4
        char bOverride_FilmToe; // 0x4
        char bOverride_FilmShoulder; // 0x5
        char bOverride_FilmBlackClip; // 0x5
        char bOverride_FilmWhiteClip; // 0x5
        char bOverride_SceneColorTint; // 0x5
        char bOverride_SceneFringeIntensity; // 0x5
        char bOverride_ChromaticAberrationStartOffset; // 0x5
        char bOverride_AmbientCubemapTint; // 0x5
        char bOverride_AmbientCubemapIntensity; // 0x5
        char bOverride_BloomMethod; // 0x6
        char bOverride_BloomIntensity; // 0x6
        char bOverride_BloomThreshold; // 0x6
        char bOverride_Bloom1Tint; // 0x6
        char bOverride_Bloom1Size; // 0x6
        char bOverride_Bloom2Size; // 0x6
        char bOverride_Bloom2Tint; // 0x6
        char bOverride_Bloom3Tint; // 0x6
        char bOverride_Bloom3Size; // 0x7
        char bOverride_Bloom4Tint; // 0x7
        char bOverride_Bloom4Size; // 0x7
        char bOverride_Bloom5Tint; // 0x7
        char bOverride_Bloom5Size; // 0x7
        char bOverride_Bloom6Tint; // 0x7
        char bOverride_Bloom6Size; // 0x7
        char bOverride_BloomSizeScale; // 0x7
        char bOverride_BloomConvolutionTexture; // 0x8
        char bOverride_BloomConvolutionSize; // 0x8
        char bOverride_BloomConvolutionCenterUV; // 0x8
        char bOverride_BloomConvolutionPreFilter; // 0x8
        char bOverride_BloomConvolutionPreFilterMin; // 0x8
        char bOverride_BloomConvolutionPreFilterMax; // 0x8
        char bOverride_BloomConvolutionPreFilterMult; // 0x8
        char bOverride_BloomConvolutionBufferScale; // 0x8
        char bOverride_BloomDirtMaskIntensity; // 0x9
        char bOverride_BloomDirtMaskTint; // 0x9
        char bOverride_BloomDirtMask; // 0x9
        char bOverride_CameraShutterSpeed; // 0x9
        char bOverride_CameraISO; // 0x9
        char bOverride_AutoExposureMethod; // 0x9
        char bOverride_AutoExposureLowPercent; // 0x9
        char bOverride_AutoExposureHighPercent; // 0x9
        char bOverride_AutoExposureMinBrightness; // 0xa
        char bOverride_AutoExposureMaxBrightness; // 0xa
        char bOverride_AutoExposureCalibrationConstant; // 0xa
        char bOverride_AutoExposureSpeedUp; // 0xa
        char bOverride_AutoExposureSpeedDown; // 0xa
        char bOverride_AutoExposureBias; // 0xa
        char bOverride_AutoExposureBiasCurve; // 0xa
        char bOverride_AutoExposureMeterMask; // 0xa
        char bOverride_AutoExposureApplyPhysicalCameraExposure; // 0xb
        char bOverride_HistogramLogMin; // 0xb
        char bOverride_HistogramLogMax; // 0xb
        char bOverride_LensFlareIntensity; // 0xb
        char bOverride_LensFlareTint; // 0xb
        char bOverride_LensFlareTints; // 0xb
        char bOverride_LensFlareBokehSize; // 0xb
        char bOverride_LensFlareBokehShape; // 0xb
        char bOverride_LensFlareThreshold; // 0xc
        char bOverride_VignetteIntensity; // 0xc
        char bOverride_GrainIntensity; // 0xc
        char bOverride_GrainJitter; // 0xc
        char bOverride_AmbientOcclusionIntensity; // 0xc
        char bOverride_AmbientOcclusionStaticFraction; // 0xc
        char bOverride_AmbientOcclusionRadius; // 0xc
        char bOverride_AmbientOcclusionFadeDistance; // 0xc
        char bOverride_AmbientOcclusionFadeRadius; // 0xd
        char bOverride_AmbientOcclusionDistance; // 0xd
        char bOverride_AmbientOcclusionRadiusInWS; // 0xd
        char bOverride_AmbientOcclusionPower; // 0xd
        char bOverride_AmbientOcclusionBias; // 0xd
        char bOverride_AmbientOcclusionQuality; // 0xd
        char bOverride_AmbientOcclusionMipBlend; // 0xd
        char bOverride_AmbientOcclusionMipScale; // 0xd
        char bOverride_AmbientOcclusionMipThreshold; // 0xe
        char bOverride_RayTracingAO; // 0x10
        char bOverride_RayTracingAOSamplesPerPixel; // 0x10
        char bOverride_LPVIntensity; // 0x14
        char bOverride_LPVDirectionalOcclusionIntensity; // 0x14
        char bOverride_LPVDirectionalOcclusionRadius; // 0x14
        char bOverride_LPVDiffuseOcclusionExponent; // 0x14
        char bOverride_LPVSpecularOcclusionExponent; // 0x14
        char bOverride_LPVDiffuseOcclusionIntensity; // 0x14
        char bOverride_LPVSpecularOcclusionIntensity; // 0x14
        char bOverride_LPVSize; // 0x14
        char bOverride_LPVSecondaryOcclusionIntensity; // 0x15
        char bOverride_LPVSecondaryBounceIntensity; // 0x15
        char bOverride_LPVGeometryVolumeBias; // 0x15
        char bOverride_LPVVplInjectionBias; // 0x15
        char bOverride_LPVEmissiveInjectionIntensity; // 0x15
        char bOverride_LPVFadeRange; // 0x15
        char bOverride_LPVDirectionalOcclusionFadeRange; // 0x15
        char bOverride_IndirectLightingColor; // 0x15
        char bOverride_IndirectLightingIntensity; // 0x16
        char bOverride_ColorGradingIntensity; // 0x16
        char bOverride_ColorGradingLUT; // 0x16
        char bOverride_DepthOfFieldFocalDistance; // 0x16
        char bOverride_DepthOfFieldFstop; // 0x16
        char bOverride_DepthOfFieldMinFstop; // 0x16
        char bOverride_DepthOfFieldBladeCount; // 0x16
        char bOverride_DepthOfFieldSensorWidth; // 0x16
        char bOverride_DepthOfFieldDepthBlurRadius; // 0x17
        char bOverride_DOFNearStart; // 0x17
        char bOverride_DOFNearEnd; // 0x17
        char bOverride_DOFFarStart; // 0x17
        char bOverride_DOFFarEnd; // 0x17
        char bOverride_DOFExcludedSize; // 0x17
        char bOverride_DOFPower; // 0x17
        char bOverride_DepthOfFieldDepthBlurAmount; // 0x17
        char bOverride_DepthOfFieldFocalRegion; // 0x18
        char bOverride_DepthOfFieldNearTransitionRegion; // 0x18
        char bOverride_DepthOfFieldFarTransitionRegion; // 0x18
        char bOverride_DepthOfFieldScale; // 0x18
        char bOverride_DepthOfFieldNearBlurSize; // 0x18
        char bOverride_DepthOfFieldFarBlurSize; // 0x18
        char bOverride_MobileHQGaussian; // 0x18
        char bOverride_DepthOfFieldOcclusion; // 0x18
        char bOverride_DepthOfFieldSkyFocusDistance; // 0x19
        char bOverride_DepthOfFieldVignetteSize; // 0x19
        char bOverride_MotionBlurAmount; // 0x19
        char bOverride_MotionBlurMax; // 0x19
        char bOverride_MotionBlurTargetFPS; // 0x19
        char bOverride_MotionBlurPerObjectSize; // 0x19
        char bOverride_ScreenPercentage; // 0x19
        char bOverride_ScreenSpaceReflectionIntensity; // 0x19
        char bOverride_ScreenSpaceReflectionQuality; // 0x1a
        char bOverride_ScreenSpaceReflectionMaxRoughness; // 0x1a
        char bOverride_ScreenSpaceReflectionRoughnessScale; // 0x1a
        char bOverride_ReflectionsType; // 0x1c
        char bOverride_RayTracingReflectionsMaxRoughness; // 0x1c
        char bOverride_RayTracingReflectionsMaxBounces; // 0x1c
        char bOverride_RayTracingReflectionsSamplesPerPixel; // 0x1c
        char bOverride_RayTracingReflectionsShadows; // 0x1c
        char bOverride_RayTracingReflectionsTranslucency; // 0x1c
        char bOverride_TranslucencyType; // 0x1c
        char bOverride_RayTracingTranslucencyMaxRoughness; // 0x1c
        char bOverride_RayTracingTranslucencyRefractionRays; // 0x1d
        char bOverride_RayTracingTranslucencySamplesPerPixel; // 0x1d
        char bOverride_RayTracingTranslucencyShadows; // 0x1d
        char bOverride_RayTracingTranslucencyRefraction; // 0x1d
        char bOverride_RayTracingGI; // 0x1d
        char bOverride_RayTracingGIMaxBounces; // 0x1d
        char bOverride_RayTracingGISamplesPerPixel; // 0x1d
        char bOverride_PathTracingMaxBounces; // 0x1d
        char bOverride_PathTracingSamplesPerPixel; // 0x1e
        char bMobileHQGaussian; // 0x20
        enum class EBloomMethod BloomMethod; // 0x21
        enum class EAutoExposureMethod AutoExposureMethod; // 0x22
        float WhiteTemp; // 0x24
        float WhiteTint; // 0x28
        struct FVector4 ColorSaturation; // 0x30
        struct FVector4 ColorContrast; // 0x40
        struct FVector4 ColorGamma; // 0x50
        struct FVector4 ColorGain; // 0x60
        struct FVector4 ColorOffset; // 0x70
        struct FVector4 ColorSaturationShadows; // 0x80
        struct FVector4 ColorContrastShadows; // 0x90
        struct FVector4 ColorGammaShadows; // 0xa0
        struct FVector4 ColorGainShadows; // 0xb0
        struct FVector4 ColorOffsetShadows; // 0xc0
        struct FVector4 ColorSaturationMidtones; // 0xd0
        struct FVector4 ColorContrastMidtones; // 0xe0
        struct FVector4 ColorGammaMidtones; // 0xf0
        struct FVector4 ColorGainMidtones; // 0x100
        struct FVector4 ColorOffsetMidtones; // 0x110
        struct FVector4 ColorSaturationHighlights; // 0x120
        struct FVector4 ColorContrastHighlights; // 0x130
        struct FVector4 ColorGammaHighlights; // 0x140
        struct FVector4 ColorGainHighlights; // 0x150
        struct FVector4 ColorOffsetHighlights; // 0x160
        float ColorCorrectionHighlightsMin; // 0x170
        float ColorCorrectionShadowsMax; // 0x174
        float BlueCorrection; // 0x178
        float ExpandGamut; // 0x17c
        float FilmSlope; // 0x180
        float FilmToe; // 0x184
        float FilmShoulder; // 0x188
        float FilmBlackClip; // 0x18c
        float FilmWhiteClip; // 0x190
        struct FLinearColor FilmWhitePoint; // 0x194
        struct FLinearColor FilmShadowTint; // 0x1a4
        float FilmShadowTintBlend; // 0x1b4
        float FilmShadowTintAmount; // 0x1b8
        float FilmSaturation; // 0x1bc
        struct FLinearColor FilmChannelMixerRed; // 0x1c0
        struct FLinearColor FilmChannelMixerGreen; // 0x1d0
        struct FLinearColor FilmChannelMixerBlue; // 0x1e0
        float FilmContrast; // 0x1f0
        float FilmToeAmount; // 0x1f4
        float FilmHealAmount; // 0x1f8
        float FilmDynamicRange; // 0x1fc
        struct FLinearColor SceneColorTint; // 0x200
        float SceneFringeIntensity; // 0x210
        float ChromaticAberrationStartOffset; // 0x214
        float BloomIntensity; // 0x218
        float BloomThreshold; // 0x21c
        float BloomSizeScale; // 0x220
        float Bloom1Size; // 0x224
        float Bloom2Size; // 0x228
        float Bloom3Size; // 0x22c
        float Bloom4Size; // 0x230
        float Bloom5Size; // 0x234
        float Bloom6Size; // 0x238
        struct FLinearColor Bloom1Tint; // 0x23c
        struct FLinearColor Bloom2Tint; // 0x24c
        struct FLinearColor Bloom3Tint; // 0x25c
        struct FLinearColor Bloom4Tint; // 0x26c
        struct FLinearColor Bloom5Tint; // 0x27c
        struct FLinearColor Bloom6Tint; // 0x28c
        float BloomConvolutionSize; // 0x29c
        class UTexture2D* BloomConvolutionTexture; // 0x2a0
        struct FVector2D BloomConvolutionCenterUV; // 0x2a8
        float BloomConvolutionPreFilterMin; // 0x2b0
        float BloomConvolutionPreFilterMax; // 0x2b4
        float BloomConvolutionPreFilterMult; // 0x2b8
        float BloomConvolutionBufferScale; // 0x2bc
        class UTexture* BloomDirtMask; // 0x2c0
        float BloomDirtMaskIntensity; // 0x2c8
        struct FLinearColor BloomDirtMaskTint; // 0x2cc
        struct FLinearColor AmbientCubemapTint; // 0x2dc
        float AmbientCubemapIntensity; // 0x2ec
        class UTextureCube* AmbientCubemap; // 0x2f0
        float CameraShutterSpeed; // 0x2f8
        float CameraISO; // 0x2fc
        float DepthOfFieldFstop; // 0x300
        float DepthOfFieldMinFstop; // 0x304
        int32_t DepthOfFieldBladeCount; // 0x308
        float AutoExposureBias; // 0x30c
        float AutoExposureBiasBackup; // 0x310
        char bOverride_AutoExposureBiasBackup; // 0x314
        char AutoExposureApplyPhysicalCameraExposure; // 0x318
        class UCurveFloat* AutoExposureBiasCurve; // 0x320
        class UTexture* AutoExposureMeterMask; // 0x328
        float AutoExposureLowPercent; // 0x330
        float AutoExposureHighPercent; // 0x334
        float AutoExposureMinBrightness; // 0x338
        float AutoExposureMaxBrightness; // 0x33c
        float AutoExposureSpeedUp; // 0x340
        float AutoExposureSpeedDown; // 0x344
        float HistogramLogMin; // 0x348
        float HistogramLogMax; // 0x34c
        float AutoExposureCalibrationConstant; // 0x350
        float LensFlareIntensity; // 0x354
        struct FLinearColor LensFlareTint; // 0x358
        float LensFlareBokehSize; // 0x368
        float LensFlareThreshold; // 0x36c
        class UTexture* LensFlareBokehShape; // 0x370
        struct FLinearColor LensFlareTints; // 0x378
        float VignetteIntensity; // 0x3f8
        float GrainJitter; // 0x3fc
        float GrainIntensity; // 0x400
        float AmbientOcclusionIntensity; // 0x404
        float AmbientOcclusionStaticFraction; // 0x408
        float AmbientOcclusionRadius; // 0x40c
        char AmbientOcclusionRadiusInWS; // 0x410
        float AmbientOcclusionFadeDistance; // 0x414
        float AmbientOcclusionFadeRadius; // 0x418
        float AmbientOcclusionDistance; // 0x41c
        float AmbientOcclusionPower; // 0x420
        float AmbientOcclusionBias; // 0x424
        float AmbientOcclusionQuality; // 0x428
        float AmbientOcclusionMipBlend; // 0x42c
        float AmbientOcclusionMipScale; // 0x430
        float AmbientOcclusionMipThreshold; // 0x434
        char RayTracingAO; // 0x438
        int32_t RayTracingAOSamplesPerPixel; // 0x43c
        struct FLinearColor IndirectLightingColor; // 0x440
        float IndirectLightingIntensity; // 0x450
        enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x454
        int32_t RayTracingGIMaxBounces; // 0x458
        int32_t RayTracingGISamplesPerPixel; // 0x45c
        float ColorGradingIntensity; // 0x460
        class UTexture* ColorGradingLUT; // 0x468
        float DepthOfFieldSensorWidth; // 0x470
        float DepthOfFieldFocalDistance; // 0x474
        float DepthOfFieldDepthBlurAmount; // 0x478
        float DepthOfFieldDepthBlurRadius; // 0x47c
        float DOFNearStart; // 0x480
        float DOFNearEnd; // 0x484
        float DOFFarStart; // 0x488
        float DOFFarEnd; // 0x48c
        float DOFExcludedSize; // 0x490
        float DOFPower; // 0x494
        float DepthOfFieldFocalRegion; // 0x498
        float DepthOfFieldNearTransitionRegion; // 0x49c
        float DepthOfFieldFarTransitionRegion; // 0x4a0
        float DepthOfFieldScale; // 0x4a4
        float DepthOfFieldNearBlurSize; // 0x4a8
        float DepthOfFieldFarBlurSize; // 0x4ac
        float DepthOfFieldOcclusion; // 0x4b0
        float DepthOfFieldSkyFocusDistance; // 0x4b4
        float DepthOfFieldVignetteSize; // 0x4b8
        float MotionBlurAmount; // 0x4bc
        float MotionBlurMax; // 0x4c0
        int32_t MotionBlurTargetFPS; // 0x4c4
        float MotionBlurPerObjectSize; // 0x4c8
        float LPVIntensity; // 0x4cc
        float LPVVplInjectionBias; // 0x4d0
        float LPVSize; // 0x4d4
        float LPVSecondaryOcclusionIntensity; // 0x4d8
        float LPVSecondaryBounceIntensity; // 0x4dc
        float LPVGeometryVolumeBias; // 0x4e0
        float LPVEmissiveInjectionIntensity; // 0x4e4
        float LPVDirectionalOcclusionIntensity; // 0x4e8
        float LPVDirectionalOcclusionRadius; // 0x4ec
        float LPVDiffuseOcclusionExponent; // 0x4f0
        float LPVSpecularOcclusionExponent; // 0x4f4
        float LPVDiffuseOcclusionIntensity; // 0x4f8
        float LPVSpecularOcclusionIntensity; // 0x4fc
        enum class EReflectionsType ReflectionsType; // 0x500
        float ScreenSpaceReflectionIntensity; // 0x504
        float ScreenSpaceReflectionQuality; // 0x508
        float ScreenSpaceReflectionMaxRoughness; // 0x50c
        float RayTracingReflectionsMaxRoughness; // 0x510
        int32_t RayTracingReflectionsMaxBounces; // 0x514
        int32_t RayTracingReflectionsSamplesPerPixel; // 0x518
        enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x51c
        char RayTracingReflectionsTranslucency; // 0x51d
        enum class ETranslucencyType TranslucencyType; // 0x51e
        float RayTracingTranslucencyMaxRoughness; // 0x520
        int32_t RayTracingTranslucencyRefractionRays; // 0x524
        int32_t RayTracingTranslucencySamplesPerPixel; // 0x528
        enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x52c
        char RayTracingTranslucencyRefraction; // 0x52d
        int32_t PathTracingMaxBounces; // 0x530
        int32_t PathTracingSamplesPerPixel; // 0x534
        float LPVFadeRange; // 0x538
        float LPVDirectionalOcclusionFadeRange; // 0x53c
        float ScreenPercentage; // 0x540
        struct FWeightedBlendables WeightedBlendables; // 0x548

    };

    struct FWeightedBlendables //ScriptStruct Engine.WeightedBlendables
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FWeightedBlendable> Array; // 0x0

    };

    struct FWeightedBlendable //ScriptStruct Engine.WeightedBlendable
    {
    //Children Prop Count (Fields): 2
    public:

        float Weight; // 0x0
        class UObject* Object; // 0x8

    };

    struct FCanvasIcon //ScriptStruct Engine.CanvasIcon
    {
    //Children Prop Count (Fields): 5
    public:

        class UTexture* Texture; // 0x0
        float U; // 0x8
        float V; // 0xc
        float UL; // 0x10
        float VL; // 0x14

    };

    struct FWrappedStringElement //ScriptStruct Engine.WrappedStringElement
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString Value; // 0x0
        struct FVector2D LineExtent; // 0x10

    };

    struct FTextSizingParameters //ScriptStruct Engine.TextSizingParameters
    {
    //Children Prop Count (Fields): 7
    public:

        float DrawX; // 0x0
        float DrawY; // 0x4
        float DrawXL; // 0x8
        float DrawYL; // 0xc
        struct FVector2D Scaling; // 0x10
        class UFont* DrawFont; // 0x18
        struct FVector2D SpacingAdjust; // 0x20

    };

    struct FBasedMovementInfo //ScriptStruct Engine.BasedMovementInfo
    {
    //Children Prop Count (Fields): 7
    public:

        class UPrimitiveComponent* MovementBase; // 0x0
        struct FName BoneName; // 0x8
        struct FVector_NetQuantize100 Location; // 0x10
        struct FRotator Rotation; // 0x1c
        bool bServerHasBaseComponent; // 0x28
        bool bRelativeRotation; // 0x29
        bool bServerHasVelocity; // 0x2a

    };

    struct FSimulatedRootMotionReplicatedMove //ScriptStruct Engine.SimulatedRootMotionReplicatedMove
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        struct FRepRootMotionMontage RootMotion; // 0x8

    };

    struct FRepRootMotionMontage //ScriptStruct Engine.RepRootMotionMontage
    {
    //Children Prop Count (Fields): 12
    public:

        bool bIsActive; // 0x0
        class UAnimMontage* AnimMontage; // 0x8
        float Position; // 0x10
        struct FVector_NetQuantize100 Location; // 0x14
        struct FRotator Rotation; // 0x20
        class UPrimitiveComponent* MovementBase; // 0x30
        struct FName MovementBaseBoneName; // 0x38
        bool bRelativePosition; // 0x40
        bool bRelativeRotation; // 0x41
        struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48
        struct FVector_NetQuantize10 Acceleration; // 0x80
        struct FVector_NetQuantize10 LinearVelocity; // 0x8c

    };

    struct FVector_NetQuantize10 : FVector //ScriptStruct Engine.Vector_NetQuantize10
    {
    public:


    };

    struct FRootMotionSourceGroup //ScriptStruct Engine.RootMotionSourceGroup
    {
    //Children Prop Count (Fields): 6
    public:

        char bHasAdditiveSources; // 0x28
        char bHasOverrideSources; // 0x28
        char bHasOverrideSourcesWithIgnoreZAccumulate; // 0x28
        char bIsAdditiveVelocityApplied; // 0x28
        struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
        struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c

    };

    struct FRootMotionSourceSettings //ScriptStruct Engine.RootMotionSourceSettings
    {
    //Children Prop Count (Fields): 1
    public:

        char Flags; // 0x0

    };

    struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction //ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
    {
    public:


    };

    struct FFindFloorResult //ScriptStruct Engine.FindFloorResult
    {
    //Children Prop Count (Fields): 6
    public:

        char bBlockingHit; // 0x0
        char bWalkableFloor; // 0x0
        char bLineTrace; // 0x0
        float FloorDist; // 0x4
        float LineDist; // 0x8
        struct FHitResult HitResult; // 0xc

    };

    struct FChildActorComponentInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.ChildActorComponentInstanceData
    {
    //Children Prop Count (Fields): 3
    public:

        class AActor* ChildActorClass; // 0xa8
        struct FName ChildActorName; // 0xb0
        struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xb8

    };

    struct FChildActorAttachedActorInfo //ScriptStruct Engine.ChildActorAttachedActorInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct TWeakObjectPtr<struct AActor> Actor; // 0x0
        struct FName SocketName; // 0x8
        struct FTransform RelativeTransform; // 0x10

    };

    struct FCustomProfile //ScriptStruct Engine.CustomProfile
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        struct TArray<struct FResponseChannel> CustomResponses; // 0x8

    };

    struct FCustomChannelSetup //ScriptStruct Engine.CustomChannelSetup
    {
    //Children Prop Count (Fields): 5
    public:

        enum class ECollisionChannel Channel; // 0x0
        enum class ECollisionResponse DefaultResponse; // 0x1
        bool bTraceType; // 0x2
        bool bStaticObject; // 0x3
        struct FName Name; // 0x4

    };

    struct FCollisionResponseTemplate //ScriptStruct Engine.CollisionResponseTemplate
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Name; // 0x0
        enum class ECollisionEnabled CollisionEnabled; // 0x8
        bool bCanModify; // 0xa
        struct FName ObjectTypeName; // 0x2c
        struct TArray<struct FResponseChannel> CustomResponses; // 0x38

    };

    struct FBlueprintComponentDelegateBinding //ScriptStruct Engine.BlueprintComponentDelegateBinding
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName ComponentPropertyName; // 0x0
        struct FName DelegatePropertyName; // 0x8
        struct FName FunctionNameToBind; // 0x10

    };

    struct FMeshUVChannelInfo //ScriptStruct Engine.MeshUVChannelInfo
    {
    //Children Prop Count (Fields): 3
    public:

        bool bInitialized; // 0x0
        bool bOverrideDensities; // 0x1
        float LocalUVDensities; // 0x4

    };

    struct FAutoCompleteNode //ScriptStruct Engine.AutoCompleteNode
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t IndexChar; // 0x0
        struct TArray<int32_t> AutoCompleteListIndices; // 0x8

    };

    struct FAngularDriveConstraint //ScriptStruct Engine.AngularDriveConstraint
    {
    //Children Prop Count (Fields): 6
    public:

        struct FConstraintDrive TwistDrive; // 0x0
        struct FConstraintDrive SwingDrive; // 0x10
        struct FConstraintDrive SlerpDrive; // 0x20
        struct FRotator OrientationTarget; // 0x30
        struct FVector AngularVelocityTarget; // 0x3c
        enum class EAngularDriveMode AngularDriveMode; // 0x48

    };

    struct FConstraintDrive //ScriptStruct Engine.ConstraintDrive
    {
    //Children Prop Count (Fields): 5
    public:

        float Stiffness; // 0x0
        float Damping; // 0x4
        float MaxForce; // 0x8
        char bEnablePositionDrive; // 0xc
        char bEnableVelocityDrive; // 0xc

    };

    struct FLinearDriveConstraint //ScriptStruct Engine.LinearDriveConstraint
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector PositionTarget; // 0x0
        struct FVector VelocityTarget; // 0xc
        struct FConstraintDrive XDrive; // 0x18
        struct FConstraintDrive YDrive; // 0x28
        struct FConstraintDrive ZDrive; // 0x38
        char bEnablePositionDrive; // 0x48

    };

    struct FConstraintInstance //ScriptStruct Engine.ConstraintInstance
    {
    //Children Prop Count (Fields): 12
    public:

        struct FName JointName; // 0x18
        struct FName ConstraintBone1; // 0x20
        struct FName ConstraintBone2; // 0x28
        struct FVector Pos1; // 0x30
        struct FVector PriAxis1; // 0x3c
        struct FVector SecAxis1; // 0x48
        struct FVector Pos2; // 0x54
        struct FVector PriAxis2; // 0x60
        struct FVector SecAxis2; // 0x6c
        struct FRotator AngularRotationOffset; // 0x78
        char bScaleLinearLimits; // 0x84
        struct FConstraintProfileProperties ProfileInstance; // 0x8c

    };

    struct FConstraintProfileProperties //ScriptStruct Engine.ConstraintProfileProperties
    {
    //Children Prop Count (Fields): 14
    public:

        float ProjectionLinearTolerance; // 0x0
        float ProjectionAngularTolerance; // 0x4
        float LinearBreakThreshold; // 0x8
        float AngularBreakThreshold; // 0xc
        struct FLinearConstraint LinearLimit; // 0x10
        struct FConeConstraint ConeLimit; // 0x2c
        struct FTwistConstraint TwistLimit; // 0x4c
        struct FLinearDriveConstraint LinearDrive; // 0x68
        struct FAngularDriveConstraint AngularDrive; // 0xb4
        char bDisableCollision; // 0x100
        char bParentDominates; // 0x100
        char bEnableProjection; // 0x100
        char bAngularBreakable; // 0x100
        char bLinearBreakable; // 0x100

    };

    struct FConstraintBaseParams //ScriptStruct Engine.ConstraintBaseParams
    {
    //Children Prop Count (Fields): 5
    public:

        float Stiffness; // 0x0
        float Damping; // 0x4
        float Restitution; // 0x8
        float ContactDistance; // 0xc
        char bSoftConstraint; // 0x10

    };

    struct FTwistConstraint : FConstraintBaseParams //ScriptStruct Engine.TwistConstraint
    {
    //Children Prop Count (Fields): 2
    public:

        float TwistLimitDegrees; // 0x14
        enum class EAngularConstraintMotion TwistMotion; // 0x18

    };

    struct FConeConstraint : FConstraintBaseParams //ScriptStruct Engine.ConeConstraint
    {
    //Children Prop Count (Fields): 4
    public:

        float Swing1LimitDegrees; // 0x14
        float Swing2LimitDegrees; // 0x18
        enum class EAngularConstraintMotion Swing1Motion; // 0x1c
        enum class EAngularConstraintMotion Swing2Motion; // 0x1d

    };

    struct FLinearConstraint : FConstraintBaseParams //ScriptStruct Engine.LinearConstraint
    {
    //Children Prop Count (Fields): 4
    public:

        float Limit; // 0x14
        enum class ELinearConstraintMotion XMotion; // 0x18
        enum class ELinearConstraintMotion YMotion; // 0x19
        enum class ELinearConstraintMotion ZMotion; // 0x1a

    };

    struct FCullDistanceSizePair //ScriptStruct Engine.CullDistanceSizePair
    {
    //Children Prop Count (Fields): 2
    public:

        float Size; // 0x0
        float CullDistance; // 0x4

    };

    struct FRuntimeCurveLinearColor //ScriptStruct Engine.RuntimeCurveLinearColor
    {
    //Children Prop Count (Fields): 2
    public:

        struct FRichCurve ColorCurves; // 0x0
        class UCurveLinearColor* ExternalCurve; // 0x200

    };

    struct FNamedCurveValue //ScriptStruct Engine.NamedCurveValue
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        float Value; // 0x8

    };

    struct FCurveTableRowHandle //ScriptStruct Engine.CurveTableRowHandle
    {
    //Children Prop Count (Fields): 2
    public:

        class UCurveTable* CurveTable; // 0x0
        struct FName RowName; // 0x8

    };

    struct FDataTableCategoryHandle //ScriptStruct Engine.DataTableCategoryHandle
    {
    //Children Prop Count (Fields): 3
    public:

        class UDataTable* DataTable; // 0x0
        struct FName ColumnName; // 0x8
        struct FName RowContents; // 0x10

    };

    struct FDataTableRowHandle //ScriptStruct Engine.DataTableRowHandle
    {
    //Children Prop Count (Fields): 2
    public:

        class UDataTable* DataTable; // 0x0
        struct FName RowName; // 0x8

    };

    struct FDebugCameraControllerSettingsViewModeIndex //ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
    {
    //Children Prop Count (Fields): 1
    public:

        enum class EViewModeIndex ViewModeIndex; // 0x8

    };

    struct FDebugDisplayProperty //ScriptStruct Engine.DebugDisplayProperty
    {
    //Children Prop Count (Fields): 2
    public:

        class UObject* Obj; // 0x0
        class UObject* WithinClass; // 0x8

    };

    struct FDebugTextInfo //ScriptStruct Engine.DebugTextInfo
    {
    //Children Prop Count (Fields): 13
    public:

        class AActor* SrcActor; // 0x0
        struct FVector SrcActorOffset; // 0x8
        struct FVector SrcActorDesiredOffset; // 0x14
        struct FString DebugText; // 0x20
        float TimeRemaining; // 0x30
        float Duration; // 0x34
        struct FColor TextColor; // 0x38
        char bAbsoluteLocation; // 0x3c
        char bKeepAttachedToActor; // 0x3c
        char bDrawShadow; // 0x3c
        struct FVector OrigActorLocation; // 0x40
        class UFont* Font; // 0x50
        float FontScale; // 0x58

    };

    struct FMulticastRecordOptions //ScriptStruct Engine.MulticastRecordOptions
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString FuncPathName; // 0x0
        bool bServerSkip; // 0x10
        bool bClientSkip; // 0x11

    };

    struct FRollbackNetStartupActorInfo //ScriptStruct Engine.RollbackNetStartupActorInfo
    {
    //Children Prop Count (Fields): 3
    public:

        class UObject* Archetype; // 0x8
        class ULevel* Level; // 0x38
        struct TArray<class UObject*> ObjReferences; // 0xa0

    };

    struct FLevelNameAndTime //ScriptStruct Engine.LevelNameAndTime
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString LevelName; // 0x0
        uint32_t LevelChangeTimeInMS; // 0x10

    };

    struct FDialogueWaveParameter //ScriptStruct Engine.DialogueWaveParameter
    {
    //Children Prop Count (Fields): 2
    public:

        class UDialogueWave* DialogueWave; // 0x0
        struct FDialogueContext Context; // 0x8

    };

    struct FDialogueContext //ScriptStruct Engine.DialogueContext
    {
    //Children Prop Count (Fields): 2
    public:

        class UDialogueVoice* Speaker; // 0x0
        struct TArray<class UDialogueVoice*> Targets; // 0x8

    };

    struct FDialogueContextMapping //ScriptStruct Engine.DialogueContextMapping
    {
    //Children Prop Count (Fields): 4
    public:

        struct FDialogueContext Context; // 0x0
        class USoundWave* SoundWave; // 0x18
        struct FString LocalizationKeyFormat; // 0x20
        class UDialogueSoundWaveProxy* Proxy; // 0x30

    };

    struct FRawDistributionFloat : FRawDistribution //ScriptStruct Engine.RawDistributionFloat
    {
    //Children Prop Count (Fields): 3
    public:

        float MinValue; // 0x20
        float MaxValue; // 0x24
        class UDistributionFloat* Distribution; // 0x28

    };

    struct FRawDistributionVector : FRawDistribution //ScriptStruct Engine.RawDistributionVector
    {
    //Children Prop Count (Fields): 5
    public:

        float MinValue; // 0x20
        float MaxValue; // 0x24
        struct FVector MinValueVec; // 0x28
        struct FVector MaxValueVec; // 0x34
        class UDistributionVector* Distribution; // 0x40

    };

    struct FGraphReference //ScriptStruct Engine.GraphReference
    {
    //Children Prop Count (Fields): 3
    public:

        class UEdGraph* MacroGraph; // 0x0
        class UBlueprint* GraphBlueprint; // 0x8
        struct FGuid GraphGuid; // 0x10

    };

    struct FEdGraphPinReference //ScriptStruct Engine.EdGraphPinReference
    {
    //Children Prop Count (Fields): 2
    public:

        struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x0
        struct FGuid PinID; // 0x8

    };

    struct FEdGraphSchemaAction //ScriptStruct Engine.EdGraphSchemaAction
    {
    //Children Prop Count (Fields): 15
    public:

        struct FText MenuDescription; // 0x8
        struct FText TooltipDescription; // 0x20
        struct FText Category; // 0x38
        struct FText Keywords; // 0x50
        int32_t Grouping; // 0x68
        int32_t SectionID; // 0x6c
        struct TArray<struct FString> MenuDescriptionArray; // 0x70
        struct TArray<struct FString> FullSearchTitlesArray; // 0x80
        struct TArray<struct FString> FullSearchKeywordsArray; // 0x90
        struct TArray<struct FString> FullSearchCategoryArray; // 0xa0
        struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xb0
        struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xc0
        struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xd0
        struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xe0
        struct FString SearchText; // 0xf0

    };

    struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction //ScriptStruct Engine.EdGraphSchemaAction_NewNode
    {
    //Children Prop Count (Fields): 1
    public:

        class UEdGraphNode* NodeTemplate; // 0x100

    };

    struct FPluginRedirect //ScriptStruct Engine.PluginRedirect
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString OldPluginName; // 0x0
        struct FString NewPluginName; // 0x10

    };

    struct FStructRedirect //ScriptStruct Engine.StructRedirect
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName OldStructName; // 0x0
        struct FName NewStructName; // 0x8

    };

    struct FClassRedirect //ScriptStruct Engine.ClassRedirect
    {
    //Children Prop Count (Fields): 8
    public:

        struct FName ObjectName; // 0x0
        struct FName OldClassName; // 0x8
        struct FName NewClassName; // 0x10
        struct FName OldSubobjName; // 0x18
        struct FName NewSubobjName; // 0x20
        struct FName NewClassClass; // 0x28
        struct FName NewClassPackage; // 0x30
        bool InstanceOnly; // 0x38

    };

    struct FGameNameRedirect //ScriptStruct Engine.GameNameRedirect
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName OldGameName; // 0x0
        struct FName NewGameName; // 0x8

    };

    struct FScreenMessageString //ScriptStruct Engine.ScreenMessageString
    {
    //Children Prop Count (Fields): 6
    public:

        uint64_t Key; // 0x0
        struct FString ScreenMessage; // 0x8
        struct FColor DisplayColor; // 0x18
        float TimeToDisplay; // 0x1c
        float CurrentTimeDisplayed; // 0x20
        struct FVector2D TextScale; // 0x24

    };

    struct FDropNoteInfo //ScriptStruct Engine.DropNoteInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Location; // 0x0
        struct FRotator Rotation; // 0xc
        struct FString Comment; // 0x18

    };

    struct FStatColorMapping //ScriptStruct Engine.StatColorMapping
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString StatName; // 0x0
        struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10
        char DisableBlend; // 0x20

    };

    struct FStatColorMapEntry //ScriptStruct Engine.StatColorMapEntry
    {
    //Children Prop Count (Fields): 2
    public:

        float In; // 0x0
        struct FColor Out; // 0x4

    };

    struct FWorldContext //ScriptStruct Engine.WorldContext
    {
    //Children Prop Count (Fields): 10
    public:

        struct FURL LastURL; // 0xd0
        struct FURL LastRemoteURL; // 0x138
        class UPendingNetGame* PendingNetGame; // 0x1a0
        struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8
        struct TArray<class ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8
        struct TArray<class UObjectReferencer*> ObjectReferencers; // 0x1f0
        struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200
        class UGameViewportClient* GameViewport; // 0x210
        class UGameInstance* OwningGameInstance; // 0x218
        struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220

    };

    struct FNamedNetDriver //ScriptStruct Engine.NamedNetDriver
    {
    //Children Prop Count (Fields): 1
    public:

        class UNetDriver* NetDriver; // 0x0

    };

    struct FLevelStreamingStatus //ScriptStruct Engine.LevelStreamingStatus
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName PackageName; // 0x0
        char bShouldBeLoaded; // 0x8
        char bShouldBeVisible; // 0x8
        uint32_t LODIndex; // 0xc

    };

    struct FFullyLoadedPackagesInfo //ScriptStruct Engine.FullyLoadedPackagesInfo
    {
    //Children Prop Count (Fields): 4
    public:

        enum class EFullyLoadPackageType FullyLoadType; // 0x0
        struct FString Tag; // 0x8
        struct TArray<struct FName> PackagesToLoad; // 0x18
        struct TArray<class UObject*> LoadedObjects; // 0x28

    };

    struct FURL //ScriptStruct Engine.URL
    {
    //Children Prop Count (Fields): 8
    public:

        struct FString Protocol; // 0x0
        struct FString Host; // 0x10
        int32_t Port; // 0x20
        int32_t Valid; // 0x24
        struct FString Map; // 0x28
        struct FString RedirectURL; // 0x38
        struct TArray<struct FString> Op; // 0x48
        struct FString Portal; // 0x58

    };

    struct FNetDriverDefinition //ScriptStruct Engine.NetDriverDefinition
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName DefName; // 0x0
        struct FName DriverClassName; // 0x8
        struct FName DriverClassNameFallback; // 0x10

    };

    struct FExposureSettings //ScriptStruct Engine.ExposureSettings
    {
    //Children Prop Count (Fields): 2
    public:

        float FixedEV100; // 0x0
        bool bFixed; // 0x4

    };

    struct FTickPrerequisite //ScriptStruct Engine.TickPrerequisite
    {
    public:


    };

    struct FCanvasUVTri //ScriptStruct Engine.CanvasUVTri
    {
    //Children Prop Count (Fields): 9
    public:

        struct FVector2D V0_Pos; // 0x0
        struct FVector2D V0_UV; // 0x8
        struct FLinearColor V0_Color; // 0x10
        struct FVector2D V1_Pos; // 0x20
        struct FVector2D V1_UV; // 0x28
        struct FLinearColor V1_Color; // 0x30
        struct FVector2D V2_Pos; // 0x40
        struct FVector2D V2_UV; // 0x48
        struct FLinearColor V2_Color; // 0x50

    };

    struct FFontRenderInfo //ScriptStruct Engine.FontRenderInfo
    {
    //Children Prop Count (Fields): 3
    public:

        char bClipText; // 0x0
        char bEnableShadow; // 0x0
        struct FDepthFieldGlowInfo GlowInfo; // 0x4

    };

    struct FDepthFieldGlowInfo //ScriptStruct Engine.DepthFieldGlowInfo
    {
    //Children Prop Count (Fields): 4
    public:

        char bEnableGlow; // 0x0
        struct FLinearColor GlowColor; // 0x4
        struct FVector2D GlowOuterRadius; // 0x14
        struct FVector2D GlowInnerRadius; // 0x1c

    };

    struct FRedirector //ScriptStruct Engine.Redirector
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName OldName; // 0x0
        struct FName NewName; // 0x8

    };

    struct FCollectionReference //ScriptStruct Engine.CollectionReference
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName CollectionName; // 0x0

    };

    struct FComponentReference //ScriptStruct Engine.ComponentReference
    {
    //Children Prop Count (Fields): 3
    public:

        class AActor* OtherActor; // 0x0
        struct FName ComponentProperty; // 0x8
        struct FString PathToComponent; // 0x10

    };

    struct FConstrainComponentPropName //ScriptStruct Engine.ConstrainComponentPropName
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName ComponentName; // 0x0

    };

    struct FDamageEvent //ScriptStruct Engine.DamageEvent
    {
    //Children Prop Count (Fields): 1
    public:

        class UDamageType* DamageTypeClass; // 0x8

    };

    struct FRadialDamageEvent : FDamageEvent //ScriptStruct Engine.RadialDamageEvent
    {
    //Children Prop Count (Fields): 3
    public:

        struct FRadialDamageParams Params; // 0x10
        struct FVector Origin; // 0x24
        struct TArray<struct FHitResult> ComponentHits; // 0x30

    };

    struct FRadialDamageParams //ScriptStruct Engine.RadialDamageParams
    {
    //Children Prop Count (Fields): 5
    public:

        float BaseDamage; // 0x0
        float MinimumDamage; // 0x4
        float InnerRadius; // 0x8
        float OuterRadius; // 0xc
        float DamageFalloff; // 0x10

    };

    struct FPointDamageEvent : FDamageEvent //ScriptStruct Engine.PointDamageEvent
    {
    //Children Prop Count (Fields): 3
    public:

        float Damage; // 0x10
        struct FVector_NetQuantizeNormal ShotDirection; // 0x14
        struct FHitResult HitInfo; // 0x20

    };

    struct FSkeletalMeshBuildSettings //ScriptStruct Engine.SkeletalMeshBuildSettings
    {
    //Children Prop Count (Fields): 12
    public:

        char bRecomputeNormals; // 0x0
        char bRecomputeTangents; // 0x0
        char bUseMikkTSpace; // 0x0
        char bComputeWeightedNormals; // 0x0
        char bRemoveDegenerates; // 0x0
        char bUseHighPrecisionTangentBasis; // 0x0
        char bUseFullPrecisionUVs; // 0x0
        char bBuildAdjacencyBuffer; // 0x0
        float ThresholdPosition; // 0x4
        float ThresholdTangentNormal; // 0x8
        float ThresholdUV; // 0xc
        float MorphThresholdPosition; // 0x10

    };

    struct FMeshBuildSettings //ScriptStruct Engine.MeshBuildSettings
    {
    //Children Prop Count (Fields): 19
    public:

        char bUseMikkTSpace; // 0x0
        char bRecomputeNormals; // 0x0
        char bRecomputeTangents; // 0x0
        char bComputeWeightedNormals; // 0x0
        char bRemoveDegenerates; // 0x0
        char bBuildAdjacencyBuffer; // 0x0
        char bBuildReversedIndexBuffer; // 0x0
        char bUseHighPrecisionTangentBasis; // 0x0
        char bUseFullPrecisionUVs; // 0x1
        char bGenerateLightmapUVs; // 0x1
        char bGenerateDistanceFieldAsIfTwoSided; // 0x1
        char bSupportFaceRemap; // 0x1
        int32_t MinLightmapResolution; // 0x4
        int32_t SrcLightmapIndex; // 0x8
        int32_t DstLightmapIndex; // 0xc
        float BuildScale; // 0x10
        struct FVector BuildScale3D; // 0x14
        float DistanceFieldResolutionScale; // 0x20
        class UStaticMesh* DistanceFieldReplacementMesh; // 0x28

    };

    struct FPOV //ScriptStruct Engine.POV
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Location; // 0x0
        struct FRotator Rotation; // 0xc
        float FOV; // 0x18

    };

    struct FAnimUpdateRateParameters //ScriptStruct Engine.AnimUpdateRateParameters
    {
    //Children Prop Count (Fields): 16
    public:

        enum class EUpdateRateShiftBucket ShiftBucket; // 0x1
        char bInterpolateSkippedFrames; // 0x2
        char bShouldUseLodMap; // 0x2
        char bShouldUseMinLod; // 0x2
        char bSkipUpdate; // 0x2
        char bSkipEvaluation; // 0x2
        int32_t UpdateRate; // 0x4
        int32_t EvaluationRate; // 0x8
        float TickedPoseOffestTime; // 0xc
        float AdditionalTime; // 0x10
        int32_t BaseNonRenderedUpdateRate; // 0x18
        int32_t MaxEvalRateForInterpolation; // 0x1c
        struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20
        struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30
        int32_t SkippedUpdateFrames; // 0x80
        int32_t SkippedEvalFrames; // 0x84

    };

    struct FAnimSlotDesc //ScriptStruct Engine.AnimSlotDesc
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName SlotName; // 0x0
        int32_t NumChannels; // 0x8

    };

    struct FAnimSlotInfo //ScriptStruct Engine.AnimSlotInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName SlotName; // 0x0
        struct TArray<float> ChannelWeights; // 0x8

    };

    struct FMTDResult //ScriptStruct Engine.MTDResult
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Direction; // 0x0
        float Distance; // 0xc

    };

    struct FOverlapResult //ScriptStruct Engine.OverlapResult
    {
    //Children Prop Count (Fields): 3
    public:

        struct TWeakObjectPtr<struct AActor> Actor; // 0x0
        struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x8
        char bBlockingHit; // 0x14

    };

    struct FPrimitiveMaterialRef //ScriptStruct Engine.PrimitiveMaterialRef
    {
    //Children Prop Count (Fields): 3
    public:

        class UPrimitiveComponent* Primitive; // 0x0
        class UDecalComponent* Decal; // 0x8
        int32_t ElementIndex; // 0x10

    };

    struct FSwarmDebugOptions //ScriptStruct Engine.SwarmDebugOptions
    {
    //Children Prop Count (Fields): 3
    public:

        char bDistributionEnabled; // 0x0
        char bForceContentExport; // 0x0
        char bInitialized; // 0x0

    };

    struct FLightmassDebugOptions //ScriptStruct Engine.LightmassDebugOptions
    {
    //Children Prop Count (Fields): 16
    public:

        char bDebugMode; // 0x0
        char bStatsEnabled; // 0x0
        char bGatherBSPSurfacesAcrossComponents; // 0x0
        float CoplanarTolerance; // 0x4
        char bUseImmediateImport; // 0x8
        char bImmediateProcessMappings; // 0x8
        char bSortMappings; // 0x8
        char bDumpBinaryFiles; // 0x8
        char bDebugMaterials; // 0x8
        char bPadMappings; // 0x8
        char bDebugPaddings; // 0x8
        char bOnlyCalcDebugTexelMappings; // 0x8
        char bUseRandomColors; // 0x9
        char bColorBordersGreen; // 0x9
        char bColorByExecutionTime; // 0x9
        float ExecutionTimeDivisor; // 0xc

    };

    struct FLightmassPrimitiveSettings //ScriptStruct Engine.LightmassPrimitiveSettings
    {
    //Children Prop Count (Fields): 9
    public:

        char bUseTwoSidedLighting; // 0x0
        char bShadowIndirectOnly; // 0x0
        char bUseEmissiveForStaticLighting; // 0x0
        char bUseVertexNormalForHemisphereGather; // 0x0
        float EmissiveLightFalloffExponent; // 0x4
        float EmissiveLightExplicitInfluenceRadius; // 0x8
        float EmissiveBoost; // 0xc
        float DiffuseBoost; // 0x10
        float FullyOccludedSamplesFraction; // 0x14

    };

    struct FLightmassLightSettings //ScriptStruct Engine.LightmassLightSettings
    {
    //Children Prop Count (Fields): 3
    public:

        float IndirectLightingSaturation; // 0x0
        float ShadowExponent; // 0x4
        bool bUseAreaShadowsForStationaryLight; // 0x8

    };

    struct FLightmassDirectionalLightSettings : FLightmassLightSettings //ScriptStruct Engine.LightmassDirectionalLightSettings
    {
    //Children Prop Count (Fields): 1
    public:

        float LightSourceAngle; // 0xc

    };

    struct FLightmassPointLightSettings : FLightmassLightSettings //ScriptStruct Engine.LightmassPointLightSettings
    {
    public:


    };

    struct FBasedPosition //ScriptStruct Engine.BasedPosition
    {
    //Children Prop Count (Fields): 5
    public:

        class AActor* base; // 0x0
        struct FVector Position; // 0x8
        struct FVector CachedBaseLocation; // 0x14
        struct FRotator CachedBaseRotation; // 0x20
        struct FVector CachedTransPosition; // 0x2c

    };

    struct FFractureEffect //ScriptStruct Engine.FractureEffect
    {
    //Children Prop Count (Fields): 2
    public:

        class UParticleSystem* ParticleSystem; // 0x0
        class USoundBase* Sound; // 0x8

    };

    struct FCollisionImpactData //ScriptStruct Engine.CollisionImpactData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x0
        struct FVector TotalNormalImpulse; // 0x10
        struct FVector TotalFrictionImpulse; // 0x1c

    };

    struct FRigidBodyContactInfo //ScriptStruct Engine.RigidBodyContactInfo
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector ContactPosition; // 0x0
        struct FVector ContactNormal; // 0xc
        float ContactPenetration; // 0x18
        class UPhysicalMaterial* PhysMaterial; // 0x20

    };

    struct FRigidBodyErrorCorrection //ScriptStruct Engine.RigidBodyErrorCorrection
    {
    //Children Prop Count (Fields): 13
    public:

        float PingExtrapolation; // 0x0
        float PingLimit; // 0x4
        float ErrorPerLinearDifference; // 0x8
        float ErrorPerAngularDifference; // 0xc
        float MaxRestoredStateError; // 0x10
        float MaxLinearHardSnapDistance; // 0x14
        float PositionLerp; // 0x18
        float AngleLerp; // 0x1c
        float LinearVelocityCoefficient; // 0x20
        float AngularVelocityCoefficient; // 0x24
        float ErrorAccumulationSeconds; // 0x28
        float ErrorAccumulationDistanceSq; // 0x2c
        float ErrorAccumulationSimilarity; // 0x30

    };

    struct FRigidBodyState //ScriptStruct Engine.RigidBodyState
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector_NetQuantize100 Position; // 0x0
        struct FQuat Quaternion; // 0x10
        struct FVector_NetQuantize100 LinVel; // 0x20
        struct FVector_NetQuantize100 AngVel; // 0x2c
        char Flags; // 0x38

    };

    struct FMaterialShadingModelField //ScriptStruct Engine.MaterialShadingModelField
    {
    //Children Prop Count (Fields): 1
    public:

        uint16_t ShadingModelField; // 0x0

    };

    struct FExponentialHeightFogData //ScriptStruct Engine.ExponentialHeightFogData
    {
    //Children Prop Count (Fields): 3
    public:

        float FogDensity; // 0x0
        float FogHeightFalloff; // 0x4
        float FogHeightOffset; // 0x8

    };

    struct FFontCharacter //ScriptStruct Engine.FontCharacter
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t StartU; // 0x0
        int32_t StartV; // 0x4
        int32_t USize; // 0x8
        int32_t VSize; // 0xc
        char TextureIndex; // 0x10
        int32_t VerticalOffset; // 0x14

    };

    struct FFontImportOptionsData //ScriptStruct Engine.FontImportOptionsData
    {
    //Children Prop Count (Fields): 29
    public:

        struct FString FontName; // 0x0
        float Height; // 0x10
        char bEnableAntialiasing; // 0x14
        char bEnableBold; // 0x14
        char bEnableItalic; // 0x14
        char bEnableUnderline; // 0x14
        char bAlphaOnly; // 0x14
        enum class EFontImportCharacterSet CharacterSet; // 0x18
        struct FString Chars; // 0x20
        struct FString UnicodeRange; // 0x30
        struct FString CharsFilePath; // 0x40
        struct FString CharsFileWildcard; // 0x50
        char bCreatePrintableOnly; // 0x60
        char bIncludeASCIIRange; // 0x60
        struct FLinearColor ForegroundColor; // 0x64
        char bEnableDropShadow; // 0x74
        int32_t TexturePageWidth; // 0x78
        int32_t TexturePageMaxHeight; // 0x7c
        int32_t XPadding; // 0x80
        int32_t YPadding; // 0x84
        int32_t ExtendBoxTop; // 0x88
        int32_t ExtendBoxBottom; // 0x8c
        int32_t ExtendBoxRight; // 0x90
        int32_t ExtendBoxLeft; // 0x94
        char bEnableLegacyMode; // 0x98
        int32_t Kerning; // 0x9c
        char bUseDistanceFieldAlpha; // 0xa0
        int32_t DistanceFieldScaleFactor; // 0xa4
        float DistanceFieldScanRadiusScale; // 0xa8

    };

    struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings //ScriptStruct Engine.ForceFeedbackAttenuationSettings
    {
    public:


    };

    struct FActiveForceFeedbackEffect //ScriptStruct Engine.ActiveForceFeedbackEffect
    {
    //Children Prop Count (Fields): 1
    public:

        class UForceFeedbackEffect* ForceFeedbackEffect; // 0x0

    };

    struct FForceFeedbackParameters //ScriptStruct Engine.ForceFeedbackParameters
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName Tag; // 0x0
        bool bLooping; // 0x8
        bool bIgnoreTimeDilation; // 0x9
        bool bPlayWhilePaused; // 0xa

    };

    struct FForceFeedbackChannelDetails //ScriptStruct Engine.ForceFeedbackChannelDetails
    {
    //Children Prop Count (Fields): 5
    public:

        char bAffectsLeftLarge; // 0x0
        char bAffectsLeftSmall; // 0x0
        char bAffectsRightLarge; // 0x0
        char bAffectsRightSmall; // 0x0
        struct FRuntimeFloatCurve Curve; // 0x8

    };

    struct FPredictProjectilePathResult //ScriptStruct Engine.PredictProjectilePathResult
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x0
        struct FPredictProjectilePathPointData LastTraceDestination; // 0x10
        struct FHitResult HitResult; // 0x2c

    };

    struct FPredictProjectilePathPointData //ScriptStruct Engine.PredictProjectilePathPointData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Location; // 0x0
        struct FVector Velocity; // 0xc
        float Time; // 0x18

    };

    struct FPredictProjectilePathParams //ScriptStruct Engine.PredictProjectilePathParams
    {
    //Children Prop Count (Fields): 14
    public:

        struct FVector StartLocation; // 0x0
        struct FVector LaunchVelocity; // 0xc
        bool bTraceWithCollision; // 0x18
        float ProjectileRadius; // 0x1c
        float MaxSimTime; // 0x20
        bool bTraceWithChannel; // 0x24
        enum class ECollisionChannel TraceChannel; // 0x25
        struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28
        struct TArray<class AActor*> ActorsToIgnore; // 0x38
        float SimFrequency; // 0x48
        float OverrideGravityZ; // 0x4c
        enum class EDrawDebugTrace DrawDebugType; // 0x50
        float DrawDebugTime; // 0x54
        bool bTraceComplex; // 0x58

    };

    struct FActiveHapticFeedbackEffect //ScriptStruct Engine.ActiveHapticFeedbackEffect
    {
    //Children Prop Count (Fields): 1
    public:

        class UHapticFeedbackEffect_Base* HapticEffect; // 0x0

    };

    struct FHapticFeedbackDetails_Curve //ScriptStruct Engine.HapticFeedbackDetails_Curve
    {
    //Children Prop Count (Fields): 2
    public:

        struct FRuntimeFloatCurve Frequency; // 0x0
        struct FRuntimeFloatCurve Amplitude; // 0x88

    };

    struct FClusterNode //ScriptStruct Engine.ClusterNode
    {
    //Children Prop Count (Fields): 8
    public:

        struct FVector BoundMin; // 0x0
        int32_t FirstChild; // 0xc
        struct FVector BoundMax; // 0x10
        int32_t LastChild; // 0x1c
        int32_t FirstInstance; // 0x20
        int32_t LastInstance; // 0x24
        struct FVector MinInstanceScale; // 0x28
        struct FVector MaxInstanceScale; // 0x34

    };

    struct FClusterNode_DEPRECATED //ScriptStruct Engine.ClusterNode_DEPRECATED
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector BoundMin; // 0x0
        int32_t FirstChild; // 0xc
        struct FVector BoundMax; // 0x10
        int32_t LastChild; // 0x1c
        int32_t FirstInstance; // 0x20
        int32_t LastInstance; // 0x24

    };

    struct FHLODProxyMesh //ScriptStruct Engine.HLODProxyMesh
    {
    //Children Prop Count (Fields): 3
    public:

        struct FLazyObjectProperty LODActor; // 0x0
        class UStaticMesh* StaticMesh; // 0x20
        struct FName Key; // 0x28

    };

    struct FImportanceTexture //ScriptStruct Engine.ImportanceTexture
    {
    //Children Prop Count (Fields): 7
    public:

        struct FIntPoint Size; // 0x0
        int32_t NumMips; // 0x8
        struct TArray<float> MarginalCDF; // 0x10
        struct TArray<float> ConditionalCDF; // 0x20
        struct TArray<struct FColor> TextureData; // 0x30
        struct TWeakObjectPtr<struct UTexture2D> Texture; // 0x40
        enum class EImportanceWeight Weighting; // 0x48

    };

    struct FComponentOverrideRecord //ScriptStruct Engine.ComponentOverrideRecord
    {
    //Children Prop Count (Fields): 4
    public:

        class UObject* ComponentClass; // 0x0
        class UActorComponent* ComponentTemplate; // 0x8
        struct FComponentKey ComponentKey; // 0x10
        struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30

    };

    struct FComponentKey //ScriptStruct Engine.ComponentKey
    {
    //Children Prop Count (Fields): 3
    public:

        class UObject* OwnerClass; // 0x0
        struct FName SCSVariableName; // 0x8
        struct FGuid AssociatedGuid; // 0x10

    };

    struct FBlueprintInputDelegateBinding //ScriptStruct Engine.BlueprintInputDelegateBinding
    {
    //Children Prop Count (Fields): 3
    public:

        char bConsumeInput; // 0x0
        char bExecuteWhenPaused; // 0x0
        char bOverrideParentBinding; // 0x0

    };

    struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding //ScriptStruct Engine.BlueprintInputActionDelegateBinding
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName InputActionName; // 0x4
        enum class EInputEvent InputKeyEvent; // 0xc
        struct FName FunctionNameToBind; // 0x10

    };

    struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding //ScriptStruct Engine.BlueprintInputAxisDelegateBinding
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName InputAxisName; // 0x4
        struct FName FunctionNameToBind; // 0xc

    };

    struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding //ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
    {
    //Children Prop Count (Fields): 2
    public:

        struct FKey AxisKey; // 0x8
        struct FName FunctionNameToBind; // 0x20

    };

    struct FCachedKeyToActionInfo //ScriptStruct Engine.CachedKeyToActionInfo
    {
    //Children Prop Count (Fields): 1
    public:

        class UPlayerInput* PlayerInput; // 0x0

    };

    struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding //ScriptStruct Engine.BlueprintInputKeyDelegateBinding
    {
    //Children Prop Count (Fields): 3
    public:

        struct FInputChord InputChord; // 0x8
        enum class EInputEvent InputKeyEvent; // 0x28
        struct FName FunctionNameToBind; // 0x2c

    };

    struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding //ScriptStruct Engine.BlueprintInputTouchDelegateBinding
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EInputEvent InputKeyEvent; // 0x4
        struct FName FunctionNameToBind; // 0x8

    };

    struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
    {
    //Children Prop Count (Fields): 5
    public:

        class UStaticMesh* StaticMesh; // 0xa8
        struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
        struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
        struct TArray<float> PerInstanceSMCustomData; // 0x100
        int32_t InstancingRandomSeed; // 0x130

    };

    struct FInstancedStaticMeshInstanceData //ScriptStruct Engine.InstancedStaticMeshInstanceData
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMatrix Transform; // 0x0

    };

    struct FInstancedStaticMeshLightMapInstanceData //ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FTransform Transform; // 0x0
        struct TArray<struct FGuid> MapBuildDataIds; // 0x30

    };

    struct FInstancedStaticMeshMappingInfo //ScriptStruct Engine.InstancedStaticMeshMappingInfo
    {
    public:


    };

    struct FIntegralCurve : FIndexedCurve //ScriptStruct Engine.IntegralCurve
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FIntegralKey> Keys; // 0x68
        int32_t DefaultValue; // 0x78
        bool bUseDefaultValueBeforeFirstKey; // 0x7c

    };

    struct FIntegralKey //ScriptStruct Engine.IntegralKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        int32_t Value; // 0x4

    };

    struct FCurveEdTab //ScriptStruct Engine.CurveEdTab
    {
    //Children Prop Count (Fields): 6
    public:

        struct FString TabName; // 0x0
        struct TArray<struct FCurveEdEntry> Curves; // 0x10
        float ViewStartInput; // 0x20
        float ViewEndInput; // 0x24
        float ViewStartOutput; // 0x28
        float ViewEndOutput; // 0x2c

    };

    struct FCurveEdEntry //ScriptStruct Engine.CurveEdEntry
    {
    //Children Prop Count (Fields): 9
    public:

        class UObject* CurveObject; // 0x0
        struct FColor CurveColor; // 0x8
        struct FString CurveName; // 0x10
        int32_t bHideCurve; // 0x20
        int32_t bColorCurve; // 0x24
        int32_t bFloatingPointColorCurve; // 0x28
        int32_t bClamp; // 0x2c
        float ClampLow; // 0x30
        float ClampHigh; // 0x34

    };

    struct FInterpEdSelKey //ScriptStruct Engine.InterpEdSelKey
    {
    //Children Prop Count (Fields): 4
    public:

        class UInterpGroup* Group; // 0x0
        class UInterpTrack* Track; // 0x8
        int32_t KeyIndex; // 0x10
        float UnsnappedPosition; // 0x14

    };

    struct FCameraPreviewInfo //ScriptStruct Engine.CameraPreviewInfo
    {
    //Children Prop Count (Fields): 5
    public:

        class APawn* PawnClass; // 0x0
        class UAnimSequence* AnimSeq; // 0x8
        struct FVector Location; // 0x10
        struct FRotator Rotation; // 0x1c
        class APawn* PawnInst; // 0x28

    };

    struct FSubTrackGroup //ScriptStruct Engine.SubTrackGroup
    {
    //Children Prop Count (Fields): 4
    public:

        struct FString GroupName; // 0x0
        struct TArray<int32_t> TrackIndices; // 0x10
        char bIsCollapsed; // 0x20
        char bIsSelected; // 0x20

    };

    struct FSupportedSubTrackInfo //ScriptStruct Engine.SupportedSubTrackInfo
    {
    //Children Prop Count (Fields): 3
    public:

        class UInterpTrack* SupportedClass; // 0x0
        struct FString SubTrackName; // 0x8
        int32_t GroupIndex; // 0x18

    };

    struct FAnimControlTrackKey //ScriptStruct Engine.AnimControlTrackKey
    {
    //Children Prop Count (Fields): 7
    public:

        float StartTime; // 0x0
        class UAnimSequence* AnimSeq; // 0x8
        float AnimStartOffset; // 0x10
        float AnimEndOffset; // 0x14
        float AnimPlayRate; // 0x18
        char bLooping; // 0x1c
        char bReverse; // 0x1c

    };

    struct FBoolTrackKey //ScriptStruct Engine.BoolTrackKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        char Value; // 0x4

    };

    struct FDirectorTrackCut //ScriptStruct Engine.DirectorTrackCut
    {
    //Children Prop Count (Fields): 4
    public:

        float Time; // 0x0
        float TransitionTime; // 0x4
        struct FName TargetCamGroup; // 0x8
        int32_t ShotNumber; // 0x10

    };

    struct FEventTrackKey //ScriptStruct Engine.EventTrackKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        struct FName EventName; // 0x4

    };

    struct FInterpLookupTrack //ScriptStruct Engine.InterpLookupTrack
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FInterpLookupPoint> Points; // 0x0

    };

    struct FInterpLookupPoint //ScriptStruct Engine.InterpLookupPoint
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName GroupName; // 0x0
        float Time; // 0x8

    };

    struct FParticleReplayTrackKey //ScriptStruct Engine.ParticleReplayTrackKey
    {
    //Children Prop Count (Fields): 3
    public:

        float Time; // 0x0
        float Duration; // 0x4
        int32_t ClipIDNumber; // 0x8

    };

    struct FSoundTrackKey //ScriptStruct Engine.SoundTrackKey
    {
    //Children Prop Count (Fields): 4
    public:

        float Time; // 0x0
        float Volume; // 0x4
        float Pitch; // 0x8
        class USoundBase* Sound; // 0x10

    };

    struct FToggleTrackKey //ScriptStruct Engine.ToggleTrackKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        enum class ETrackToggleAction ToggleAction; // 0x4

    };

    struct FVisibilityTrackKey //ScriptStruct Engine.VisibilityTrackKey
    {
    //Children Prop Count (Fields): 3
    public:

        float Time; // 0x0
        enum class EVisibilityTrackAction Action; // 0x4
        enum class EVisibilityTrackCondition ActiveCondition; // 0x5

    };

    struct FVectorSpringState //ScriptStruct Engine.VectorSpringState
    {
    public:


    };

    struct FFloatSpringState //ScriptStruct Engine.FloatSpringState
    {
    public:


    };

    struct FDrawToRenderTargetContext //ScriptStruct Engine.DrawToRenderTargetContext
    {
    //Children Prop Count (Fields): 1
    public:

        class UTextureRenderTarget2D* RenderTarget; // 0x0

    };

    struct FLatentActionManager //ScriptStruct Engine.LatentActionManager
    {
    public:


    };

    struct FLayerActorStats //ScriptStruct Engine.LayerActorStats
    {
    //Children Prop Count (Fields): 2
    public:

        class UObject* Type; // 0x0
        int32_t Total; // 0x8

    };

    struct FReplicatedStaticActorDestructionInfo //ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
    {
    //Children Prop Count (Fields): 1
    public:

        class UObject* ObjClass; // 0x30

    };

    struct FLevelSimplificationDetails //ScriptStruct Engine.LevelSimplificationDetails
    {
    //Children Prop Count (Fields): 16
    public:

        bool bCreatePackagePerAsset; // 0x0
        float DetailsPercentage; // 0x4
        struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
        bool bOverrideLandscapeExportLOD; // 0x90
        int32_t LandscapeExportLOD; // 0x94
        struct FMaterialProxySettings LandscapeMaterialSettings; // 0x98
        bool bBakeFoliageToLandscape; // 0x120
        bool bBakeGrassToLandscape; // 0x121
        bool bGenerateMeshNormalMap; // 0x122
        bool bGenerateMeshMetallicMap; // 0x123
        bool bGenerateMeshRoughnessMap; // 0x124
        bool bGenerateMeshSpecularMap; // 0x125
        bool bGenerateLandscapeNormalMap; // 0x126
        bool bGenerateLandscapeMetallicMap; // 0x127
        bool bGenerateLandscapeRoughnessMap; // 0x128
        bool bGenerateLandscapeSpecularMap; // 0x129

    };

    struct FMaterialProxySettings //ScriptStruct Engine.MaterialProxySettings
    {
    //Children Prop Count (Fields): 34
    public:

        struct FIntPoint TextureSize; // 0x0
        float GutterSpace; // 0x8
        float MetallicConstant; // 0xc
        float RoughnessConstant; // 0x10
        float AnisotropyConstant; // 0x14
        float SpecularConstant; // 0x18
        float OpacityConstant; // 0x1c
        float OpacityMaskConstant; // 0x20
        float AmbientOcclusionConstant; // 0x24
        enum class ETextureSizingType TextureSizingType; // 0x28
        enum class EMaterialMergeType MaterialMergeType; // 0x29
        enum class EBlendMode BlendMode; // 0x2a
        char bAllowTwoSidedMaterial; // 0x2b
        char bNormalMap; // 0x2b
        char bTangentMap; // 0x2b
        char bMetallicMap; // 0x2b
        char bRoughnessMap; // 0x2b
        char bAnisotropyMap; // 0x2b
        char bSpecularMap; // 0x2b
        char bEmissiveMap; // 0x2b
        char bOpacityMap; // 0x2c
        char bOpacityMaskMap; // 0x2c
        char bAmbientOcclusionMap; // 0x2c
        struct FIntPoint DiffuseTextureSize; // 0x30
        struct FIntPoint NormalTextureSize; // 0x38
        struct FIntPoint TangentTextureSize; // 0x40
        struct FIntPoint MetallicTextureSize; // 0x48
        struct FIntPoint RoughnessTextureSize; // 0x50
        struct FIntPoint AnisotropyTextureSize; // 0x58
        struct FIntPoint SpecularTextureSize; // 0x60
        struct FIntPoint EmissiveTextureSize; // 0x68
        struct FIntPoint OpacityTextureSize; // 0x70
        struct FIntPoint OpacityMaskTextureSize; // 0x78
        struct FIntPoint AmbientOcclusionTextureSize; // 0x80

    };

    struct FStreamableTextureInstance //ScriptStruct Engine.StreamableTextureInstance
    {
    public:


    };

    struct FDynamicTextureInstance : FStreamableTextureInstance //ScriptStruct Engine.DynamicTextureInstance
    {
    //Children Prop Count (Fields): 3
    public:

        class UTexture2D* Texture; // 0x28
        bool bAttached; // 0x30
        float OriginalRadius; // 0x34

    };

    struct FPrecomputedLightInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.PrecomputedLightInstanceData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FTransform Transform; // 0xb0
        struct FGuid LightGuid; // 0xe0
        int32_t PreviewShadowMapChannel; // 0xf0

    };

    struct FBatchedPoint //ScriptStruct Engine.BatchedPoint
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector Position; // 0x0
        struct FLinearColor Color; // 0xc
        float PointSize; // 0x1c
        float RemainingLifeTime; // 0x20
        char DepthPriority; // 0x24

    };

    struct FBatchedLine //ScriptStruct Engine.BatchedLine
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector Start; // 0x0
        struct FVector End; // 0xc
        struct FLinearColor Color; // 0x18
        float Thickness; // 0x28
        float RemainingLifeTime; // 0x2c
        char DepthPriority; // 0x30

    };

    struct FClientReceiveData //ScriptStruct Engine.ClientReceiveData
    {
    //Children Prop Count (Fields): 7
    public:

        class APlayerController* LocalPC; // 0x0
        struct FName MessageType; // 0x8
        int32_t MessageIndex; // 0x10
        struct FString MessageString; // 0x18
        class APlayerState* RelatedPlayerState_2; // 0x28
        class APlayerState* RelatedPlayerState_3; // 0x30
        class UObject* OptionalObject; // 0x38

    };

    struct FParameterGroupData //ScriptStruct Engine.ParameterGroupData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString GroupName; // 0x0
        int32_t GroupSortPriority; // 0x10

    };

    struct FMaterialSpriteElement //ScriptStruct Engine.MaterialSpriteElement
    {
    //Children Prop Count (Fields): 6
    public:

        class UMaterialInterface* Material; // 0x0
        class UCurveFloat* DistanceToOpacityCurve; // 0x8
        char bSizeIsInScreenSpace; // 0x10
        float BaseSizeX; // 0x14
        float BaseSizeY; // 0x18
        class UCurveFloat* DistanceToSizeCurve; // 0x20

    };

    struct FMaterialCachedExpressionData //ScriptStruct Engine.MaterialCachedExpressionData
    {
    //Children Prop Count (Fields): 11
    public:

        struct FMaterialCachedParameters Parameters; // 0x0
        struct TArray<class UObject*> ReferencedTextures; // 0x1a0
        struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x1b0
        struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1c0
        struct TArray<class UMaterialFunctionInterface*> DefaultLayers; // 0x1d0
        struct TArray<class UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1e0
        struct TArray<class ULandscapeGrassType*> GrassTypes; // 0x1f0
        struct TArray<struct FName> DynamicParameterNames; // 0x200
        struct TArray<bool> QualityLevelsUsed; // 0x210
        char bHasRuntimeVirtualTextureOutput; // 0x220
        char bHasSceneColor; // 0x220

    };

    struct FMaterialParameterCollectionInfo //ScriptStruct Engine.MaterialParameterCollectionInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid StateId; // 0x0
        class UMaterialParameterCollection* ParameterCollection; // 0x10

    };

    struct FMaterialFunctionInfo //ScriptStruct Engine.MaterialFunctionInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid StateId; // 0x0
        class UMaterialFunctionInterface* Function; // 0x10

    };

    struct FMaterialCachedParameters //ScriptStruct Engine.MaterialCachedParameters
    {
    //Children Prop Count (Fields): 7
    public:

        struct FMaterialCachedParameterEntry Entries; // 0x0
        struct TArray<float> ScalarValues; // 0x140
        struct TArray<struct FLinearColor> VectorValues; // 0x150
        struct TArray<class UTexture*> TextureValues; // 0x160
        struct TArray<class UFont*> FontValues; // 0x170
        struct TArray<int32_t> FontPageValues; // 0x180
        struct TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190

    };

    struct FMaterialCachedParameterEntry //ScriptStruct Engine.MaterialCachedParameterEntry
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<uint64_t> NameHashes; // 0x0
        struct TArray<struct FMaterialParameterInfo> ParameterInfos; // 0x10
        struct TArray<struct FGuid> ExpressionGuids; // 0x20
        struct TArray<bool> Overrides; // 0x30

    };

    struct FMaterialParameterInfo //ScriptStruct Engine.MaterialParameterInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x0
        enum class EMaterialParameterAssociation Association; // 0x8
        int32_t Index; // 0xc

    };

    struct FParameterChannelNames //ScriptStruct Engine.ParameterChannelNames
    {
    //Children Prop Count (Fields): 4
    public:

        struct FText R; // 0x0
        struct FText G; // 0x18
        struct FText B; // 0x30
        struct FText A; // 0x48

    };

    struct FCustomDefine //ScriptStruct Engine.CustomDefine
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString DefineName; // 0x0
        struct FString DefineValue; // 0x10

    };

    struct FCustomOutput //ScriptStruct Engine.CustomOutput
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName OutputName; // 0x0
        enum class ECustomMaterialOutputType OutputType; // 0x8

    };

    struct FCustomInput //ScriptStruct Engine.CustomInput
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName InputName; // 0x0
        struct FExpressionInput Input; // 0x8

    };

    struct FFunctionExpressionOutput //ScriptStruct Engine.FunctionExpressionOutput
    {
    //Children Prop Count (Fields): 3
    public:

        class UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
        struct FGuid ExpressionOutputId; // 0x8
        struct FExpressionOutput Output; // 0x18

    };

    struct FFunctionExpressionInput //ScriptStruct Engine.FunctionExpressionInput
    {
    //Children Prop Count (Fields): 3
    public:

        class UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
        struct FGuid ExpressionInputId; // 0x8
        struct FExpressionInput Input; // 0x18

    };

    struct FFontParameterValue //ScriptStruct Engine.FontParameterValue
    {
    //Children Prop Count (Fields): 4
    public:

        struct FMaterialParameterInfo ParameterInfo; // 0x0
        class UFont* FontValue; // 0x10
        int32_t FontPage; // 0x18
        struct FGuid ExpressionGUID; // 0x1c

    };

    struct FRuntimeVirtualTextureParameterValue //ScriptStruct Engine.RuntimeVirtualTextureParameterValue
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMaterialParameterInfo ParameterInfo; // 0x0
        class URuntimeVirtualTexture* ParameterValue; // 0x10
        struct FGuid ExpressionGUID; // 0x18

    };

    struct FTextureParameterValue //ScriptStruct Engine.TextureParameterValue
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMaterialParameterInfo ParameterInfo; // 0x0
        class UTexture* ParameterValue; // 0x10
        struct FGuid ExpressionGUID; // 0x18

    };

    struct FVectorParameterValue //ScriptStruct Engine.VectorParameterValue
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMaterialParameterInfo ParameterInfo; // 0x0
        struct FLinearColor ParameterValue; // 0x10
        struct FGuid ExpressionGUID; // 0x20

    };

    struct FScalarParameterValue //ScriptStruct Engine.ScalarParameterValue
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMaterialParameterInfo ParameterInfo; // 0x0
        float ParameterValue; // 0x10
        struct FGuid ExpressionGUID; // 0x14

    };

    struct FScalarParameterAtlasInstanceData //ScriptStruct Engine.ScalarParameterAtlasInstanceData
    {
    //Children Prop Count (Fields): 3
    public:

        bool bIsUsedAsAtlasPosition; // 0x0
        struct TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
        struct TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30

    };

    struct FMaterialInstanceBasePropertyOverrides //ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
    {
    //Children Prop Count (Fields): 12
    public:

        char bOverride_OpacityMaskClipValue; // 0x0
        char bOverride_BlendMode; // 0x0
        char bOverride_ShadingModel; // 0x0
        char bOverride_DitheredLODTransition; // 0x0
        char bOverride_CastDynamicShadowAsMasked; // 0x0
        char bOverride_TwoSided; // 0x0
        char TwoSided; // 0x0
        char DitheredLODTransition; // 0x0
        char bCastDynamicShadowAsMasked; // 0x1
        enum class EBlendMode BlendMode; // 0x2
        enum class EMaterialShadingModel ShadingModel; // 0x3
        float OpacityMaskClipValue; // 0x4

    };

    struct FMaterialTextureInfo //ScriptStruct Engine.MaterialTextureInfo
    {
    //Children Prop Count (Fields): 3
    public:

        float SamplingScale; // 0x0
        int32_t UVChannelIndex; // 0x4
        struct FName TextureName; // 0x8

    };

    struct FLightmassMaterialInterfaceSettings //ScriptStruct Engine.LightmassMaterialInterfaceSettings
    {
    //Children Prop Count (Fields): 8
    public:

        float EmissiveBoost; // 0x0
        float DiffuseBoost; // 0x4
        float ExportResolutionScale; // 0x8
        char bCastShadowAsMasked; // 0xc
        char bOverrideCastShadowAsMasked; // 0xc
        char bOverrideEmissiveBoost; // 0xc
        char bOverrideDiffuseBoost; // 0xc
        char bOverrideExportResolutionScale; // 0xc

    };

    struct FMaterialLayersFunctions //ScriptStruct Engine.MaterialLayersFunctions
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<class UMaterialFunctionInterface*> Layers; // 0x0
        struct TArray<class UMaterialFunctionInterface*> Blends; // 0x10
        struct TArray<bool> LayerStates; // 0x20
        struct FString KeyString; // 0x30

    };

    struct FCollectionParameterBase //ScriptStruct Engine.CollectionParameterBase
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ParameterName; // 0x0
        struct FGuid ID; // 0x8

    };

    struct FCollectionVectorParameter : FCollectionParameterBase //ScriptStruct Engine.CollectionVectorParameter
    {
    //Children Prop Count (Fields): 1
    public:

        struct FLinearColor DefaultValue; // 0x18

    };

    struct FCollectionScalarParameter : FCollectionParameterBase //ScriptStruct Engine.CollectionScalarParameter
    {
    //Children Prop Count (Fields): 1
    public:

        float DefaultValue; // 0x18

    };

    struct FInterpGroupActorInfo //ScriptStruct Engine.InterpGroupActorInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ObjectName; // 0x0
        struct TArray<class AActor*> Actors; // 0x8

    };

    struct FCameraCutInfo //ScriptStruct Engine.CameraCutInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Location; // 0x0
        float Timestamp; // 0xc

    };

    struct FMemberReference //ScriptStruct Engine.MemberReference
    {
    //Children Prop Count (Fields): 6
    public:

        class UObject* MemberParent; // 0x0
        struct FString MemberScope; // 0x8
        struct FName MemberName; // 0x18
        struct FGuid MemberGuid; // 0x20
        bool bSelfContext; // 0x30
        bool bWasDeprecated; // 0x31

    };

    struct FMeshInstancingSettings //ScriptStruct Engine.MeshInstancingSettings
    {
    //Children Prop Count (Fields): 6
    public:

        class AActor* ActorClassToUse; // 0x0
        int32_t InstanceReplacementThreshold; // 0x8
        enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
        bool bSkipMeshesWithVertexColors; // 0xd
        bool bUseHLODVolumes; // 0xe
        class UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10

    };

    struct FMeshMergingSettings //ScriptStruct Engine.MeshMergingSettings
    {
    //Children Prop Count (Fields): 20
    public:

        int32_t TargetLightMapResolution; // 0x0
        enum class EUVOutput OutputUVs; // 0x4
        struct FMaterialProxySettings MaterialSettings; // 0xc
        int32_t GutterSize; // 0x94
        int32_t SpecificLOD; // 0x98
        enum class EMeshLODSelectionType LODSelectionType; // 0x9c
        char bGenerateLightMapUV; // 0x9d
        char bComputedLightMapResolution; // 0x9d
        char bPivotPointAtZero; // 0x9d
        char bMergePhysicsData; // 0x9d
        char bMergeMaterials; // 0x9d
        char bCreateMergedMaterial; // 0x9d
        char bBakeVertexDataToMesh; // 0x9d
        char bUseVertexDataForBakingMaterial; // 0x9d
        char bUseTextureBinning; // 0x9e
        char bReuseMeshLightmapUVs; // 0x9e
        char bMergeEquivalentMaterials; // 0x9e
        char bUseLandscapeCulling; // 0x9e
        char bIncludeImposters; // 0x9e
        char bAllowDistanceField; // 0x9e

    };

    struct FMeshProxySettings //ScriptStruct Engine.MeshProxySettings
    {
    //Children Prop Count (Fields): 23
    public:

        int32_t ScreenSize; // 0x0
        float VoxelSize; // 0x4
        struct FMaterialProxySettings MaterialSettings; // 0x8
        float MergeDistance; // 0x90
        struct FColor UnresolvedGeometryColor; // 0x94
        float MaxRayCastDist; // 0x98
        float HardAngleThreshold; // 0x9c
        int32_t LightMapResolution; // 0xa0
        enum class EProxyNormalComputationMethod NormalCalculationMethod; // 0xa4
        enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xa5
        char bCalculateCorrectLODModel; // 0xa6
        char bOverrideVoxelSize; // 0xa6
        char bOverrideTransferDistance; // 0xa6
        char bUseHardAngleThreshold; // 0xa6
        char bComputeLightMapResolution; // 0xa6
        char bRecalculateNormals; // 0xa6
        char bUseLandscapeCulling; // 0xa6
        char bAllowAdjacency; // 0xa6
        char bAllowDistanceField; // 0xa7
        char bReuseMeshLightmapUVs; // 0xa7
        char bCreateCollision; // 0xa7
        char bAllowVertexColors; // 0xa7
        char bGenerateLightmapUVs; // 0xa7

    };

    struct FMeshReductionSettings //ScriptStruct Engine.MeshReductionSettings
    {
    //Children Prop Count (Fields): 18
    public:

        float PercentTriangles; // 0x0
        float PercentVertices; // 0x4
        float MaxDeviation; // 0x8
        float PixelError; // 0xc
        float WeldingThreshold; // 0x10
        float HardAngleThreshold; // 0x14
        int32_t BaseLODModel; // 0x18
        enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c
        enum class EMeshFeatureImportance TextureImportance; // 0x1d
        enum class EMeshFeatureImportance ShadingImportance; // 0x1e
        char bRecalculateNormals; // 0x1f
        char bGenerateUniqueLightmapUVs; // 0x1f
        char bKeepSymmetry; // 0x1f
        char bVisibilityAided; // 0x1f
        char bCullOccluded; // 0x1f
        enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20
        enum class EMeshFeatureImportance VisibilityAggressiveness; // 0x21
        enum class EMeshFeatureImportance VertexColorImportance; // 0x22

    };

    struct FPurchaseInfo //ScriptStruct Engine.PurchaseInfo
    {
    //Children Prop Count (Fields): 4
    public:

        struct FString Identifier; // 0x0
        struct FString DisplayName; // 0x10
        struct FString DisplayDescription; // 0x20
        struct FString DisplayPrice; // 0x30

    };

    struct FNameCurve : FIndexedCurve //ScriptStruct Engine.NameCurve
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FNameCurveKey> Keys; // 0x68

    };

    struct FNameCurveKey //ScriptStruct Engine.NameCurveKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        struct FName Value; // 0x4

    };

    struct FNavAvoidanceMask //ScriptStruct Engine.NavAvoidanceMask
    {
    //Children Prop Count (Fields): 32
    public:

        char bGroup0; // 0x0
        char bGroup1; // 0x0
        char bGroup2; // 0x0
        char bGroup3; // 0x0
        char bGroup4; // 0x0
        char bGroup5; // 0x0
        char bGroup6; // 0x0
        char bGroup7; // 0x0
        char bGroup8; // 0x1
        char bGroup9; // 0x1
        char bGroup10; // 0x1
        char bGroup11; // 0x1
        char bGroup12; // 0x1
        char bGroup13; // 0x1
        char bGroup14; // 0x1
        char bGroup15; // 0x1
        char bGroup16; // 0x2
        char bGroup17; // 0x2
        char bGroup18; // 0x2
        char bGroup19; // 0x2
        char bGroup20; // 0x2
        char bGroup21; // 0x2
        char bGroup22; // 0x2
        char bGroup23; // 0x2
        char bGroup24; // 0x3
        char bGroup25; // 0x3
        char bGroup26; // 0x3
        char bGroup27; // 0x3
        char bGroup28; // 0x3
        char bGroup29; // 0x3
        char bGroup30; // 0x3
        char bGroup31; // 0x3

    };

    struct FMovementProperties //ScriptStruct Engine.MovementProperties
    {
    //Children Prop Count (Fields): 5
    public:

        char bCanCrouch; // 0x0
        char bCanJump; // 0x0
        char bCanWalk; // 0x0
        char bCanSwim; // 0x0
        char bCanFly; // 0x0

    };

    struct FNavAgentProperties : FMovementProperties //ScriptStruct Engine.NavAgentProperties
    {
    //Children Prop Count (Fields): 5
    public:

        float AgentRadius; // 0x4
        float AgentHeight; // 0x8
        float AgentStepHeight; // 0xc
        float NavWalkingSearchHeightScale; // 0x10
        struct FSoftClassPath PreferredNavData; // 0x18

    };

    struct FNavDataConfig : FNavAgentProperties //ScriptStruct Engine.NavDataConfig
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Name; // 0x30
        struct FColor Color; // 0x38
        struct FVector DefaultQueryExtent; // 0x3c
        class AActor* NavigationDataClass; // 0x48
        struct FSoftClassProperty NavDataClass; // 0x50

    };

    struct FNavAgentSelector //ScriptStruct Engine.NavAgentSelector
    {
    //Children Prop Count (Fields): 16
    public:

        char bSupportsAgent0; // 0x0
        char bSupportsAgent1; // 0x0
        char bSupportsAgent2; // 0x0
        char bSupportsAgent3; // 0x0
        char bSupportsAgent4; // 0x0
        char bSupportsAgent5; // 0x0
        char bSupportsAgent6; // 0x0
        char bSupportsAgent7; // 0x0
        char bSupportsAgent8; // 0x1
        char bSupportsAgent9; // 0x1
        char bSupportsAgent10; // 0x1
        char bSupportsAgent11; // 0x1
        char bSupportsAgent12; // 0x1
        char bSupportsAgent13; // 0x1
        char bSupportsAgent14; // 0x1
        char bSupportsAgent15; // 0x1

    };

    struct FNavigationLinkBase //ScriptStruct Engine.NavigationLinkBase
    {
    //Children Prop Count (Fields): 33
    public:

        float LeftProjectHeight; // 0x0
        float MaxFallDownLength; // 0x4
        float SnapRadius; // 0xc
        float SnapHeight; // 0x10
        struct FNavAgentSelector SupportedAgents; // 0x14
        char bSupportsAgent0; // 0x18
        char bSupportsAgent1; // 0x18
        char bSupportsAgent2; // 0x18
        char bSupportsAgent3; // 0x18
        char bSupportsAgent4; // 0x18
        char bSupportsAgent5; // 0x18
        char bSupportsAgent6; // 0x18
        char bSupportsAgent7; // 0x18
        char bSupportsAgent8; // 0x19
        char bSupportsAgent9; // 0x19
        char bSupportsAgent10; // 0x19
        char bSupportsAgent11; // 0x19
        char bSupportsAgent12; // 0x19
        char bSupportsAgent13; // 0x19
        char bSupportsAgent14; // 0x19
        char bSupportsAgent15; // 0x19
        enum class ENavLinkDirection Direction; // 0x1c
        char bUseSnapHeight; // 0x1d
        char bSnapToCheapestArea; // 0x1d
        char bCustomFlag0; // 0x1d
        char bCustomFlag1; // 0x1d
        char bCustomFlag2; // 0x1d
        char bCustomFlag3; // 0x1d
        char bCustomFlag4; // 0x1d
        char bCustomFlag5; // 0x1d
        char bCustomFlag6; // 0x1e
        char bCustomFlag7; // 0x1e
        class UNavAreaBase* AreaClass; // 0x20

    };

    struct FNavigationSegmentLink : FNavigationLinkBase //ScriptStruct Engine.NavigationSegmentLink
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector LeftStart; // 0x30
        struct FVector LeftEnd; // 0x3c
        struct FVector RightStart; // 0x48
        struct FVector RightEnd; // 0x54

    };

    struct FNavigationLink : FNavigationLinkBase //ScriptStruct Engine.NavigationLink
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Left; // 0x30
        struct FVector Right; // 0x3c

    };

    struct FChannelDefinition //ScriptStruct Engine.ChannelDefinition
    {
    //Children Prop Count (Fields): 9
    public:

        struct FName ChannelName; // 0x0
        struct FName ClassName; // 0x8
        class UObject* ChannelClass; // 0x10
        int32_t StaticChannelIndex; // 0x18
        bool bTickOnCreate; // 0x1c
        bool bServerOpen; // 0x1d
        bool bClientOpen; // 0x1e
        bool bInitialServer; // 0x1f
        bool bInitialClient; // 0x20

    };

    struct FPacketSimulationSettings //ScriptStruct Engine.PacketSimulationSettings
    {
    //Children Prop Count (Fields): 13
    public:

        int32_t PktLoss; // 0x0
        int32_t PktLossMaxSize; // 0x4
        int32_t PktLossMinSize; // 0x8
        int32_t PktOrder; // 0xc
        int32_t PktDup; // 0x10
        int32_t PktLag; // 0x14
        int32_t PktLagVariance; // 0x18
        int32_t PktLagMin; // 0x1c
        int32_t PktLagMax; // 0x20
        int32_t PktIncomingLagMin; // 0x24
        int32_t PktIncomingLagMax; // 0x28
        int32_t PktIncomingLoss; // 0x2c
        int32_t PktJitter; // 0x30

    };

    struct FFastArraySerializer //ScriptStruct Engine.FastArraySerializer
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t ArrayReplicationKey; // 0x54
        enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100

    };

    struct FFastArraySerializerItem //ScriptStruct Engine.FastArraySerializerItem
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t ReplicationID; // 0x0
        int32_t ReplicationKey; // 0x4
        int32_t MostRecentArrayReplicationKey; // 0x8

    };

    struct FNetworkEmulationProfileDescription //ScriptStruct Engine.NetworkEmulationProfileDescription
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString ProfileName; // 0x0
        struct FString Tooltip; // 0x10

    };

    struct FNodeItem //ScriptStruct Engine.NodeItem
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ParentName; // 0x0
        struct FTransform Transform; // 0x10

    };

    struct FParticleBurst //ScriptStruct Engine.ParticleBurst
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t Count; // 0x0
        int32_t CountLow; // 0x4
        float Time; // 0x8

    };

    struct FParticleRandomSeedInfo //ScriptStruct Engine.ParticleRandomSeedInfo
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName ParameterName; // 0x0
        char bGetSeedFromInstance; // 0x8
        char bInstanceSeedIsIndex; // 0x8
        char bResetSeedOnEmitterLooping; // 0x8
        char bRandomlySelectSeedArray; // 0x8
        struct TArray<int32_t> RandomSeeds; // 0x10

    };

    struct FParticleCurvePair //ScriptStruct Engine.ParticleCurvePair
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString CurveName; // 0x0
        class UObject* CurveObject; // 0x10

    };

    struct FBeamModifierOptions //ScriptStruct Engine.BeamModifierOptions
    {
    //Children Prop Count (Fields): 3
    public:

        char bModify; // 0x0
        char bScale; // 0x0
        char bLock; // 0x0

    };

    struct FParticleEvent_GenerateInfo //ScriptStruct Engine.ParticleEvent_GenerateInfo
    {
    //Children Prop Count (Fields): 9
    public:

        enum class EParticleEventType Type; // 0x0
        int32_t Frequency; // 0x4
        int32_t ParticleFrequency; // 0x8
        char FirstTimeOnly; // 0xc
        char LastTimeOnly; // 0xc
        char UseReflectedImpactVector; // 0xc
        char bUseOrbitOffset; // 0xc
        struct FName CustomName; // 0x10
        struct TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18

    };

    struct FLocationBoneSocketInfo //ScriptStruct Engine.LocationBoneSocketInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName BoneSocketName; // 0x0
        struct FVector Offset; // 0x8

    };

    struct FOrbitOptions //ScriptStruct Engine.OrbitOptions
    {
    //Children Prop Count (Fields): 3
    public:

        char bProcessDuringSpawn; // 0x0
        char bProcessDuringUpdate; // 0x0
        char bUseEmitterTime; // 0x0

    };

    struct FEmitterDynamicParameter //ScriptStruct Engine.EmitterDynamicParameter
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName ParamName; // 0x0
        char bUseEmitterTime; // 0x8
        char bSpawnTimeOnly; // 0x8
        enum class EEmitterDynamicParameterValue ValueMethod; // 0xc
        char bScaleVelocityByParamValue; // 0x10
        struct FRawDistributionFloat ParamValue; // 0x18

    };

    struct FBeamTargetData //ScriptStruct Engine.BeamTargetData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName TargetName; // 0x0
        float TargetPercentage; // 0x8

    };

    struct FGPUSpriteResourceData //ScriptStruct Engine.GPUSpriteResourceData
    {
    //Children Prop Count (Fields): 40
    public:

        struct TArray<struct FColor> QuantizedColorSamples; // 0x0
        struct TArray<struct FColor> QuantizedMiscSamples; // 0x10
        struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20
        struct FVector4 ColorScale; // 0x30
        struct FVector4 ColorBias; // 0x40
        struct FVector4 MiscScale; // 0x50
        struct FVector4 MiscBias; // 0x60
        struct FVector4 SimulationAttrCurveScale; // 0x70
        struct FVector4 SimulationAttrCurveBias; // 0x80
        struct FVector4 SubImageSize; // 0x90
        struct FVector4 SizeBySpeed; // 0xa0
        struct FVector ConstantAcceleration; // 0xb0
        struct FVector OrbitOffsetBase; // 0xbc
        struct FVector OrbitOffsetRange; // 0xc8
        struct FVector OrbitFrequencyBase; // 0xd4
        struct FVector OrbitFrequencyRange; // 0xe0
        struct FVector OrbitPhaseBase; // 0xec
        struct FVector OrbitPhaseRange; // 0xf8
        float GlobalVectorFieldScale; // 0x104
        float GlobalVectorFieldTightness; // 0x108
        float PerParticleVectorFieldScale; // 0x10c
        float PerParticleVectorFieldBias; // 0x110
        float DragCoefficientScale; // 0x114
        float DragCoefficientBias; // 0x118
        float ResilienceScale; // 0x11c
        float ResilienceBias; // 0x120
        float CollisionRadiusScale; // 0x124
        float CollisionRadiusBias; // 0x128
        float CollisionTimeBias; // 0x12c
        float CollisionRandomSpread; // 0x130
        float CollisionRandomDistribution; // 0x134
        float OneMinusFriction; // 0x138
        float RotationRateScale; // 0x13c
        float CameraMotionBlurAmount; // 0x140
        enum class EParticleScreenAlignment ScreenAlignment; // 0x144
        enum class EParticleAxisLock LockAxisFlag; // 0x145
        struct FVector2D PivotOffset; // 0x148
        char bRemoveHMDRoll; // 0x150
        float MinFacingCameraBlendDistance; // 0x154
        float MaxFacingCameraBlendDistance; // 0x158

    };

    struct FGPUSpriteEmitterInfo //ScriptStruct Engine.GPUSpriteEmitterInfo
    {
    //Children Prop Count (Fields): 29
    public:

        class UParticleModuleRequired* RequiredModule; // 0x0
        class UParticleModuleSpawn* SpawnModule; // 0x8
        class UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
        struct TArray<class UParticleModule*> SpawnModules; // 0x18
        struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
        struct FFloatDistribution VectorFieldScale; // 0xa0
        struct FFloatDistribution DragCoefficient; // 0xc0
        struct FFloatDistribution PointAttractorStrength; // 0xe0
        struct FFloatDistribution Resilience; // 0x100
        struct FVector ConstantAcceleration; // 0x120
        struct FVector PointAttractorPosition; // 0x12c
        float PointAttractorRadiusSq; // 0x138
        struct FVector OrbitOffsetBase; // 0x13c
        struct FVector OrbitOffsetRange; // 0x148
        struct FVector2D InvMaxSize; // 0x154
        float InvRotationRateScale; // 0x15c
        float MaxLifetime; // 0x160
        int32_t MaxParticleCount; // 0x164
        enum class EParticleScreenAlignment ScreenAlignment; // 0x168
        enum class EParticleAxisLock LockAxisFlag; // 0x169
        char bEnableCollision; // 0x16c
        enum class EParticleCollisionMode CollisionMode; // 0x170
        char bRemoveHMDRoll; // 0x174
        float MinFacingCameraBlendDistance; // 0x178
        float MaxFacingCameraBlendDistance; // 0x17c
        struct FRawDistributionVector DynamicColor; // 0x180
        struct FRawDistributionFloat DynamicAlpha; // 0x1c8
        struct FRawDistributionVector DynamicColorScale; // 0x1f8
        struct FRawDistributionFloat DynamicAlphaScale; // 0x240

    };

    struct FGPUSpriteLocalVectorFieldInfo //ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
    {
    //Children Prop Count (Fields): 12
    public:

        class UVectorField* Field; // 0x0
        struct FTransform Transform; // 0x10
        struct FRotator MinInitialRotation; // 0x40
        struct FRotator MaxInitialRotation; // 0x4c
        struct FRotator RotationRate; // 0x58
        float Intensity; // 0x64
        float Tightness; // 0x68
        char bIgnoreComponentTransform; // 0x6c
        char bTileX; // 0x6c
        char bTileY; // 0x6c
        char bTileZ; // 0x6c
        char bUseFixDT; // 0x6c

    };

    struct FNamedEmitterMaterial //ScriptStruct Engine.NamedEmitterMaterial
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Name; // 0x0
        class UMaterialInterface* Material; // 0x8

    };

    struct FLODSoloTrack //ScriptStruct Engine.LODSoloTrack
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<char> SoloEnableSetting; // 0x0

    };

    struct FParticleSystemLOD //ScriptStruct Engine.ParticleSystemLOD
    {
    public:


    };

    struct FParticleSysParam //ScriptStruct Engine.ParticleSysParam
    {
    //Children Prop Count (Fields): 9
    public:

        struct FName Name; // 0x0
        enum class EParticleSysParamType ParamType; // 0x8
        float Scalar; // 0xc
        float Scalar_Low; // 0x10
        struct FVector Vector; // 0x14
        struct FVector Vector_Low; // 0x20
        struct FColor Color; // 0x2c
        class AActor* Actor; // 0x30
        class UMaterialInterface* Material; // 0x38

    };

    struct FParticleSystemWorldManagerTickFunction : FTickFunction //ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
    {
    public:


    };

    struct FParticleSystemReplayFrame //ScriptStruct Engine.ParticleSystemReplayFrame
    {
    public:


    };

    struct FParticleEmitterReplayFrame //ScriptStruct Engine.ParticleEmitterReplayFrame
    {
    public:


    };

    struct FFreezablePerPlatformInt //ScriptStruct Engine.FreezablePerPlatformInt
    {
    public:


    };

    struct FPhysicalAnimationData //ScriptStruct Engine.PhysicalAnimationData
    {
    //Children Prop Count (Fields): 8
    public:

        struct FName BodyName; // 0x0
        char bIsLocalSimulation; // 0x8
        float OrientationStrength; // 0xc
        float AngularVelocityStrength; // 0x10
        float PositionStrength; // 0x14
        float VelocityStrength; // 0x18
        float MaxLinearForce; // 0x1c
        float MaxAngularForce; // 0x20

    };

    struct FTireFrictionScalePair //ScriptStruct Engine.TireFrictionScalePair
    {
    //Children Prop Count (Fields): 2
    public:

        class UTireType* TireType; // 0x0
        float FrictionScale; // 0x8

    };

    struct FPhysicalAnimationProfile //ScriptStruct Engine.PhysicalAnimationProfile
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ProfileName; // 0x0
        struct FPhysicalAnimationData PhysicalAnimationData; // 0x8

    };

    struct FPhysicsConstraintProfileHandle //ScriptStruct Engine.PhysicsConstraintProfileHandle
    {
    //Children Prop Count (Fields): 2
    public:

        struct FConstraintProfileProperties ProfileProperties; // 0x0
        struct FName ProfileName; // 0x104

    };

    struct FChaosPhysicsSettings //ScriptStruct Engine.ChaosPhysicsSettings
    {
    //Children Prop Count (Fields): 3
    public:

        enum class EChaosThreadingMode DefaultThreadingModel; // 0x0
        enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
        enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x2

    };

    struct FPhysicalSurfaceName //ScriptStruct Engine.PhysicalSurfaceName
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EPhysicalSurface Type; // 0x0
        struct FName Name; // 0x4

    };

    struct FDelegateArray //ScriptStruct Engine.DelegateArray
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FDelegate> Delegates; // 0x0

    };

    struct FViewTargetTransitionParams //ScriptStruct Engine.ViewTargetTransitionParams
    {
    //Children Prop Count (Fields): 4
    public:

        float BlendTime; // 0x0
        enum class EViewTargetBlendFunction BlendFunction; // 0x4
        float BlendExp; // 0x8
        char bLockOutgoing; // 0xc

    };

    struct FTViewTarget //ScriptStruct Engine.TViewTarget
    {
    //Children Prop Count (Fields): 3
    public:

        class AActor* Target; // 0x0
        struct FMinimalViewInfo POV; // 0x10
        class APlayerState* PlayerState; // 0x600

    };

    struct FCameraCacheEntry //ScriptStruct Engine.CameraCacheEntry
    {
    //Children Prop Count (Fields): 2
    public:

        float Timestamp; // 0x0
        struct FMinimalViewInfo POV; // 0x10

    };

    struct FUpdateLevelVisibilityLevelInfo //ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName PackageName; // 0x0
        struct FName Filename; // 0x8
        char bIsVisible; // 0x10

    };

    struct FUpdateLevelStreamingLevelStatus //ScriptStruct Engine.UpdateLevelStreamingLevelStatus
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName PackageName; // 0x0
        int32_t LODIndex; // 0x8
        char bNewShouldBeLoaded; // 0xc
        char bNewShouldBeVisible; // 0xc
        char bNewShouldBlockOnLoad; // 0xc

    };

    struct FInputActionSpeechMapping //ScriptStruct Engine.InputActionSpeechMapping
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName ActionName; // 0x0
        struct FName SpeechKeyword; // 0x8

    };

    struct FInputAxisKeyMapping //ScriptStruct Engine.InputAxisKeyMapping
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName AxisName; // 0x0
        float Scale; // 0x8
        struct FKey Key; // 0x10

    };

    struct FInputActionKeyMapping //ScriptStruct Engine.InputActionKeyMapping
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName ActionName; // 0x0
        char bShift; // 0x8
        char bCtrl; // 0x8
        char bAlt; // 0x8
        char bCmd; // 0x8
        struct FKey Key; // 0x10

    };

    struct FInputAxisConfigEntry //ScriptStruct Engine.InputAxisConfigEntry
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName AxisKeyName; // 0x0
        struct FInputAxisProperties AxisProperties; // 0x8

    };

    struct FInputAxisProperties //ScriptStruct Engine.InputAxisProperties
    {
    //Children Prop Count (Fields): 4
    public:

        float DeadZone; // 0x0
        float Sensitivity; // 0x4
        float Exponent; // 0x8
        char bInvert; // 0xc

    };

    struct FKeyBind //ScriptStruct Engine.KeyBind
    {
    //Children Prop Count (Fields): 11
    public:

        struct FKey Key; // 0x0
        struct FString Command; // 0x18
        char Control; // 0x28
        char Shift; // 0x28
        char Alt; // 0x28
        char Cmd; // 0x28
        char bIgnoreCtrl; // 0x28
        char bIgnoreShift; // 0x28
        char bIgnoreAlt; // 0x28
        char bIgnoreCmd; // 0x28
        char bDisabled; // 0x29

    };

    struct FPlayerMuteList //ScriptStruct Engine.PlayerMuteList
    {
    //Children Prop Count (Fields): 2
    public:

        bool bHasVoiceHandshakeCompleted; // 0x30
        int32_t VoiceChannelIdx; // 0x34

    };

    struct FPoseDataContainer //ScriptStruct Engine.PoseDataContainer
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<struct FSmartName> PoseNames; // 0x0
        struct TArray<struct FName> Tracks; // 0x10
        struct TMap<struct FName, int32_t> TrackMap; // 0x20
        struct TArray<struct FPoseData> Poses; // 0x70
        struct TArray<struct FAnimCurveBase> Curves; // 0x80

    };

    struct FPoseData //ScriptStruct Engine.PoseData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FTransform> LocalSpacePose; // 0x0
        struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
        struct TArray<float> CurveData; // 0x60

    };

    struct FPreviewAssetAttachContainer //ScriptStruct Engine.PreviewAssetAttachContainer
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x0

    };

    struct FPreviewAttachedObjectPair //ScriptStruct Engine.PreviewAttachedObjectPair
    {
    //Children Prop Count (Fields): 3
    public:

        struct TSoftObjectPtr<UObject> AttachedObject; // 0x0
        class UObject* Object; // 0x28
        struct FName AttachedTo; // 0x30

    };

    struct FPreviewMeshCollectionEntry //ScriptStruct Engine.PreviewMeshCollectionEntry
    {
    //Children Prop Count (Fields): 1
    public:

        struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0

    };

    struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.PrimitiveComponentInstanceData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FTransform ComponentTransform; // 0xb0
        int32_t VisibilityId; // 0xe0
        class UPrimitiveComponent* LODParent; // 0xe8

    };

    struct FSpriteCategoryInfo //ScriptStruct Engine.SpriteCategoryInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Category; // 0x0
        struct FText DisplayName; // 0x8
        struct FText Description; // 0x20

    };

    struct FReverbSettings //ScriptStruct Engine.ReverbSettings
    {
    //Children Prop Count (Fields): 5
    public:

        bool bApplyReverb; // 0x0
        class UReverbEffect* ReverbEffect; // 0x8
        class USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
        float Volume; // 0x18
        float FadeTime; // 0x1c

    };

    struct FCompressedRichCurve //ScriptStruct Engine.CompressedRichCurve
    {
    public:


    };

    struct FTransformBase //ScriptStruct Engine.TransformBase
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName Node; // 0x0
        struct FTransformBaseConstraint Constraints; // 0x8

    };

    struct FTransformBaseConstraint //ScriptStruct Engine.TransformBaseConstraint
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x0

    };

    struct FRigTransformConstraint //ScriptStruct Engine.RigTransformConstraint
    {
    //Children Prop Count (Fields): 3
    public:

        enum class EConstraintTransform TranformType; // 0x0
        struct FName ParentSpace; // 0x4
        float Weight; // 0xc

    };

    struct FNode //ScriptStruct Engine.Node
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Name; // 0x0
        struct FName ParentName; // 0x8
        struct FTransform Transform; // 0x10
        struct FString DisplayName; // 0x40
        bool bAdvanced; // 0x50

    };

    struct FRootMotionSource //ScriptStruct Engine.RootMotionSource
    {
    //Children Prop Count (Fields): 13
    public:

        uint16_t Priority; // 0x10
        uint16_t LocalID; // 0x12
        enum class ERootMotionAccumulateMode AccumulateMode; // 0x14
        struct FName InstanceName; // 0x18
        float StartTime; // 0x20
        float CurrentTime; // 0x24
        float PreviousTime; // 0x28
        float Duration; // 0x2c
        struct FRootMotionSourceStatus Status; // 0x30
        struct FRootMotionSourceSettings Settings; // 0x31
        bool bInLocalSpace; // 0x32
        struct FRootMotionMovementParams RootMotionParams; // 0x40
        struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80

    };

    struct FRootMotionFinishVelocitySettings //ScriptStruct Engine.RootMotionFinishVelocitySettings
    {
    //Children Prop Count (Fields): 3
    public:

        enum class ERootMotionFinishVelocityMode Mode; // 0x0
        struct FVector SetVelocity; // 0x4
        float ClampVelocity; // 0x10

    };

    struct FRootMotionSourceStatus //ScriptStruct Engine.RootMotionSourceStatus
    {
    //Children Prop Count (Fields): 1
    public:

        char Flags; // 0x0

    };

    struct FRootMotionSource_JumpForce : FRootMotionSource //ScriptStruct Engine.RootMotionSource_JumpForce
    {
    //Children Prop Count (Fields): 6
    public:

        struct FRotator Rotation; // 0x98
        float Distance; // 0xa4
        float Height; // 0xa8
        bool bDisableTimeout; // 0xac
        class UCurveVector* PathOffsetCurve; // 0xb0
        class UCurveFloat* TimeMappingCurve; // 0xb8

    };

    struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource //ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
    {
    //Children Prop Count (Fields): 6
    public:

        struct FVector StartLocation; // 0x98
        struct FVector InitialTargetLocation; // 0xa4
        struct FVector TargetLocation; // 0xb0
        bool bRestrictSpeedToExpected; // 0xbc
        class UCurveVector* PathOffsetCurve; // 0xc0
        class UCurveFloat* TimeMappingCurve; // 0xc8

    };

    struct FRootMotionSource_MoveToForce : FRootMotionSource //ScriptStruct Engine.RootMotionSource_MoveToForce
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector StartLocation; // 0x98
        struct FVector TargetLocation; // 0xa4
        bool bRestrictSpeedToExpected; // 0xb0
        class UCurveVector* PathOffsetCurve; // 0xb8

    };

    struct FRootMotionSource_RadialForce : FRootMotionSource //ScriptStruct Engine.RootMotionSource_RadialForce
    {
    //Children Prop Count (Fields): 10
    public:

        struct FVector Location; // 0x98
        class AActor* LocationActor; // 0xa8
        float Radius; // 0xb0
        float Strength; // 0xb4
        bool bIsPush; // 0xb8
        bool bNoZForce; // 0xb9
        class UCurveFloat* StrengthDistanceFalloff; // 0xc0
        class UCurveFloat* StrengthOverTime; // 0xc8
        bool bUseFixedWorldDirection; // 0xd0
        struct FRotator FixedWorldDirection; // 0xd4

    };

    struct FRootMotionSource_ConstantForce : FRootMotionSource //ScriptStruct Engine.RootMotionSource_ConstantForce
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Force; // 0x98
        class UCurveFloat* StrengthOverTime; // 0xa8

    };

    struct FCameraExposureSettings //ScriptStruct Engine.CameraExposureSettings
    {
    //Children Prop Count (Fields): 14
    public:

        enum class EAutoExposureMethod Method; // 0x0
        float LowPercent; // 0x4
        float HighPercent; // 0x8
        float MinBrightness; // 0xc
        float MaxBrightness; // 0x10
        float SpeedUp; // 0x14
        float SpeedDown; // 0x18
        float Bias; // 0x1c
        class UCurveFloat* BiasCurve; // 0x20
        class UTexture* MeterMask; // 0x28
        float HistogramLogMin; // 0x30
        float HistogramLogMax; // 0x34
        float CalibrationConstant; // 0x38
        char ApplyPhysicalCameraExposure; // 0x3c

    };

    struct FLensSettings //ScriptStruct Engine.LensSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct FLensBloomSettings Bloom; // 0x0
        struct FLensImperfectionSettings Imperfections; // 0xb8
        float ChromaticAberration; // 0xd8

    };

    struct FLensImperfectionSettings //ScriptStruct Engine.LensImperfectionSettings
    {
    //Children Prop Count (Fields): 3
    public:

        class UTexture* DirtMask; // 0x0
        float DirtMaskIntensity; // 0x8
        struct FLinearColor DirtMaskTint; // 0xc

    };

    struct FLensBloomSettings //ScriptStruct Engine.LensBloomSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct FGaussianSumBloomSettings GaussianSum; // 0x0
        struct FConvolutionBloomSettings Convolution; // 0x88
        enum class EBloomMethod Method; // 0xb0

    };

    struct FConvolutionBloomSettings //ScriptStruct Engine.ConvolutionBloomSettings
    {
    //Children Prop Count (Fields): 7
    public:

        class UTexture2D* Texture; // 0x0
        float Size; // 0x8
        struct FVector2D CenterUV; // 0xc
        float PreFilterMin; // 0x14
        float PreFilterMax; // 0x18
        float PreFilterMult; // 0x1c
        float BufferScale; // 0x20

    };

    struct FGaussianSumBloomSettings //ScriptStruct Engine.GaussianSumBloomSettings
    {
    //Children Prop Count (Fields): 15
    public:

        float Intensity; // 0x0
        float Threshold; // 0x4
        float SizeScale; // 0x8
        float Filter1Size; // 0xc
        float Filter2Size; // 0x10
        float Filter3Size; // 0x14
        float Filter4Size; // 0x18
        float Filter5Size; // 0x1c
        float Filter6Size; // 0x20
        struct FLinearColor Filter1Tint; // 0x24
        struct FLinearColor Filter2Tint; // 0x34
        struct FLinearColor Filter3Tint; // 0x44
        struct FLinearColor Filter4Tint; // 0x54
        struct FLinearColor Filter5Tint; // 0x64
        struct FLinearColor Filter6Tint; // 0x74

    };

    struct FFilmStockSettings //ScriptStruct Engine.FilmStockSettings
    {
    //Children Prop Count (Fields): 5
    public:

        float Slope; // 0x0
        float Toe; // 0x4
        float Shoulder; // 0x8
        float BlackClip; // 0xc
        float WhiteClip; // 0x10

    };

    struct FColorGradingSettings //ScriptStruct Engine.ColorGradingSettings
    {
    //Children Prop Count (Fields): 6
    public:

        struct FColorGradePerRangeSettings Global; // 0x0
        struct FColorGradePerRangeSettings Shadows; // 0x50
        struct FColorGradePerRangeSettings Midtones; // 0xa0
        struct FColorGradePerRangeSettings Highlights; // 0xf0
        float ShadowsMax; // 0x140
        float HighlightsMin; // 0x144

    };

    struct FColorGradePerRangeSettings //ScriptStruct Engine.ColorGradePerRangeSettings
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector4 Saturation; // 0x0
        struct FVector4 Contrast; // 0x10
        struct FVector4 Gamma; // 0x20
        struct FVector4 Gain; // 0x30
        struct FVector4 Offset; // 0x40

    };

    struct FEngineShowFlagsSetting //ScriptStruct Engine.EngineShowFlagsSetting
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString ShowFlagName; // 0x0
        bool Enabled; // 0x10

    };

    struct FSimpleCurve : FRealCurve //ScriptStruct Engine.SimpleCurve
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ERichCurveInterpMode InterpMode; // 0x70
        struct TArray<struct FSimpleCurveKey> Keys; // 0x78

    };

    struct FSimpleCurveKey //ScriptStruct Engine.SimpleCurveKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        float Value; // 0x4

    };

    struct FSingleAnimationPlayData //ScriptStruct Engine.SingleAnimationPlayData
    {
    //Children Prop Count (Fields): 5
    public:

        class UAnimationAsset* AnimToPlay; // 0x0
        char bSavedLooping; // 0x8
        char bSavedPlaying; // 0x8
        float SavedPosition; // 0xc
        float SavedPlayRate; // 0x10

    };

    struct FSkeletalMaterial //ScriptStruct Engine.SkeletalMaterial
    {
    //Children Prop Count (Fields): 3
    public:

        class UMaterialInterface* MaterialInterface; // 0x0
        struct FName MaterialSlotName; // 0x8
        struct FMeshUVChannelInfo UVChannelData; // 0x10

    };

    struct FClothingAssetData_Legacy //ScriptStruct Engine.ClothingAssetData_Legacy
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName AssetName; // 0x0
        struct FString ApexFileName; // 0x8
        bool bClothPropertiesChanged; // 0x18
        struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c

    };

    struct FClothPhysicsProperties_Legacy //ScriptStruct Engine.ClothPhysicsProperties_Legacy
    {
    //Children Prop Count (Fields): 20
    public:

        float VerticalResistance; // 0x0
        float HorizontalResistance; // 0x4
        float BendResistance; // 0x8
        float ShearResistance; // 0xc
        float Friction; // 0x10
        float Damping; // 0x14
        float TetherStiffness; // 0x18
        float TetherLimit; // 0x1c
        float Drag; // 0x20
        float StiffnessFrequency; // 0x24
        float GravityScale; // 0x28
        float MassScale; // 0x2c
        float InertiaBlend; // 0x30
        float SelfCollisionThickness; // 0x34
        float SelfCollisionSquashScale; // 0x38
        float SelfCollisionStiffness; // 0x3c
        float SolverFrequency; // 0x40
        float FiberCompression; // 0x44
        float FiberExpansion; // 0x48
        float FiberResistance; // 0x4c

    };

    struct FSkeletalMeshLODInfo //ScriptStruct Engine.SkeletalMeshLODInfo
    {
    //Children Prop Count (Fields): 16
    public:

        struct FPerPlatformFloat ScreenSize; // 0x0
        float LODHysteresis; // 0x4
        struct TArray<int32_t> LODMaterialMap; // 0x8
        struct FSkeletalMeshBuildSettings BuildSettings; // 0x18
        struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2c
        struct TArray<struct FBoneReference> BonesToRemove; // 0x68
        struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78
        float WeightOfPrioritization; // 0x88
        class UAnimSequence* BakePose; // 0x90
        class UAnimSequence* BakePoseOverride; // 0x98
        struct FString SourceImportFilename; // 0xa0
        enum class ESkinCacheUsage SkinCacheUsage; // 0xb0
        char bHasBeenSimplified; // 0xb1
        char bHasPerLODVertexColors; // 0xb1
        char bAllowCPUAccess; // 0xb1
        char bSupportUniformlyDistributedSampling; // 0xb1

    };

    struct FSkeletalMeshOptimizationSettings //ScriptStruct Engine.SkeletalMeshOptimizationSettings
    {
    //Children Prop Count (Fields): 21
    public:

        enum class SkeletalMeshTerminationCriterion TerminationCriterion; // 0x0
        float NumOfTrianglesPercentage; // 0x4
        float NumOfVertPercentage; // 0x8
        uint32_t MaxNumOfTriangles; // 0xc
        uint32_t MaxNumOfVerts; // 0x10
        float MaxDeviationPercentage; // 0x14
        enum class SkeletalMeshOptimizationType ReductionMethod; // 0x18
        enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19
        enum class SkeletalMeshOptimizationImportance TextureImportance; // 0x1a
        enum class SkeletalMeshOptimizationImportance ShadingImportance; // 0x1b
        enum class SkeletalMeshOptimizationImportance SkinningImportance; // 0x1c
        char bRemapMorphTargets; // 0x1d
        char bRecalcNormals; // 0x1d
        float WeldingThreshold; // 0x20
        float NormalsThreshold; // 0x24
        int32_t MaxBonesPerVertex; // 0x28
        char bEnforceBoneBoundaries; // 0x2c
        float VolumeImportance; // 0x30
        char bLockEdges; // 0x34
        char bLockColorBounaries; // 0x34
        int32_t BaseLOD; // 0x38

    };

    struct FSkeletalMeshClothBuildParams //ScriptStruct Engine.SkeletalMeshClothBuildParams
    {
    //Children Prop Count (Fields): 8
    public:

        struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x0
        int32_t TargetLod; // 0x8
        bool bRemapParameters; // 0xc
        struct FString AssetName; // 0x10
        int32_t LODIndex; // 0x20
        int32_t SourceSection; // 0x24
        bool bRemoveFromMesh; // 0x28
        struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30

    };

    struct FBoneMirrorExport //ScriptStruct Engine.BoneMirrorExport
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName BoneName; // 0x0
        struct FName SourceBoneName; // 0x8
        enum class EAxis BoneFlipAxis; // 0x10

    };

    struct FBoneMirrorInfo //ScriptStruct Engine.BoneMirrorInfo
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t SourceIndex; // 0x0
        enum class EAxis BoneFlipAxis; // 0x4

    };

    struct FSkeletalMeshComponentClothTickFunction : FTickFunction //ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
    {
    public:


    };

    struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction //ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
    {
    public:


    };

    struct FSkeletalMeshLODGroupSettings //ScriptStruct Engine.SkeletalMeshLODGroupSettings
    {
    //Children Prop Count (Fields): 8
    public:

        struct FPerPlatformFloat ScreenSize; // 0x0
        float LODHysteresis; // 0x4
        enum class EBoneFilterActionOption BoneFilterActionOption; // 0x8
        struct TArray<struct FBoneFilter> BoneList; // 0x10
        struct TArray<struct FName> BonesToPrioritize; // 0x20
        float WeightOfPrioritization; // 0x30
        class UAnimSequence* BakePose; // 0x38
        struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40

    };

    struct FBoneFilter //ScriptStruct Engine.BoneFilter
    {
    //Children Prop Count (Fields): 2
    public:

        bool bExcludeSelf; // 0x0
        struct FName BoneName; // 0x4

    };

    struct FSkeletalMeshSamplingInfo //ScriptStruct Engine.SkeletalMeshSamplingInfo
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x0
        struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10

    };

    struct FSkeletalMeshSamplingBuiltData //ScriptStruct Engine.SkeletalMeshSamplingBuiltData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
        struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10

    };

    struct FSkeletalMeshSamplingRegionBuiltData //ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
    {
    public:


    };

    struct FSkeletalMeshSamplingLODBuiltData //ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
    {
    public:


    };

    struct FSkeletalMeshSamplingRegion //ScriptStruct Engine.SkeletalMeshSamplingRegion
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Name; // 0x0
        int32_t LODIndex; // 0x8
        char bSupportUniformlyDistributedSampling; // 0xc
        struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
        struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20

    };

    struct FSkeletalMeshSamplingRegionBoneFilter //ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName BoneName; // 0x0
        char bIncludeOrExclude; // 0x8
        char bApplyToChildren; // 0x8

    };

    struct FSkeletalMeshSamplingRegionMaterialFilter //ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName MaterialName; // 0x0

    };

    struct FVirtualBone //ScriptStruct Engine.VirtualBone
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName SourceBoneName; // 0x0
        struct FName TargetBoneName; // 0x8
        struct FName VirtualBoneName; // 0x10

    };

    struct FAnimSlotGroup //ScriptStruct Engine.AnimSlotGroup
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName GroupName; // 0x0
        struct TArray<struct FName> SlotNames; // 0x8

    };

    struct FRigConfiguration //ScriptStruct Engine.RigConfiguration
    {
    //Children Prop Count (Fields): 2
    public:

        class URig* Rig; // 0x0
        struct TArray<struct FNameMapping> BoneMappingTable; // 0x8

    };

    struct FNameMapping //ScriptStruct Engine.NameMapping
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName NodeName; // 0x0
        struct FName BoneName; // 0x8

    };

    struct FBoneReductionSetting //ScriptStruct Engine.BoneReductionSetting
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FName> BonesToRemove; // 0x0

    };

    struct FReferencePose //ScriptStruct Engine.ReferencePose
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName PoseName; // 0x0
        struct TArray<struct FTransform> ReferencePose; // 0x8

    };

    struct FBoneNode //ScriptStruct Engine.BoneNode
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x0
        int32_t ParentIndex; // 0x8
        enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc

    };

    struct FSkeletonToMeshLinkup //ScriptStruct Engine.SkeletonToMeshLinkup
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<int32_t> SkeletonToMeshTable; // 0x0
        struct TArray<int32_t> MeshToSkeletonTable; // 0x10

    };

    struct FSkelMeshComponentLODInfo //ScriptStruct Engine.SkelMeshComponentLODInfo
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<bool> HiddenMaterials; // 0x0

    };

    struct FSkelMeshSkinWeightInfo //ScriptStruct Engine.SkelMeshSkinWeightInfo
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t Bones; // 0x0
        char Weights; // 0x30

    };

    struct FSkinWeightProfileInfo //ScriptStruct Engine.SkinWeightProfileInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName Name; // 0x0
        struct FPerPlatformBool DefaultProfile; // 0x8
        struct FPerPlatformInt DefaultProfileFromLODIndex; // 0xc

    };

    struct FTentDistribution //ScriptStruct Engine.TentDistribution
    {
    //Children Prop Count (Fields): 3
    public:

        float TipAltitude; // 0x0
        float TipValue; // 0x4
        float Width; // 0x8

    };

    struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.PrecomputedSkyLightInstanceData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid LightGuid; // 0xa8
        float AverageBrightness; // 0xb8

    };

    struct FSmartNameContainer //ScriptStruct Engine.SmartNameContainer
    {
    public:


    };

    struct FSmartNameMapping //ScriptStruct Engine.SmartNameMapping
    {
    public:


    };

    struct FCurveMetaData //ScriptStruct Engine.CurveMetaData
    {
    public:


    };

    struct FSoundAttenuationSettings : FBaseAttenuationSettings //ScriptStruct Engine.SoundAttenuationSettings
    {
    //Children Prop Count (Fields): 55
    public:

        char bAttenuate; // 0xb0
        char bSpatialize; // 0xb0
        char bAttenuateWithLPF; // 0xb0
        char bEnableListenerFocus; // 0xb0
        char bEnableFocusInterpolation; // 0xb0
        char bEnableOcclusion; // 0xb0
        char bUseComplexCollisionForOcclusion; // 0xb0
        char bEnableReverbSend; // 0xb0
        char bEnablePriorityAttenuation; // 0xb1
        char bApplyNormalizationToStereoSounds; // 0xb1
        char bEnableLogFrequencyScaling; // 0xb1
        char bEnableSubmixSends; // 0xb1
        enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
        float BinauralRadius; // 0xb4
        enum class EAirAbsorptionMethod AbsorptionMethod; // 0xb8
        enum class ECollisionChannel OcclusionTraceChannel; // 0xb9
        enum class EReverbSendMethod ReverbSendMethod; // 0xba
        enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xbb
        float OmniRadius; // 0xbc
        float StereoSpread; // 0xc0
        float LPFRadiusMin; // 0xc4
        float LPFRadiusMax; // 0xc8
        struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0
        struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158
        float LPFFrequencyAtMin; // 0x1e0
        float LPFFrequencyAtMax; // 0x1e4
        float HPFFrequencyAtMin; // 0x1e8
        float HPFFrequencyAtMax; // 0x1ec
        float FocusAzimuth; // 0x1f0
        float NonFocusAzimuth; // 0x1f4
        float FocusDistanceScale; // 0x1f8
        float NonFocusDistanceScale; // 0x1fc
        float FocusPriorityScale; // 0x200
        float NonFocusPriorityScale; // 0x204
        float FocusVolumeAttenuation; // 0x208
        float NonFocusVolumeAttenuation; // 0x20c
        float FocusAttackInterpSpeed; // 0x210
        float FocusReleaseInterpSpeed; // 0x214
        float OcclusionLowPassFilterFrequency; // 0x218
        float OcclusionVolumeAttenuation; // 0x21c
        float OcclusionInterpolationTime; // 0x220
        float ReverbWetLevelMin; // 0x224
        float ReverbWetLevelMax; // 0x228
        float ReverbDistanceMin; // 0x22c
        float ReverbDistanceMax; // 0x230
        float ManualReverbSendLevel; // 0x234
        struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x238
        struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2c0
        float PriorityAttenuationMin; // 0x2d0
        float PriorityAttenuationMax; // 0x2d4
        float PriorityAttenuationDistanceMin; // 0x2d8
        float PriorityAttenuationDistanceMax; // 0x2dc
        float ManualPriorityAttenuation; // 0x2e0
        struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2e8
        struct FSoundAttenuationPluginSettings PluginSettings; // 0x370

    };

    struct FSoundAttenuationPluginSettings //ScriptStruct Engine.SoundAttenuationPluginSettings
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
        struct TArray<class UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
        struct TArray<class UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20

    };

    struct FAttenuationSubmixSendSettings //ScriptStruct Engine.AttenuationSubmixSendSettings
    {
    //Children Prop Count (Fields): 8
    public:

        class USoundSubmix* Submix; // 0x0
        enum class ESubmixSendMethod SubmixSendMethod; // 0x8
        float SubmixSendLevelMin; // 0xc
        float SubmixSendLevelMax; // 0x10
        float SubmixSendDistanceMin; // 0x14
        float SubmixSendDistanceMax; // 0x18
        float ManualSubmixSendLevel; // 0x1c
        struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20

    };

    struct FPassiveSoundMixModifier //ScriptStruct Engine.PassiveSoundMixModifier
    {
    //Children Prop Count (Fields): 3
    public:

        class USoundMix* SoundMix; // 0x0
        float MinVolumeThreshold; // 0x8
        float MaxVolumeThreshold; // 0xc

    };

    struct FSoundClassProperties //ScriptStruct Engine.SoundClassProperties
    {
    //Children Prop Count (Fields): 20
    public:

        float Volume; // 0x0
        float Pitch; // 0x4
        float LowPassFilterFrequency; // 0x8
        float AttenuationDistanceScale; // 0xc
        float StereoBleed; // 0x10
        float LFEBleed; // 0x14
        float VoiceCenterChannelVolume; // 0x18
        float RadioFilterVolume; // 0x1c
        float RadioFilterVolumeThreshold; // 0x20
        char bApplyEffects; // 0x24
        char bAlwaysPlay; // 0x24
        char bIsUISound; // 0x24
        char bIsMusic; // 0x24
        char bCenterChannelOnly; // 0x24
        char bApplyAmbientVolumes; // 0x24
        char bReverb; // 0x24
        float Default2DReverbSendAmount; // 0x28
        enum class EAudioOutputTarget OutputTarget; // 0x2c
        enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d
        class USoundSubmix* DefaultSubmix; // 0x30

    };

    struct FSoundClassEditorData //ScriptStruct Engine.SoundClassEditorData
    {
    public:


    };

    struct FSoundConcurrencySettings //ScriptStruct Engine.SoundConcurrencySettings
    {
    //Children Prop Count (Fields): 8
    public:

        int32_t MaxCount; // 0x0
        char bLimitToOwner; // 0x4
        enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x8
        float VolumeScale; // 0xc
        float VolumeScaleAttackTime; // 0x10
        char bVolumeScaleCanRelease; // 0x14
        float VolumeScaleReleaseTime; // 0x18
        float VoiceStealReleaseTime; // 0x1c

    };

    struct FSoundNodeEditorData //ScriptStruct Engine.SoundNodeEditorData
    {
    public:


    };

    struct FSourceEffectChainEntry //ScriptStruct Engine.SourceEffectChainEntry
    {
    //Children Prop Count (Fields): 2
    public:

        class USoundEffectSourcePreset* Preset; // 0x0
        char bBypass; // 0x8

    };

    struct FSoundGroup //ScriptStruct Engine.SoundGroup
    {
    //Children Prop Count (Fields): 4
    public:

        enum class ESoundGroup SoundGroup; // 0x0
        struct FString DisplayName; // 0x8
        char bAlwaysDecompressOnLoad; // 0x18
        float DecompressedDuration; // 0x1c

    };

    struct FSoundClassAdjuster //ScriptStruct Engine.SoundClassAdjuster
    {
    //Children Prop Count (Fields): 6
    public:

        class USoundClass* SoundClassObject; // 0x0
        float VolumeAdjuster; // 0x8
        float PitchAdjuster; // 0xc
        float LowPassFilterFrequency; // 0x10
        char bApplyToChildren; // 0x14
        float VoiceCenterChannelVolumeAdjuster; // 0x18

    };

    struct FAudioEQEffect : FAudioEffectParameters //ScriptStruct Engine.AudioEQEffect
    {
    //Children Prop Count (Fields): 12
    public:

        float FrequencyCenter0; // 0x10
        float Gain0; // 0x14
        float Bandwidth0; // 0x18
        float FrequencyCenter1; // 0x1c
        float Gain1; // 0x20
        float Bandwidth1; // 0x24
        float FrequencyCenter2; // 0x28
        float Gain2; // 0x2c
        float Bandwidth2; // 0x30
        float FrequencyCenter3; // 0x34
        float Gain3; // 0x38
        float Bandwidth3; // 0x3c

    };

    struct FDistanceDatum //ScriptStruct Engine.DistanceDatum
    {
    //Children Prop Count (Fields): 5
    public:

        float FadeInDistanceStart; // 0x0
        float FadeInDistanceEnd; // 0x4
        float FadeOutDistanceStart; // 0x8
        float FadeOutDistanceEnd; // 0xc
        float Volume; // 0x10

    };

    struct FModulatorContinuousParams //ScriptStruct Engine.ModulatorContinuousParams
    {
    //Children Prop Count (Fields): 7
    public:

        struct FName ParameterName; // 0x0
        float Default; // 0x8
        float MinInput; // 0xc
        float MaxInput; // 0x10
        float MinOutput; // 0x14
        float MaxOutput; // 0x18
        enum class ModulationParamMode ParamMode; // 0x1c

    };

    struct FSoundSourceBusSendInfo //ScriptStruct Engine.SoundSourceBusSendInfo
    {
    //Children Prop Count (Fields): 8
    public:

        enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
        class USoundSourceBus* SoundSourceBus; // 0x8
        float SendLevel; // 0x10
        float MinSendLevel; // 0x14
        float MaxSendLevel; // 0x18
        float MinSendDistance; // 0x1c
        float MaxSendDistance; // 0x20
        struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28

    };

    struct FSoundSubmixSendInfo //ScriptStruct Engine.SoundSubmixSendInfo
    {
    //Children Prop Count (Fields): 8
    public:

        enum class ESendLevelControlMethod SendLevelControlMethod; // 0x0
        class USoundSubmixBase* SoundSubmix; // 0x8
        float SendLevel; // 0x10
        float MinSendLevel; // 0x14
        float MaxSendLevel; // 0x18
        float MinSendDistance; // 0x1c
        float MaxSendDistance; // 0x20
        struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28

    };

    struct FSoundWaveEnvelopeTimeData //ScriptStruct Engine.SoundWaveEnvelopeTimeData
    {
    //Children Prop Count (Fields): 2
    public:

        float Amplitude; // 0x0
        float TimeSec; // 0x4

    };

    struct FSoundWaveSpectralTimeData //ScriptStruct Engine.SoundWaveSpectralTimeData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x0
        float TimeSec; // 0x10

    };

    struct FSoundWaveSpectralDataEntry //ScriptStruct Engine.SoundWaveSpectralDataEntry
    {
    //Children Prop Count (Fields): 2
    public:

        float Magnitude; // 0x0
        float NormalizedMagnitude; // 0x4

    };

    struct FSoundWaveEnvelopeDataPerSound //ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
    {
    //Children Prop Count (Fields): 3
    public:

        float Envelope; // 0x0
        float PlaybackTime; // 0x4
        class USoundWave* SoundWave; // 0x8

    };

    struct FSoundWaveSpectralDataPerSound //ScriptStruct Engine.SoundWaveSpectralDataPerSound
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x0
        float PlaybackTime; // 0x10
        class USoundWave* SoundWave; // 0x18

    };

    struct FSoundWaveSpectralData //ScriptStruct Engine.SoundWaveSpectralData
    {
    //Children Prop Count (Fields): 3
    public:

        float FrequencyHz; // 0x0
        float Magnitude; // 0x4
        float NormalizedMagnitude; // 0x8

    };

    struct FStreamedAudioPlatformData //ScriptStruct Engine.StreamedAudioPlatformData
    {
    public:


    };

    struct FSplineInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.SplineInstanceData
    {
    //Children Prop Count (Fields): 3
    public:

        bool bSplineHasBeenEdited; // 0xa8
        struct FSplineCurves SplineCurves; // 0xb0
        struct FSplineCurves SplineCurvesPreUCS; // 0x118

    };

    struct FSplineCurves //ScriptStruct Engine.SplineCurves
    {
    //Children Prop Count (Fields): 5
    public:

        struct FInterpCurveVector Position; // 0x0
        struct FInterpCurveQuat Rotation; // 0x18
        struct FInterpCurveVector Scale; // 0x30
        struct FInterpCurveFloat ReparamTable; // 0x48
        class USplineMetadata* MetaData; // 0x60

    };

    struct FSplinePoint //ScriptStruct Engine.SplinePoint
    {
    //Children Prop Count (Fields): 7
    public:

        float InputKey; // 0x0
        struct FVector Position; // 0x4
        struct FVector ArriveTangent; // 0x10
        struct FVector LeaveTangent; // 0x1c
        struct FRotator Rotation; // 0x28
        struct FVector Scale; // 0x34
        enum class ESplinePointType Type; // 0x40

    };

    struct FSplineMeshInstanceData : FSceneComponentInstanceData //ScriptStruct Engine.SplineMeshInstanceData
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector StartPos; // 0xa8
        struct FVector EndPos; // 0xb4
        struct FVector StartTangent; // 0xc0
        struct FVector EndTangent; // 0xcc

    };

    struct FSplineMeshParams //ScriptStruct Engine.SplineMeshParams
    {
    //Children Prop Count (Fields): 10
    public:

        struct FVector StartPos; // 0x0
        struct FVector StartTangent; // 0xc
        struct FVector2D StartScale; // 0x18
        float StartRoll; // 0x20
        struct FVector2D StartOffset; // 0x24
        struct FVector EndPos; // 0x2c
        struct FVector2D EndScale; // 0x38
        struct FVector EndTangent; // 0x40
        float EndRoll; // 0x4c
        struct FVector2D EndOffset; // 0x50

    };

    struct FMaterialRemapIndex //ScriptStruct Engine.MaterialRemapIndex
    {
    //Children Prop Count (Fields): 2
    public:

        uint32_t ImportVersionKey; // 0x0
        struct TArray<int32_t> MaterialRemap; // 0x8

    };

    struct FStaticMaterial //ScriptStruct Engine.StaticMaterial
    {
    //Children Prop Count (Fields): 4
    public:

        class UMaterialInterface* MaterialInterface; // 0x0
        struct FName MaterialSlotName; // 0x8
        struct FName ImportedMaterialSlotName; // 0x10
        struct FMeshUVChannelInfo UVChannelData; // 0x18

    };

    struct FAssetEditorOrbitCameraPosition //ScriptStruct Engine.AssetEditorOrbitCameraPosition
    {
    //Children Prop Count (Fields): 4
    public:

        bool bIsSet; // 0x0
        struct FVector CamOrbitPoint; // 0x4
        struct FVector CamOrbitZoom; // 0x10
        struct FRotator CamOrbitRotation; // 0x1c

    };

    struct FMeshSectionInfoMap //ScriptStruct Engine.MeshSectionInfoMap
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x0

    };

    struct FMeshSectionInfo //ScriptStruct Engine.MeshSectionInfo
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t MaterialIndex; // 0x0
        bool bEnableCollision; // 0x4
        bool bCastShadow; // 0x5
        bool bForceOpaque; // 0x6

    };

    struct FStaticMeshSourceModel //ScriptStruct Engine.StaticMeshSourceModel
    {
    //Children Prop Count (Fields): 5
    public:

        struct FMeshBuildSettings BuildSettings; // 0x0
        struct FMeshReductionSettings ReductionSettings; // 0x30
        float LODDistance; // 0x54
        struct FPerPlatformFloat ScreenSize; // 0x58
        struct FString SourceImportFilename; // 0x60

    };

    struct FStaticMeshOptimizationSettings //ScriptStruct Engine.StaticMeshOptimizationSettings
    {
    //Children Prop Count (Fields): 9
    public:

        enum class EOptimizationType ReductionMethod; // 0x0
        float NumOfTrianglesPercentage; // 0x4
        float MaxDeviationPercentage; // 0x8
        float WeldingThreshold; // 0xc
        bool bRecalcNormals; // 0x10
        float NormalsThreshold; // 0x14
        char SilhouetteImportance; // 0x18
        char TextureImportance; // 0x19
        char ShadingImportance; // 0x1a

    };

    struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData //ScriptStruct Engine.StaticMeshComponentInstanceData
    {
    //Children Prop Count (Fields): 4
    public:

        class UStaticMesh* StaticMesh; // 0xf0
        struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
        struct TArray<struct FGuid> CachedStaticLighting; // 0x108
        struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x118

    };

    struct FStreamingTextureBuildInfo //ScriptStruct Engine.StreamingTextureBuildInfo
    {
    //Children Prop Count (Fields): 3
    public:

        uint32_t PackedRelativeBox; // 0x0
        int32_t TextureLevelIndex; // 0x4
        float TexelFactor; // 0x8

    };

    struct FStaticMeshVertexColorLODData //ScriptStruct Engine.StaticMeshVertexColorLODData
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FPaintedVertex> PaintedVertices; // 0x0
        struct TArray<struct FColor> VertexBufferColors; // 0x10
        uint32_t LODIndex; // 0x20

    };

    struct FPaintedVertex //ScriptStruct Engine.PaintedVertex
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Position; // 0x0
        struct FColor Color; // 0xc
        struct FVector4 Normal; // 0x10

    };

    struct FStaticMeshComponentLODInfo //ScriptStruct Engine.StaticMeshComponentLODInfo
    {
    public:


    };

    struct FStaticParameterSet //ScriptStruct Engine.StaticParameterSet
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x0
        struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
        struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
        struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30

    };

    struct FStaticParameterBase //ScriptStruct Engine.StaticParameterBase
    {
    //Children Prop Count (Fields): 3
    public:

        struct FMaterialParameterInfo ParameterInfo; // 0x0
        bool bOverride; // 0x10
        struct FGuid ExpressionGUID; // 0x14

    };

    struct FStaticMaterialLayersParameter : FStaticParameterBase //ScriptStruct Engine.StaticMaterialLayersParameter
    {
    //Children Prop Count (Fields): 1
    public:

        struct FMaterialLayersFunctions Value; // 0x28

    };

    struct FStaticTerrainLayerWeightParameter : FStaticParameterBase //ScriptStruct Engine.StaticTerrainLayerWeightParameter
    {
    //Children Prop Count (Fields): 2
    public:

        int32_t WeightmapIndex; // 0x24
        bool bWeightBasedBlend; // 0x28

    };

    struct FStaticComponentMaskParameter : FStaticParameterBase //ScriptStruct Engine.StaticComponentMaskParameter
    {
    //Children Prop Count (Fields): 4
    public:

        bool R; // 0x24
        bool G; // 0x25
        bool B; // 0x26
        bool A; // 0x27

    };

    struct FStaticSwitchParameter : FStaticParameterBase //ScriptStruct Engine.StaticSwitchParameter
    {
    //Children Prop Count (Fields): 1
    public:

        bool Value; // 0x24

    };

    struct FEquirectProps //ScriptStruct Engine.EquirectProps
    {
    //Children Prop Count (Fields): 6
    public:

        struct FBox2D LeftUVRect; // 0x0
        struct FBox2D RightUVRect; // 0x14
        struct FVector2D LeftScale; // 0x28
        struct FVector2D RightScale; // 0x30
        struct FVector2D LeftBias; // 0x38
        struct FVector2D RightBias; // 0x40

    };

    struct FStringCurve : FIndexedCurve //ScriptStruct Engine.StringCurve
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString DefaultValue; // 0x68
        struct TArray<struct FStringCurveKey> Keys; // 0x78

    };

    struct FStringCurveKey //ScriptStruct Engine.StringCurveKey
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        struct FString Value; // 0x8

    };

    struct FSubsurfaceProfileStruct //ScriptStruct Engine.SubsurfaceProfileStruct
    {
    //Children Prop Count (Fields): 17
    public:

        struct FLinearColor SurfaceAlbedo; // 0x0
        struct FLinearColor MeanFreePathColor; // 0x10
        float MeanFreePathDistance; // 0x20
        float WorldUnitScale; // 0x24
        bool bEnableBurley; // 0x28
        float ScatterRadius; // 0x2c
        struct FLinearColor SubsurfaceColor; // 0x30
        struct FLinearColor FalloffColor; // 0x40
        struct FLinearColor BoundaryColorBleed; // 0x50
        float ExtinctionScale; // 0x60
        float NormalScale; // 0x64
        float ScatteringDistribution; // 0x68
        float IOR; // 0x6c
        float Roughness0; // 0x70
        float Roughness1; // 0x74
        float LobeMix; // 0x78
        struct FLinearColor TransmissionTintColor; // 0x7c

    };

    struct FTextureFormatSettings //ScriptStruct Engine.TextureFormatSettings
    {
    //Children Prop Count (Fields): 5
    public:

        enum class TextureCompressionSettings CompressionSettings; // 0x0
        char CompressionNoAlpha; // 0x1
        char CompressionNone; // 0x1
        char CompressionYCoCg; // 0x1
        char SRGB; // 0x1

    };

    struct FTexturePlatformData //ScriptStruct Engine.TexturePlatformData
    {
    public:


    };

    struct FTextureSource //ScriptStruct Engine.TextureSource
    {
    public:


    };

    struct FTextureSourceBlock //ScriptStruct Engine.TextureSourceBlock
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t BlockX; // 0x0
        int32_t BlockY; // 0x4
        int32_t SizeX; // 0x8
        int32_t SizeY; // 0xc
        int32_t NumSlices; // 0x10
        int32_t NumMips; // 0x14

    };

    struct FTextureLODGroup //ScriptStruct Engine.TextureLODGroup
    {
    //Children Prop Count (Fields): 16
    public:

        enum class TextureGroup Group; // 0x0
        int32_t LODBias; // 0xc
        int32_t LODBias_Smaller; // 0x10
        int32_t LODBias_Smallest; // 0x14
        int32_t NumStreamedMips; // 0x1c
        enum class TextureMipGenSettings MipGenSettings; // 0x20
        int32_t MinLODSize; // 0x24
        int32_t MaxLODSize; // 0x28
        int32_t MaxLODSize_Smaller; // 0x2c
        int32_t MaxLODSize_Smallest; // 0x30
        int32_t OptionalLODBias; // 0x34
        int32_t OptionalMaxLODSize; // 0x38
        struct FName MinMagFilter; // 0x40
        struct FName MipFilter; // 0x48
        enum class ETextureMipLoadOptions MipLoadOptions; // 0x50
        bool DuplicateNonOptionalMips; // 0x51

    };

    struct FStreamingRenderAssetPrimitiveInfo //ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
    {
    //Children Prop Count (Fields): 5
    public:

        class UStreamableRenderAsset* RenderAsset; // 0x0
        struct FBoxSphereBounds Bounds; // 0x8
        float TexelFactor; // 0x24
        uint32_t PackedRelativeBox; // 0x28
        char bAllowInvalidTexelFactorWhenUnregistered; // 0x2c

    };

    struct FTimeline //ScriptStruct Engine.Timeline
    {
    //Children Prop Count (Fields): 15
    public:

        enum class ETimelineLengthMode LengthMode; // 0x0
        char bLooping; // 0x1
        char bReversePlayback; // 0x1
        char bPlaying; // 0x1
        float Length; // 0x4
        float PlayRate; // 0x8
        float Position; // 0xc
        struct TArray<struct FTimelineEventEntry> Events; // 0x10
        struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20
        struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30
        struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40
        struct FDelegate TimelinePostUpdateFunc; // 0x50
        struct FDelegate TimelineFinishedFunc; // 0x60
        struct TWeakObjectPtr<struct UObject> PropertySetObject; // 0x70
        struct FName DirectionPropertyName; // 0x78

    };

    struct FTimelineLinearColorTrack //ScriptStruct Engine.TimelineLinearColorTrack
    {
    //Children Prop Count (Fields): 4
    public:

        class UCurveLinearColor* LinearColorCurve; // 0x0
        struct FDelegate InterpFunc; // 0x8
        struct FName TrackName; // 0x18
        struct FName LinearColorPropertyName; // 0x20

    };

    struct FTimelineFloatTrack //ScriptStruct Engine.TimelineFloatTrack
    {
    //Children Prop Count (Fields): 4
    public:

        class UCurveFloat* FloatCurve; // 0x0
        struct FDelegate InterpFunc; // 0x8
        struct FName TrackName; // 0x18
        struct FName FloatPropertyName; // 0x20

    };

    struct FTimelineVectorTrack //ScriptStruct Engine.TimelineVectorTrack
    {
    //Children Prop Count (Fields): 4
    public:

        class UCurveVector* VectorCurve; // 0x0
        struct FDelegate InterpFunc; // 0x8
        struct FName TrackName; // 0x18
        struct FName VectorPropertyName; // 0x20

    };

    struct FTimelineEventEntry //ScriptStruct Engine.TimelineEventEntry
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        struct FDelegate EventFunc; // 0x4

    };

    struct FTTTrackBase //ScriptStruct Engine.TTTrackBase
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName TrackName; // 0x8
        bool bIsExternalCurve; // 0x10

    };

    struct FTTPropertyTrack : FTTTrackBase //ScriptStruct Engine.TTPropertyTrack
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName PropertyName; // 0x18

    };

    struct FTTLinearColorTrack : FTTPropertyTrack //ScriptStruct Engine.TTLinearColorTrack
    {
    //Children Prop Count (Fields): 1
    public:

        class UCurveLinearColor* CurveLinearColor; // 0x20

    };

    struct FTTVectorTrack : FTTPropertyTrack //ScriptStruct Engine.TTVectorTrack
    {
    //Children Prop Count (Fields): 1
    public:

        class UCurveVector* CurveVector; // 0x20

    };

    struct FTTFloatTrack : FTTPropertyTrack //ScriptStruct Engine.TTFloatTrack
    {
    //Children Prop Count (Fields): 1
    public:

        class UCurveFloat* CurveFloat; // 0x20

    };

    struct FTTEventTrack : FTTTrackBase //ScriptStruct Engine.TTEventTrack
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName FunctionName; // 0x18
        class UCurveFloat* CurveKeys; // 0x20

    };

    struct FTimeStretchCurveInstance //ScriptStruct Engine.TimeStretchCurveInstance
    {
    //Children Prop Count (Fields): 1
    public:

        bool bHasValidData; // 0x0

    };

    struct FTimeStretchCurve //ScriptStruct Engine.TimeStretchCurve
    {
    //Children Prop Count (Fields): 4
    public:

        float SamplingRate; // 0x0
        float CurveValueMinPrecision; // 0x4
        struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x8
        float Sum_dT_i_by_C_i; // 0x18

    };

    struct FTimeStretchCurveMarker //ScriptStruct Engine.TimeStretchCurveMarker
    {
    //Children Prop Count (Fields): 2
    public:

        float Time; // 0x0
        float Alpha; // 0xc

    };

    struct FTouchInputControl //ScriptStruct Engine.TouchInputControl
    {
    //Children Prop Count (Fields): 9
    public:

        class UTexture2D* Image1; // 0x0
        class UTexture2D* Image2; // 0x8
        struct FVector2D Center; // 0x10
        struct FVector2D VisualSize; // 0x18
        struct FVector2D ThumbSize; // 0x20
        struct FVector2D InteractionSize; // 0x28
        struct FVector2D InputScale; // 0x30
        struct FKey MainInputKey; // 0x38
        struct FKey AltInputKey; // 0x50

    };

    struct FHardwareCursorReference //ScriptStruct Engine.HardwareCursorReference
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName CursorPath; // 0x0
        struct FVector2D HotSpot; // 0x8

    };

    struct FVirtualTextureBuildSettings //ScriptStruct Engine.VirtualTextureBuildSettings
    {
    //Children Prop Count (Fields): 4
    public:

        int32_t TileSize; // 0x0
        int32_t TileBorderSize; // 0x4
        bool bEnableCompressCrunch; // 0x8
        bool bEnableCompressZlib; // 0x9

    };

    struct FVirtualTextureSpacePoolConfig //ScriptStruct Engine.VirtualTextureSpacePoolConfig
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t MinTileSize; // 0x0
        int32_t MaxTileSize; // 0x4
        struct TArray<enum class EPixelFormat> Formats; // 0x8
        int32_t SizeInMegabyte; // 0x18
        bool bAllowSizeScale; // 0x1c

    };

    struct FVoiceSettings //ScriptStruct Engine.VoiceSettings
    {
    //Children Prop Count (Fields): 3
    public:

        class USceneComponent* ComponentToAttachTo; // 0x0
        class USoundAttenuation* AttenuationSettings; // 0x8
        class USoundEffectSourcePresetChain* SourceEffectChain; // 0x10

    };

    struct FStreamingLevelsToConsider //ScriptStruct Engine.StreamingLevelsToConsider
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FLevelStreamingWrapper> StreamingLevels; // 0x0

    };

    struct FLevelStreamingWrapper //ScriptStruct Engine.LevelStreamingWrapper
    {
    //Children Prop Count (Fields): 1
    public:

        class ULevelStreaming* StreamingLevel; // 0x0

    };

    struct FLevelCollection //ScriptStruct Engine.LevelCollection
    {
    //Children Prop Count (Fields): 5
    public:

        class AGameStateBase* GameState; // 0x8
        class UNetDriver* NetDriver; // 0x10
        class UDemoNetDriver* DemoNetDriver; // 0x18
        class ULevel* PersistentLevel; // 0x20
        struct TSet<class ULevel*> Levels; // 0x28

    };

    struct FEndPhysicsTickFunction : FTickFunction //ScriptStruct Engine.EndPhysicsTickFunction
    {
    public:


    };

    struct FStartPhysicsTickFunction : FTickFunction //ScriptStruct Engine.StartPhysicsTickFunction
    {
    public:


    };

    struct FLevelViewportInfo //ScriptStruct Engine.LevelViewportInfo
    {
    //Children Prop Count (Fields): 4
    public:

        struct FVector CamPosition; // 0x0
        struct FRotator CamRotation; // 0xc
        float CamOrthoZoom; // 0x18
        bool CamUpdated; // 0x1c

    };

    struct FWorldPSCPool //ScriptStruct Engine.WorldPSCPool
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<class UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x0

    };

    struct FPSCPool //ScriptStruct Engine.PSCPool
    {
    //Children Prop Count (Fields): 3
    public:

        struct TArray<struct FPSCPoolElem> FreeElements; // 0x0
        struct TArray<class UParticleSystemComponent*> InUseComponents_Auto; // 0x10
        struct TArray<class UParticleSystemComponent*> InUseComponents_Manual; // 0x20

    };

    struct FPSCPoolElem //ScriptStruct Engine.PSCPoolElem
    {
    //Children Prop Count (Fields): 1
    public:

        class UParticleSystemComponent* PSC; // 0x0

    };

    struct FBroadphaseSettings //ScriptStruct Engine.BroadphaseSettings
    {
    //Children Prop Count (Fields): 6
    public:

        bool bUseMBPOnClient; // 0x0
        bool bUseMBPOnServer; // 0x1
        bool bUseMBPOuterBounds; // 0x2
        struct FBox MBPBounds; // 0x4
        struct FBox MBPOuterBounds; // 0x20
        uint32_t MBPNumSubdivs; // 0x3c

    };

    struct FHierarchicalSimplification //ScriptStruct Engine.HierarchicalSimplification
    {
    //Children Prop Count (Fields): 12
    public:

        float TransitionScreenSize; // 0x0
        float OverrideDrawDistance; // 0x4
        char bUseOverrideDrawDistance; // 0x8
        char bAllowSpecificExclusion; // 0x8
        char bSimplifyMesh; // 0x8
        char bOnlyGenerateClustersForVolumes; // 0x8
        char bReusePreviousLevelClusters; // 0x8
        struct FMeshProxySettings ProxySetting; // 0xc
        struct FMeshMergingSettings MergeSetting; // 0xb4
        float DesiredBoundRadius; // 0x154
        float DesiredFillingPercentage; // 0x158
        int32_t MinNumberOfActorsToBuild; // 0x15c

    };

    struct FNetViewer //ScriptStruct Engine.NetViewer
    {
    //Children Prop Count (Fields): 5
    public:

        class UNetConnection* Connection; // 0x0
        class AActor* InViewer; // 0x8
        class AActor* ViewTarget; // 0x10
        struct FVector ViewLocation; // 0x18
        struct FVector ViewDir; // 0x24

    };

    struct FLightmassWorldInfoSettings //ScriptStruct Engine.LightmassWorldInfoSettings
    {
    //Children Prop Count (Fields): 24
    public:

        float StaticLightingLevelScale; // 0x0
        int32_t NumIndirectLightingBounces; // 0x4
        int32_t NumSkyLightingBounces; // 0x8
        float IndirectLightingQuality; // 0xc
        float IndirectLightingSmoothness; // 0x10
        struct FColor EnvironmentColor; // 0x14
        float EnvironmentIntensity; // 0x18
        float EmissiveBoost; // 0x1c
        float DiffuseBoost; // 0x20
        enum class EVolumeLightingMethod VolumeLightingMethod; // 0x24
        char bUseAmbientOcclusion; // 0x25
        char bGenerateAmbientOcclusionMaterialMask; // 0x25
        char bVisualizeMaterialDiffuse; // 0x25
        char bVisualizeAmbientOcclusion; // 0x25
        char bCompressLightmaps; // 0x25
        float VolumetricLightmapDetailCellSize; // 0x28
        float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c
        float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30
        float VolumeLightSamplePlacementScale; // 0x34
        float DirectIlluminationOcclusionFraction; // 0x38
        float IndirectIlluminationOcclusionFraction; // 0x3c
        float OcclusionExponent; // 0x40
        float FullyOccludedSamplesFraction; // 0x44
        float MaxOcclusionDistance; // 0x48

    };

    struct FStructSerializerTestStruct //ScriptStruct Serialization.StructSerializerTestStruct
    {
    //Children Prop Count (Fields): 7
    public:

        struct FStructSerializerNumericTestStruct Numerics; // 0x0
        struct FStructSerializerBooleanTestStruct Booleans; // 0x30
        struct FStructSerializerObjectTestStruct Objects; // 0x38
        struct FStructSerializerBuiltinTestStruct Builtins; // 0xe0
        struct FStructSerializerArrayTestStruct Arrays; // 0x170
        struct FStructSerializerMapTestStruct Maps; // 0x1d0
        struct FStructSerializerSetTestStruct Sets; // 0x310

    };

    struct FStructSerializerSetTestStruct //ScriptStruct Serialization.StructSerializerSetTestStruct
    {
    //Children Prop Count (Fields): 4
    public:

        struct TSet<struct FString> StrSet; // 0x0
        struct TSet<int32_t> IntSet; // 0x50
        struct TSet<struct FName> NameSet; // 0xa0
        struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xf0

    };

    struct FStructSerializerBuiltinTestStruct //ScriptStruct Serialization.StructSerializerBuiltinTestStruct
    {
    //Children Prop Count (Fields): 9
    public:

        struct FGuid Guid; // 0x0
        struct FName Name; // 0x10
        struct FString String; // 0x18
        struct FText Text; // 0x28
        struct FVector Vector; // 0x40
        struct FVector4 Vector4; // 0x50
        struct FRotator Rotator; // 0x60
        struct FQuat Quat; // 0x70
        struct FColor Color; // 0x80

    };

    struct FStructSerializerMapTestStruct //ScriptStruct Serialization.StructSerializerMapTestStruct
    {
    //Children Prop Count (Fields): 4
    public:

        struct TMap<int32_t, struct FString> IntToStr; // 0x0
        struct TMap<struct FString, struct FString> StrToStr; // 0x50
        struct TMap<struct FString, struct FVector> StrToVec; // 0xa0
        struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0

    };

    struct FStructSerializerArrayTestStruct //ScriptStruct Serialization.StructSerializerArrayTestStruct
    {
    //Children Prop Count (Fields): 7
    public:

        struct TArray<int32_t> Int32Array; // 0x0
        struct TArray<char> ByteArray; // 0x10
        int32_t StaticSingleElement; // 0x20
        int32_t StaticInt32Array; // 0x24
        float StaticFloatArray; // 0x30
        struct TArray<struct FVector> VectorArray; // 0x40
        struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50

    };

    struct FStructSerializerObjectTestStruct //ScriptStruct Serialization.StructSerializerObjectTestStruct
    {
    //Children Prop Count (Fields): 8
    public:

        class UObject* Class; // 0x0
        class UMetaData* SubClass; // 0x8
        struct FSoftClassProperty SoftClass; // 0x10
        class UObject* Object; // 0x38
        struct TWeakObjectPtr<struct UMetaData> WeakObject; // 0x40
        struct TSoftObjectPtr<UMetaData> SoftObject; // 0x48
        struct FSoftClassPath ClassPath; // 0x70
        struct FSoftObjectPath ObjectPath; // 0x88

    };

    struct FStructSerializerBooleanTestStruct //ScriptStruct Serialization.StructSerializerBooleanTestStruct
    {
    //Children Prop Count (Fields): 10
    public:

        bool BoolFalse; // 0x0
        bool BoolTrue; // 0x1
        char Bitfield0; // 0x2
        char Bitfield1; // 0x2
        char Bitfield2Set; // 0x2
        char Bitfield3; // 0x2
        char Bitfield4Set; // 0x2
        char Bitfield5Set; // 0x2
        char Bitfield6; // 0x2
        char Bitfield7Set; // 0x2

    };

    struct FStructSerializerNumericTestStruct //ScriptStruct Serialization.StructSerializerNumericTestStruct
    {
    //Children Prop Count (Fields): 10
    public:

        int8_t Int8; // 0x0
        int16_t Int16; // 0x2
        int32_t Int32; // 0x4
        int64_t Int64; // 0x8
        char UInt8; // 0x10
        uint16_t UInt16; // 0x12
        uint32_t UInt32; // 0x14
        uint64_t UInt64; // 0x18
        float Float; // 0x20
        double Double; // 0x28

    };

    struct FStructSerializerByteArray //ScriptStruct Serialization.StructSerializerByteArray
    {
    //Children Prop Count (Fields): 5
    public:

        int32_t Dummy1; // 0x0
        struct TArray<char> ByteArray; // 0x8
        int32_t Dummy2; // 0x18
        struct TArray<int8_t> Int8Array; // 0x20
        int32_t Dummy3; // 0x30

    };

    struct FOverlayItem //ScriptStruct Overlay.OverlayItem
    {
    //Children Prop Count (Fields): 4
    public:

        struct FTimespan StartTime; // 0x0
        struct FTimespan EndTime; // 0x8
        struct FString Text; // 0x10
        struct FVector2D Position; // 0x20

    };

    struct FClothConfig_Legacy //ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
    {
    //Children Prop Count (Fields): 27
    public:

        enum class EClothingWindMethod_Legacy WindMethod; // 0x0
        struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4
        struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14
        struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24
        struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34
        float SelfCollisionRadius; // 0x44
        float SelfCollisionStiffness; // 0x48
        float SelfCollisionCullScale; // 0x4c
        struct FVector Damping; // 0x50
        float Friction; // 0x5c
        float WindDragCoefficient; // 0x60
        float WindLiftCoefficient; // 0x64
        struct FVector LinearDrag; // 0x68
        struct FVector AngularDrag; // 0x74
        struct FVector LinearInertiaScale; // 0x80
        struct FVector AngularInertiaScale; // 0x8c
        struct FVector CentrifugalInertiaScale; // 0x98
        float SolverFrequency; // 0xa4
        float StiffnessFrequency; // 0xa8
        float GravityScale; // 0xac
        struct FVector GravityOverride; // 0xb0
        bool bUseGravityOverride; // 0xbc
        float TetherStiffness; // 0xc0
        float TetherLimit; // 0xc4
        float CollisionThickness; // 0xc8
        float AnimDriveSpringStiffness; // 0xcc
        float AnimDriveDamperStiffness; // 0xd0

    };

    struct FClothConstraintSetup_Legacy //ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
    {
    //Children Prop Count (Fields): 4
    public:

        float Stiffness; // 0x0
        float StiffnessMultiplier; // 0x4
        float StretchLimit; // 0x8
        float CompressionLimit; // 0xc

    };

    struct FClothLODDataCommon //ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
    {
    //Children Prop Count (Fields): 2
    public:

        struct FClothPhysicalMeshData PhysicalMeshData; // 0x0
        struct FClothCollisionData CollisionData; // 0xf8

    };

    struct FClothPhysicalMeshData //ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
    {
    //Children Prop Count (Fields): 13
    public:

        struct TArray<struct FVector> Vertices; // 0x0
        struct TArray<struct FVector> Normals; // 0x10
        struct TArray<uint32_t> Indices; // 0x20
        struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; // 0x30
        struct TArray<float> InverseMasses; // 0x80
        struct TArray<struct FClothVertBoneData> BoneData; // 0x90
        int32_t MaxBoneWeights; // 0xa0
        int32_t NumFixedVerts; // 0xa4
        struct TArray<uint32_t> SelfCollisionIndices; // 0xa8
        struct TArray<float> MaxDistances; // 0xb8
        struct TArray<float> BackstopDistances; // 0xc8
        struct TArray<float> BackstopRadiuses; // 0xd8
        struct TArray<float> AnimDriveMultipliers; // 0xe8

    };

    struct FPointWeightMap //ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<float> Values; // 0x0

    };

    struct FClothParameterMask_Legacy //ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
    {
    //Children Prop Count (Fields): 6
    public:

        struct FName MaskName; // 0x0
        enum class EWeightMapTargetCommon CurrentTarget; // 0x8
        float MaxValue; // 0xc
        float MinValue; // 0x10
        struct TArray<float> Values; // 0x18
        bool bEnabled; // 0x28

    };

    struct FClothConstraintSetupNv //ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
    {
    //Children Prop Count (Fields): 4
    public:

        float Stiffness; // 0x0
        float StiffnessMultiplier; // 0x4
        float StretchLimit; // 0x8
        float CompressionLimit; // 0xc

    };

    struct FSessionServiceLogUnsubscribe //ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
    {
    public:


    };

    struct FSessionServiceLogSubscribe //ScriptStruct SessionMessages.SessionServiceLogSubscribe
    {
    public:


    };

    struct FSessionServiceLog //ScriptStruct SessionMessages.SessionServiceLog
    {
    //Children Prop Count (Fields): 5
    public:

        struct FName Category; // 0x0
        struct FString Data; // 0x8
        struct FGuid InstanceId; // 0x18
        double TimeSeconds; // 0x28
        char Verbosity; // 0x30

    };

    struct FSessionServicePong //ScriptStruct SessionMessages.SessionServicePong
    {
    //Children Prop Count (Fields): 10
    public:

        bool Authorized; // 0x0
        struct FString BuildDate; // 0x8
        struct FString DeviceName; // 0x18
        struct FGuid InstanceId; // 0x28
        struct FString InstanceName; // 0x38
        struct FString PlatformName; // 0x48
        struct FGuid SessionId; // 0x58
        struct FString SessionName; // 0x68
        struct FString SessionOwner; // 0x78
        bool Standalone; // 0x88

    };

    struct FSessionServicePing //ScriptStruct SessionMessages.SessionServicePing
    {
    //Children Prop Count (Fields): 1
    public:

        struct FString UserName; // 0x0

    };

    struct FNavCollisionBox //ScriptStruct NavigationSystem.NavCollisionBox
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector Offset; // 0x0
        struct FVector Extent; // 0xc

    };

    struct FNavCollisionCylinder //ScriptStruct NavigationSystem.NavCollisionCylinder
    {
    //Children Prop Count (Fields): 3
    public:

        struct FVector Offset; // 0x0
        float Radius; // 0xc
        float Height; // 0x10

    };

    struct FSupportedAreaData //ScriptStruct NavigationSystem.SupportedAreaData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString AreaClassName; // 0x0
        int32_t AreaID; // 0x10
        class UObject* AreaClass; // 0x18

    };

    struct FNavGraphNode //ScriptStruct NavigationSystem.NavGraphNode
    {
    //Children Prop Count (Fields): 1
    public:

        class UObject* Owner; // 0x0

    };

    struct FNavGraphEdge //ScriptStruct NavigationSystem.NavGraphEdge
    {
    public:


    };

    struct FNavigationFilterFlags //ScriptStruct NavigationSystem.NavigationFilterFlags
    {
    //Children Prop Count (Fields): 16
    public:

        char bNavFlag0; // 0x0
        char bNavFlag1; // 0x0
        char bNavFlag2; // 0x0
        char bNavFlag3; // 0x0
        char bNavFlag4; // 0x0
        char bNavFlag5; // 0x0
        char bNavFlag6; // 0x0
        char bNavFlag7; // 0x0
        char bNavFlag8; // 0x1
        char bNavFlag9; // 0x1
        char bNavFlag10; // 0x1
        char bNavFlag11; // 0x1
        char bNavFlag12; // 0x1
        char bNavFlag13; // 0x1
        char bNavFlag14; // 0x1
        char bNavFlag15; // 0x1

    };

    struct FNavigationFilterArea //ScriptStruct NavigationSystem.NavigationFilterArea
    {
    //Children Prop Count (Fields): 6
    public:

        class UNavArea* AreaClass; // 0x0
        float TravelCostOverride; // 0x8
        float EnteringCostOverride; // 0xc
        char bIsExcluded; // 0x10
        char bOverrideTravelCost; // 0x10
        char bOverrideEnteringCost; // 0x10

    };

    struct FNavLinkCustomInstanceData : FActorComponentInstanceData //ScriptStruct NavigationSystem.NavLinkCustomInstanceData
    {
    //Children Prop Count (Fields): 1
    public:

        uint32_t NavLinkUserId; // 0x58

    };

    struct FRecastNavMeshGenerationProperties //ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
    {
    //Children Prop Count (Fields): 22
    public:

        int32_t TilePoolSize; // 0x0
        float TileSizeUU; // 0x4
        float CellSize; // 0x8
        float CellHeight; // 0xc
        float AgentRadius; // 0x10
        float AgentHeight; // 0x14
        float AgentMaxSlope; // 0x18
        float AgentMaxStepHeight; // 0x1c
        float MinRegionArea; // 0x20
        float MergeRegionSize; // 0x24
        float MaxSimplificationError; // 0x28
        int32_t TileNumberHardLimit; // 0x2c
        enum class ERecastPartitioning RegionPartitioning; // 0x30
        enum class ERecastPartitioning LayerPartitioning; // 0x31
        int32_t RegionChunkSplits; // 0x34
        int32_t LayerChunkSplits; // 0x38
        char bSortNavigationAreasByCost; // 0x3c
        char bPerformVoxelFiltering; // 0x3c
        char bMarkLowHeightAreas; // 0x3c
        char bFilterLowSpanSequences; // 0x3c
        char bFilterLowSpanFromTileCache; // 0x3c
        char bFixedTilePoolSize; // 0x3c

    };

    struct FWebJSCallbackBase //ScriptStruct WebBrowser.WebJSCallbackBase
    {
    public:


    };

    struct FWebJSResponse : FWebJSCallbackBase //ScriptStruct WebBrowser.WebJSResponse
    {
    public:


    };

    struct FWebJSFunction : FWebJSCallbackBase //ScriptStruct WebBrowser.WebJSFunction
    {
    public:


    };

    struct FBrushStampData //ScriptStruct InteractiveToolsFramework.BrushStampData
    {
    public:


    };

    struct FBehaviorInfo //ScriptStruct InteractiveToolsFramework.BehaviorInfo
    {
    //Children Prop Count (Fields): 1
    public:

        class UInputBehavior* Behavior; // 0x0

    };

    struct FInputRayHit //ScriptStruct InteractiveToolsFramework.InputRayHit
    {
    public:


    };

    struct FActiveGizmo //ScriptStruct InteractiveToolsFramework.ActiveGizmo
    {
    public:


    };

    struct FGizmoFloatParameterChange //ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
    {
    //Children Prop Count (Fields): 2
    public:

        float InitialValue; // 0x0
        float CurrentValue; // 0x4

    };

    struct FGizmoVec2ParameterChange //ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
    {
    //Children Prop Count (Fields): 2
    public:

        struct FVector2D InitialValue; // 0x0
        struct FVector2D CurrentValue; // 0x8

    };

    struct FAIDataProviderValue //ScriptStruct AIModule.AIDataProviderValue
    {
    //Children Prop Count (Fields): 2
    public:

        class UAIDataProvider* DataBinding; // 0x10
        struct FName DataField; // 0x18

    };

    struct FAIDataProviderTypedValue : FAIDataProviderValue //ScriptStruct AIModule.AIDataProviderTypedValue
    {
    //Children Prop Count (Fields): 1
    public:

        class UObject* PropertyType; // 0x20

    };

    struct FAIDataProviderBoolValue : FAIDataProviderTypedValue //ScriptStruct AIModule.AIDataProviderBoolValue
    {
    //Children Prop Count (Fields): 1
    public:

        bool DefaultValue; // 0x30

    };

    struct FAIDataProviderFloatValue : FAIDataProviderTypedValue //ScriptStruct AIModule.AIDataProviderFloatValue
    {
    //Children Prop Count (Fields): 1
    public:

        float DefaultValue; // 0x30

    };

    struct FAIDataProviderIntValue : FAIDataProviderTypedValue //ScriptStruct AIModule.AIDataProviderIntValue
    {
    //Children Prop Count (Fields): 1
    public:

        int32_t DefaultValue; // 0x30

    };

    struct FAIDataProviderStructValue : FAIDataProviderValue //ScriptStruct AIModule.AIDataProviderStructValue
    {
    public:


    };

    struct FActorPerceptionBlueprintInfo //ScriptStruct AIModule.ActorPerceptionBlueprintInfo
    {
    //Children Prop Count (Fields): 3
    public:

        class AActor* Target; // 0x0
        struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x8
        char bIsHostile; // 0x18

    };

    struct FAISenseAffiliationFilter //ScriptStruct AIModule.AISenseAffiliationFilter
    {
    //Children Prop Count (Fields): 3
    public:

        char bDetectEnemies; // 0x0
        char bDetectNeutrals; // 0x0
        char bDetectFriendlies; // 0x0

    };

    struct FAIDamageEvent //ScriptStruct AIModule.AIDamageEvent
    {
    //Children Prop Count (Fields): 5
    public:

        float Amount; // 0x0
        struct FVector Location; // 0x4
        struct FVector HitLocation; // 0x10
        class AActor* DamagedActor; // 0x20
        class AActor* Instigator; // 0x28

    };

    struct FAINoiseEvent //ScriptStruct AIModule.AINoiseEvent
    {
    //Children Prop Count (Fields): 5
    public:

        struct FVector NoiseLocation; // 0x4
        float Loudness; // 0x10
        float MaxRange; // 0x14
        class AActor* Instigator; // 0x18
        struct FName Tag; // 0x20

    };

    struct FAIPredictionEvent //ScriptStruct AIModule.AIPredictionEvent
    {
    //Children Prop Count (Fields): 2
    public:

        class AActor* Requestor; // 0x0
        class AActor* PredictedActor; // 0x8

    };

    struct FAISightEvent //ScriptStruct AIModule.AISightEvent
    {
    //Children Prop Count (Fields): 2
    public:

        class AActor* SeenActor; // 0x8
        class AActor* Observer; // 0x10

    };

    struct FAITeamStimulusEvent //ScriptStruct AIModule.AITeamStimulusEvent
    {
    //Children Prop Count (Fields): 2
    public:

        class AActor* Broadcaster; // 0x28
        class AActor* Enemy; // 0x30

    };

    struct FAITouchEvent //ScriptStruct AIModule.AITouchEvent
    {
    //Children Prop Count (Fields): 2
    public:

        class AActor* TouchReceiver; // 0x10
        class AActor* OtherActor; // 0x18

    };

    struct FIntervalCountdown //ScriptStruct AIModule.IntervalCountdown
    {
    //Children Prop Count (Fields): 1
    public:

        float Interval; // 0x0

    };

    struct FAIMoveRequest //ScriptStruct AIModule.AIMoveRequest
    {
    //Children Prop Count (Fields): 1
    public:

        class AActor* GoalActor; // 0x0

    };

    struct FBehaviorTreeTemplateInfo //ScriptStruct AIModule.BehaviorTreeTemplateInfo
    {
    //Children Prop Count (Fields): 2
    public:

        class UBehaviorTree* Asset; // 0x0
        class UBTCompositeNode* Template; // 0x8

    };

    struct FBlackboardKeySelector //ScriptStruct AIModule.BlackboardKeySelector
    {
    //Children Prop Count (Fields): 5
    public:

        struct TArray<class UBlackboardKeyType*> AllowedTypes; // 0x0
        struct FName SelectedKeyName; // 0x10
        class UBlackboardKeyType* SelectedKeyType; // 0x18
        char SelectedKeyID; // 0x20
        char bNoneIsAllowedValue; // 0x24

    };

    struct FBlackboardEntry //ScriptStruct AIModule.BlackboardEntry
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName EntryName; // 0x0
        class UBlackboardKeyType* KeyType; // 0x8
        char bInstanceSynced; // 0x10

    };

    struct FBTCompositeChild //ScriptStruct AIModule.BTCompositeChild
    {
    //Children Prop Count (Fields): 4
    public:

        class UBTCompositeNode* ChildComposite; // 0x0
        class UBTTaskNode* ChildTask; // 0x8
        struct TArray<class UBTDecorator*> Decorators; // 0x10
        struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20

    };

    struct FBTDecoratorLogic //ScriptStruct AIModule.BTDecoratorLogic
    {
    //Children Prop Count (Fields): 2
    public:

        enum class EBTDecoratorLogic Operation; // 0x0
        uint16_t Number; // 0x2

    };

    struct FCrowdAvoidanceSamplingPattern //ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<float> Angles; // 0x0
        struct TArray<float> Radii; // 0x10

    };

    struct FCrowdAvoidanceConfig //ScriptStruct AIModule.CrowdAvoidanceConfig
    {
    //Children Prop Count (Fields): 10
    public:

        float VelocityBias; // 0x0
        float DesiredVelocityWeight; // 0x4
        float CurrentVelocityWeight; // 0x8
        float SideBiasWeight; // 0xc
        float ImpactTimeWeight; // 0x10
        float ImpactTimeRange; // 0x14
        char CustomPatternIdx; // 0x18
        char AdaptiveDivisions; // 0x19
        char AdaptiveRings; // 0x1a
        char AdaptiveDepth; // 0x1b

    };

    struct FEnvQueryInstanceCache //ScriptStruct AIModule.EnvQueryInstanceCache
    {
    //Children Prop Count (Fields): 1
    public:

        class UEnvQuery* Template; // 0x0

    };

    struct FEnvQueryRequest //ScriptStruct AIModule.EnvQueryRequest
    {
    //Children Prop Count (Fields): 3
    public:

        class UEnvQuery* QueryTemplate; // 0x0
        class UObject* Owner; // 0x8
        class UWorld* World; // 0x10

    };

    struct FEQSParametrizedQueryExecutionRequest //ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
    {
    //Children Prop Count (Fields): 5
    public:

        class UEnvQuery* QueryTemplate; // 0x0
        struct TArray<struct FAIDynamicParam> QueryConfig; // 0x8
        struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
        enum class EEnvQueryRunMode RunMode; // 0x40
        char bUseBBKeyForQueryTemplate; // 0x44

    };

    struct FAIDynamicParam //ScriptStruct AIModule.AIDynamicParam
    {
    //Children Prop Count (Fields): 4
    public:

        struct FName ParamName; // 0x0
        enum class EAIParamType ParamType; // 0x8
        float Value; // 0xc
        struct FBlackboardKeySelector BBKey; // 0x10

    };

    struct FEnvQueryResult //ScriptStruct AIModule.EnvQueryResult
    {
    //Children Prop Count (Fields): 3
    public:

        class UEnvQueryItemType* ItemType; // 0x10
        int32_t OptionIndex; // 0x2c
        int32_t QueryID; // 0x30

    };

    struct FEnvOverlapData //ScriptStruct AIModule.EnvOverlapData
    {
    //Children Prop Count (Fields): 9
    public:

        float ExtentX; // 0x0
        float ExtentY; // 0x4
        float ExtentZ; // 0x8
        struct FVector ShapeOffset; // 0xc
        enum class ECollisionChannel OverlapChannel; // 0x18
        enum class EEnvOverlapShape OverlapShape; // 0x19
        char bOnlyBlockingHits; // 0x1c
        char bOverlapComplex; // 0x1c
        char bSkipOverlapQuerier; // 0x1c

    };

    struct FEnvTraceData //ScriptStruct AIModule.EnvTraceData
    {
    //Children Prop Count (Fields): 18
    public:

        int32_t VersionNum; // 0x0
        class UNavigationQueryFilter* NavigationFilter; // 0x8
        float ProjectDown; // 0x10
        float ProjectUp; // 0x14
        float ExtentX; // 0x18
        float ExtentY; // 0x1c
        float ExtentZ; // 0x20
        float PostProjectionVerticalOffset; // 0x24
        enum class ETraceTypeQuery TraceChannel; // 0x28
        enum class ECollisionChannel SerializedChannel; // 0x29
        enum class EEnvTraceShape TraceShape; // 0x2a
        enum class EEnvQueryTrace TraceMode; // 0x2b
        char bTraceComplex; // 0x2c
        char bOnlyBlockingHits; // 0x2c
        char bCanTraceOnNavMesh; // 0x2c
        char bCanTraceOnGeometry; // 0x2c
        char bCanDisableTrace; // 0x2c
        char bCanProjectDown; // 0x2c

    };

    struct FEnvDirection //ScriptStruct AIModule.EnvDirection
    {
    //Children Prop Count (Fields): 4
    public:

        class UEnvQueryContext* LineFrom; // 0x0
        class UEnvQueryContext* LineTo; // 0x8
        class UEnvQueryContext* Rotation; // 0x10
        enum class EEnvDirection DirMode; // 0x18

    };

    struct FEnvNamedValue //ScriptStruct AIModule.EnvNamedValue
    {
    //Children Prop Count (Fields): 3
    public:

        struct FName ParamName; // 0x0
        enum class EAIParamType ParamType; // 0x8
        float Value; // 0xc

    };

    struct FGenericTeamId //ScriptStruct AIModule.GenericTeamId
    {
    //Children Prop Count (Fields): 1
    public:

        char TeamID; // 0x0

    };

    struct FPawnActionStack //ScriptStruct AIModule.PawnActionStack
    {
    //Children Prop Count (Fields): 1
    public:

        class UPawnAction* TopAction; // 0x0

    };

    struct FPawnActionEvent //ScriptStruct AIModule.PawnActionEvent
    {
    //Children Prop Count (Fields): 1
    public:

        class UPawnAction* Action; // 0x0

    };

    struct FChaosHandlerSet //ScriptStruct ChaosSolverEngine.ChaosHandlerSet
    {
    //Children Prop Count (Fields): 1
    public:

        struct TSet<class UObject*> ChaosHandlers; // 0x8

    };

    struct FBreakEventCallbackWrapper //ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
    {
    public:


    };

    struct FChaosDebugSubstepControl //ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
    {
    //Children Prop Count (Fields): 3
    public:

        bool bPause; // 0x0
        bool bSubstep; // 0x1
        bool bStep; // 0x2

    };

    struct FChaosBreakingEventRequestSettings //ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t MaxNumberOfResults; // 0x0
        float MinRadius; // 0x4
        float MinSpeed; // 0x8
        float MinMass; // 0xc
        float MaxDistance; // 0x10
        enum class EChaosBreakingSortMethod SortMethod; // 0x14

    };

    struct FChaosCollisionEventRequestSettings //ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t MaxNumberResults; // 0x0
        float MinMass; // 0x4
        float MinSpeed; // 0x8
        float MinImpulse; // 0xc
        float MaxDistance; // 0x10
        enum class EChaosCollisionSortMethod SortMethod; // 0x14

    };

    struct FChaosTrailingEventRequestSettings //ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
    {
    //Children Prop Count (Fields): 6
    public:

        int32_t MaxNumberOfResults; // 0x0
        float MinMass; // 0x4
        float MinSpeed; // 0x8
        float MinAngularSpeed; // 0xc
        float MaxDistance; // 0x10
        enum class EChaosTrailingSortMethod SortMethod; // 0x14

    };

    struct FGeometryCollectionDebugDrawActorSelectedRigidBody //ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t ID; // 0x0
        class AChaosSolverActor* Solver; // 0x8
        class AGeometryCollectionActor* GeometryCollection; // 0x10

    };

    struct FGeometryCollectionDebugDrawWarningMessage //ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
    {
    public:


    };

    struct FGeometryCollectionSizeSpecificData //ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
    {
    //Children Prop Count (Fields): 10
    public:

        float MaxSize; // 0x0
        enum class ECollisionTypeEnum CollisionType; // 0x4
        enum class EImplicitTypeEnum ImplicitType; // 0x5
        int32_t MinLevelSetResolution; // 0x8
        int32_t MaxLevelSetResolution; // 0xc
        int32_t MinClusterLevelSetResolution; // 0x10
        int32_t MaxClusterLevelSetResolution; // 0x14
        int32_t CollisionObjectReductionPercentage; // 0x18
        float CollisionParticlesFraction; // 0x1c
        int32_t MaximumCollisionParticles; // 0x20

    };

    struct FLocalizedIconInfos //ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FLocalizedIconInfo> IconData; // 0x0

    };

    struct FLocalizedIconInfo //ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FString LanguageCode; // 0x0
        struct FDirectoryPath IconModelPath; // 0x10
        struct FDirectoryPath IconPortalPath; // 0x20

    };

    struct FLocalizedAppName //ScriptStruct LuminRuntimeSettings.LocalizedAppName
    {
    //Children Prop Count (Fields): 2
    public:

        struct FString LanguageCode; // 0x0
        struct FString AppName; // 0x10

    };

    struct FLuminComponentElement //ScriptStruct LuminRuntimeSettings.LuminComponentElement
    {
    //Children Prop Count (Fields): 5
    public:

        struct FString Name; // 0x0
        struct FString VisibleName; // 0x10
        struct FString ExecutableName; // 0x20
        enum class ELuminComponentType ComponentType; // 0x30
        struct TArray<struct FLuminComponentSubElement> ExtraComponentSubElements; // 0x38

    };

    struct FLuminComponentSubElement //ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
    {
    //Children Prop Count (Fields): 2
    public:

        enum class ELuminComponentSubElementType ElementType; // 0x0
        struct FString Value; // 0x8

    };

    struct FLiveLinkSourceHandle //ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
    {
    public:


    };

    struct FLiveLinkBaseBlueprintData //ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
    {
    public:


    };

    struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData //ScriptStruct LiveLinkInterface.SubjectFrameHandle
    {
    public:


    };

    struct FLiveLinkTransform //ScriptStruct LiveLinkInterface.LiveLinkTransform
    {
    public:


    };

    struct FCachedSubjectFrame //ScriptStruct LiveLinkInterface.CachedSubjectFrame
    {
    public:


    };

    struct FSubjectMetadata //ScriptStruct LiveLinkInterface.SubjectMetadata
    {
    //Children Prop Count (Fields): 3
    public:

        struct TMap<struct FName, struct FString> StringMetadata; // 0x0
        struct FTimecode SceneTimecode; // 0x50
        struct FFrameRate SceneFramerate; // 0x64

    };

    struct FLiveLinkBaseFrameData //ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
    {
    //Children Prop Count (Fields): 3
    public:

        struct FLiveLinkWorldTime WorldTime; // 0x0
        struct FLiveLinkMetaData MetaData; // 0x10
        struct TArray<float> PropertyValues; // 0x70

    };

    struct FLiveLinkMetaData //ScriptStruct LiveLinkInterface.LiveLinkMetaData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TMap<struct FName, struct FString> StringMetadata; // 0x0
        struct FQualifiedFrameTime SceneTime; // 0x50

    };

    struct FLiveLinkWorldTime //ScriptStruct LiveLinkInterface.LiveLinkWorldTime
    {
    //Children Prop Count (Fields): 2
    public:

        double Time; // 0x0
        double Offset; // 0x8

    };

    struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData //ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FTransform> Transforms; // 0xa0

    };

    struct FLiveLinkBaseStaticData //ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
    {
    //Children Prop Count (Fields): 1
    public:

        struct TArray<struct FName> PropertyNames; // 0x0

    };

    struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData //ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FName> BoneNames; // 0x10
        struct TArray<int32_t> BoneParents; // 0x20

    };

    struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData //ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLiveLinkBaseStaticData StaticData; // 0x8
        struct FLiveLinkBaseFrameData FrameData; // 0x18

    };

    struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData //ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLiveLinkCameraStaticData StaticData; // 0x8
        struct FLiveLinkCameraFrameData FrameData; // 0x30

    };

    struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData //ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
    {
    //Children Prop Count (Fields): 1
    public:

        struct FTransform Transform; // 0xa0

    };

    struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData //ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
    {
    //Children Prop Count (Fields): 6
    public:

        float FieldOfView; // 0xd0
        float AspectRatio; // 0xd4
        float FocalLength; // 0xd8
        float Aperture; // 0xdc
        float FocusDistance; // 0xe0
        enum class ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4

    };

    struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData //ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
    {
    public:


    };

    struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData //ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
    {
    //Children Prop Count (Fields): 8
    public:

        bool bIsFieldOfViewSupported; // 0x10
        bool bIsAspectRatioSupported; // 0x11
        bool bIsFocalLengthSupported; // 0x12
        bool bIsProjectionModeSupported; // 0x13
        float FilmBackWidth; // 0x14
        float FilmBackHeight; // 0x18
        bool bIsApertureSupported; // 0x1c
        bool bIsFocusDistanceSupported; // 0x1d

    };

    struct FLiveLinkCurveConversionSettings //ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
    {
    //Children Prop Count (Fields): 1
    public:

        struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap; // 0x0

    };

    struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData //ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLiveLinkLightStaticData StaticData; // 0x8
        struct FLiveLinkLightFrameData FrameData; // 0x30

    };

    struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData //ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
    {
    //Children Prop Count (Fields): 9
    public:

        float Temperature; // 0xd0
        float Intensity; // 0xd4
        struct FColor LightColor; // 0xd8
        float InnerConeAngle; // 0xdc
        float OuterConeAngle; // 0xe0
        float AttenuationRadius; // 0xe4
        float SourceRadius; // 0xe8
        float SoftSourceRadius; // 0xec
        float SourceLength; // 0xf0

    };

    struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData //ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
    {
    //Children Prop Count (Fields): 9
    public:

        bool bIsTemperatureSupported; // 0x10
        bool bIsIntensitySupported; // 0x11
        bool bIsLightColorSupported; // 0x12
        bool bIsInnerConeAngleSupported; // 0x13
        bool bIsOuterConeAngleSupported; // 0x14
        bool bIsAttenuationRadiusSupported; // 0x15
        bool bIsSourceLenghtSupported; // 0x16
        bool bIsSourceRadiusSupported; // 0x17
        bool bIsSoftSourceRadiusSupported; // 0x18

    };

    struct FLiveLinkSubjectPreset //ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
    {
    //Children Prop Count (Fields): 5
    public:

        struct FLiveLinkSubjectKey Key; // 0x0
        class ULiveLinkRole* Role; // 0x18
        class ULiveLinkSubjectSettings* Settings; // 0x20
        class ULiveLinkVirtualSubject* VirtualSubject; // 0x28
        bool bEnabled; // 0x30

    };

    struct FLiveLinkSubjectKey //ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
    {
    //Children Prop Count (Fields): 2
    public:

        struct FGuid Source; // 0x0
        struct FLiveLinkSubjectName SubjectName; // 0x10

    };

    struct FLiveLinkSubjectName //ScriptStruct LiveLinkInterface.LiveLinkSubjectName
    {
    //Children Prop Count (Fields): 1
    public:

        struct FName Name; // 0x0

    };

    struct FLiveLinkSourcePreset //ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
    {
    //Children Prop Count (Fields): 3
    public:

        struct FGuid Guid; // 0x0
        class ULiveLinkSourceSettings* Settings; // 0x10
        struct FText SourceType; // 0x18

    };

    struct FLiveLinkRefSkeleton //ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
    {
    //Children Prop Count (Fields): 2
    public:

        struct TArray<struct FName> BoneNames; // 0x0
        struct TArray<int32_t> BoneParents; // 0x10

    };

    struct FLiveLinkSubjectRepresentation //ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLiveLinkSubjectName Subject; // 0x0
        class ULiveLinkRole* Role; // 0x8

    };

    struct FLiveLinkInterpolationSettings //ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        bool bUseInterpolation; // 0x0
        float InterpolationOffset; // 0x4

    };

    struct FLiveLinkTimeSynchronizationSettings //ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
    {
    //Children Prop Count (Fields): 2
    public:

        struct FFrameRate FrameRate; // 0x0
        struct FFrameNumber FrameOffset; // 0x8

    };

    struct FLiveLinkSourceDebugInfo //ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
    {
    //Children Prop Count (Fields): 3
    public:

        struct FLiveLinkSubjectName SubjectName; // 0x0
        int32_t SnapshotIndex; // 0x8
        int32_t NumberOfBufferAtSnapshot; // 0xc

    };

    struct FLiveLinkSourceBufferManagementSettings //ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
    {
    //Children Prop Count (Fields): 15
    public:

        bool bValidEngineTimeEnabled; // 0x0
        float ValidEngineTime; // 0x4
        float EngineTimeOffset; // 0x8
        double EngineTimeClockOffset; // 0x10
        struct FFrameRate TimecodeFrameRate; // 0x18
        bool bGenerateSubFrame; // 0x20
        bool bUseTimecodeSmoothLatest; // 0x21
        struct FFrameRate SourceTimecodeFrameRate; // 0x24
        bool bValidTimecodeFrameEnabled; // 0x2c
        int32_t ValidTimecodeFrame; // 0x30
        float TimecodeFrameOffset; // 0x34
        double TimecodeClockOffset; // 0x38
        int32_t LatestOffset; // 0x40
        int32_t MaxNumberOfFrameToBuffered; // 0x44
        bool bKeepAtLeastOneFrame; // 0x48

    };

    struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData //ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
    {
    //Children Prop Count (Fields): 2
    public:

        struct FLiveLinkTransformStaticData StaticData; // 0x8
        struct FLiveLinkTransformFrameData FrameData; // 0x20

    };

    struct FLiveLinkFrameData //ScriptStruct LiveLinkInterface.LiveLinkFrameData
    {
    //Children Prop Count (Fields): 4
    public:

        struct TArray<struct FTransform> Transforms; // 0x0
        struct TArray<struct FLiveLinkCurveElement> CurveElements; // 0x10
        struct FLiveLinkWorldTime WorldTime; // 0x20
        struct FLiveLinkMetaData MetaData; // 0x30

    };

    struct FLiveLinkCurveElement //ScriptStruct LiveLinkInterface.LiveLinkCurveElement
    {
    //Children Prop Count (Fields): 2
    public:

        struct FName CurveName; // 0x0
        float CurveValue; // 0x8

    };

    struct FLiveLinkTimeCode_Base_DEPRECATED //ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
    {
    //Children Prop Count (Fields): 3
    public:

        int32_t Seconds; // 0x0
        int32_t Frames; // 0x4
        struct FLiveLinkFrameRate FrameRate; // 0x8

    };

    struct FLiveLinkFrameRate : FFrameRate //ScriptStruct LiveLinkInterface.LiveLinkFrameRate
    {
    public:


    };

    struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED //ScriptStruct LiveLinkInterface.LiveLinkTimeCode
    {
    public:


    };

    struct FLiveLinkTime //ScriptStruct LiveLinkInterface.LiveLinkTime
    {
    //Children Prop Count (Fields): 2
    public:

        double WorldTime; // 0x0
        struct FQualifiedFrameTime SceneTime; // 0x8

    };

    struct FDefault__UserDefinedStruct //UserDefinedStruct Engine.Default__UserDefinedStruct
    {
    public:


    };

    struct FDefault__AISenseBlueprintListener //AISenseBlueprintListener AIModule.Default__AISenseBlueprintListener
    {
    public:


    };


}