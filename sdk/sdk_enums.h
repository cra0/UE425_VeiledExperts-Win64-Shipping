#pragma once
#include "common.h"
namespace SDK
{


    enum class ESubstanceInputType : uint8_t //Enum SubstanceCore.ESubstanceInputType
    {
        SIT_Float = 0,
        SIT_Float2 = 1,
        SIT_Float3 = 2,
        SIT_Float4 = 3,
        SIT_Integer = 4,
        SIT_Image = 5,
        SIT_Unused_7 = 6,
        SIT_Unused_8 = 7,
        SIT_Integer2 = 8,
        SIT_Integer3 = 9,
        SIT_Integer4 = 10,
        SIT_MAX = 11
    };

    enum class Default__Enum : uint8_t //Enum CoreUObject.Default__Enum
    {
    };

    enum class ESubstanceGenerationMode : uint8_t //Enum SubstanceCore.ESubstanceGenerationMode
    {
        SGM_PlatformDefault = 0,
        SGM_Baked = 1,
        SGM_OnLoadSync = 2,
        SGM_OnLoadSyncAndCache = 3,
        SGM_OnLoadAsync = 4,
        SGM_OnLoadAsyncAndCache = 5,
        SGM_MAX = 6
    };

    enum class EDefaultSubstanceTextureSize : uint8_t //Enum SubstanceCore.EDefaultSubstanceTextureSize
    {
        Size_1 = 0,
        Size_17 = 4,
        Size_33 = 5,
        Size_65 = 6,
        Size_129 = 7,
        Size_257 = 8,
        Size_513 = 9,
        Size_1025 = 10,
        Size_2049 = 11,
        Size_4097 = 12,
        Size_MAX = 13
    };

    enum class ESubstanceEngineType : uint8_t //Enum SubstanceCore.ESubstanceEngineType
    {
        SET_CPU = 0,
        SET_GPU = 1,
        SET_MAX = 2
    };

    enum class ESubstanceTextureSize : uint8_t //Enum SubstanceCore.ESubstanceTextureSize
    {
        ERL_17 = 0,
        ERL_33 = 1,
        ERL_65 = 2,
        ERL_129 = 3,
        ERL_257 = 4,
        ERL_513 = 5,
        ERL_1025 = 6,
        ERL_2049 = 7,
        ERL_4097 = 8,
        ERL_8193 = 9,
        ERL_MAX = 10
    };

    enum class EPrefabricatorPivotPosition : uint8_t //Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
    {
        ExtremeLeft = 0,
        ExtremeRight = 1,
        Center = 2,
        EPrefabricatorPivotPosition_MAX = 3
    };

    enum class EConstructionSystemToolType : uint8_t //Enum ConstructionSystemRuntime.EConstructionSystemToolType
    {
        BuildTool = 0,
        RemoveTool = 1,
        EConstructionSystemToolType_MAX = 2
    };

    enum class EConstructionSystemCursorVisiblity : uint8_t //Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
    {
        Visible = 0,
        VisibleInvalid = 1,
        Hidden = 2,
        EConstructionSystemCursorVisiblity_MAX = 3
    };

    enum class EPrefabricatorConstructionSnapType : uint8_t //Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
    {
        Floor = 0,
        Wall = 1,
        Object = 2,
        EPrefabricatorConstructionSnapType_MAX = 3
    };

    enum class EInterpCurveMode : uint8_t //Enum CoreUObject.EInterpCurveMode
    {
        CIM_Linear = 0,
        CIM_CurveAuto = 1,
        CIM_Constant = 2,
        CIM_CurveUser = 3,
        CIM_CurveBreak = 4,
        CIM_CurveAutoClamped = 5,
        CIM_MAX = 6
    };

    enum class ERangeBoundTypes : uint8_t //Enum CoreUObject.ERangeBoundTypes
    {
        Exclusive = 0,
        Inclusive = 1,
        Open = 2,
        ERangeBoundTypes_MAX = 3
    };

    enum class ELocalizedTextSourceCategory : uint8_t //Enum CoreUObject.ELocalizedTextSourceCategory
    {
        Game = 0,
        Engine = 1,
        Editor = 2,
        ELocalizedTextSourceCategory_MAX = 3
    };

    enum class EAutomationEventType : uint8_t //Enum CoreUObject.EAutomationEventType
    {
        Info = 0,
        Warning = 1,
        Error = 2,
        EAutomationEventType_MAX = 3
    };

    enum class EImpactDamageOverride : uint8_t //Enum ApexDestruction.EImpactDamageOverride
    {
        IDO_None = 0,
        IDO_On = 1,
        IDO_Off = 2,
        IDO_MAX = 3
    };

    enum class EProcMeshSliceCapOption : uint8_t //Enum ProceduralMeshComponent.EProcMeshSliceCapOption
    {
        NoCap = 0,
        CreateNewSectionForCap = 1,
        UseLastSectionForCap = 2,
        EProcMeshSliceCapOption_MAX = 3
    };

    enum class EInAppPurchaseState : uint8_t //Enum OnlineSubsystem.EInAppPurchaseState
    {
        Unknown = 0,
        Success = 1,
        Failed = 2,
        Cancelled = 3,
        Invalid = 4,
        NotAllowed = 5,
        Restored = 6,
        AlreadyOwned = 7,
        EInAppPurchaseState_MAX = 8
    };

    enum class EMPMatchOutcome : uint8_t //Enum OnlineSubsystem.EMPMatchOutcome
    {
        None = 0,
        Quit = 1,
        Won = 2,
        Lost = 3,
        Tied = 4,
        TimeExpired = 5,
        First = 6,
        Second = 7,
        Third = 8,
        Fourth = 9,
        EMPMatchOutcome_MAX = 10
    };

    enum class EInAppPurchaseStatus : uint8_t //Enum OnlineSubsystemUtils.EInAppPurchaseStatus
    {
        Invalid = 0,
        Failed = 1,
        Deferred = 2,
        Canceled = 3,
        Purchased = 4,
        Restored = 5,
        EInAppPurchaseStatus_MAX = 6
    };

    enum class EOnlineProxyStoreOfferDiscountType : uint8_t //Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
    {
        NotOnSale = 0,
        Percentage = 1,
        DiscountAmount = 2,
        PayAmount = 3,
        EOnlineProxyStoreOfferDiscountType_MAX = 4
    };

    enum class EBeaconConnectionState : uint8_t //Enum OnlineSubsystemUtils.EBeaconConnectionState
    {
        Invalid = 0,
        Closed = 1,
        Pending = 2,
        Open = 3,
        EBeaconConnectionState_MAX = 4
    };

    enum class EClientRequestType : uint8_t //Enum OnlineSubsystemUtils.EClientRequestType
    {
        NonePending = 0,
        ExistingSessionReservation = 1,
        ReservationUpdate = 2,
        EmptyServerReservation = 3,
        Reconnect = 4,
        Abandon = 5,
        ReservationRemoveMembers = 6,
        EClientRequestType_MAX = 7
    };

    enum class EPartyReservationResult : uint8_t //Enum OnlineSubsystemUtils.EPartyReservationResult
    {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        PartyLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        EPartyReservationResult_MAX = 16
    };

    enum class ESpectatorClientRequestType : uint8_t //Enum OnlineSubsystemUtils.ESpectatorClientRequestType
    {
        NonePending = 0,
        ExistingSessionReservation = 1,
        ReservationUpdate = 2,
        EmptyServerReservation = 3,
        Reconnect = 4,
        Abandon = 5,
        ESpectatorClientRequestType_MAX = 6
    };

    enum class ESpectatorReservationResult : uint8_t //Enum OnlineSubsystemUtils.ESpectatorReservationResult
    {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        SpectatorLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        ESpectatorReservationResult_MAX = 16
    };

    enum class ESkinnedDecalAdditionalData : uint8_t //Enum SkinnedDecalComponent.ESkinnedDecalAdditionalData
    {
        NoAdditionalData = 0,
        SpawnTime = 1,
        DecalBoneID = 2,
        ESkinnedDecalAdditionalData_MAX = 3
    };

    enum class EDynamicMeshTangentCalcType : uint8_t //Enum ModelingComponents.EDynamicMeshTangentCalcType
    {
        NoTangents = 0,
        AutoCalculated = 1,
        ExternallyCalculated = 2,
        EDynamicMeshTangentCalcType_MAX = 3
    };

    enum class EMultiTransformerMode : uint8_t //Enum ModelingComponents.EMultiTransformerMode
    {
        DefaultGizmo = 1,
        QuickAxisTranslation = 2,
        EMultiTransformerMode_MAX = 3
    };

    enum class ESplitNormalMethod : uint8_t //Enum ModelingOperators.ESplitNormalMethod
    {
        UseExistingTopology = 0,
        FaceNormalThreshold = 1,
        FaceGroupID = 2,
        ESplitNormalMethod_MAX = 3
    };

    enum class ENormalCalculationMethod : uint8_t //Enum ModelingOperators.ENormalCalculationMethod
    {
        AreaWeighted = 0,
        AngleWeighted = 1,
        AreaAngleWeighting = 2,
        ENormalCalculationMethod_MAX = 3
    };

    enum class ERemeshSmoothingType : uint8_t //Enum ModelingOperators.ERemeshSmoothingType
    {
        Uniform = 0,
        Cotangent = 1,
        MeanValue = 2,
        ERemeshSmoothingType_MAX = 3
    };

    enum class EUVProjectionMethod : uint8_t //Enum ModelingOperators.EUVProjectionMethod
    {
        Cube = 0,
        Cylinder = 1,
        Plane = 2,
        EUVProjectionMethod_MAX = 3
    };

    enum class EMakeMeshPolygroupMode : uint8_t //Enum MeshModelingTools.EMakeMeshPolygroupMode
    {
        Single = 0,
        PerFace = 1,
        PerQuad = 2,
        EMakeMeshPolygroupMode_MAX = 3
    };

    enum class EMakeMeshPivotLocation : uint8_t //Enum MeshModelingTools.EMakeMeshPivotLocation
    {
        Base = 0,
        Centered = 1,
        Top = 2,
        EMakeMeshPivotLocation_MAX = 3
    };

    enum class EMakeMeshPlacementType : uint8_t //Enum MeshModelingTools.EMakeMeshPlacementType
    {
        GroundPlane = 0,
        OnScene = 1,
        EMakeMeshPlacementType_MAX = 2
    };

    enum class EMakeMeshShapeType : uint32_t //Enum MeshModelingTools.EMakeMeshShapeType
    {
        None = 0,
        All = 4095,
        Box = 1,
        Cylinder = 2,
        Cone = 4,
        Arrow = 8,
        Rectangle = 16,
        RoundedRectangle = 32,
        Disc = 64,
        PuncturedDisc = 128,
        Torus = 256,
        SphericalBox = 512,
        Sphere = 1024,
        EMakeMeshShapeType_MAX = 4096
    };

    enum class EAlignObjectsBoxPoint : uint8_t //Enum MeshModelingTools.EAlignObjectsBoxPoint
    {
        Center = 0,
        Bottom = 1,
        Top = 2,
        Left = 3,
        Right = 4,
        Front = 5,
        Back = 6,
        Min = 7,
        Max = 8
    };

    enum class EAlignObjectsAlignToOptions : uint8_t //Enum MeshModelingTools.EAlignObjectsAlignToOptions
    {
        FirstSelected = 0,
        LastSelected = 1,
        Combined = 2,
        EAlignObjectsAlignToOptions_MAX = 3
    };

    enum class EAlignObjectsAlignTypes : uint8_t //Enum MeshModelingTools.EAlignObjectsAlignTypes
    {
        Pivots = 0,
        BoundingBoxes = 1,
        EAlignObjectsAlignTypes_MAX = 2
    };

    enum class EBakeScaleMethod : uint8_t //Enum MeshModelingTools.EBakeScaleMethod
    {
        BakeFullScale = 0,
        BakeNonuniformScale = 1,
        DoNotBakeScale = 2,
        EBakeScaleMethod_MAX = 3
    };

    enum class EConvertToPolygonsMode : uint8_t //Enum MeshModelingTools.EConvertToPolygonsMode
    {
        FaceNormalDeviation = 0,
        FromUVISlands = 1,
        EConvertToPolygonsMode_MAX = 2
    };

    enum class EQuickTransformerMode : uint8_t //Enum MeshModelingTools.EQuickTransformerMode
    {
        AxisTranslation = 0,
        AxisRotation = 1,
        EQuickTransformerMode_MAX = 2
    };

    enum class EWeightScheme : uint8_t //Enum MeshModelingTools.EWeightScheme
    {
        Uniform = 0,
        Umbrella = 1,
        Valence = 2,
        MeanValue = 3,
        Cotangent = 4,
        ClampedCotangent = 5,
        EWeightScheme_MAX = 6
    };

    enum class EGroupTopologyDeformationStrategy : uint8_t //Enum MeshModelingTools.EGroupTopologyDeformationStrategy
    {
        Linear = 0,
        Laplacian = 1,
        EGroupTopologyDeformationStrategy_MAX = 2
    };

    enum class EDisplaceMeshToolDisplaceType : uint8_t //Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
    {
        Constant = 0,
        RandomNoise = 1,
        PerlinNoise = 2,
        DisplacementMap = 3,
        SineWave = 4,
        EDisplaceMeshToolDisplaceType_MAX = 5
    };

    enum class EDrawPolygonOutputMode : uint8_t //Enum MeshModelingTools.EDrawPolygonOutputMode
    {
        MeshedPolygon = 0,
        ExtrudedConstant = 1,
        ExtrudedInteractive = 2,
        EDrawPolygonOutputMode_MAX = 3
    };

    enum class EDrawPolygonDrawMode : uint8_t //Enum MeshModelingTools.EDrawPolygonDrawMode
    {
        Freehand = 0,
        Circle = 1,
        Square = 2,
        Rectangle = 3,
        RoundedRectangle = 4,
        HoleyCircle = 5,
        EDrawPolygonDrawMode_MAX = 6
    };

    enum class EDrawPolyPathExtrudeDirection : uint8_t //Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
    {
        SelectionNormal = 0,
        WorldX = 1,
        WorldY = 2,
        WorldZ = 3,
        LocalX = 4,
        LocalY = 5,
        LocalZ = 6,
        EDrawPolyPathExtrudeDirection_MAX = 7
    };

    enum class EDrawPolyPathHeightMode : uint8_t //Enum MeshModelingTools.EDrawPolyPathHeightMode
    {
        Interactive = 0,
        Constant = 1,
        EDrawPolyPathHeightMode_MAX = 2
    };

    enum class EDrawPolyPathWidthMode : uint8_t //Enum MeshModelingTools.EDrawPolyPathWidthMode
    {
        Interactive = 0,
        Constant = 1,
        EDrawPolyPathWidthMode_MAX = 2
    };

    enum class EDrawPolyPathOutputMode : uint8_t //Enum MeshModelingTools.EDrawPolyPathOutputMode
    {
        Ribbon = 0,
        Extrusion = 1,
        Ramp = 2,
        EDrawPolyPathOutputMode_MAX = 3
    };

    enum class EPlaneBrushSideMode : uint8_t //Enum MeshModelingTools.EPlaneBrushSideMode
    {
        BothSides = 0,
        PushDown = 1,
        PullTowards = 2,
        EPlaneBrushSideMode_MAX = 3
    };

    enum class EDynamicMeshSculptBrushType : uint8_t //Enum MeshModelingTools.EDynamicMeshSculptBrushType
    {
        Move = 0,
        Smooth = 1,
        Offset = 2,
        SculptView = 3,
        SculptMax = 4,
        Inflate = 5,
        Pinch = 6,
        Flatten = 7,
        Plane = 8,
        PlaneViewAligned = 9,
        FixedPlane = 10,
        Resample = 11,
        LastValue = 12,
        EDynamicMeshSculptBrushType_MAX = 13
    };

    enum class EPolyEditCutPlaneOrientation : uint8_t //Enum MeshModelingTools.EPolyEditCutPlaneOrientation
    {
        FaceNormals = 0,
        ViewDirection = 1,
        EPolyEditCutPlaneOrientation_MAX = 2
    };

    enum class EPolyEditExtrudeDirection : uint8_t //Enum MeshModelingTools.EPolyEditExtrudeDirection
    {
        SelectionNormal = 0,
        WorldX = 1,
        WorldY = 2,
        WorldZ = 3,
        LocalX = 4,
        LocalY = 5,
        LocalZ = 6,
        EPolyEditExtrudeDirection_MAX = 7
    };

    enum class EEditMeshPolygonsToolActions : uint8_t //Enum MeshModelingTools.EEditMeshPolygonsToolActions
    {
        NoAction = 0,
        PlaneCut = 1,
        Extrude = 2,
        Offset = 3,
        Inset = 4,
        Outset = 5,
        Merge = 6,
        Delete = 7,
        CutFaces = 8,
        RecalculateNormals = 9,
        FlipNormals = 10,
        Retriangulate = 11,
        Decompose = 12,
        Disconnect = 13,
        CollapseEdge = 14,
        WeldEdges = 15,
        StraightenEdge = 16,
        FillHole = 17,
        PlanarProjectionUV = 18,
        PokeSingleFace = 19,
        SplitSingleEdge = 20,
        FlipSingleEdge = 21,
        CollapseSingleEdge = 22,
        EEditMeshPolygonsToolActions_MAX = 23
    };

    enum class ELocalFrameMode : uint8_t //Enum MeshModelingTools.ELocalFrameMode
    {
        FromObject = 0,
        FromGeometry = 1,
        ELocalFrameMode_MAX = 2
    };

    enum class EEditPivotToolActions : uint8_t //Enum MeshModelingTools.EEditPivotToolActions
    {
        NoAction = 0,
        Center = 1,
        Bottom = 2,
        Top = 3,
        Left = 4,
        Right = 5,
        Front = 6,
        Back = 7,
        EEditPivotToolActions_MAX = 8
    };

    enum class EEditPivotSnapDragRotationMode : uint8_t //Enum MeshModelingTools.EEditPivotSnapDragRotationMode
    {
        Ignore = 0,
        Align = 1,
        AlignFlipped = 2,
        LastValue = 3,
        EEditPivotSnapDragRotationMode_MAX = 4
    };

    enum class EMeshEditingMaterialModes : uint8_t //Enum MeshModelingTools.EMeshEditingMaterialModes
    {
        ExistingMaterial = 0,
        Diffuse = 1,
        Grey = 2,
        Soft = 3,
        TangentNormal = 4,
        Custom = 5,
        EMeshEditingMaterialModes_MAX = 6
    };

    enum class ESetMeshMaterialMode : uint8_t //Enum MeshModelingTools.ESetMeshMaterialMode
    {
        KeepOriginal = 0,
        Checkerboard = 1,
        Override = 2,
        ESetMeshMaterialMode_MAX = 3
    };

    enum class EMeshFacesColorMode : uint8_t //Enum MeshModelingTools.EMeshFacesColorMode
    {
        None = 0,
        ByGroup = 1,
        ByMaterialID = 2,
        ByUVIsland = 3,
        EMeshFacesColorMode_MAX = 4
    };

    enum class EMeshSelectionToolPrimaryMode : uint8_t //Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
    {
        Brush = 0,
        VolumetricBrush = 1,
        AngleFiltered = 2,
        Visible = 3,
        AllConnected = 4,
        AllInGroup = 5,
        ByMaterial = 6,
        ByUVIsland = 7,
        AllWithinAngle = 8,
        EMeshSelectionToolPrimaryMode_MAX = 9
    };

    enum class EMeshSelectionToolActions : uint8_t //Enum MeshModelingTools.EMeshSelectionToolActions
    {
        NoAction = 0,
        SelectAll = 1,
        ClearSelection = 2,
        InvertSelection = 3,
        GrowSelection = 4,
        ShrinkSelection = 5,
        ExpandToConnected = 6,
        SelectLargestComponentByTriCount = 7,
        SelectLargestComponentByArea = 8,
        OptimizeSelection = 9,
        DeleteSelected = 10,
        DisconnectSelected = 11,
        SeparateSelected = 12,
        FlipSelected = 13,
        CreateGroup = 14,
        CycleSelectionMode = 15,
        CycleViewMode = 16,
        EMeshSelectionToolActions_MAX = 17
    };

    enum class ENonlinearOperationType : uint8_t //Enum MeshModelingTools.ENonlinearOperationType
    {
        Bend = 0,
        Flare = 1,
        Twist = 2,
        ENonlinearOperationType_MAX = 3
    };

    enum class EMaterialBoundaryConstraint : uint8_t //Enum MeshModelingTools.EMaterialBoundaryConstraint
    {
        Fixed = 7,
        Refine = 5,
        Free = 1,
        Ignore = 0,
        EMaterialBoundaryConstraint_MAX = 8
    };

    enum class EGroupBoundaryConstraint : uint8_t //Enum MeshModelingTools.EGroupBoundaryConstraint
    {
        Fixed = 7,
        Refine = 5,
        Free = 1,
        Ignore = 0,
        EGroupBoundaryConstraint_MAX = 8
    };

    enum class EMeshBoundaryConstraint : uint8_t //Enum MeshModelingTools.EMeshBoundaryConstraint
    {
        Fixed = 7,
        Refine = 5,
        Free = 1,
        EMeshBoundaryConstraint_MAX = 8
    };

    enum class EOcclusionCalculationUIMode : uint8_t //Enum MeshModelingTools.EOcclusionCalculationUIMode
    {
        GeneralizedWindingNumber = 0,
        RaycastOcclusionSamples = 1,
        EOcclusionCalculationUIMode_MAX = 2
    };

    enum class EOcclusionTriangleSamplingUIMode : uint8_t //Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
    {
        Vertices = 0,
        VerticesAndCentroids = 1,
        EOcclusionTriangleSamplingUIMode_MAX = 2
    };

    enum class ESmoothMeshToolSmoothType : uint8_t //Enum MeshModelingTools.ESmoothMeshToolSmoothType
    {
        Iterative = 0,
        BiHarmonic_Cotan = 1,
        ESmoothMeshToolSmoothType_MAX = 2
    };

    enum class ETransformMeshesSnapDragRotationMode : uint8_t //Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
    {
        Ignore = 0,
        Align = 1,
        AlignFlipped = 2,
        LastValue = 3,
        ETransformMeshesSnapDragRotationMode_MAX = 4
    };

    enum class ETransformMeshesSnapDragSource : uint8_t //Enum MeshModelingTools.ETransformMeshesSnapDragSource
    {
        ClickPoint = 0,
        Pivot = 1,
        LastValue = 2,
        ETransformMeshesSnapDragSource_MAX = 3
    };

    enum class ETransformMeshesTransformMode : uint8_t //Enum MeshModelingTools.ETransformMeshesTransformMode
    {
        SharedGizmo = 0,
        SharedGizmoLocal = 1,
        PerObjectGizmo = 2,
        LastValue = 3,
        ETransformMeshesTransformMode_MAX = 4
    };

    enum class EBinkMediaPlayerBinkDrawStyle : uint8_t //Enum BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
    {
        BMASM_Bink_DS_RenderToTexture = 0,
        BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 1,
        BMASM_Bink_DS_OverlayOriginalMovieSize = 2,
        BMASM_Bink_DS_OverlayFillScreen = 3,
        BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
        BMASM_Bink_DS_MAX = 5
    };

    enum class EBinkMediaPlayerBinkSoundTrack : uint8_t //Enum BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
    {
        BMASM_Bink_Sound_None = 0,
        BMASM_Bink_Sound_Simple = 1,
        BMASM_Bink_Sound_LanguageOverride = 2,
        BMASM_Bink_Sound_52 = 3,
        BMASM_Bink_Sound_51LanguageOverride = 4,
        BMASM_Bink_Sound_72 = 5,
        BMASM_Bink_Sound_71LanguageOverride = 6,
        BMASM_Bink_Sound_MAX = 7
    };

    enum class EBinkMediaPlayerBinkBufferModes : uint8_t //Enum BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
    {
        BMASM_Bink_Stream = 0,
        BMASM_Bink_PreloadAll = 1,
        BMASM_Bink_StreamUntilResident = 2,
        BMASM_Bink_MAX = 3
    };

    enum class EBinkMoviePlayerBinkSoundTrack : uint8_t //Enum BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
    {
        MP_Bink_Sound_None = 0,
        MP_Bink_Sound_Simple = 1,
        MP_Bink_Sound_LanguageOverride = 2,
        MP_Bink_Sound_52 = 3,
        MP_Bink_Sound_51LanguageOverride = 4,
        MP_Bink_Sound_72 = 5,
        MP_Bink_Sound_71LanguageOverride = 6,
        MP_Bink_Sound_MAX = 7
    };

    enum class EBinkMoviePlayerBinkBufferModes : uint8_t //Enum BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
    {
        MP_Bink_Stream = 0,
        MP_Bink_PreloadAll = 1,
        MP_Bink_StreamUntilResident = 2,
        MP_Bink_MAX = 3
    };

    enum class DeviceType : uint8_t //Enum VivoxCore.DeviceType
    {
        NullDevice = 0,
        SpecificDevice = 1,
        DefaultSystemDevice = 2,
        DefaultCommunicationDevice = 3,
        DeviceType_MAX = 4
    };

    enum class EAudioFadeModel : uint8_t //Enum VivoxCore.EAudioFadeModel
    {
        InverseByDistance = 0,
        LinearByDistance = 1,
        ExponentialByDistance = 2,
        EAudioFadeModel_MAX = 3
    };

    enum class ChannelType : uint8_t //Enum VivoxCore.ChannelType
    {
        NonPositional = 0,
        Positional = 1,
        Echo = 2,
        ChannelType_MAX = 3
    };

    enum class ConnectionState : uint8_t //Enum VivoxCore.ConnectionState
    {
        Disconnected = 0,
        Connecting = 1,
        Connected = 2,
        Disconnecting = 3,
        ConnectionState_MAX = 4
    };

    enum class ParticipantSpeakingUpdateRate : uint8_t //Enum VivoxCore.ParticipantSpeakingUpdateRate
    {
        StateChange = 0,
        Never = 1,
        Update1Hz = 2,
        Update5Hz = 3,
        Update10Hz = 4,
        ParticipantSpeakingUpdateRate_MAX = 5
    };

    enum class TransmissionMode : uint8_t //Enum VivoxCore.TransmissionMode
    {
        None = 0,
        Single = 1,
        All = 2,
        TransmissionMode_MAX = 3
    };

    enum class SubscriptionReply : uint8_t //Enum VivoxCore.SubscriptionReply
    {
        Allow = 0,
        Block = 1,
        SubscriptionReply_MAX = 2
    };

    enum class SubscriptionMode : uint8_t //Enum VivoxCore.SubscriptionMode
    {
        Accept = 0,
        Block = 1,
        Defer = 2,
        SubscriptionMode_MAX = 3
    };

    enum class LoginState : uint8_t //Enum VivoxCore.LoginState
    {
        LoggedOut = 0,
        LoggingIn = 1,
        LoggedIn = 2,
        LoggingOut = 3,
        LoginState_MAX = 4
    };

    enum class TTSMessageState : uint8_t //Enum VivoxCore.TTSMessageState
    {
        Playing = 0,
        Enqueued = 1,
        TTSMessageState_MAX = 2
    };

    enum class TTSDestination : uint8_t //Enum VivoxCore.TTSDestination
    {
        Default = 0,
        RemoteTransmission = 0,
        LocalPlayback = 1,
        RemoteTransmissionWithLocalPlayback = 2,
        QueuedRemoteTransmission = 3,
        QueuedLocalPlayback = 4,
        QueuedRemoteTransmissionWithLocalPlayback = 5,
        ScreenReader = 6,
        TTSDestination_MAX = 7
    };

    enum class PresenceStatus : uint8_t //Enum VivoxCore.PresenceStatus
    {
        Unavailable = 0,
        Available = 1,
        Chat = 2,
        DoNotDisturb = 3,
        Away = 4,
        ExtendedAway = 5,
        PresenceStatus_MAX = 6
    };

    enum class EAkCallbackType : uint8_t //Enum AkAudio.EAkCallbackType
    {
        EndOfEvent = 0,
        Marker = 2,
        Duration = 3,
        Starvation = 5,
        MusicPlayStarted = 7,
        MusicSyncBeat = 8,
        MusicSyncBar = 9,
        MusicSyncEntry = 10,
        MusicSyncExit = 11,
        MusicSyncGrid = 12,
        MusicSyncUserCue = 13,
        MusicSyncPoint = 14,
        MIDIEvent = 16,
        EAkCallbackType_MAX = 17
    };

    enum class EAkResult : uint8_t //Enum AkAudio.EAkResult
    {
        NotImplemented = 0,
        Success = 1,
        Fail = 2,
        PartialSuccess = 3,
        NotCompatible = 4,
        AlreadyConnected = 5,
        InvalidFile = 7,
        AudioFileHeaderTooLarge = 8,
        MaxReached = 9,
        InvalidID = 14,
        IDNotFound = 15,
        InvalidInstanceID = 16,
        NoMoreData = 17,
        InvalidStateGroup = 20,
        ChildAlreadyHasAParent = 21,
        InvalidLanguage = 22,
        CannotAddItseflAsAChild = 23,
        InvalidParameter = 31,
        ElementAlreadyInList = 35,
        PathNotFound = 36,
        PathNoVertices = 37,
        PathNotRunning = 38,
        PathNotPaused = 39,
        PathNodeAlreadyInList = 40,
        PathNodeNotInList = 41,
        DataNeeded = 43,
        NoDataNeeded = 44,
        DataReady = 45,
        NoDataReady = 46,
        InsufficientMemory = 52,
        Cancelled = 53,
        UnknownBankID = 54,
        BankReadError = 56,
        InvalidSwitchType = 57,
        FormatNotReady = 63,
        WrongBankVersion = 64,
        FileNotFound = 66,
        DeviceNotReady = 67,
        BankAlreadyLoaded = 69,
        RenderedFX = 71,
        ProcessNeeded = 72,
        ProcessDone = 73,
        MemManagerNotInitialized = 74,
        StreamMgrNotInitialized = 75,
        SSEInstructionsNotSupported = 76,
        Busy = 77,
        UnsupportedChannelConfig = 78,
        PluginMediaNotAvailable = 79,
        MustBeVirtualized = 80,
        CommandTooLarge = 81,
        RejectedByFilter = 82,
        InvalidCustomPlatformName = 83,
        DLLCannotLoad = 84,
        DLLPathNotFound = 85,
        NoJavaVM = 86,
        OpenSLError = 87,
        PluginNotRegistered = 88,
        DataAlignmentError = 89,
        EAkResult_MAX = 90
    };

    enum class EAkAndroidAudioAPI : uint8_t //Enum AkAudio.EAkAndroidAudioAPI
    {
        AAudio = 0,
        OpenSL_ES = 1,
        EAkAndroidAudioAPI_MAX = 2
    };

    enum class EAkAudioSessionMode : uint8_t //Enum AkAudio.EAkAudioSessionMode
    {
        Default = 0,
        VoiceChat = 1,
        GameChat = 2,
        VideoRecording = 3,
        Measurement = 4,
        MoviePlayback = 5,
        VideoChat = 6,
        EAkAudioSessionMode_MAX = 7
    };

    enum class EAkAudioSessionCategoryOptions : uint8_t //Enum AkAudio.EAkAudioSessionCategoryOptions
    {
        MixWithOthers = 0,
        DuckOthers = 1,
        AllowBluetooth = 2,
        DefaultToSpeaker = 3,
        EAkAudioSessionCategoryOptions_MAX = 4
    };

    enum class EAkAudioSessionCategory : uint8_t //Enum AkAudio.EAkAudioSessionCategory
    {
        Ambient = 0,
        SoloAmbient = 1,
        PlayAndRecord = 2,
        EAkAudioSessionCategory_MAX = 3
    };

    enum class EReflectionFilterBits : uint8_t //Enum AkAudio.EReflectionFilterBits
    {
        Wall = 0,
        Ceiling = 1,
        Floor = 2,
        EReflectionFilterBits_MAX = 3
    };

    enum class AkCodecId : uint8_t //Enum AkAudio.AkCodecId
    {
        None = 0,
        PCM = 1,
        ADPCM = 2,
        XMA = 3,
        Vorbis = 4,
        AAC = 10,
        ATRAC9 = 12,
        OpusNX = 17,
        AkOpus = 19,
        AkOpusWEM = 20,
        AkCodecId_MAX = 21
    };

    enum class EAkMidiCcValues : uint8_t //Enum AkAudio.EAkMidiCcValues
    {
        AkMidiCcBankSelectCoarse = 0,
        AkMidiCcModWheelCoarse = 1,
        AkMidiCcBreathCtrlCoarse = 2,
        AkMidiCcCtrl3Coarse = 3,
        AkMidiCcFootPedalCoarse = 4,
        AkMidiCcPortamentoCoarse = 5,
        AkMidiCcDataEntryCoarse = 6,
        AkMidiCcVolumeCoarse = 7,
        AkMidiCcBalanceCoarse = 8,
        AkMidiCcCtrl9Coarse = 9,
        AkMidiCcPanPositionCoarse = 10,
        AkMidiCcExpressionCoarse = 11,
        AkMidiCcEffectCtrl1Coarse = 12,
        AkMidiCcEffectCtrl2Coarse = 13,
        AkMidiCcCtrl14Coarse = 14,
        AkMidiCcCtrl15Coarse = 15,
        AkMidiCcGenSlider1 = 16,
        AkMidiCcGenSlider2 = 17,
        AkMidiCcGenSlider3 = 18,
        AkMidiCcGenSlider4 = 19,
        AkMidiCcCtrl20Coarse = 20,
        AkMidiCcCtrl21Coarse = 21,
        AkMidiCcCtrl22Coarse = 22,
        AkMidiCcCtrl23Coarse = 23,
        AkMidiCcCtrl24Coarse = 24,
        AkMidiCcCtrl25Coarse = 25,
        AkMidiCcCtrl26Coarse = 26,
        AkMidiCcCtrl27Coarse = 27,
        AkMidiCcCtrl28Coarse = 28,
        AkMidiCcCtrl29Coarse = 29,
        AkMidiCcCtrl30Coarse = 30,
        AkMidiCcCtrl31Coarse = 31,
        AkMidiCcBankSelectFine = 32,
        AkMidiCcModWheelFine = 33,
        AkMidiCcBreathCtrlFine = 34,
        AkMidiCcCtrl3Fine = 35,
        AkMidiCcFootPedalFine = 36,
        AkMidiCcPortamentoFine = 37,
        AkMidiCcDataEntryFine = 38,
        AkMidiCcVolumeFine = 39,
        AkMidiCcBalanceFine = 40,
        AkMidiCcCtrl9Fine = 41,
        AkMidiCcPanPositionFine = 42,
        AkMidiCcExpressionFine = 43,
        AkMidiCcEffectCtrl1Fine = 44,
        AkMidiCcEffectCtrl2Fine = 45,
        AkMidiCcCtrl14Fine = 46,
        AkMidiCcCtrl15Fine = 47,
        AkMidiCcCtrl20Fine = 52,
        AkMidiCcCtrl21Fine = 53,
        AkMidiCcCtrl22Fine = 54,
        AkMidiCcCtrl23Fine = 55,
        AkMidiCcCtrl24Fine = 56,
        AkMidiCcCtrl25Fine = 57,
        AkMidiCcCtrl26Fine = 58,
        AkMidiCcCtrl27Fine = 59,
        AkMidiCcCtrl28Fine = 60,
        AkMidiCcCtrl29Fine = 61,
        AkMidiCcCtrl30Fine = 62,
        AkMidiCcCtrl31Fine = 63,
        AkMidiCcHoldPedal = 64,
        AkMidiCcPortamentoOnOff = 65,
        AkMidiCcSustenutoPedal = 66,
        AkMidiCcSoftPedal = 67,
        AkMidiCcLegatoPedal = 68,
        AkMidiCcHoldPedal2 = 69,
        AkMidiCcSoundVariation = 70,
        AkMidiCcSoundTimbre = 71,
        AkMidiCcSoundReleaseTime = 72,
        AkMidiCcSoundAttackTime = 73,
        AkMidiCcSoundBrightness = 74,
        AkMidiCcSoundCtrl6 = 75,
        AkMidiCcSoundCtrl7 = 76,
        AkMidiCcSoundCtrl8 = 77,
        AkMidiCcSoundCtrl9 = 78,
        AkMidiCcSoundCtrl10 = 79,
        AkMidiCcGeneralButton1 = 80,
        AkMidiCcGeneralButton2 = 81,
        AkMidiCcGeneralButton3 = 82,
        AkMidiCcGeneralButton4 = 83,
        AkMidiCcReverbLevel = 91,
        AkMidiCcTremoloLevel = 92,
        AkMidiCcChorusLevel = 93,
        AkMidiCcCelesteLevel = 94,
        AkMidiCcPhaserLevel = 95,
        AkMidiCcDataButtonP1 = 96,
        AkMidiCcDataButtonM1 = 97,
        AkMidiCcNonRegisterCoarse = 98,
        AkMidiCcNonRegisterFine = 99,
        AkMidiCcAllSoundOff = 120,
        AkMidiCcAllControllersOff = 121,
        AkMidiCcLocalKeyboard = 122,
        AkMidiCcAllNotesOff = 123,
        AkMidiCcOmniModeOff = 124,
        AkMidiCcOmniModeOn = 125,
        AkMidiCcOmniMonophonicOn = 126,
        AkMidiCcOmniPolyphonicOn = 127,
        EAkMidiCcValues_MAX = 128
    };

    enum class EAkMidiEventType : uint32_t //Enum AkAudio.EAkMidiEventType
    {
        AkMidiEventTypeInvalid = 0,
        AkMidiEventTypeNoteOff = 128,
        AkMidiEventTypeNoteOn = 144,
        AkMidiEventTypeNoteAftertouch = 160,
        AkMidiEventTypeController = 176,
        AkMidiEventTypeProgramChange = 192,
        AkMidiEventTypeChannelAftertouch = 208,
        AkMidiEventTypePitchBend = 224,
        AkMidiEventTypeSysex = 240,
        AkMidiEventTypeEscape = 247,
        AkMidiEventTypeMeta = 255,
        EAkMidiEventType_MAX = 256
    };

    enum class ERTPCValueType : uint8_t //Enum AkAudio.ERTPCValueType
    {
        Default = 0,
        Global = 1,
        GameObject = 2,
        PlayingID = 3,
        Unavailable = 4,
        ERTPCValueType_MAX = 5
    };

    enum class EAkCurveInterpolation : uint8_t //Enum AkAudio.EAkCurveInterpolation
    {
        Log3 = 0,
        Sine = 1,
        Log1 = 2,
        InvSCurve = 3,
        Linear = 4,
        SCurve = 5,
        Exp1 = 6,
        SineRecip = 7,
        Exp3 = 8,
        LastFadeCurve = 8,
        Constant = 9,
        EAkCurveInterpolation_MAX = 10
    };

    enum class AkActionOnEventType : uint8_t //Enum AkAudio.AkActionOnEventType
    {
        Stop = 0,
        Pause = 1,
        Resume = 2,
        Break = 3,
        ReleaseEnvelope = 4,
        AkActionOnEventType_MAX = 5
    };

    enum class AkMultiPositionType : uint8_t //Enum AkAudio.AkMultiPositionType
    {
        SingleSource = 0,
        MultiSources = 1,
        MultiDirections = 2,
        AkMultiPositionType_MAX = 3
    };

    enum class AkSpeakerConfiguration : uint32_t //Enum AkAudio.AkSpeakerConfiguration
    {
        Ak_Speaker_Front_Left = 1,
        Ak_Speaker_Front_Right = 2,
        Ak_Speaker_Front_Center = 4,
        Ak_Speaker_Low_Frequency = 8,
        Ak_Speaker_Back_Left = 16,
        Ak_Speaker_Back_Right = 32,
        Ak_Speaker_Back_Center = 256,
        Ak_Speaker_Side_Left = 512,
        Ak_Speaker_Side_Right = 1024,
        Ak_Speaker_Top = 2048,
        Ak_Speaker_Height_Front_Left = 4096,
        Ak_Speaker_Height_Front_Center = 8192,
        Ak_Speaker_Height_Front_Right = 16384,
        Ak_Speaker_Height_Back_Left = 32768,
        Ak_Speaker_Height_Back_Center = 65536,
        Ak_Speaker_Height_Back_Right = 131072,
        Ak_Speaker_MAX = 131073
    };

    enum class AkChannelConfiguration : uint8_t //Enum AkAudio.AkChannelConfiguration
    {
        Ak_Parent = 0,
        Ak_LFE = 1,
        AK_Audio_Objects = 2,
        Ak_1_1 = 3,
        Ak_2_1 = 4,
        Ak_2_2 = 5,
        Ak_3_1 = 6,
        Ak_3_2 = 7,
        Ak_4_1 = 8,
        Ak_4_2 = 9,
        Ak_5_1 = 10,
        Ak_5_2 = 11,
        Ak_7_2 = 12,
        Ak_5_1_3 = 13,
        Ak_7_1_3 = 14,
        Ak_7_1_5 = 15,
        Ak_Auro_9_2 = 16,
        Ak_Auro_10_2 = 17,
        Ak_Auro_11_2 = 18,
        Ak_Auro_13_2 = 19,
        Ak_Ambisonics_1st_order = 20,
        Ak_Ambisonics_2nd_order = 21,
        Ak_Ambisonics_3rd_order = 22,
        Ak_Ambisonics_4th_order = 23,
        Ak_Ambisonics_5th_order = 24,
        AkChannelConfiguration_MAX = 25
    };

    enum class AkAcousticPortalState : uint8_t //Enum AkAudio.AkAcousticPortalState
    {
        Closed = 0,
        Open = 1,
        AkAcousticPortalState_MAX = 2
    };

    enum class PanningRule : uint8_t //Enum AkAudio.PanningRule
    {
        PanningRule_Speakers = 0,
        PanningRule_Headphones = 1,
        PanningRule_MAX = 2
    };

    enum class AkMeshType : uint8_t //Enum AkAudio.AkMeshType
    {
        StaticMesh = 0,
        CollisionMesh = 1,
        AkMeshType_MAX = 2
    };

    enum class EAkCommSystem : uint8_t //Enum AkAudio.EAkCommSystem
    {
        Socket = 0,
        HTCS = 1,
        EAkCommSystem_MAX = 2
    };

    enum class EAkChannelMask : uint8_t //Enum AkAudio.EAkChannelMask
    {
        FrontLeft = 0,
        FrontRight = 1,
        FrontCenter = 2,
        LowFrequency = 3,
        BackLeft = 4,
        BackRight = 5,
        BackCenter = 8,
        SideLeft = 9,
        SideRight = 10,
        Top = 11,
        HeightFrontLeft = 12,
        HeightFrontCenter = 13,
        HeightFrontRight = 14,
        HeightBackLeft = 15,
        HeightBackCenter = 16,
        HeightBackRight = 17,
        EAkChannelMask_MAX = 18
    };

    enum class EAkChannelConfigType : uint8_t //Enum AkAudio.EAkChannelConfigType
    {
        Anonymous = 0,
        Standard = 1,
        Ambisonic = 2,
        EAkChannelConfigType_MAX = 3
    };

    enum class EAkPanningRule : uint8_t //Enum AkAudio.EAkPanningRule
    {
        Speakers = 0,
        Headphones = 1,
        EAkPanningRule_MAX = 2
    };

    enum class EAkFitToGeometryMode : uint8_t //Enum AkAudio.EAkFitToGeometryMode
    {
        OrientedBox = 0,
        AlignedBox = 1,
        ConvexPolyhedron = 2,
        EAkFitToGeometryMode_MAX = 3
    };

    enum class EFlipbookCollisionMode : uint8_t //Enum Paper2D.EFlipbookCollisionMode
    {
        NoCollision = 0,
        FirstFrameCollision = 1,
        EachFrameCollision = 2,
        EFlipbookCollisionMode_MAX = 3
    };

    enum class EPaperSpriteAtlasPadding : uint8_t //Enum Paper2D.EPaperSpriteAtlasPadding
    {
        DilateBorder = 0,
        PadWithZero = 1,
        EPaperSpriteAtlasPadding_MAX = 2
    };

    enum class ETileMapProjectionMode : uint8_t //Enum Paper2D.ETileMapProjectionMode
    {
        Orthogonal = 0,
        IsometricDiamond = 1,
        IsometricStaggered = 2,
        HexagonalStaggered = 3,
        ETileMapProjectionMode_MAX = 4
    };

    enum class ESpritePivotMode : uint8_t //Enum Paper2D.ESpritePivotMode
    {
        Top_Left = 0,
        Top_Center = 1,
        Top_Right = 2,
        Center_Left = 3,
        Center_Center = 4,
        Center_Right = 5,
        Bottom_Left = 6,
        Bottom_Center = 7,
        Bottom_Right = 8,
        Custom = 9,
        ESpritePivotMode_MAX = 10
    };

    enum class ESpritePolygonMode : uint8_t //Enum Paper2D.ESpritePolygonMode
    {
        SourceBoundingBox = 0,
        TightBoundingBox = 1,
        ShrinkWrapped = 2,
        FullyCustom = 3,
        Diced = 4,
        ESpritePolygonMode_MAX = 5
    };

    enum class ESpriteShapeType : uint8_t //Enum Paper2D.ESpriteShapeType
    {
        Box = 0,
        Circle = 1,
        Polygon = 2,
        ESpriteShapeType_MAX = 3
    };

    enum class ESpriteCollisionMode : uint8_t //Enum Paper2D.ESpriteCollisionMode
    {
        None = 0,
        Use2DPhysics = 1,
        Use3DPhysics = 2,
        ESpriteCollisionMode_MAX = 3
    };

    enum class EDatasmithAreaLightActorType : uint8_t //Enum DatasmithContent.EDatasmithAreaLightActorType
    {
        Point = 0,
        Spot = 1,
        Rect = 2,
        EDatasmithAreaLightActorType_MAX = 3
    };

    enum class EDatasmithAreaLightActorShape : uint8_t //Enum DatasmithContent.EDatasmithAreaLightActorShape
    {
        Rectangle = 0,
        Disc = 1,
        Sphere = 2,
        Cylinder = 3,
        None = 4,
        EDatasmithAreaLightActorShape_MAX = 5
    };

    enum class EDatasmithCADStitchingTechnique : uint8_t //Enum DatasmithContent.EDatasmithCADStitchingTechnique
    {
        StitchingNone = 0,
        StitchingHeal = 1,
        StitchingSew = 2,
        EDatasmithCADStitchingTechnique_MAX = 3
    };

    enum class EDatasmithImportHierarchy : uint8_t //Enum DatasmithContent.EDatasmithImportHierarchy
    {
        UseMultipleActors = 0,
        UseSingleActor = 1,
        UseOneBlueprint = 2,
        EDatasmithImportHierarchy_MAX = 3
    };

    enum class EDatasmithImportScene : uint8_t //Enum DatasmithContent.EDatasmithImportScene
    {
        NewLevel = 0,
        CurrentLevel = 1,
        AssetsOnly = 2,
        EDatasmithImportScene_MAX = 3
    };

    enum class EDatasmithImportLightmapMax : uint8_t //Enum DatasmithContent.EDatasmithImportLightmapMax
    {
        LIGHTMAP_65 = 0,
        LIGHTMAP_129 = 1,
        LIGHTMAP_257 = 2,
        LIGHTMAP_513 = 3,
        LIGHTMAP_1025 = 4,
        LIGHTMAP_2049 = 5,
        LIGHTMAP_4097 = 6,
        LIGHTMAP_MAX = 7
    };

    enum class EDatasmithImportLightmapMin : uint8_t //Enum DatasmithContent.EDatasmithImportLightmapMin
    {
        LIGHTMAP_17 = 0,
        LIGHTMAP_33 = 1,
        LIGHTMAP_65 = 2,
        LIGHTMAP_129 = 3,
        LIGHTMAP_257 = 4,
        LIGHTMAP_513 = 5,
        LIGHTMAP_MAX = 6
    };

    enum class EDatasmithImportMaterialQuality : uint8_t //Enum DatasmithContent.EDatasmithImportMaterialQuality
    {
        UseNoFresnelCurves = 0,
        UseSimplifierFresnelCurves = 1,
        UseRealFresnelCurves = 2,
        EDatasmithImportMaterialQuality_MAX = 3
    };

    enum class EDatasmithImportActorPolicy : uint8_t //Enum DatasmithContent.EDatasmithImportActorPolicy
    {
        Update = 0,
        Full = 1,
        Ignore = 2,
        EDatasmithImportActorPolicy_MAX = 3
    };

    enum class EDatasmithImportAssetConflictPolicy : uint8_t //Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
    {
        Replace = 0,
        Update = 1,
        Use = 2,
        Ignore = 3,
        EDatasmithImportAssetConflictPolicy_MAX = 4
    };

    enum class EDatasmithImportSearchPackagePolicy : uint8_t //Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
    {
        Current = 0,
        All = 1,
        EDatasmithImportSearchPackagePolicy_MAX = 2
    };

    enum class EPropertyValueCategory : uint8_t //Enum VariantManagerContent.EPropertyValueCategory
    {
        Undefined = 0,
        Generic = 1,
        RelativeLocation = 2,
        RelativeRotation = 4,
        RelativeScale3D = 8,
        Visibility = 16,
        Material = 32,
        Color = 64,
        Option = 128,
        EPropertyValueCategory_MAX = 129
    };

    enum class EChaosWeightMapTarget : uint8_t //Enum ChaosCloth.EChaosWeightMapTarget
    {
        None = 0,
        MaxDistance = 1,
        BackstopDistance = 2,
        BackstopRadius = 3,
        AnimDriveMultiplier = 4,
        EChaosWeightMapTarget_MAX = 5
    };

    enum class ETriangleTessellationMode : uint8_t //Enum EditableMesh.ETriangleTessellationMode
    {
        ThreeTriangles = 0,
        FourTriangles = 1,
        ETriangleTessellationMode_MAX = 2
    };

    enum class EInsetPolygonsMode : uint8_t //Enum EditableMesh.EInsetPolygonsMode
    {
        All = 0,
        CenterPolygonOnly = 1,
        SidePolygonsOnly = 2,
        EInsetPolygonsMode_MAX = 3
    };

    enum class EPolygonEdgeHardness : uint8_t //Enum EditableMesh.EPolygonEdgeHardness
    {
        NewEdgesSoft = 0,
        NewEdgesHard = 1,
        AllEdgesSoft = 2,
        AllEdgesHard = 3,
        EPolygonEdgeHardness_MAX = 4
    };

    enum class EMeshElementAttributeType : uint8_t //Enum EditableMesh.EMeshElementAttributeType
    {
        None = 0,
        FVector4 = 1,
        FVector = 2,
        FVector2D = 3,
        Float = 4,
        Int = 5,
        Bool = 6,
        FName = 7,
        EMeshElementAttributeType_MAX = 8
    };

    enum class EMeshTopologyChange : uint8_t //Enum EditableMesh.EMeshTopologyChange
    {
        NoTopologyChange = 0,
        TopologyChange = 1,
        EMeshTopologyChange_MAX = 2
    };

    enum class EMeshModificationType : uint8_t //Enum EditableMesh.EMeshModificationType
    {
        FirstInterim = 0,
        Interim = 1,
        Final = 2,
        EMeshModificationType_MAX = 3
    };

    enum class ELocationZToSpawnEnum : uint8_t //Enum ChaosNiagara.ELocationZToSpawnEnum
    {
        ChaosNiagara_LocationZToSpawn_None = 0,
        ChaosNiagara_LocationZToSpawn_Min = 1,
        ChaosNiagara_LocationZToSpawn_Max = 2,
        ChaosNiagara_LocationZToSpawn_MinMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ELocationYToSpawnEnum : uint8_t //Enum ChaosNiagara.ELocationYToSpawnEnum
    {
        ChaosNiagara_LocationYToSpawn_None = 0,
        ChaosNiagara_LocationYToSpawn_Min = 1,
        ChaosNiagara_LocationYToSpawn_Max = 2,
        ChaosNiagara_LocationYToSpawn_MinMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ELocationXToSpawnEnum : uint8_t //Enum ChaosNiagara.ELocationXToSpawnEnum
    {
        ChaosNiagara_LocationXToSpawn_None = 0,
        ChaosNiagara_LocationXToSpawn_Min = 1,
        ChaosNiagara_LocationXToSpawn_Max = 2,
        ChaosNiagara_LocationXToSpawn_MinMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ELocationFilteringModeEnum : uint8_t //Enum ChaosNiagara.ELocationFilteringModeEnum
    {
        ChaosNiagara_LocationFilteringMode_Inclusive = 0,
        ChaosNiagara_LocationFilteringMode_Exclusive = 1,
        ChaosNiagara_Max = 2
    };

    enum class EDataSourceTypeEnum : uint8_t //Enum ChaosNiagara.EDataSourceTypeEnum
    {
        ChaosNiagara_DataSourceType_Collision = 0,
        ChaosNiagara_DataSourceType_Breaking = 1,
        ChaosNiagara_DataSourceType_Trailing = 2,
        ChaosNiagara_Max = 3
    };

    enum class EDebugTypeEnum : uint8_t //Enum ChaosNiagara.EDebugTypeEnum
    {
        ChaosNiagara_DebugType_NoDebug = 0,
        ChaosNiagara_DebugType_ColorBySolver = 1,
        ChaosNiagara_DebugType_ColorByParticleIndex = 2,
        ChaosNiagara_Max = 3
    };

    enum class ERandomVelocityGenerationTypeEnum : uint8_t //Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
    {
        ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
        ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
        ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
        ChaosNiagara_Max = 3
    };

    enum class EDataSortTypeEnum : uint8_t //Enum ChaosNiagara.EDataSortTypeEnum
    {
        ChaosNiagara_DataSortType_NoSorting = 0,
        ChaosNiagara_DataSortType_RandomShuffle = 1,
        ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
        ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
    {
        SetSystemInactive = 0,
        Deactivate = 1,
        None = 2,
        ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
    };

    enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
    {
        ActivateIfInactive = 0,
        None = 1,
        ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
    };

    enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
    {
        Activate = 0,
        ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
    };

    enum class ENiagaraCollisionMode : uint8_t //Enum Niagara.ENiagaraCollisionMode
    {
        None = 0,
        SceneGeometry = 1,
        DepthBuffer = 2,
        DistanceField = 3,
        ENiagaraCollisionMode_MAX = 4
    };

    enum class ENiagaraLegacyTrailWidthMode : uint8_t //Enum Niagara.ENiagaraLegacyTrailWidthMode
    {
        FromCentre = 0,
        FromFirst = 1,
        FromSecond = 2,
        ENiagaraLegacyTrailWidthMode_MAX = 3
    };

    enum class ENiagaraIterationSource : uint8_t //Enum Niagara.ENiagaraIterationSource
    {
        Particles = 0,
        DataInterface = 1,
        ENiagaraIterationSource_MAX = 2
    };

    enum class ENiagaraScriptGroup : uint8_t //Enum Niagara.ENiagaraScriptGroup
    {
        Particle = 0,
        Emitter = 1,
        System = 2,
        Max = 3
    };

    enum class ENiagaraScriptUsage : uint8_t //Enum Niagara.ENiagaraScriptUsage
    {
        Function = 0,
        Module = 1,
        DynamicInput = 2,
        ParticleSpawnScript = 3,
        ParticleSpawnScriptInterpolated = 4,
        ParticleUpdateScript = 5,
        ParticleEventScript = 6,
        ParticleSimulationStageScript = 7,
        ParticleGPUComputeScript = 8,
        EmitterSpawnScript = 9,
        EmitterUpdateScript = 10,
        SystemSpawnScript = 11,
        SystemUpdateScript = 12,
        ENiagaraScriptUsage_MAX = 13
    };

    enum class ENiagaraScriptCompileStatus : uint8_t //Enum Niagara.ENiagaraScriptCompileStatus
    {
        NCS_Unknown = 0,
        NCS_Dirty = 1,
        NCS_Error = 2,
        NCS_UpToDate = 3,
        NCS_BeingCreated = 4,
        NCS_UpToDateWithWarnings = 5,
        NCS_ComputeUpToDateWithWarnings = 6,
        NCS_MAX = 7
    };

    enum class ENiagaraInputNodeUsage : uint8_t //Enum Niagara.ENiagaraInputNodeUsage
    {
        Undefined = 0,
        Parameter = 1,
        Attribute = 2,
        SystemConstant = 3,
        TranslatorConstant = 4,
        RapidIterationParameter = 5,
        ENiagaraInputNodeUsage_MAX = 6
    };

    enum class ENiagaraDataSetType : uint8_t //Enum Niagara.ENiagaraDataSetType
    {
        ParticleData = 0,
        Shared = 1,
        Event = 2,
        ENiagaraDataSetType_MAX = 3
    };

    enum class ENiagaraAgeUpdateMode : uint8_t //Enum Niagara.ENiagaraAgeUpdateMode
    {
        TickDeltaTime = 0,
        DesiredAge = 1,
        DesiredAgeNoSeek = 2,
        ENiagaraAgeUpdateMode_MAX = 3
    };

    enum class ENiagaraSimTarget : uint8_t //Enum Niagara.ENiagaraSimTarget
    {
        CPUSim = 0,
        GPUComputeSim = 1,
        ENiagaraSimTarget_MAX = 2
    };

    enum class ENiagaraDefaultMode : uint8_t //Enum Niagara.ENiagaraDefaultMode
    {
        Value = 0,
        Binding = 1,
        Custom = 2,
        ENiagaraDefaultMode_MAX = 3
    };

    enum class ENiagaraTickBehavior : uint8_t //Enum Niagara.ENiagaraTickBehavior
    {
        UsePrereqs = 0,
        UseComponentTickGroup = 1,
        ForceTickFirst = 2,
        ForceTickLast = 3,
        ENiagaraTickBehavior_MAX = 4
    };

    enum class ENCPoolMethod : uint8_t //Enum Niagara.ENCPoolMethod
    {
        None = 0,
        AutoRelease = 1,
        ManualRelease = 2,
        ManualRelease_OnComplete = 3,
        FreeInPool = 4,
        ENCPoolMethod_MAX = 5
    };

    enum class ENDISkeletalMesh_SkinningMode : uint32_t //Enum Niagara.ENDISkeletalMesh_SkinningMode
    {
        Invalid = 255,
        None = 0,
        SkinOnTheFly = 1,
        PreSkin = 2,
        ENDISkeletalMesh_MAX = 256
    };

    enum class ENiagaraScalabilityUpdateFrequency : uint8_t //Enum Niagara.ENiagaraScalabilityUpdateFrequency
    {
        SpawnOnly = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        Continuous = 4,
        ENiagaraScalabilityUpdateFrequency_MAX = 5
    };

    enum class ENiagaraCullReaction : uint8_t //Enum Niagara.ENiagaraCullReaction
    {
        Deactivate = 0,
        DeactivateImmediate = 1,
        DeactivateResume = 2,
        DeactivateImmediateResume = 3,
        ENiagaraCullReaction_MAX = 4
    };

    enum class EParticleAllocationMode : uint8_t //Enum Niagara.EParticleAllocationMode
    {
        AutomaticEstimate = 0,
        ManualEstimate = 1,
        EParticleAllocationMode_MAX = 2
    };

    enum class EScriptExecutionMode : uint8_t //Enum Niagara.EScriptExecutionMode
    {
        EveryParticle = 0,
        SpawnedParticles = 1,
        SingleParticle = 2,
        EScriptExecutionMode_MAX = 3
    };

    enum class ENiagaraSortMode : uint8_t //Enum Niagara.ENiagaraSortMode
    {
        None = 0,
        ViewDepth = 1,
        ViewDistance = 2,
        CustomAscending = 3,
        CustomDecending = 4,
        ENiagaraSortMode_MAX = 5
    };

    enum class ENiagaraMeshLockedAxisSpace : uint8_t //Enum Niagara.ENiagaraMeshLockedAxisSpace
    {
        Simulation = 0,
        World = 1,
        Local = 2,
        ENiagaraMeshLockedAxisSpace_MAX = 3
    };

    enum class ENiagaraMeshFacingMode : uint8_t //Enum Niagara.ENiagaraMeshFacingMode
    {
        Default = 0,
        Velocity = 1,
        CameraPosition = 2,
        CameraPlane = 3,
        ENiagaraMeshFacingMode_MAX = 4
    };

    enum class ENiagaraPlatformSetState : uint8_t //Enum Niagara.ENiagaraPlatformSetState
    {
        Disabled = 0,
        Enabled = 1,
        Active = 2,
        Unknown = 3,
        ENiagaraPlatformSetState_MAX = 4
    };

    enum class ENiagaraPlatformSelectionState : uint8_t //Enum Niagara.ENiagaraPlatformSelectionState
    {
        Default = 0,
        Enabled = 1,
        Disabled = 2,
        ENiagaraPlatformSelectionState_MAX = 3
    };

    enum class ENiagaraPreviewGridResetMode : uint8_t //Enum Niagara.ENiagaraPreviewGridResetMode
    {
        Never = 0,
        Individual = 1,
        All = 2,
        ENiagaraPreviewGridResetMode_MAX = 3
    };

    enum class ENiagaraRibbonTessellationMode : uint8_t //Enum Niagara.ENiagaraRibbonTessellationMode
    {
        Automatic = 0,
        Custom = 1,
        Disabled = 2,
        ENiagaraRibbonTessellationMode_MAX = 3
    };

    enum class ENiagaraRibbonDrawDirection : uint8_t //Enum Niagara.ENiagaraRibbonDrawDirection
    {
        FrontToBack = 0,
        BackToFront = 1,
        ENiagaraRibbonDrawDirection_MAX = 2
    };

    enum class ENiagaraRibbonAgeOffsetMode : uint8_t //Enum Niagara.ENiagaraRibbonAgeOffsetMode
    {
        Scale = 0,
        Clip = 1,
        ENiagaraRibbonAgeOffsetMode_MAX = 2
    };

    enum class ENiagaraRibbonFacingMode : uint8_t //Enum Niagara.ENiagaraRibbonFacingMode
    {
        Screen = 0,
        Custom = 1,
        CustomSideVector = 2,
        ENiagaraRibbonFacingMode_MAX = 3
    };

    enum class ENiagaraModuleDependencyScriptConstraint : uint8_t //Enum Niagara.ENiagaraModuleDependencyScriptConstraint
    {
        SameScript = 0,
        AllScripts = 1,
        ENiagaraModuleDependencyScriptConstraint_MAX = 2
    };

    enum class ENiagaraModuleDependencyType : uint8_t //Enum Niagara.ENiagaraModuleDependencyType
    {
        PreDependency = 0,
        PostDependency = 1,
        ENiagaraModuleDependencyType_MAX = 2
    };

    enum class EUnusedAttributeBehaviour : uint8_t //Enum Niagara.EUnusedAttributeBehaviour
    {
        Copy = 0,
        Zero = 1,
        None = 2,
        MarkInvalid = 3,
        PassThrough = 4,
        EUnusedAttributeBehaviour_MAX = 5
    };

    enum class ENiagaraSpriteFacingMode : uint8_t //Enum Niagara.ENiagaraSpriteFacingMode
    {
        FaceCamera = 0,
        FaceCameraPlane = 1,
        CustomFacingVector = 2,
        FaceCameraPosition = 3,
        FaceCameraDistanceBlend = 4,
        ENiagaraSpriteFacingMode_MAX = 5
    };

    enum class ENiagaraSpriteAlignment : uint8_t //Enum Niagara.ENiagaraSpriteAlignment
    {
        Unaligned = 0,
        VelocityAligned = 1,
        CustomAlignment = 2,
        ENiagaraSpriteAlignment_MAX = 3
    };

    enum class ENiagaraParameterPanelCategory : uint8_t //Enum Niagara.ENiagaraParameterPanelCategory
    {
        Input = 0,
        Attributes = 1,
        Output = 2,
        Local = 3,
        User = 4,
        Engine = 5,
        Owner = 6,
        System = 7,
        Emitter = 8,
        Particles = 9,
        ScriptTransient = 10,
        StaticSwitch = 11,
        None = 12,
        Num = 13,
        ENiagaraParameterPanelCategory_MAX = 14
    };

    enum class ENiagaraScriptParameterUsage : uint8_t //Enum Niagara.ENiagaraScriptParameterUsage
    {
        Input = 0,
        Output = 1,
        Local = 2,
        InputOutput = 3,
        InitialValueInput = 4,
        None = 5,
        Num = 6,
        ENiagaraScriptParameterUsage_MAX = 7
    };

    enum class ENiagaraParameterScope : uint8_t //Enum Niagara.ENiagaraParameterScope
    {
        Input = 0,
        User = 1,
        Engine = 2,
        Owner = 3,
        System = 4,
        Emitter = 5,
        Particles = 6,
        ScriptPersistent = 7,
        ScriptTransient = 8,
        Local = 9,
        Custom = 10,
        DISPLAY_ONLY_StaticSwitch = 11,
        Output = 12,
        None = 13,
        Num = 14,
        ENiagaraParameterScope_MAX = 15
    };

    enum class ENiagaraExecutionState : uint8_t //Enum Niagara.ENiagaraExecutionState
    {
        Active = 0,
        Inactive = 1,
        InactiveClear = 2,
        Complete = 3,
        Disabled = 4,
        Num = 5,
        ENiagaraExecutionState_MAX = 6
    };

    enum class ENiagaraExecutionStateSource : uint8_t //Enum Niagara.ENiagaraExecutionStateSource
    {
        Scalability = 0,
        Internal = 1,
        Owner = 2,
        InternalCompletion = 3,
        ENiagaraExecutionStateSource_MAX = 4
    };

    enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t //Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
    {
        None = 0,
        Largest = 1,
        Smallest = 2,
        Scalar = 3,
        ENiagaraNumericOutputTypeSelectionMode_MAX = 4
    };

    enum class ENiagaraVariantMode : uint8_t //Enum Niagara.ENiagaraVariantMode
    {
        None = 0,
        Object = 1,
        DataInterface = 2,
        Bytes = 3,
        ENiagaraVariantMode_MAX = 4
    };

    enum class FNiagaraCompileEventSeverity : uint8_t //Enum NiagaraShader.FNiagaraCompileEventSeverity
    {
        Log = 0,
        Warning = 1,
        Error = 2,
        FNiagaraCompileEventSeverity_MAX = 3
    };

    enum class ETextGender : uint8_t //Enum Engine.ETextGender
    {
        Masculine = 0,
        Feminine = 1,
        Neuter = 2,
        ETextGender_MAX = 3
    };

    enum class EFormatArgumentType : uint8_t //Enum Engine.EFormatArgumentType
    {
        Int = 0,
        UInt = 1,
        Float = 2,
        Double = 3,
        Text = 4,
        Gender = 5,
        EFormatArgumentType_MAX = 6
    };

    enum class ETouchIndex : uint8_t //Enum InputCore.ETouchIndex
    {
        Touch1 = 0,
        Touch2 = 1,
        Touch3 = 2,
        Touch4 = 3,
        Touch5 = 4,
        Touch6 = 5,
        Touch7 = 6,
        Touch8 = 7,
        Touch9 = 8,
        Touch10 = 9,
        CursorPointerIndex = 10,
        MAX_TOUCHES = 11,
        ETouchIndex_MAX = 12
    };

    enum class EEndPlayReason : uint8_t //Enum Engine.EEndPlayReason
    {
        Destroyed = 0,
        LevelTransition = 1,
        EndPlayInEditor = 2,
        RemovedFromWorld = 3,
        Quit = 4,
        EEndPlayReason_MAX = 5
    };

    enum class ETickingGroup : uint8_t //Enum Engine.ETickingGroup
    {
        TG_PrePhysics = 0,
        TG_StartPhysics = 1,
        TG_DuringPhysics = 2,
        TG_EndPhysics = 3,
        TG_PostPhysics = 4,
        TG_PostUpdateWork = 5,
        TG_LastDemotable = 6,
        TG_NewlySpawned = 7,
        TG_MAX = 8
    };

    enum class EComponentCreationMethod : uint8_t //Enum Engine.EComponentCreationMethod
    {
        Native = 0,
        SimpleConstructionScript = 1,
        UserConstructionScript = 2,
        Instance = 3,
        EComponentCreationMethod_MAX = 4
    };

    enum class ETemperatureSeverityType : uint8_t //Enum Engine.ETemperatureSeverityType
    {
        Unknown = 0,
        Good = 1,
        Bad = 2,
        Serious = 3,
        Critical = 4,
        NumSeverities = 5,
        ETemperatureSeverityType_MAX = 6
    };

    enum class EPlaneConstraintAxisSetting : uint8_t //Enum Engine.EPlaneConstraintAxisSetting
    {
        Custom = 0,
        X = 1,
        Y = 2,
        Z = 3,
        UseGlobalPhysicsSetting = 4,
        EPlaneConstraintAxisSetting_MAX = 5
    };

    enum class EInterpToBehaviourType : uint8_t //Enum Engine.EInterpToBehaviourType
    {
        OneShot = 0,
        OneShot_Reverse = 1,
        Loop_Reset = 2,
        PingPong = 3,
        EInterpToBehaviourType_MAX = 4
    };

    enum class ETeleportType : uint8_t //Enum Engine.ETeleportType
    {
        None = 0,
        TeleportPhysics = 1,
        ResetPhysics = 2,
        ETeleportType_MAX = 3
    };

    enum class EPlatformInterfaceDataType : uint8_t //Enum Engine.EPlatformInterfaceDataType
    {
        PIDT_None = 0,
        PIDT_Int = 1,
        PIDT_Float = 2,
        PIDT_String = 3,
        PIDT_Object = 4,
        PIDT_Custom = 5,
        PIDT_MAX = 6
    };

    enum class EMovementMode : uint8_t //Enum Engine.EMovementMode
    {
        MOVE_None = 0,
        MOVE_Walking = 1,
        MOVE_NavWalking = 2,
        MOVE_Falling = 3,
        MOVE_Swimming = 4,
        MOVE_Flying = 5,
        MOVE_Custom = 6,
        MOVE_MAX = 7
    };

    enum class ENetworkFailure : uint8_t //Enum Engine.ENetworkFailure
    {
        NetDriverAlreadyExists = 0,
        NetDriverCreateFailure = 1,
        NetDriverListenFailure = 2,
        ConnectionLost = 3,
        ConnectionTimeout = 4,
        FailureReceived = 5,
        OutdatedClient = 6,
        OutdatedServer = 7,
        PendingConnectionFailure = 8,
        NetGuidMismatch = 9,
        NetChecksumMismatch = 10,
        ENetworkFailure_MAX = 11
    };

    enum class ETravelFailure : uint8_t //Enum Engine.ETravelFailure
    {
        NoLevel = 0,
        LoadMapFailure = 1,
        InvalidURL = 2,
        PackageMissing = 3,
        PackageVersion = 4,
        NoDownload = 5,
        TravelFailure = 6,
        CheatCommands = 7,
        PendingNetGameCreateFailure = 8,
        CloudSaveFailure = 9,
        ServerTravelFailure = 10,
        ClientTravelFailure = 11,
        ETravelFailure_MAX = 12
    };

    enum class EScreenOrientation : uint8_t //Enum Engine.EScreenOrientation
    {
        Unknown = 0,
        Portrait = 1,
        PortraitUpsideDown = 2,
        LandscapeLeft = 3,
        LandscapeRight = 4,
        FaceUp = 5,
        FaceDown = 6,
        EScreenOrientation_MAX = 7
    };

    enum class EApplicationState : uint8_t //Enum Engine.EApplicationState
    {
        Unknown = 0,
        Inactive = 1,
        Background = 2,
        Active = 3,
        EApplicationState_MAX = 4
    };

    enum class EObjectTypeQuery : uint8_t //Enum Engine.EObjectTypeQuery
    {
        ObjectTypeQuery1 = 0,
        ObjectTypeQuery2 = 1,
        ObjectTypeQuery3 = 2,
        ObjectTypeQuery4 = 3,
        ObjectTypeQuery5 = 4,
        ObjectTypeQuery6 = 5,
        ObjectTypeQuery7 = 6,
        ObjectTypeQuery8 = 7,
        ObjectTypeQuery9 = 8,
        ObjectTypeQuery10 = 9,
        ObjectTypeQuery11 = 10,
        ObjectTypeQuery12 = 11,
        ObjectTypeQuery13 = 12,
        ObjectTypeQuery14 = 13,
        ObjectTypeQuery15 = 14,
        ObjectTypeQuery16 = 15,
        ObjectTypeQuery17 = 16,
        ObjectTypeQuery18 = 17,
        ObjectTypeQuery19 = 18,
        ObjectTypeQuery20 = 19,
        ObjectTypeQuery21 = 20,
        ObjectTypeQuery22 = 21,
        ObjectTypeQuery23 = 22,
        ObjectTypeQuery24 = 23,
        ObjectTypeQuery25 = 24,
        ObjectTypeQuery26 = 25,
        ObjectTypeQuery27 = 26,
        ObjectTypeQuery28 = 27,
        ObjectTypeQuery29 = 28,
        ObjectTypeQuery30 = 29,
        ObjectTypeQuery31 = 30,
        ObjectTypeQuery32 = 31,
        ObjectTypeQuery_MAX = 32,
        EObjectTypeQuery_MAX = 33
    };

    enum class EDrawDebugTrace : uint8_t //Enum Engine.EDrawDebugTrace
    {
        None = 0,
        ForOneFrame = 1,
        ForDuration = 2,
        Persistent = 3,
        EDrawDebugTrace_MAX = 4
    };

    enum class ETraceTypeQuery : uint8_t //Enum Engine.ETraceTypeQuery
    {
        TraceTypeQuery1 = 0,
        TraceTypeQuery2 = 1,
        TraceTypeQuery3 = 2,
        TraceTypeQuery4 = 3,
        TraceTypeQuery5 = 4,
        TraceTypeQuery6 = 5,
        TraceTypeQuery7 = 6,
        TraceTypeQuery8 = 7,
        TraceTypeQuery9 = 8,
        TraceTypeQuery10 = 9,
        TraceTypeQuery11 = 10,
        TraceTypeQuery12 = 11,
        TraceTypeQuery13 = 12,
        TraceTypeQuery14 = 13,
        TraceTypeQuery15 = 14,
        TraceTypeQuery16 = 15,
        TraceTypeQuery17 = 16,
        TraceTypeQuery18 = 17,
        TraceTypeQuery19 = 18,
        TraceTypeQuery20 = 19,
        TraceTypeQuery21 = 20,
        TraceTypeQuery22 = 21,
        TraceTypeQuery23 = 22,
        TraceTypeQuery24 = 23,
        TraceTypeQuery25 = 24,
        TraceTypeQuery26 = 25,
        TraceTypeQuery27 = 26,
        TraceTypeQuery28 = 27,
        TraceTypeQuery29 = 28,
        TraceTypeQuery30 = 29,
        TraceTypeQuery31 = 30,
        TraceTypeQuery32 = 31,
        TraceTypeQuery_MAX = 32,
        ETraceTypeQuery_MAX = 33
    };

    enum class EMoveComponentAction : uint8_t //Enum Engine.EMoveComponentAction
    {
        Move = 0,
        Stop = 1,
        Return = 2,
        EMoveComponentAction_MAX = 3
    };

    enum class EQuitPreference : uint8_t //Enum Engine.EQuitPreference
    {
        Quit = 0,
        Background = 1,
        EQuitPreference_MAX = 2
    };

    enum class ERelativeTransformSpace : uint8_t //Enum Engine.ERelativeTransformSpace
    {
        RTS_World = 0,
        RTS_Actor = 1,
        RTS_Component = 2,
        RTS_ParentBoneSpace = 3,
        RTS_MAX = 4
    };

    enum class EAttachLocation : uint8_t //Enum Engine.EAttachLocation
    {
        KeepRelativeOffset = 0,
        KeepWorldPosition = 1,
        SnapToTarget = 2,
        SnapToTargetIncludingScale = 3,
        EAttachLocation_MAX = 4
    };

    enum class EAttachmentRule : uint8_t //Enum Engine.EAttachmentRule
    {
        KeepRelative = 0,
        KeepWorld = 1,
        SnapToTarget = 2,
        EAttachmentRule_MAX = 3
    };

    enum class EDetachmentRule : uint8_t //Enum Engine.EDetachmentRule
    {
        KeepRelative = 0,
        KeepWorld = 1,
        EDetachmentRule_MAX = 2
    };

    enum class EComponentMobility : uint8_t //Enum Engine.EComponentMobility
    {
        Static = 0,
        Stationary = 1,
        Movable = 2,
        EComponentMobility_MAX = 3
    };

    enum class EDetailMode : uint8_t //Enum Engine.EDetailMode
    {
        DM_Low = 0,
        DM_Medium = 1,
        DM_High = 2,
        DM_MAX = 3
    };

    enum class EMagicLeapAutoPinType : uint8_t //Enum MagicLeapARPin.EMagicLeapAutoPinType
    {
        OnlyOnDataRestoration = 0,
        Always = 1,
        Never = 2,
        EMagicLeapAutoPinType_MAX = 3
    };

    enum class EMagicLeapPassableWorldError : uint8_t //Enum MagicLeapARPin.EMagicLeapPassableWorldError
    {
        None = 0,
        LowMapQuality = 1,
        UnableToLocalize = 2,
        Unavailable = 3,
        PrivilegeDenied = 4,
        InvalidParam = 5,
        UnspecifiedFailure = 6,
        PrivilegeRequestPending = 7,
        StartupPending = 8,
        NotImplemented = 9,
        PinNotFound = 10,
        EMagicLeapPassableWorldError_MAX = 11
    };

    enum class PurchaseType : uint8_t //Enum MagicLeap.PurchaseType
    {
        Consumable = 0,
        Nonconsumable = 1,
        Undefined = 2,
        PurchaseType_MAX = 3
    };

    enum class EFocusLostReason : uint8_t //Enum MagicLeap.EFocusLostReason
    {
        EFocusLostReason_Invalid = 0,
        EFocusLostReason_System = 1,
        EFocusLostReason_MAX = 2
    };

    enum class EMagicLeapMeshLOD : uint8_t //Enum MagicLeap.EMagicLeapMeshLOD
    {
        Minimum = 0,
        Medium = 1,
        Maximum = 2,
        EMagicLeapMeshLOD_MAX = 3
    };

    enum class EMagicLeapMeshState : uint8_t //Enum MagicLeap.EMagicLeapMeshState
    {
        New = 0,
        Updated = 1,
        Deleted = 2,
        Unchanged = 3,
        EMagicLeapMeshState_MAX = 4
    };

    enum class EMagicLeapMeshVertexColorMode : uint8_t //Enum MagicLeap.EMagicLeapMeshVertexColorMode
    {
        None = 0,
        Confidence = 1,
        Block = 2,
        LOD = 3,
        EMagicLeapMeshVertexColorMode_MAX = 4
    };

    enum class EMagicLeapMeshType : uint8_t //Enum MagicLeap.EMagicLeapMeshType
    {
        Triangles = 0,
        PointCloud = 1,
        EMagicLeapMeshType_MAX = 2
    };

    enum class EMagicLeapRaycastResultState : uint8_t //Enum MagicLeap.EMagicLeapRaycastResultState
    {
        RequestFailed = 0,
        NoCollision = 1,
        HitUnobserved = 2,
        HitObserved = 3,
        EMagicLeapRaycastResultState_MAX = 4
    };

    enum class CloudStatus : uint8_t //Enum MagicLeap.CloudStatus
    {
        CloudStatus_NotDone = 0,
        CloudStatus_Done = 1,
        CloudStatus_MAX = 2
    };

    enum class EMagicLeapHeadTrackingMapEvent : uint8_t //Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
    {
        Lost = 0,
        Recovered = 1,
        RecoveryFailed = 2,
        NewSession = 3,
        EMagicLeapHeadTrackingMapEvent_MAX = 4
    };

    enum class EMagicLeapHeadTrackingMode : uint8_t //Enum MagicLeap.EMagicLeapHeadTrackingMode
    {
        PositionAndOrientation = 0,
        Unavailable = 1,
        Unknown = 2,
        EMagicLeapHeadTrackingMode_MAX = 3
    };

    enum class EMagicLeapHeadTrackingError : uint8_t //Enum MagicLeap.EMagicLeapHeadTrackingError
    {
        None = 0,
        NotEnoughFeatures = 1,
        LowLight = 2,
        Unknown = 3,
        EMagicLeapHeadTrackingError_MAX = 4
    };

    enum class ELuminARLineTraceChannel : uint8_t //Enum MagicLeapAR.ELuminARLineTraceChannel
    {
        None = 0,
        FeaturePoint = 1,
        InfinitePlane = 2,
        PlaneUsingExtent = 4,
        PlaneUsingBoundaryPolygon = 8,
        FeaturePointWithSurfaceNormal = 16,
        ELuminARLineTraceChannel_MAX = 17
    };

    enum class ELuminARTrackingState : uint8_t //Enum MagicLeapAR.ELuminARTrackingState
    {
        Tracking = 0,
        NotTracking = 1,
        StoppedTracking = 2,
        ELuminARTrackingState_MAX = 3
    };

    enum class EMagicLeapTouchpadGestureDirection : uint8_t //Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
    {
        None = 0,
        Up = 1,
        Down = 2,
        Left = 3,
        Right = 4,
        In = 5,
        Out = 6,
        Clockwise = 7,
        CounterClockwise = 8,
        EMagicLeapTouchpadGestureDirection_MAX = 9
    };

    enum class EMagicLeapTouchpadGestureType : uint8_t //Enum MagicLeapController.EMagicLeapTouchpadGestureType
    {
        None = 0,
        Tap = 1,
        ForceTapDown = 2,
        ForceTapUp = 3,
        ForceDwell = 4,
        SecondForceDown = 5,
        LongHold = 6,
        RadialScroll = 7,
        Swipe = 8,
        Scroll = 9,
        Pinch = 10,
        EMagicLeapTouchpadGestureType_MAX = 11
    };

    enum class EControllerHand : uint8_t //Enum InputCore.EControllerHand
    {
        Left = 0,
        Right = 1,
        AnyHand = 2,
        Pad = 3,
        ExternalCamera = 4,
        Gun = 5,
        Special_2 = 6,
        Special_3 = 7,
        Special_4 = 8,
        Special_5 = 9,
        Special_6 = 10,
        Special_7 = 11,
        Special_8 = 12,
        Special_9 = 13,
        Special_10 = 14,
        Special_11 = 15,
        Special_12 = 16,
        ControllerHand_Count = 17,
        EControllerHand_MAX = 18
    };

    enum class EMagicLeapControllerTrackingMode : uint8_t //Enum MagicLeapController.EMagicLeapControllerTrackingMode
    {
        InputService = 0,
        CoordinateFrameUID = 1,
        EMagicLeapControllerTrackingMode_MAX = 2
    };

    enum class EMagicLeapControllerHapticIntensity : uint8_t //Enum MagicLeapController.EMagicLeapControllerHapticIntensity
    {
        Low = 0,
        Medium = 1,
        High = 2,
        EMagicLeapControllerHapticIntensity_MAX = 3
    };

    enum class EMagicLeapControllerHapticPattern : uint8_t //Enum MagicLeapController.EMagicLeapControllerHapticPattern
    {
        None = 0,
        Click = 1,
        Bump = 2,
        DoubleClick = 3,
        Buzz = 4,
        Tick = 5,
        ForceDown = 6,
        ForceUp = 7,
        ForceDwell = 8,
        SecondForceDown = 9,
        EMagicLeapControllerHapticPattern_MAX = 10
    };

    enum class EMagicLeapControllerLEDSpeed : uint8_t //Enum MagicLeapController.EMagicLeapControllerLEDSpeed
    {
        Slow = 0,
        Medium = 1,
        Fast = 2,
        EMagicLeapControllerLEDSpeed_MAX = 3
    };

    enum class EMagicLeapControllerLEDColor : uint8_t //Enum MagicLeapController.EMagicLeapControllerLEDColor
    {
        BrightMissionRed = 0,
        PastelMissionRed = 1,
        BrightFloridaOrange = 2,
        PastelFloridaOrange = 3,
        BrightLunaYellow = 4,
        PastelLunaYellow = 5,
        BrightNebulaPink = 6,
        PastelNebulaPink = 7,
        BrightCosmicPurple = 8,
        PastelCosmicPurple = 9,
        BrightMysticBlue = 10,
        PastelMysticBlue = 11,
        BrightCelestialBlue = 12,
        PastelCelestialBlue = 13,
        BrightShaggleGreen = 14,
        PastelShaggleGreen = 15,
        EMagicLeapControllerLEDColor_MAX = 16
    };

    enum class EMagicLeapControllerLEDEffect : uint8_t //Enum MagicLeapController.EMagicLeapControllerLEDEffect
    {
        RotateCW = 0,
        RotateCCW = 1,
        Pulse = 2,
        PaintCW = 3,
        PaintCCW = 4,
        Blink = 5,
        EMagicLeapControllerLEDEffect_MAX = 6
    };

    enum class EMagicLeapControllerLEDPattern : uint8_t //Enum MagicLeapController.EMagicLeapControllerLEDPattern
    {
        None = 0,
        Clock01 = 1,
        Clock02 = 2,
        Clock03 = 3,
        Clock04 = 4,
        Clock05 = 5,
        Clock06 = 6,
        Clock07 = 7,
        Clock08 = 8,
        Clock09 = 9,
        Clock10 = 10,
        Clock11 = 11,
        Clock12 = 12,
        Clock01_07 = 13,
        Clock02_08 = 14,
        Clock03_09 = 15,
        Clock04_11 = 16,
        Clock05_12 = 17,
        Clock06_13 = 18,
        EMagicLeapControllerLEDPattern_MAX = 19
    };

    enum class EMagicLeapControllerType : uint8_t //Enum MagicLeapController.EMagicLeapControllerType
    {
        None = 0,
        Device = 1,
        MobileApp = 2,
        EMagicLeapControllerType_MAX = 3
    };

    enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t //Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
    {
        None = 0,
        Bad = 1,
        Good = 2,
        EMagicLeapEyeTrackingCalibrationStatus_MAX = 3
    };

    enum class EMagicLeapEyeTrackingStatus : uint8_t //Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
    {
        NotConnected = 0,
        Disabled = 1,
        UserNotPresent = 2,
        UserPresent = 3,
        UserPresentAndWatchingWindow = 4,
        EMagicLeapEyeTrackingStatus_MAX = 5
    };

    enum class EMagicLeapGestureTransformSpace : uint8_t //Enum MagicLeapHandTracking.EMagicLeapGestureTransformSpace
    {
        World = 0,
        Hand = 1,
        Tracking = 2,
        EMagicLeapGestureTransformSpace_MAX = 3
    };

    enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t //Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
    {
        NoFilter = 0,
        SlightRobustnessToFlicker = 1,
        MoreRobustnessToFlicker = 2,
        EMagicLeapHandTrackingGestureFilterLevel_MAX = 3
    };

    enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t //Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
    {
        NoFilter = 0,
        SimpleSmoothing = 1,
        PredictiveSmoothing = 2,
        EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3
    };

    enum class EMagicLeapHandTrackingGesture : uint8_t //Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
    {
        Finger = 0,
        Fist = 1,
        Pinch = 2,
        Thumb = 3,
        L = 4,
        OpenHand = 5,
        OpenHandBack = 5,
        Ok = 6,
        C = 7,
        NoPose = 8,
        NoHand = 9,
        EMagicLeapHandTrackingGesture_MAX = 10
    };

    enum class EMagicLeapHandTrackingKeypoint : uint8_t //Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
    {
        Thumb_Tip = 0,
        Thumb_IP = 1,
        Thumb_MCP = 2,
        Thumb_CMC = 3,
        Index_Tip = 4,
        Index_DIP = 5,
        Index_PIP = 6,
        Index_MCP = 7,
        Middle_Tip = 8,
        Middle_DIP = 9,
        Middle_PIP = 10,
        Middle_MCP = 11,
        Ring_Tip = 12,
        Ring_DIP = 13,
        Ring_PIP = 14,
        Ring_MCP = 15,
        Pinky_Tip = 16,
        Pinky_DIP = 17,
        Pinky_PIP = 18,
        Pinky_MCP = 19,
        Wrist_Center = 20,
        Wrist_Ulnar = 21,
        Wrist_Radial = 22,
        Hand_Center = 23,
        EMagicLeapHandTrackingKeypoint_MAX = 24
    };

    enum class EMagicLeapIdentityKey : uint8_t //Enum MagicLeapIdentity.EMagicLeapIdentityKey
    {
        GivenName = 0,
        FamilyName = 1,
        Email = 2,
        Bio = 3,
        PhoneNumber = 4,
        Avatar2D = 5,
        Avatar3D = 6,
        Unknown = 7,
        EMagicLeapIdentityKey_MAX = 8
    };

    enum class EMagicLeapIdentityError : uint8_t //Enum MagicLeapIdentity.EMagicLeapIdentityError
    {
        Ok = 0,
        InvalidParam = 1,
        AllocFailed = 2,
        PrivilegeDenied = 3,
        FailedToConnectToLocalService = 4,
        FailedToConnectToCloudService = 5,
        CloudAuthentication = 6,
        InvalidInformationFromCloud = 7,
        NotLoggedIn = 8,
        ExpiredCredentials = 9,
        FailedToGetUserProfile = 10,
        Unauthorized = 11,
        CertificateError = 12,
        RejectedByCloud = 13,
        AlreadyLoggedIn = 14,
        ModifyIsNotSupported = 15,
        NetworkError = 16,
        UnspecifiedFailure = 17,
        EMagicLeapIdentityError_MAX = 18
    };

    enum class EMagicLeapPlaneQueryFlags : uint8_t //Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
    {
        Vertical = 0,
        Horizontal = 1,
        Arbitrary = 2,
        OrientToGravity = 3,
        PreferInner = 4,
        Ceiling = 5,
        Floor = 6,
        Wall = 7,
        Polygons = 8,
        EMagicLeapPlaneQueryFlags_MAX = 9
    };

    enum class EMagicLeapPlaneQueryType : uint8_t //Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
    {
        Bulk = 0,
        Delta = 1,
        EMagicLeapPlaneQueryType_MAX = 2
    };

    enum class EMagicLeapPrivilege : uint8_t //Enum MagicLeapPrivileges.EMagicLeapPrivilege
    {
        Invalid = 0,
        BatteryInfo = 1,
        CameraCapture = 2,
        ComputerVision = 3,
        WorldReconstruction = 4,
        InAppPurchase = 5,
        AudioCaptureMic = 6,
        DrmCertificates = 7,
        Occlusion = 8,
        LowLatencyLightwear = 9,
        Internet = 10,
        IdentityRead = 11,
        BackgroundDownload = 12,
        BackgroundUpload = 13,
        MediaDrm = 14,
        Media = 15,
        MediaMetadata = 16,
        PowerInfo = 17,
        LocalAreaNetwork = 18,
        VoiceInput = 19,
        Documents = 20,
        ConnectBackgroundMusicService = 21,
        RegisterBackgroundMusicService = 22,
        PcfRead = 23,
        PwFoundObjRead = 23,
        NormalNotificationsUsage = 24,
        MusicService = 25,
        ControllerPose = 26,
        GesturesSubscribe = 27,
        GesturesConfig = 28,
        AddressBookRead = 29,
        AddressBookWrite = 30,
        AddressBookBasicAccess = 31,
        CoarseLocation = 32,
        FineLocation = 33,
        HandMesh = 34,
        WifiStatusRead = 35,
        SocialConnectionsInvitesAccess = 36,
        EMagicLeapPrivilege_MAX = 37
    };

    enum class EMagicLeapLightEstimationCamera : uint8_t //Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
    {
        Left = 0,
        Right = 1,
        FarLeft = 2,
        FarRight = 3,
        EMagicLeapLightEstimationCamera_MAX = 4
    };

    enum class EUdpMessageFormat : uint8_t //Enum UdpMessaging.EUdpMessageFormat
    {
        None = 0,
        Json = 1,
        TaggedProperty = 2,
        CborPlatformEndianness = 3,
        CborStandardEndianness = 4,
        EUdpMessageFormat_MAX = 5
    };

    enum class EActorSequenceObjectReferenceType : uint8_t //Enum ActorSequence.EActorSequenceObjectReferenceType
    {
        ContextActor = 0,
        ExternalActor = 1,
        Component = 2,
        EActorSequenceObjectReferenceType_MAX = 3
    };

    enum class EAppleTextureType : uint8_t //Enum AppleImageUtils.EAppleTextureType
    {
        Unknown = 0,
        Image = 1,
        PixelBuffer = 2,
        Surface = 3,
        MetalTexture = 4,
        EAppleTextureType_MAX = 5
    };

    enum class ETextureRotationDirection : uint8_t //Enum AppleImageUtils.ETextureRotationDirection
    {
        None = 0,
        Left = 1,
        Right = 2,
        Down = 3,
        ETextureRotationDirection_MAX = 4
    };

    enum class ECollectionScriptingShareType : uint8_t //Enum AssetTags.ECollectionScriptingShareType
    {
        Local = 0,
        Private = 1,
        Shared = 2,
        ECollectionScriptingShareType_MAX = 3
    };

    enum class EGooglePADCellularDataConfirmStatus : uint8_t //Enum GooglePAD.EGooglePADCellularDataConfirmStatus
    {
        AssetPack_CONFIRM_UNKNOWN = 0,
        AssetPack_CONFIRM_PENDING = 1,
        AssetPack_CONFIRM_USER_APPROVED = 2,
        AssetPack_CONFIRM_USER_CANCELED = 3,
        AssetPack_CONFIRM_MAX = 4
    };

    enum class EGooglePADStorageMethod : uint8_t //Enum GooglePAD.EGooglePADStorageMethod
    {
        AssetPack_STORAGE_FILES = 0,
        AssetPack_STORAGE_APK = 1,
        AssetPack_STORAGE_UNKNOWN = 2,
        AssetPack_STORAGE_NOT_INSTALLED = 3,
        AssetPack_STORAGE_MAX = 4
    };

    enum class EGooglePADDownloadStatus : uint8_t //Enum GooglePAD.EGooglePADDownloadStatus
    {
        AssetPack_UNKNOWN = 0,
        AssetPack_DOWNLOAD_PENDING = 1,
        AssetPack_DOWNLOADING = 2,
        AssetPack_TRANSFERRING = 3,
        AssetPack_DOWNLOAD_COMPLETED = 4,
        AssetPack_DOWNLOAD_FAILED = 5,
        AssetPack_DOWNLOAD_CANCELED = 6,
        AssetPack_WAITING_FOR_WIFI = 7,
        AssetPack_NOT_INSTALLED = 8,
        AssetPack_INFO_PENDING = 9,
        AssetPack_INFO_FAILED = 10,
        AssetPack_REMOVAL_PENDING = 11,
        AssetPack_REMOVAL_FAILED = 12,
        AssetPack_MAX = 13
    };

    enum class EGooglePADErrorCode : uint8_t //Enum GooglePAD.EGooglePADErrorCode
    {
        AssetPack_NO_ERROR = 0,
        AssetPack_APP_UNAVAILABLE = 1,
        AssetPack_UNAVAILABLE = 2,
        AssetPack_INVALID_REQUEST = 3,
        AssetPack_DOWNLOAD_NOT_FOUND = 4,
        AssetPack_API_NOT_AVAILABLE = 5,
        AssetPack_NETWORK_ERROR = 6,
        AssetPack_ACCESS_DENIED = 7,
        AssetPack_INSUFFICIENT_STORAGE = 8,
        AssetPack_PLAY_STORE_NOT_FOUND = 9,
        AssetPack_NETWORK_UNRESTRICTED = 10,
        AssetPack_INTERNAL_ERROR = 11,
        AssetPack_INITIALIZATION_NEEDED = 12,
        AssetPack_INITIALIZATION_FAILED = 13,
        AssetPack_MAX = 14
    };

    enum class ELocationAccuracy : uint8_t //Enum LocationServicesBPLibrary.ELocationAccuracy
    {
        LA_ThreeKilometers = 0,
        LA_OneKilometer = 1,
        LA_HundredMeters = 2,
        LA_TenMeters = 3,
        LA_Best = 4,
        LA_Navigation = 5,
        LA_MAX = 6
    };

    enum class EWheelSweepType : uint8_t //Enum PhysXVehicles.EWheelSweepType
    {
        SimpleAndComplex = 0,
        Simple = 1,
        Complex = 2,
        EWheelSweepType_MAX = 3
    };

    enum class EVehicleDifferential4W : uint8_t //Enum PhysXVehicles.EVehicleDifferential4W
    {
        LimitedSlip_4W = 0,
        LimitedSlip_FrontDrive = 1,
        LimitedSlip_RearDrive = 2,
        Open_4W = 3,
        Open_FrontDrive = 4,
        Open_RearDrive = 5,
        EVehicleDifferential4W_MAX = 6
    };

    enum class ESynth1PatchDestination : uint8_t //Enum Synthesis.ESynth1PatchDestination
    {
        Osc1Gain = 0,
        Osc1Frequency = 1,
        Osc1Pulsewidth = 2,
        Osc2Gain = 3,
        Osc2Frequency = 4,
        Osc2Pulsewidth = 5,
        FilterFrequency = 6,
        FilterQ = 7,
        Gain = 8,
        Pan = 9,
        LFO1Frequency = 10,
        LFO1Gain = 11,
        LFO2Frequency = 12,
        LFO2Gain = 13,
        Count = 14,
        ESynth1PatchDestination_MAX = 15
    };

    enum class ESynth1PatchSource : uint8_t //Enum Synthesis.ESynth1PatchSource
    {
        LFO1 = 0,
        LFO2 = 1,
        Envelope = 2,
        BiasEnvelope = 3,
        Count = 4,
        ESynth1PatchSource_MAX = 5
    };

    enum class ESynthStereoDelayMode : uint8_t //Enum Synthesis.ESynthStereoDelayMode
    {
        Normal = 0,
        Cross = 1,
        PingPong = 2,
        Count = 3,
        ESynthStereoDelayMode_MAX = 4
    };

    enum class ESynthFilterAlgorithm : uint8_t //Enum Synthesis.ESynthFilterAlgorithm
    {
        OnePole = 0,
        StateVariable = 1,
        Ladder = 2,
        Count = 3,
        ESynthFilterAlgorithm_MAX = 4
    };

    enum class ESynthFilterType : uint8_t //Enum Synthesis.ESynthFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ESynthFilterType_MAX = 5
    };

    enum class ESynthModEnvBiasPatch : uint8_t //Enum Synthesis.ESynthModEnvBiasPatch
    {
        PatchToNone = 0,
        PatchToOscFreq = 1,
        PatchToFilterFreq = 2,
        PatchToFilterQ = 3,
        PatchToLFO1Gain = 4,
        PatchToLFO2Gain = 5,
        PatchToLFO1Freq = 6,
        PatchToLFO2Freq = 7,
        Count = 8,
        ESynthModEnvBiasPatch_MAX = 9
    };

    enum class ESynthModEnvPatch : uint8_t //Enum Synthesis.ESynthModEnvPatch
    {
        PatchToNone = 0,
        PatchToOscFreq = 1,
        PatchToFilterFreq = 2,
        PatchToFilterQ = 3,
        PatchToLFO1Gain = 4,
        PatchToLFO2Gain = 5,
        PatchToLFO1Freq = 6,
        PatchToLFO2Freq = 7,
        Count = 8,
        ESynthModEnvPatch_MAX = 9
    };

    enum class ESynthLFOPatchType : uint8_t //Enum Synthesis.ESynthLFOPatchType
    {
        PatchToNone = 0,
        PatchToGain = 1,
        PatchToOscFreq = 2,
        PatchToFilterFreq = 3,
        PatchToFilterQ = 4,
        PatchToOscPulseWidth = 5,
        PatchToOscPan = 6,
        PatchLFO1ToLFO2Frequency = 7,
        PatchLFO1ToLFO2Gain = 8,
        Count = 9,
        ESynthLFOPatchType_MAX = 10
    };

    enum class ESynthLFOMode : uint8_t //Enum Synthesis.ESynthLFOMode
    {
        Sync = 0,
        OneShot = 1,
        Free = 2,
        Count = 3,
        ESynthLFOMode_MAX = 4
    };

    enum class ESynthLFOType : uint8_t //Enum Synthesis.ESynthLFOType
    {
        Sine = 0,
        UpSaw = 1,
        DownSaw = 2,
        Square = 3,
        Triangle = 4,
        Exponential = 5,
        RandomSampleHold = 6,
        Count = 7,
        ESynthLFOType_MAX = 8
    };

    enum class ESynth1OscType : uint8_t //Enum Synthesis.ESynth1OscType
    {
        Sine = 0,
        Saw = 1,
        Triangle = 2,
        Square = 3,
        Noise = 4,
        Count = 5,
        ESynth1OscType_MAX = 6
    };

    enum class ESourceEffectDynamicsPeakMode : uint8_t //Enum Synthesis.ESourceEffectDynamicsPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        ESourceEffectDynamicsPeakMode_MAX = 4
    };

    enum class ESourceEffectDynamicsProcessorType : uint8_t //Enum Synthesis.ESourceEffectDynamicsProcessorType
    {
        Compressor = 0,
        Limiter = 1,
        Expander = 2,
        Gate = 3,
        Count = 4,
        ESourceEffectDynamicsProcessorType_MAX = 5
    };

    enum class EEnvelopeFollowerPeakMode : uint8_t //Enum Synthesis.EEnvelopeFollowerPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        EEnvelopeFollowerPeakMode_MAX = 4
    };

    enum class ESourceEffectFilterType : uint8_t //Enum Synthesis.ESourceEffectFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ESourceEffectFilterType_MAX = 5
    };

    enum class ESourceEffectFilterCircuit : uint8_t //Enum Synthesis.ESourceEffectFilterCircuit
    {
        OnePole = 0,
        StateVariable = 1,
        Ladder = 2,
        Count = 3,
        ESourceEffectFilterCircuit_MAX = 4
    };

    enum class EStereoChannelMode : uint8_t //Enum Synthesis.EStereoChannelMode
    {
        MidSide = 0,
        LeftRight = 1,
        count = 2,
        EStereoChannelMode_MAX = 3
    };

    enum class EPhaserLFOType : uint8_t //Enum Synthesis.EPhaserLFOType
    {
        Sine = 0,
        UpSaw = 1,
        DownSaw = 2,
        Square = 3,
        Triangle = 4,
        Exponential = 5,
        RandomSampleHold = 6,
        Count = 7,
        EPhaserLFOType_MAX = 8
    };

    enum class ERingModulatorTypeSourceEffect : uint8_t //Enum Synthesis.ERingModulatorTypeSourceEffect
    {
        Sine = 0,
        Saw = 1,
        Triangle = 2,
        Square = 3,
        Count = 4,
        ERingModulatorTypeSourceEffect_MAX = 5
    };

    enum class EStereoDelaySourceEffect : uint8_t //Enum Synthesis.EStereoDelaySourceEffect
    {
        Normal = 0,
        Cross = 1,
        PingPong = 2,
        Count = 3,
        EStereoDelaySourceEffect_MAX = 4
    };

    enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t //Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
    {
        BlockSize256 = 0,
        BlockSize512 = 1,
        BlockSize1024 = 2,
        ESubmixEffectConvolutionReverbBlockSize_MAX = 3
    };

    enum class ESubmixFilterAlgorithm : uint8_t //Enum Synthesis.ESubmixFilterAlgorithm
    {
        OnePole = 0,
        StateVariable = 1,
        Ladder = 2,
        Count = 3,
        ESubmixFilterAlgorithm_MAX = 4
    };

    enum class ESubmixFilterType : uint8_t //Enum Synthesis.ESubmixFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ESubmixFilterType_MAX = 5
    };

    enum class ETapLineMode : uint8_t //Enum Synthesis.ETapLineMode
    {
        SendToChannel = 0,
        Panning = 1,
        Disabled = 2,
        ETapLineMode_MAX = 3
    };

    enum class EGranularSynthSeekType : uint8_t //Enum Synthesis.EGranularSynthSeekType
    {
        FromBeginning = 0,
        FromCurrentPosition = 1,
        Count = 2,
        EGranularSynthSeekType_MAX = 3
    };

    enum class EGranularSynthEnvelopeType : uint8_t //Enum Synthesis.EGranularSynthEnvelopeType
    {
        Rectangular = 0,
        Triangle = 1,
        DownwardTriangle = 2,
        UpwardTriangle = 3,
        ExponentialDecay = 4,
        ExponentialIncrease = 5,
        Gaussian = 6,
        Hanning = 7,
        Lanczos = 8,
        Cosine = 9,
        CosineSquared = 10,
        Welch = 11,
        Blackman = 12,
        BlackmanHarris = 13,
        Count = 14,
        EGranularSynthEnvelopeType_MAX = 15
    };

    enum class CurveInterpolationType : uint8_t //Enum Synthesis.CurveInterpolationType
    {
        AUTOINTERP = 0,
        LINEAR = 1,
        CONSTANT = 2,
        CurveInterpolationType_MAX = 3
    };

    enum class ESamplePlayerSeekType : uint8_t //Enum Synthesis.ESamplePlayerSeekType
    {
        FromBeginning = 0,
        FromCurrentPosition = 1,
        FromEnd = 2,
        Count = 3,
        ESamplePlayerSeekType_MAX = 4
    };

    enum class ESynthKnobSize : uint8_t //Enum Synthesis.ESynthKnobSize
    {
        Medium = 0,
        Large = 1,
        Count = 2,
        ESynthKnobSize_MAX = 3
    };

    enum class ESynthSlateColorStyle : uint8_t //Enum Synthesis.ESynthSlateColorStyle
    {
        Light = 0,
        Dark = 1,
        Count = 2,
        ESynthSlateColorStyle_MAX = 3
    };

    enum class ESynthSlateSizeType : uint8_t //Enum Synthesis.ESynthSlateSizeType
    {
        Small = 0,
        Medium = 1,
        Large = 2,
        Count = 3,
        ESynthSlateSizeType_MAX = 4
    };

    enum class ECoreNetError : uint8_t //Enum VeiledExperts.ECoreNetError
    {
        CNE_None = 0,
        CNE_ConnectError = 1,
        CNE_DisconnectByClient = 2,
        CNE_DisconnectedByServer = 3,
        CNE_ReceiveError = 4,
        CNE_SendError = 5,
        CNE_RSADecryptError = 6,
        CNE_TimeOut = 7,
        CNE_MAX = 8
    };

    enum class ECoreNetResult : uint8_t //Enum VeiledExperts.ECoreNetResult
    {
        CNR_None = 0,
        CNR_Success = 1,
        CNR_Failure = 2,
        CNR_MAX = 3
    };

    enum class EProfileCategory : uint8_t //Enum VeiledExperts.EProfileCategory
    {
        NONE = 0,
        BANNER = 1,
        ETC = 2,
        EProfileCategory_MAX = 3
    };

    enum class EWeaponCategory : uint8_t //Enum VeiledExperts.EWeaponCategory
    {
        NONE = 0,
        HG = 1,
        SMG_SG = 2,
        AR_LMG = 3,
        SR_BOW = 4,
        MELEE = 5,
        ETC = 6,
        EWeaponCategory_MAX = 7
    };

    enum class EPDAimingState : uint8_t //Enum VeiledExperts.EPDAimingState
    {
        Idle = 0,
        HipFire = 1,
        Aim = 2,
        ADS = 3,
        MAX = 4
    };

    enum class EPDMovementState : uint8_t //Enum VeiledExperts.EPDMovementState
    {
        Grounded = 0,
        Falling = 1,
        Climbing = 2,
        Flying = 3,
        Sliding = 4,
        MAX = 5
    };

    enum class EPDLocoState : uint8_t //Enum VeiledExperts.EPDLocoState
    {
        NotMoving = 0,
        Stopping = 1,
        Starting_F = 2,
        Starting_L = 3,
        Starting_R = 4,
        Moving = 5,
        MAX = 6
    };

    enum class EPDLocoType : uint8_t //Enum VeiledExperts.EPDLocoType
    {
        Default = 0,
        Climb = 1,
        Cover = 2,
        Groggy = 3,
        Slide = 4,
        ZipLine = 5,
        Dead = 6,
        MAX = 7
    };

    enum class EPDCharacterActionType : uint8_t //Enum VeiledExperts.EPDCharacterActionType
    {
        None = 0,
        Land = 1,
        Jump = 2,
        Roll = 3,
        Vault = 4,
        Climbup = 5,
        LedgeGrapParkour = 6,
        LedgeGrapClimbing = 7,
        MeleeAttack = 8,
        CQC_Attacker = 9,
        CQC_Victim = 10,
        Lean = 11,
        ShoulderSwap = 12,
        ChangeStance = 13,
        ItemUse = 14,
        GroggyRescueSelf = 15,
        ClimbEnterUpward = 16,
        ClimbEnterDownward = 17,
        ClimbEnterVault = 18,
        ClimbMove = 19,
        ClimbExit = 20,
        GroggyEnter = 21,
        GroggyExit = 22,
        Death_Normal = 23,
        Death_Groggy = 24,
        FireWeapon = 25,
        AimWeapon = 26,
        ChangeWeapon = 27,
        ReloadWeapon = 28,
        InstantThrowWeapon = 29,
        ThrowWeapon = 30,
        BoltAction = 31,
        OutCover = 32,
        AimCharge = 33,
        PickUpItem = 34,
        DynamicShielding = 35,
        GroggyRescue = 36,
        SNDModeBomb = 37,
        Guard = 38,
        MeleeHit = 39,
        KnockBack = 40,
        FallingObjcetKnockBack = 41,
        SlidingEnter = 42,
        SlidingExit = 43,
        ZipLineEnter = 44,
        ZipLine = 45,
        Signature_RevolerSpinning = 46,
        Signature_DrinkBottle = 47,
        Signature_EatHotdog = 48,
        Signature_LickKnife = 49,
        Signature_CoinToss = 50,
        Signature_GlassesScan = 51,
        Signature_ShootFlare = 52,
        Signature_SprayMoney = 53,
        Signature_Warcry = 54,
        Signature_SpinSickle = 55,
        Signature_TurnTable = 56,
        Signature_FeverTurnTable = 57,
        Signature_LookMagnifier = 58,
        Lepton_Hacking = 59,
        Lepton_Maintenance = 60,
        JuggernautWear_Start = 61,
        JuggernautWear_End = 62,
        JuggernautDash_Start = 63,
        JuggernautDash_End = 64,
        ExoSuitWear_Start = 65,
        ExoSuitWear_End = 66,
        ExoSuitDash = 67,
        ExoSuitLauncher = 68,
        ArmorPlateReplaceKit = 69,
        TurnInPlace = 70,
        AFK = 71,
        RoundEnter = 72,
        BurnReaction = 73,
        SummonNPC = 74,
        SummonUPS = 75,
        MAX = 76
    };

    enum class EAgentDisplayType : uint8_t //Enum VeiledExperts.EAgentDisplayType
    {
        EAgentDisplay_DMITRY = 0,
        EAgentDisplay_NICKI = 1,
        EAgentDisplay_JACK = 2,
        EAgentDisplay_LUNA = 3,
        EAgentDisplay_TYRONE = 4,
        EAgentDisplay_YOUNGSIK = 5,
        EAgentDisplay_LILY = 6,
        EAgentDisplay_SIMON = 7,
        EAgentDisplay_SOY = 8,
        EAgentDisplay_ESTER = 9,
        EAgentDisplay_RITA = 10,
        EAgentDisplay_MAX = 11
    };

    enum class ESurfaceSubType : uint8_t //Enum VeiledExperts.ESurfaceSubType
    {
        Sub0 = 0,
        Sub1 = 1,
        Sub2 = 2,
        ESurfaceSubType_MAX = 3
    };

    enum class ESubLevelEvent : uint8_t //Enum VeiledExperts.ESubLevelEvent
    {
        SLE_NONE = 0,
        SLE_ExplodeAreaA = 1,
        SLE_MAX = 2
    };

    enum class ETRIGGERNOTI : uint8_t //Enum VeiledExperts.ETRIGGERNOTI
    {
        ETB_ALL = 0,
        ETB_PLAYER = 1,
        ETB_NPC = 2,
        ETB_MAX = 3
    };

    enum class ENavFlagType : uint32_t //Enum VeiledExperts.ENavFlagType
    {
        None = 0,
        Cover = 1,
        Parkour = 2,
        Climbing = 4,
        Zipline = 8,
        StandMonitoring = 16,
        CrouchMonitoring = 32,
        Camping = 64,
        Sniping = 128,
        MoveAssistant = 256,
        MissionArea = 512,
        ENavFlagType_MAX = 513
    };

    enum class EDamageType : uint8_t //Enum VeiledExperts.EDamageType
    {
        None = 0,
        Melee = 1,
        Weapon = 2,
        SystemGroggy = 3,
        Fall = 4,
        Vehicle = 5,
        RedStorm = 6,
        Explosion = 7,
        Blaze = 8,
        Burn = 9,
        Gas = 10,
        Heal = 11,
        InstallSeed = 12,
        ExplosionSeed = 13,
        DeactiveSeed = 14,
        SuicideGroggyToKill = 15,
        BOFall = 16,
        BOMFall = 17,
        JuggernautDashCounter = 18,
        ArmorBroken = 19,
        CQC = 20,
        Drill = 21,
        Max = 22
    };

    enum class ESceneLightGroup : uint8_t //Enum VeiledExperts.ESceneLightGroup
    {
        ESceneLightG_MainLobby = 0,
        ESceneLightG_AgentCreate = 1,
        ESceneLightG_CustomWeapon = 2,
        ESceneLightG_CustomAgent = 3,
        ESceneLightG_MatchAgentSelect = 4,
        ESceneLightG_Result = 5,
        ESceneLightG_MAX = 6
    };

    enum class EActionReserveOption : uint8_t //Enum VeiledExperts.EActionReserveOption
    {
        None = 0,
        IsAbleTo = 1,
        MustReserve = 2,
        IfBlockedDontReserve = 3,
        EActionReserveOption_MAX = 4
    };

    enum class EPDGroggyRescueActionType : uint8_t //Enum VeiledExperts.EPDGroggyRescueActionType
    {
        GroggyRescueAction_Start = 0,
        GroggyRescueAction_Complete = 1,
        GroggyRescueAction_Cancel = 2,
        GroggyRescueAction_MAX = 3
    };

    enum class EParkourHeightType : uint8_t //Enum VeiledExperts.EParkourHeightType
    {
        Parkour_51 = 0,
        Parkour_101 = 1,
        Parkour_151 = 2,
        Parkour_201 = 3,
        Parkour_251 = 4,
        Parkour_301 = 5,
        MAX = 6
    };

    enum class ESlideEnterType : uint8_t //Enum VeiledExperts.ESlideEnterType
    {
        SlideEnter_None = 0,
        SlideEnter_Default = 1,
        SlideEnter_Falling = 2,
        SlideEnter_Groggy = 3,
        SlideEnter_GroggyFalling = 4,
        SlideEnter_Die = 5,
        SlideEnter_MAX = 6
    };

    enum class ESlideExitType : uint8_t //Enum VeiledExperts.ESlideExitType
    {
        SlideExit_None = 0,
        SlideExit_Default = 1,
        SlideExit_Roll = 2,
        SlideExit_Falling = 3,
        SlideExit_Groggy = 4,
        SlideExit_GroggyFalling = 5,
        SlideExit_Die = 6,
        SlideExit_MAX = 7
    };

    enum class EAkBankName : uint8_t //Enum VeiledExperts.EAkBankName
    {
        sfx = 0,
        weapons = 1,
        ambience = 2,
        bgm = 3,
        foley = 4,
        EAkBankName_MAX = 5
    };

    enum class EGameModeWidget : uint32_t //Enum VeiledExperts.EGameModeWidget
    {
        None = -1,
        PlayerInfo = 0,
        Spectator = 1,
        StateGauge = 2,
        Perk = 3,
        CoinInfo = 4,
        CrossHair = 5,
        TargetScreen = 6,
        DamageIndicator = 7,
        ThreeDIndicator = 8,
        InteractionInfo = 9,
        RoundInfo = 10,
        RoundResult = 11,
        GameTime = 12,
        IngameMap = 13,
        RingCommand = 14,
        MarkerGuide = 15,
        UnknownMarket = 16,
        StatusBoard = 17,
        ReportPopup = 18,
        WorldMessage = 19,
        BattleLog = 20,
        KillMessage = 21,
        KillLog = 22,
        PerkNotify = 23,
        PingLog = 24,
        TutorialQuest = 25,
        CCTVObjDesc = 26,
        RoundWait = 27,
        PersonalMission = 28,
        ObserverReady = 29,
        SpectatorHelp = 30,
        PlayerGroggy = 31,
        PracticeKeyGuide = 32,
        SurrenderVote = 33,
        GameTip = 34,
        MAX = 35
    };

    enum class EUIName : uint8_t //Enum VeiledExperts.EUIName
    {
        None = 0,
        Start = 1,
        Login = 2,
        Outgame = 3,
        DebugLog = 4,
        Loading = 5,
        LoadIntro = 6,
        LoadMatch = 7,
        Ingame = 8,
        IngameDefault = 9,
        IngameBreakInto = 10,
        GameResult = 11,
        OptionContent = 12,
        OKPopup = 13,
        OKCancelPopup = 14,
        OptionPopup = 15,
        OptionUpdatedNotiPopup = 16,
        LobbyUserListPopup = 17,
        InvitePartyPopup = 18,
        TutorialPopup = 19,
        StroyPerkPopup = 20,
        GainPerkPopup = 21,
        GuideWebPagePopup = 22,
        WebPopup = 23,
        TermsOfServicePopup = 24,
        ServerMaintenanceNoti = 25,
        ClanInfoPopup = 26,
        PopupUserInfo = 27,
        AgentProfilePopup = 28,
        IngameEscapePlayerPopupUI = 29,
        OutgameEscapePlayerPopupUI = 30,
        InvalidGameResultPopup = 31,
        ReportOutGamePopup = 32,
        GameSetupInformationPopup = 33,
        NicknamePopup = 34,
        WaitPopup = 35,
        DisconnectPopup = 36,
        MatchCategoryListItem = 37,
        MatchListItem = 38,
        MatchModeListItem = 39,
        SystemMessage = 40,
        GameModeSelectItem = 41,
        LobbyUserListItem = 42,
        CommunityPopup = 43,
        PartySlotListItem = 44,
        FriendListItem = 45,
        FriendAddItem = 46,
        FriendClanItem = 47,
        FindPartyPopup = 48,
        CustomMatchJoinPopup = 49,
        CustomMatchListItem = 50,
        CustomMatchOption = 51,
        AgentListItem = 52,
        AgentSlotListItem = 53,
        CustomCharacterListItem = 54,
        PlayLogPlayInfoItem = 55,
        TrainingListItem = 56,
        KillLogItem = 57,
        EventLogItem = 58,
        TutorialQuestListItem = 59,
        NameTagAlly = 60,
        NameTagEnemy = 61,
        ObjectTag = 62,
        ObjectTagSite = 63,
        MissionLeptonTag = 64,
        PingIndicator = 65,
        TutorialMarker = 66,
        IngameShopMain = 67,
        CategoryListItem = 68,
        IngameShopListItem = 69,
        IngameShopEtcItemElem = 70,
        IngameShopPartListItem = 71,
        IngameShopUpgradeListItem = 72,
        PurchaseMsg = 73,
        RingCommand = 74,
        InvenDragModule = 75,
        LootingList = 76,
        DamageIndicator = 77,
        PlayerEntryItemAlly = 78,
        PlayerEntryItemEnemy = 79,
        MissionScorePlayerEntryItem = 80,
        MSStatusBoardPlayerInfo = 81,
        MSStatusBoardRoundItem = 82,
        PerkEntryItem = 83,
        AttackDamageIndicator = 84,
        GrenadeIndicator = 85,
        CoinInfoListItem = 86,
        PingLogItem = 87,
        PersonalMissionModule = 88,
        PersonalMissionRewardModule = 89,
        ScreenMarkerLoot = 90,
        StatusBoardRoundResultItem = 91,
        TDMStatusBoardPlayerInfoAlly = 92,
        TDMStatusBoardPlayerInfoEnemy = 93,
        KillLogAssistPlayerItem = 94,
        AutoFarmingLogItem = 95,
        AutoFarmingLogUI = 96,
        PlayerInfoItemAlly = 97,
        PlayerGroggyItem = 98,
        Intro_BaseMap = 99,
        Intro_Derailed = 100,
        Intro_Windfarm = 101,
        Intro_Shipyard = 102,
        Intro_Bridge = 103,
        Intro_Altacity = 104,
        Intro_Wheatfield = 105,
        Intro_Vacanthouse = 106,
        Intro_KoreaTown = 107,
        BaseGameMode = 108,
        DefuseBombMode_VX = 109,
        DefuseBombMode_Legacy = 110,
        TeamDeathMatchMode_VX = 111,
        TeamDeathMatchMode_Legacy = 112,
        ShowDownMode_VX = 113,
        ShowDownMode_Legacy = 114,
        UnKnownMarketPartListItem = 115,
        UnKnownMarketPurchaseMsgItem = 116,
        UnKnownMarketInvenListItem = 117,
        ResultRoundItem = 118,
        ResultExpItem = 119,
        ResultExpEventItem = 120,
        ResultRoundMenuItem = 121,
        MailPopup = 122,
        MailNotificationSlot = 123,
        MailItemListSlot = 124,
        TeamCharListItem = 125,
        LeptonPresetTab = 126,
        AgentDefaultLeptonPopup = 127,
        AgentDefaultLeptonListItem = 128,
        ObserverJoin = 129,
        UI_Max = 130,
        EUIName_MAX = 131
    };

    enum class EGameModeInternal : uint8_t //Enum VeiledExperts.EGameModeInternal
    {
        DefuseBomb = 0,
        TeamDeathMatch = 1,
        Showdown = 2,
        EGameModeInternal_MAX = 3
    };

    enum class ECameraPlayActorType : uint8_t //Enum VeiledExperts.ECameraPlayActorType
    {
        StaticCamera = 0,
        AgentCreate = 1,
        AgentSelect = 2,
        AgentLobby = 3,
        AgentMatching = 4,
        CustomAgent = 5,
        CustomWeapon = 6,
        MatchAgentSelect = 7,
        GameResult = 8,
        CQC = 9,
        RoundInitialize = 10,
        BreakInto = 11,
        ObserverAttach = 12,
        SEEDView = 13,
        StartAction = 14,
        ECameraPlayActorType_MAX = 15
    };

    enum class EPDCamGroupPlayParam : uint8_t //Enum VeiledExperts.EPDCamGroupPlayParam
    {
        None = 0,
        StartFadeIn = 1,
        SpeedCurve = 2,
        EPDCamGroupPlayParam_MAX = 3
    };

    enum class EPDCamPlayParam : uint8_t //Enum VeiledExperts.EPDCamPlayParam
    {
        None = 0,
        ShowUI = 1,
        EPDCamPlayParam_MAX = 2
    };

    enum class EPDHitReactionAnimType : uint8_t //Enum VeiledExperts.EPDHitReactionAnimType
    {
        HitReaction_None = 0,
        HitReaction_Normal = 1,
        HitReaction_Run = 2,
        HitReaction_Lower = 3,
        HitReaction_Head = 4,
        HitReaction_Melee = 5,
        HitReaction_BombGraze = 6,
        HitReaction_BulletGraze = 7,
        MAX = 8
    };

    enum class EPDRagdollState : uint8_t //Enum VeiledExperts.EPDRagdollState
    {
        Wake = 0,
        Freeze = 1,
        EPDRagdollState_MAX = 2
    };

    enum class EPDNPCActionState : uint8_t //Enum VeiledExperts.EPDNPCActionState
    {
        None = 0,
        LookAround = 1,
        Surprised = 2,
        MAX = 3
    };

    enum class EPDNPCLocoState : uint8_t //Enum VeiledExperts.EPDNPCLocoState
    {
        NotMoving = 0,
        Moving = 1,
        MAX = 2
    };

    enum class EOptionSensitivenessType : uint8_t //Enum VeiledExperts.EOptionSensitivenessType
    {
        ZOOM0 = 0,
        ZOOM1 = 1,
        ZOOM2 = 2,
        ZOOM3 = 3,
        ZOOM4 = 4,
        _TOTAL_COUNT = 5,
        EOptionSensitivenessType_MAX = 6
    };

    enum class EPDParkourType : uint8_t //Enum VeiledExperts.EPDParkourType
    {
        NONE = 0,
        STAIR = 1,
        HURDLE = 2,
        WALL = 3,
        NEXTFLOOR = 4,
        MAX = 5
    };

    enum class EPDActionRuleCondtion : uint8_t //Enum VeiledExperts.EPDActionRuleCondtion
    {
        NOT_CHANGE = 0,
        WAIT_PREV_ACTION = 1,
        IMMEDIATE_NEXT_ACTION = 2,
        EPDActionRuleCondtion_MAX = 3
    };

    enum class EPDIKStanceFrame : uint8_t //Enum VeiledExperts.EPDIKStanceFrame
    {
        Idle = 0,
        Default = 1,
        SingleShot = 2,
        VerticalGrip = 3,
        AngleGrip = 4,
        HalfGrip = 5,
        MagGrip = 6,
        Max = 7
    };

    enum class EPDSpecificWeaponAnimset : uint8_t //Enum VeiledExperts.EPDSpecificWeaponAnimset
    {
        HK416 = 0,
        SCAR = 1,
        AK47 = 2,
        MP5 = 3,
        MPX = 4,
        BenelliM4 = 5,
        M24 = 6,
        M14 = 7,
        M249 = 8,
        M134 = 9,
        KrissVector = 10,
        AUGA3 = 11,
        ASVAL = 12,
        AWP = 13,
        Glock = 14,
        DesertEagle = 15,
        DoubleBarrel = 16,
        PBPistol = 17,
        Bow = 18,
        M870 = 19,
        G36 = 20,
        MAC10 = 21,
        P30L = 22,
        SVD = 23,
        DoubleDefense = 24,
        Barrett = 25,
        Special = 26,
        MAX = 27
    };

    enum class EPDAnimset : uint8_t //Enum VeiledExperts.EPDAnimset
    {
        Bare = 0,
        HK416 = 1,
        MP5 = 2,
        BenelliM4 = 3,
        M24 = 4,
        M249 = 5,
        Glock = 6,
        Throw = 7,
        M134 = 8,
        Knife = 9,
        KnuckleBlade = 10,
        Bow = 11,
        Karambit = 12,
        CAxe = 13,
        Tonfa = 14,
        ThreeBaton = 15,
        CHammer = 16,
        FistKnife = 17,
        Wrench = 18,
        ExoSuit = 19,
        SkullMic = 20,
        MAX = 21
    };

    enum class EPDLeanState : uint8_t //Enum VeiledExperts.EPDLeanState
    {
        Lean_None = 0,
        Lean_Left = 1,
        Lean_Right = 2,
        MAX = 3
    };

    enum class EPDSocketOffsetState : uint8_t //Enum VeiledExperts.EPDSocketOffsetState
    {
        SocketOffset_Left = 0,
        SocketOffset_Right = 1,
        MAX = 2
    };

    enum class EPDSlideStanceState : uint8_t //Enum VeiledExperts.EPDSlideStanceState
    {
        SlideStance_Default = 0,
        SlideStance_Groggy = 1,
        MAX = 2
    };

    enum class EPDThrowStanceState : uint8_t //Enum VeiledExperts.EPDThrowStanceState
    {
        ThrowStance_Over = 0,
        ThrowStance_Under = 1,
        MAX = 2
    };

    enum class EPDClimbStanceState : uint8_t //Enum VeiledExperts.EPDClimbStanceState
    {
        Climb_4P = 0,
        Climb_2P = 1,
        MAX = 2
    };

    enum class EPDRotationState : uint8_t //Enum VeiledExperts.EPDRotationState
    {
        None = 0,
        FreeLook = 1,
        VelocityDirection = 2,
        LookingDirection = 3,
        Max = 4
    };

    enum class EPDStanceState : uint8_t //Enum VeiledExperts.EPDStanceState
    {
        Standing = 0,
        Crouching = 1,
        MAX = 2
    };

    enum class EPDGaitsState : uint8_t //Enum VeiledExperts.EPDGaitsState
    {
        Staying = 0,
        Walking = 1,
        Jogging = 2,
        Running = 3,
        Sprinting = 4,
        MAX = 5
    };

    enum class EPDInputMoveType : uint8_t //Enum VeiledExperts.EPDInputMoveType
    {
        Walk = 0,
        Run = 1,
        Sprint = 2,
        MAX = 3
    };

    enum class EPDActionNotifyType : uint8_t //Enum VeiledExperts.EPDActionNotifyType
    {
        ActionNotify_Begin_Anim = 0,
        ActionNotify_End_Anim = 1,
        ActionNotify_Event_Anim = 2,
        ActionNotify_Event_CPP = 3,
        ActionNotify_MAX = 4
    };

    enum class EPDActionTriggerType : uint8_t //Enum VeiledExperts.EPDActionTriggerType
    {
        Activate = 0,
        End = 1,
        Cancel = 2,
        Toggle = 3,
        EPDActionTriggerType_MAX = 4
    };

    enum class EPDActionSlotType : uint8_t //Enum VeiledExperts.EPDActionSlotType
    {
        Fullbody = 0,
        Upper = 1,
        Lower = 2,
        Additive = 3,
        EPDActionSlotType_MAX = 4
    };

    enum class EPDLobbyAnimStatus : uint8_t //Enum VeiledExperts.EPDLobbyAnimStatus
    {
        None = 0,
        Lobby_Scene_Select = 1,
        Lobby_Scene_Select_Idle = 2,
        Lobby_Scene_Matching_Start = 3,
        Lobby_Scene_Matching_Idle = 4,
        Lobby_Scene_Matching_Cancel = 5,
        Lobby_Scene_Customizing = 6,
        Lobby_Scene_Shop = 7,
        Result_Scene_Win = 8,
        Result_Scene_Win_Idle = 9,
        Result_Scene_Lose = 10,
        Result_Scene_Lose_IDle = 11,
        MAX = 12
    };

    enum class EPDDirCalcMethodType : uint8_t //Enum VeiledExperts.EPDDirCalcMethodType
    {
        _2WAY = 0,
        _4WAY = 1,
        _8WAY = 2,
        MAX = 3
    };

    enum class EPD4DirType : uint8_t //Enum VeiledExperts.EPD4DirType
    {
        Forward = 0,
        Left = 1,
        Right = 2,
        Back = 3,
        MAX = 4
    };

    enum class EPDDirectionType : uint8_t //Enum VeiledExperts.EPDDirectionType
    {
        FWD = 0,
        BCK = 1,
        RT = 2,
        LFT = 3,
        FWD_RT = 4,
        FWD_LFT = 5,
        BCK_RT = 6,
        BCK_LFT = 7,
        MAX = 8
    };

    enum class EPDHitReactionType : uint8_t //Enum VeiledExperts.EPDHitReactionType
    {
        FULL_BODY = 0,
        UPPER_BODY = 1,
        LOWER_BODY = 2,
        MELEE_HIT = 3,
        MAX = 4
    };

    enum class EPDCharacterParts : uint8_t //Enum VeiledExperts.EPDCharacterParts
    {
        Head = 0,
        Body = 1,
        Hair = 2,
        Accessory = 3,
        EPDCharacterParts_MAX = 4
    };

    enum class EDebugFlagsMOA : uint8_t //Enum VeiledExperts.EDebugFlagsMOA
    {
        None = 0,
        DrawVirtualShotLines = 1,
        DrawCircle = 2,
        DrawCone = 4,
        EDebugFlagsMOA_MAX = 5
    };

    enum class EPDClimbMoveType : uint8_t //Enum VeiledExperts.EPDClimbMoveType
    {
        ClimbMove_None = 0,
        ClimbMove_Default = 1,
        ClimbMove_InTurn = 2,
        ClimbMove_OutTurn = 3,
        ClimbMove_Jump = 4,
        ClimbMove_Wide = 5,
        ClimbMove_LongJump = 6,
        ClimbMove_MAX = 7
    };

    enum class EPDClimbPointUptype : uint8_t //Enum VeiledExperts.EPDClimbPointUptype
    {
        ClimbPoint_None = 0,
        ClimbPoint_Vault = 1,
        ClimbPoint_ClimbUp = 2,
        ClimbPoint_MAX = 3
    };

    enum class EControlTapType : uint32_t //Enum VeiledExperts.EControlTapType
    {
        None = -1,
        MoveNAction = 0,
        ETCAction = 1,
        EControlTapType_MAX = 2
    };

    enum class ECrossHairColorPreset : uint8_t //Enum VeiledExperts.ECrossHairColorPreset
    {
        WHITE = 0,
        RED = 1,
        BLUE = 2,
        GREEN = 3,
        YELLOW = 4,
        PINK = 5,
        ECrossHairColorPreset_MAX = 6
    };

    enum class ECrossHairDrawStyle : uint8_t //Enum VeiledExperts.ECrossHairDrawStyle
    {
        Scaled = 0,
        ScaledWithOutline = 1,
        NonScaled = 2,
        NonScaledWithOutline = 3,
        ECrossHairDrawStyle_MAX = 4
    };

    enum class ECustomizeLeptonCostViewType : uint8_t //Enum VeiledExperts.ECustomizeLeptonCostViewType
    {
        Empty = 0,
        Equiped = 1,
        Unique = 2,
        ECustomizeLeptonCostViewType_MAX = 3
    };

    enum class EDYNAMICOBJECTSTATE : uint8_t //Enum VeiledExperts.EDYNAMICOBJECTSTATE
    {
        NONE = 0,
        ALIVEOBJ = 1,
        MDESTROY = 2,
        FDESTROY = 3,
        CLOSE = 4,
        OPEN = 5,
        OPEN2 = 6,
        MOVE = 7,
        MOVE2 = 8,
        EDYNAMICOBJECTSTATE_MAX = 9
    };

    enum class EGraphicsScalabilityType : uint8_t //Enum VeiledExperts.EGraphicsScalabilityType
    {
        None = 0,
        Resolution = 1,
        ViewDistance = 2,
        AntiAliasing = 3,
        PostProcessing = 4,
        Shadows = 5,
        Texture = 6,
        Effects = 7,
        Foliage = 8,
        EGraphicsScalabilityType_MAX = 9
    };

    enum class EDisplayMode : uint8_t //Enum VeiledExperts.EDisplayMode
    {
        Windowed = 0,
        Fullscreen = 1,
        EDisplayMode_MAX = 2
    };

    enum class EDisplayTapType : uint32_t //Enum VeiledExperts.EDisplayTapType
    {
        None = -1,
        Video = 0,
        System = 1,
        EDisplayTapType_MAX = 2
    };

    enum class EDroneArmLagState : uint8_t //Enum VeiledExperts.EDroneArmLagState
    {
        None = 0,
        Floating = 1,
        Crouch = 2,
        Parkour_Enable = 3,
        Parkour_Disable = 4,
        EDroneArmLagState_MAX = 5
    };

    enum class EENVTYPE : uint8_t //Enum VeiledExperts.EENVTYPE
    {
        DEFAULT = 0,
        DESTROY = 1,
        SAND = 2,
        WET = 3,
        EENVTYPE_MAX = 4
    };

    enum class EPDEndAnimationType : uint8_t //Enum VeiledExperts.EPDEndAnimationType
    {
        StartMove = 0,
        StopMove = 1,
        Pivot = 2,
        Max = 3
    };

    enum class EPDEnvEffectClientType : uint8_t //Enum VeiledExperts.EPDEnvEffectClientType
    {
        Normal = 0,
        SandStorm = 1,
        Rain = 2,
        SeaFog = 3,
        DustStorm = 4,
        GasLeakeage = 5,
        EPDEnvEffectClientType_MAX = 6
    };

    enum class ESafeZoneDrawStyle : uint8_t //Enum VeiledExperts.ESafeZoneDrawStyle
    {
        Line = 0,
        Solid = 1,
        ESafeZoneDrawStyle_MAX = 2
    };

    enum class ESafeZoneDrawType : uint8_t //Enum VeiledExperts.ESafeZoneDrawType
    {
        None = 0,
        CurrentArea = 1,
        NextArea = 2,
        Custom = 3,
        ESafeZoneDrawType_MAX = 4
    };

    enum class EMapShape : uint8_t //Enum VeiledExperts.EMapShape
    {
        Rect = 0,
        Oval = 1,
        EMapShape_MAX = 2
    };

    enum class EGamePlayTapType : uint32_t //Enum VeiledExperts.EGamePlayTapType
    {
        None = -1,
        Mouse = 0,
        UI = 1,
        Play = 2,
        EGamePlayTapType_MAX = 3
    };

    enum class GBOStep : uint8_t //Enum VeiledExperts.GBOStep
    {
        ALL = 0,
        Step1 = 1,
        Step2 = 2,
        Step3 = 3,
        Step4 = 4,
        Step5 = 5,
        GBOStep_MAX = 6
    };

    enum class EInventorySlot : uint8_t //Enum VeiledExperts.EInventorySlot
    {
        Slot_None = 0,
        Weapon_MainSlot = 1,
        Weapon_SubSlot = 2,
        Weapon_PistolSlot = 3,
        Weapon_MeleeSlot = 4,
        Weapon_ThrowSlot = 5,
        Slot_Max = 6,
        EInventorySlot_MAX = 7
    };

    enum class EPDHitFeedBackType : uint8_t //Enum VeiledExperts.EPDHitFeedBackType
    {
        Hit = 0,
        Hit_NoDmg = 1,
        Groggy = 2,
        Death = 3,
        HeadShot = 4,
        Armor = 5,
        ArmorBroken = 6,
        EPDHitFeedBackType_MAX = 7
    };

    enum class EPDSpectatingModeType : uint8_t //Enum VeiledExperts.EPDSpectatingModeType
    {
        None = 0,
        FreeLookMode = 1,
        PlayerLookMode = 2,
        Max = 3
    };

    enum class ESmoothTurn : uint8_t //Enum VeiledExperts.ESmoothTurn
    {
        SmoothTurn_None = 0,
        SmoothTurn_Left = 1,
        SmoothTurn_Right = 2,
        SmoothTurn_MAX = 3
    };

    enum class ENavDataType : uint8_t //Enum VeiledExperts.ENavDataType
    {
        Nav1 = 0,
        Nav2 = 1,
        ENavDataType_MAX = 2
    };

    enum class EPDNeutralObjectType : uint8_t //Enum VeiledExperts.EPDNeutralObjectType
    {
        Gull = 0,
        MBird = 1,
        Crow = 2,
        Dove = 3,
        EPDNeutralObjectType_MAX = 4
    };

    enum class EOverlapNumber : uint8_t //Enum VeiledExperts.EOverlapNumber
    {
        None = 0,
        Overlap1 = 1,
        Overlap2 = 2,
        Overlap3 = 3,
        Overlap4 = 4,
        Overlap5 = 5,
        Overlap6 = 6,
        Overlap7 = 7,
        Overlap8 = 8,
        Overlap9 = 9,
        Overlap10 = 10,
        EOverlapNumber_MAX = 11
    };

    enum class EOptionContentType : uint8_t //Enum VeiledExperts.EOptionContentType
    {
        ComboBox = 0,
        Slider = 1,
        InputKeySelector = 2,
        InputToggleKeySelector = 3,
        CheckBox = 4,
        Tabs = 5,
        OneButton = 6,
        CrossHairImage = 7,
        EOptionContentType_MAX = 8
    };

    enum class EStabilityThreadType : uint8_t //Enum VeiledExperts.EStabilityThreadType
    {
        Multithread = 0,
        Singlethread = 1,
        EStabilityThreadType_MAX = 2
    };

    enum class EBlockType : uint8_t //Enum VeiledExperts.EBlockType
    {
        Default = 0,
        Friend_Clan = 1,
        AllBlock = 2,
        EBlockType_MAX = 3
    };

    enum class EOptionQuality : uint8_t //Enum VeiledExperts.EOptionQuality
    {
        LowQuality = 0,
        MediumQuality = 1,
        HighQuality = 2,
        EpicQuality = 3,
        EOptionQuality_MAX = 4
    };

    enum class EGraphicsQuality : uint8_t //Enum VeiledExperts.EGraphicsQuality
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Epic = 3,
        Custom = 4,
        EGraphicsQuality_MAX = 5
    };

    enum class EMouseSensitivityType : uint8_t //Enum VeiledExperts.EMouseSensitivityType
    {
        NormalSensitivity = 0,
        AimingSensitivity = 1,
        UnitedAimSensitivity = 2,
        IronsightSensitivity = 3,
        X2ZoomScope = 4,
        X4ZoomScope = 5,
        X8ZoomScope = 6,
        X16ZoomScope = 7,
        EMouseSensitivityType_MAX = 8
    };

    enum class ESoundTapType : uint32_t //Enum VeiledExperts.ESoundTapType
    {
        None = -1,
        Sound = 0,
        Voice = 1,
        ESoundTapType_MAX = 2
    };

    enum class EOptionType : uint32_t //Enum VeiledExperts.EOptionType
    {
        None = -1,
        Display = 0,
        Sounds = 1,
        Gameplay = 2,
        Controls = 3,
        OptionType_Max = 4,
        EOptionType_MAX = 5
    };

    enum class EOutgameCharacterSpawnGroup : uint8_t //Enum VeiledExperts.EOutgameCharacterSpawnGroup
    {
        OutgameCharacterSG_Lobby = 0,
        OutgameCharacterSG_AgentSelect = 1,
        OutgameCharacterSG_AgentCreate = 2,
        OutgameCharacterSG_Customize = 3,
        OutgameCharacterSG_MatchAgentSelect = 4,
        OutgameCharacterSG_Result = 5,
        OutgameCharacterSG_MAX = 6
    };

    enum class EPartySlotState : uint8_t //Enum VeiledExperts.EPartySlotState
    {
        Empty = 0,
        Inviting = 1,
        Filled = 2,
        EPartySlotState_MAX = 3
    };

    enum class EPDCameraShakeAnimType : uint8_t //Enum VeiledExperts.EPDCameraShakeAnimType
    {
        SHAKE_NONE = 0,
        SHAKE_SitFrontWalk = 1,
        SHAKE_SitBackWalk = 2,
        SHAKE_SitRightWalk = 3,
        SHAKE_SitLeftWalk = 4,
        SHAKE_SitFrontRun = 5,
        SHAKE_SitBackRun = 6,
        SHAKE_SitRightRun = 7,
        SHAKE_SitLeftRun = 8,
        SHAKE_StandFrontWalk = 9,
        SHAKE_StandBackWalk = 10,
        SHAKE_StandRightWalk = 11,
        SHAKE_StandLeftWalk = 12,
        SHAKE_StandFrontRun = 13,
        SHAKE_StandBackRun = 14,
        SHAKE_StandRightRun = 15,
        SHAKE_StandLeftRun = 16,
        SHAKE_JoggingFront = 17,
        SHAKE_JoggingBack = 18,
        SHAKE_JoggingRight = 19,
        SHAKE_JoggingLeft = 20,
        SHAKE_MoveJuggernautFront = 21,
        SHAKE_MoveJuggernautBack = 22,
        SHAKE_MoveJuggernautRight = 23,
        SHAKE_MoveJuggernautLeft = 24,
        SHAKE_MoveJuggernautDash = 25,
        SHAKE_JuggernautBigStep = 26,
        SHAKE_Climb = 27,
        SHAKE_ClimbEnter = 28,
        SHAKE_ClimbJump = 29,
        SHAKE_Jump = 30,
        SHAKE_Zipline = 31,
        SHAKE_Slide = 32,
        SHAKE_StartSandStorm = 33,
        SHAKE_ClimbLedgeGrap = 34,
        SHAKE_ParkourLedgeGrap = 35,
        SHAKE_Land = 36,
        SHAKE_LandAutoRoll = 37,
        SHAKE_LandSoftCrawl = 38,
        SHAKE_LandHardCrawl = 39,
        SHAKE_Hit = 40,
        SHAKE_JuggernautDashHit = 41,
        SHAKE_GrenadeExplosion = 42,
        SHAKE_StunExplosion = 43,
        SHAKE_ShieldingExplosion = 44,
        SHAKE_C4Explosion = 45,
        SHAKE_BOMExplosion1 = 46,
        SHAKE_BOMExplosion2 = 47,
        SHAKE_BOMExplosion3 = 48,
        SHAKE_BOMExplosion4 = 49,
        SHAKE_FireAR = 50,
        SHAKE_FireSMG = 51,
        SHAKE_FireSR = 52,
        SHAKE_FireSG = 53,
        SHAKE_FireLMG = 54,
        SHAKE_FirePistol = 55,
        SHAKE_FireMiniGun = 56,
        SHAKE_FireBow = 57,
        SHAKE_BulletGraze = 58,
        SHAKE_MeleeHitWeak = 59,
        SHAKE_MeleeHitStrong = 60,
        SHAKE_FP_FireAR = 61,
        SHAKE_FP_FireSMG = 62,
        SHAKE_FP_FireSR = 63,
        SHAKE_FP_FireDMR = 64,
        SHAKE_FP_FireSG = 65,
        SHAKE_FP_FireLMG = 66,
        SHAKE_FP_FirePistol = 67,
        SHAKE_FP_FireBow = 68,
        SHAKE_FP_Jump = 69,
        SHAKE_FP_Land = 70,
        SHAKE_FP_MeleeHitWeak = 71,
        SHAKE_FP_MeleeHitStrong = 72,
        SHAKE_MAX = 73
    };

    enum class ECameraMovementType : uint8_t //Enum VeiledExperts.ECameraMovementType
    {
        CMT_Stand = 0,
        CMT_Crouch = 1,
        CMT_Aiming = 2,
        CMT_CrouchAiming = 3,
        CMT_Aiming_Bow = 4,
        CMT_CrouchAiming_Bow = 5,
        CMT_FirstPerson = 6,
        CMT_CrouchFirstPerson = 7,
        CMT_FirstPerson_Bow = 8,
        CMT_Groggy = 9,
        CMT_Indoor = 10,
        CMT_ForwardRun = 11,
        CMT_AddCrouch = 12,
        CMT_AddLowCrouch = 13,
        CMT_Roll = 14,
        CMT_PKRCU100WCamera = 15,
        CMT_PKRCU100RCamera = 16,
        CMT_PKRCU150WCamera1 = 17,
        CMT_PKRCU150WCamera2 = 18,
        CMT_PKRCU150RCamera1 = 19,
        CMT_PKRCU150RCamera2 = 20,
        CMT_PKRCU200WCamera1 = 21,
        CMT_PKRCU200WCamera2 = 22,
        CMT_PKRCU200RCamera1 = 23,
        CMT_PKRCU200RCamera2 = 24,
        CMT_PKRCU250WCamera1 = 25,
        CMT_PKRCU250WCamera2 = 26,
        CMT_PKRCU250RCamera1 = 27,
        CMT_PKRCU250RCamera2 = 28,
        CMT_PKRCU300WCamera1 = 29,
        CMT_PKRCU300WCamera2 = 30,
        CMT_PKRCU300RCamera1 = 31,
        CMT_PKRCU300RCamera2 = 32,
        CMT_PKRVT100WCamera = 33,
        CMT_PKRVT100RCamera = 34,
        CMT_PKRVT150WCamera1 = 35,
        CMT_PKRVT150WCamera2 = 36,
        CMT_PKRVT150RCamera1 = 37,
        CMT_PKRVT150RCamera2 = 38,
        CMT_PKRVT200WCamera1 = 39,
        CMT_PKRVT200WCamera2 = 40,
        CMT_PKRVT200RCamera1 = 41,
        CMT_PKRVT200RCamera2 = 42,
        CMT_PKRVT250WCamera1 = 43,
        CMT_PKRVT250WCamera2 = 44,
        CMT_PKRVT250RCamera1 = 45,
        CMT_PKRVT250RCamera2 = 46,
        CMT_PKRVT300WCamera1 = 47,
        CMT_PKRVT300WCamera2 = 48,
        CMT_PKRVT300RCamera1 = 49,
        CMT_PKRVT300RCamera2 = 50,
        CMT_PKRCloseUpCamera = 51,
        CMT_PKRDefCamera = 52,
        CMT_Jump = 53,
        CMT_LongJump = 54,
        CMT_Climb = 55,
        CMT_Zipline = 56,
        CMT_Slide = 57,
        CMT_JuggernautEquip = 58,
        CMT_JuggernautDash = 59,
        CMT_Stealth = 60,
        CMT_Seed_Bomb_Install_Defuse = 61,
        CMT_Seed_Bomb_Install_Defuse_Indoor = 62,
        CMT_GgoggySeed_Bomb_Install_Defuse = 63,
        CMT_BowEquip = 64,
        CMT_Count = 65,
        CMT_MAX = 66
    };

    enum class EBlendSquenceType : uint8_t //Enum VeiledExperts.EBlendSquenceType
    {
        None = 0,
        Blending = 1,
        BlendingOrbit = 2,
        BlendingOrbitReverse = 3,
        End = 4,
        EBlendSquenceType_MAX = 5
    };

    enum class ESpectatingParkourCamera : uint8_t //Enum VeiledExperts.ESpectatingParkourCamera
    {
        None = 0,
        Following = 1,
        FollowingEnd = 2,
        MAX = 3
    };

    enum class EPDFootStepNotifyType : uint8_t //Enum VeiledExperts.EPDFootStepNotifyType
    {
        Run = 0,
        Jump = 1,
        SoftLand = 2,
        HardLand = 3,
        JugDash = 4,
        Roll = 5,
        Max = 6
    };

    enum class EPDTraceChannel : uint8_t //Enum VeiledExperts.EPDTraceChannel
    {
        Visibility = 3,
        Parkour = 14,
        Climb = 15,
        Weapon = 16,
        AttackObject = 17,
        Pickup = 18,
        Ladder = 19,
        Projectile = 20,
        Audio = 21,
        Slide = 23,
        AudioOcc = 25,
        EPDTraceChannel_MAX = 26
    };

    enum class EBattleIntensityState : uint8_t //Enum VeiledExperts.EBattleIntensityState
    {
        INTENSITY_NORMAL = 0,
        INTENSITY_ALARMED = 1,
        INTENSITY_COMBAT_SIMPLE = 2,
        INTENSITY_COMBAT_HARD = 3,
        INTENSITY_MAX = 4
    };

    enum class EQuestAction : uint8_t //Enum VeiledExperts.EQuestAction
    {
        QA_None = 0,
        QA_OUTGAME_CHA_VOICE = 1,
        QA_HIT = 2,
        QA_RANGE = 3,
        QA_THROW = 4,
        QA_CHA_STATE = 5,
        QA_AREA = 6,
        QA_PING = 7,
        QA_USEITEM = 8,
        QA_INTERACTION = 9,
        QA_MODE_EVENT = 10,
        QA_ADD_ITEM = 11,
        QA_UPGRADE = 12,
        QA_INGAME_MOVIE = 13,
        QA_BATTLE_ASPECT = 14,
        QA_GAME_READY = 15,
        QA_ROUND_END = 16,
        QA_OPERATOR_CHECK = 17,
        QA_ENV_EFFECT = 18,
        QA_CHANGE_MOVE_TYPE = 19,
        QA_ETC_ACTION = 20,
        QA_BATTLE_INTENSITY = 21,
        QA_RANGE_IN_LOCATION = 22,
        QA_SHOP_READY = 23,
        QA_UNEQUIP_POWERARMOR = 24,
        QA_CHANGE_GAMEMODE_STATE = 25,
        QA_UPDATE_GAMEMODE_TIME = 26,
        QA_CHANGE_TDM_GAMESCORE = 27,
        QA_MISSION_EVENT_CHECK = 28,
        QA_MISSION_RANK_SCORE_CHECK = 29,
        QA_MAX = 30
    };

    enum class EQuestList : uint32_t //Enum VeiledExperts.EQuestList
    {
        QL_None = 0,
        QL_VOICE_ENEMY_HIT = 1,
        QL_VOICE_TEAM_HIT = 2,
        QL_VOICE_TEAM_ENEMY_HIT = 3,
        QL_VOICE_TEAM_ME_HIT = 4,
        QL_VOICE_ENEMY_TEAM_HIT = 5,
        QL_VOICE_ENEMY_ME_HIT = 6,
        QL_VOICE_GROGGY = 7,
        QL_VOICE_DEATH = 8,
        QL_VOICE_ENEMY_GROGGY = 9,
        QL_VOICE_ENEMY_DEATH = 10,
        QL_VOICE_DOT_HIT = 11,
        QL_VOICE_SMOKE_AREA = 12,
        QL_VOICE_THROW_GRANADE = 13,
        QL_VOICE_THROW_HEAL = 14,
        QL_VOICE_THROW_GAS = 15,
        QL_VOICE_THROW_SCAN = 16,
        QL_VOICE_JUGGERNAUT = 17,
        QL_VOICE_CHANGE_ARMORPLATE = 18,
        QL_VOICE_RECOVER = 19,
        QL_VOICE_FULL_INVEN = 20,
        QL_VOICE_GET_SEED = 21,
        QL_VOICE_SET_SEED = 22,
        QL_VOICE_RELEASE_SEED = 23,
        QL_VOICE_RELOAD = 24,
        QL_VOICE_SHOP_BUYREQUEST = 25,
        QL_VOICE_SHOP_CANCEL = 26,
        QL_VOICE_SHOP_REFUSE = 27,
        QL_VOICE_INTER_LEDEAR_DELEGATE = 28,
        QL_VOICE_SIGNATURE = 29,
        QL_VOICE_GROGGY_REQUEST = 30,
        QL_VOICE_GROGGY_HEAL = 31,
        QL_VOICE_INTER_BOMB_DELEGATE = 32,
        QL_VOICE_MONOLOGUE = 33,
        QL_VOICE_CHA_INTERACTION_TALK = 34,
        QL_VOICE_OUTGAME_CHA_CREATE = 35,
        QL_VOICE_OUTGAME_CHA_SELECT = 36,
        QL_VOICE_OUTGAME_LOBBY = 37,
        QL_VOICE_OUTGAME_RESULT_WIN = 38,
        QL_VOICE_OUTGAME_RESULT_LOSE = 39,
        QL_VOICE_ENEMY_SNIPER_FIND = 40,
        QL_VOICE_NEAR_GRANADE = 41,
        QL_VOICE_REQ_COIN = 42,
        QL_VOICE_PING_MOVE = 43,
        QL_VOICE_PING_GO = 44,
        QL_VOICE_PING_ASSEMBLE = 45,
        QL_VOICE_PING_RETREAT = 46,
        QL_VOICE_PING_INSTALL = 47,
        QL_VOICE_PING_DEFUSE = 48,
        QL_VOICE_PING_CAUTIONINSTALL = 49,
        QL_VOICE_PING_CAUTIONDEFUSE = 50,
        QL_VOICE_PING_ENEMY = 51,
        QL_VOICE_PING_WATCH = 52,
        QL_VOICE_PING_SUPPORT = 53,
        QL_VOICE_PING_RUSH = 54,
        QL_VOICE_PING_ATTACK = 55,
        QL_VOICE_PING_DEFENSE = 56,
        QL_VOICE_PING_SOS = 57,
        QL_VOICE_PING_ALLYGROGGY = 58,
        QL_VOICE_PING_ENEMYGROGGY = 59,
        QL_VOICE_PING_ENEMYDEAD = 60,
        QL_VOICE_PING_ENEMYJUGGERNAUT = 61,
        QL_VOICE_PING_HELLO = 62,
        QL_VOICE_PING_SORRY = 63,
        QL_VOICE_PING_GREAT = 64,
        QL_VOICE_PING_THANKYOU = 65,
        QL_VOICE_PING_BLAHBLAH = 66,
        QL_VOICE_PING_INVEST = 67,
        QL_VOICE_PING_SAVING = 68,
        QL_VOICE_PING_ALLIN = 69,
        QL_VOICE_PING_RICH = 70,
        QL_VOICE_PING_POOR = 71,
        QL_VOICE_PING_ITEM = 72,
        QL_VOICE_PING_SEED = 73,
        QL_VOICE_PING_WEAPON_AR = 74,
        QL_VOICE_PING_WEAPON_SMG = 75,
        QL_VOICE_PING_WEAPON_SR = 76,
        QL_VOICE_PING_WEAPON_SG = 77,
        QL_VOICE_PING_WEAPON_LMG = 78,
        QL_VOICE_PING_WEAPON_BOW = 79,
        QL_VOICE_PING_WEAPON_SUB = 80,
        QL_VOICE_PING_AMMO_10 = 81,
        QL_VOICE_PING_AMMO_557 = 82,
        QL_VOICE_PING_AMMO_763 = 83,
        QL_VOICE_PING_AMMO_762_LR = 84,
        QL_VOICE_PING_AMMO_12GAUGE = 85,
        QL_VOICE_PING_AMMO_ARROW = 86,
        QL_VOICE_PING_THROW_GRENADE = 87,
        QL_VOICE_PING_THROW_GAS = 88,
        QL_VOICE_PING_THROW_SCAN = 89,
        QL_VOICE_PING_THROW_HEAL = 90,
        QL_VOICE_PING_BANDAGE = 91,
        QL_VOICE_PING_ARMORPLATE = 92,
        QL_VOICE_PING_ASTRAPI = 93,
        QL_VOICE_PING_SELFREVIVALKIT = 94,
        QL_VOICE_PING_BOMBDEACTIVATEKIT = 95,
        QL_VOICE_PING_JUGGERNAUT = 96,
        QL_VOICE_PING_INVEN_COIN = 97,
        QL_VOICE_PING_INVEN_SEED = 98,
        QL_VOICE_PING_INVEN_WEAPON_MAIN = 99,
        QL_VOICE_PING_INVEN_WEAPON_SUB = 100,
        QL_VOICE_PING_INVEN_AMMO_10 = 101,
        QL_VOICE_PING_INVEN_AMMO_557 = 102,
        QL_VOICE_PING_INVEN_AMMO_763 = 103,
        QL_VOICE_PING_INVEN_AMMO_762_LR = 104,
        QL_VOICE_PING_INVEN_AMMO_12GAUGE = 105,
        QL_VOICE_PING_INVEN_AMMO_ARROW = 106,
        QL_VOICE_PING_SHOP = 107,
        QL_VOICE_PING_SHOP_WEAPON_AR = 108,
        QL_VOICE_PING_SHOP_WEAPON_SMG = 109,
        QL_VOICE_PING_SHOP_WEAPON_SR = 110,
        QL_VOICE_PING_SHOP_WEAPON_SG = 111,
        QL_VOICE_PING_SHOP_WEAPON_LMG = 112,
        QL_VOICE_PING_SHOP_WEAPON_BOW = 113,
        QL_VOICE_PING_SHOP_WEAPON_SUB = 114,
        QL_VOICE_PING_SHOP_AMMO_10 = 115,
        QL_VOICE_PING_SHOP_AMMO_557 = 116,
        QL_VOICE_PING_SHOP_AMMO_763 = 117,
        QL_VOICE_PING_SHOP_AMMO_762_LR = 118,
        QL_VOICE_PING_SHOP_AMMO_12GAUGE = 119,
        QL_VOICE_PING_SHOP_AMMO_ARROW = 120,
        QL_VOICE_PING_SHOP_THROW_GRENADE = 121,
        QL_VOICE_PING_SHOP_THROW_GAS = 122,
        QL_VOICE_PING_SHOP_THROW_SCAN = 123,
        QL_VOICE_PING_SHOP_THROW_HEAL = 124,
        QL_VOICE_PING_SHOP_BANDAGE = 125,
        QL_VOICE_PING_SHOP_ARMORPLATE = 126,
        QL_VOICE_PING_SHOP_ASTRAPI = 127,
        QL_VOICE_PING_SHOP_SELFREVIVALKIT = 128,
        QL_VOICE_PING_SHOP_BOMBDEACTIVATEKIT = 129,
        QL_VOICE_PING_SHOP_JUGGERNAUT = 130,
        QL_VOICE_PING_SHOP_TEMABUFF = 131,
        QL_VOICE_PING_FUND_ARMORY = 132,
        QL_VOICE_PING_FUND_ORDNANCE = 133,
        QL_VOICE_PING_FUND_TACTICAL = 134,
        QL_VOICE_PING_GROGGY_MOVE = 135,
        QL_VOICE_PING_GROGGY_ENEMY = 136,
        QL_VOICE_PING_AGREE = 137,
        QL_VOICE_PING_DECLINE = 138,
        QL_VOICE_PING_TARGET_CANEL = 139,
        QL_VOICE_PING_CLAIM = 140,
        QL_VOICE_PING_HELP_AGREE = 141,
        QL_VOICE_BREAKINTO_START = 142,
        QL_VOICE_SCAN_ME = 143,
        QL_OPERATOR_TEAM_LEAVE = 144,
        QL_OPERATOR_ENEMY_LEAVE = 145,
        QL_OPERATOR_ARMORY_UPGRADE = 146,
        QL_OPERATOR_TACTICAL_UPGRADE = 147,
        QL_OPERATOR_EQUIP_UPGRADE = 148,
        QL_OPERATOR_DERAILED_INGAME_MOVIE = 149,
        QL_OPERATOR_SHIPYARD_INGAME_MOVIE = 150,
        QL_OPERATOR_WINDFARM_INGAME_MOVIE = 151,
        QL_OPERATOR_BRIDGE_INGAME_MOVIE = 152,
        QL_OPERATOR_CHANGE_STARTPOINT_ATTACK = 153,
        QL_OPERATOR_CHANGE_STARTPOINT_DEFENCE = 154,
        QL_OPERATOR_REMAIN_TIME = 155,
        QL_OPERATOR_FILED_MOVE = 156,
        QL_OPERATOR_GET_SEED = 157,
        QL_OPERATOR_SEED_INSTALL = 158,
        QL_OPERATOR_SEED_RELEASE = 159,
        QL_OPERATOR_SEED_NOTIFY = 160,
        QL_OPERATOR_RESULT = 161,
        QL_OPERATOR_INTER_START = 162,
        QL_OPERATOR_INTER_END = 163,
        QL_OPERATOR_ARMED_TIME = 164,
        QL_OPERATOR_ALLREADY = 165,
        QL_OPERATOR_AUTO_SUPPLY = 166,
        QL_OPERATOR_ENEMY_INFO_OPEN = 167,
        QL_OPERATOR_ENEMY_INFO_OPEN_S = 168,
        QL_OPERATOR_ENEMY_UPGRADE_OPEN = 169,
        QL_OPERATOR_SEED_DROP = 170,
        QL_OPERATOR_BATTLE_ASPECT_E4_T3 = 171,
        QL_OPERATOR_BATTLE_ASPECT_E3_T1_AT = 172,
        QL_OPERATOR_BATTLE_ASPECT_E3_T1_DEF = 173,
        QL_OPERATOR_BATTLE_ASPECT_E1_T3_AT = 174,
        QL_OPERATOR_BATTLE_ASPECT_E1_T3_DEF = 175,
        QL_OPERATOR_BATTLE_ASPECT_E1_T1_AT = 176,
        QL_OPERATOR_BATTLE_ASPECT_E1_T1_DEF = 177,
        QL_OPERATOR_LAST_ROUND = 178,
        QL_OPERATOR_FIRST_WIN = 179,
        QL_OPERATOR_FIRST_LOSE = 180,
        QL_OPERATOR_WININGSTREAK_3 = 181,
        QL_OPERATOR_LOSINGSTREAK_3 = 182,
        QL_OPERATOR_WININGSTREAK_4 = 183,
        QL_OPERATOR_LOSINGSTREAK_4 = 184,
        QL_OPERATOR_WININGSTREAK_3_N_LOSE = 185,
        QL_OPERATOR_LOSINGSTREAK_3_N_WIN = 186,
        QL_OPERATOR_ENEMY_JUGGERNAUT_2 = 187,
        QL_OPERATOR_ENEMY_JUGGERNAUT_3 = 188,
        QL_OPERATOR_TEAM_JUGGERNAUT_2 = 189,
        QL_OPERATOR_TEAM_JUGGERNAUT_3 = 190,
        QL_OPERATOR_ENEMY_JUGGERNAUT_1 = 191,
        QL_OPERATOR_TEAM_JUGGERNAUT_1 = 192,
        QL_OPERATOR_TEAM_KILL = 193,
        QL_OPERATOR_FIRST_KILL = 194,
        QL_OPERATOR_DOUBLE_KILL = 195,
        QL_OPERATOR_TRIPLE_KILL = 196,
        QL_OPERATOR_ALL_KILL = 197,
        QL_OPERATOR_ALL_KILL_MELEE = 198,
        QL_OPERATOR_HALF_JUG_ARMOR = 199,
        QL_OPERATOR_HALF_JUG_AMMO = 200,
        QL_OPERATOR_ZERO_JUG_AMMO = 201,
        QL_OPERATOR_SHOP_NOTBUY_ARMOR = 202,
        QL_OPERATOR_SHOP_NOTBUY_AMMO = 203,
        QL_OPERATOR_SHOP_NOTBUY_SNIPERSCOPE = 204,
        QL_OPERATOR_30_UNDER_HAVE_HEAL_PACK = 205,
        QL_OPERATOR_30_UNDER_NEED_HEAL_PACK = 206,
        QL_OPERATOR_ARMORPLATE_USE = 207,
        QL_OPERATOR_ARMORPLATE_NEED = 208,
        QL_OPERATOR_SENDSTORM = 209,
        QL_OPERATOR_TUTORIAL_START = 210,
        QL_OPERATOR_TUTORIAL_2 = 210,
        QL_OPERATOR_TUTORIAL_3 = 211,
        QL_OPERATOR_TUTORIAL_4 = 212,
        QL_OPERATOR_TUTORIAL_5 = 213,
        QL_OPERATOR_TUTORIAL_6 = 214,
        QL_OPERATOR_TUTORIAL_7 = 215,
        QL_OPERATOR_TUTORIAL_8 = 216,
        QL_OPERATOR_TUTORIAL_9 = 217,
        QL_OPERATOR_TUTORIAL_10 = 218,
        QL_OPERATOR_TUTORIAL_11 = 219,
        QL_OPERATOR_TUTORIAL_12 = 220,
        QL_OPERATOR_TUTORIAL_13 = 221,
        QL_OPERATOR_TUTORIAL_14 = 222,
        QL_OPERATOR_TUTORIAL_15 = 223,
        QL_OPERATOR_TUTORIAL_16 = 224,
        QL_OPERATOR_TUTORIAL_17 = 225,
        QL_OPERATOR_TUTORIAL_18 = 226,
        QL_OPERATOR_TUTORIAL_19 = 227,
        QL_OPERATOR_TUTORIAL_20 = 228,
        QL_OPERATOR_TUTORIAL_21 = 229,
        QL_OPERATOR_TUTORIAL_22 = 230,
        QL_OPERATOR_TUTORIAL_23 = 231,
        QL_OPERATOR_TUTORIAL_24 = 232,
        QL_OPERATOR_TUTORIAL_25 = 233,
        QL_OPERATOR_TUTORIAL_26 = 234,
        QL_OPERATOR_TUTORIAL_27 = 235,
        QL_OPERATOR_TUTORIAL_28 = 236,
        QL_OPERATOR_TUTORIAL_29 = 237,
        QL_OPERATOR_TUTORIAL_30 = 238,
        QL_OPERATOR_TUTORIAL_31 = 239,
        QL_OPERATOR_TUTORIAL_32 = 240,
        QL_OPERATOR_TUTORIAL_33 = 241,
        QL_OPERATOR_TUTORIAL_34 = 242,
        QL_OPERATOR_TUTORIAL_35 = 243,
        QL_OPERATOR_TUTORIAL_36 = 244,
        QL_OPERATOR_TUTORIAL_37 = 245,
        QL_OPERATOR_TUTORIAL_38 = 246,
        QL_OPERATOR_TUTORIAL_39 = 247,
        QL_OPERATOR_TUTORIAL_40 = 248,
        QL_OPERATOR_TUTORIAL_41 = 249,
        QL_OPERATOR_TUTORIAL_42 = 250,
        QL_OPERATOR_TUTORIAL_43 = 251,
        QL_OPERATOR_TUTORIAL_44 = 252,
        QL_OPERATOR_TUTORIAL_END = 252,
        QL_OPERATOR_SIGNATURE_SCAN = 253,
        QL_OPERATOR_SOY_SIGNATURE_SCAN = 254,
        QL_OPERATOR_BREAKINTO_READY = 255,
        QL_OPERATOR_BREAKINTO_START = 256,
        QL_OPERATOR_BREAKINTO_TEAM_ALERT = 257,
        QL_OPERATOR_GET_LEPTON = 258,
        QL_OPERATOR_ENEMY_GET_LEPTON = 259,
        QL_OPERATOR_LEPTON_DROP = 260,
        QL_OPERATOR_TARGET_IS_ENEMY = 261,
        QL_OPERATOR_TARGET_IS_ME = 262,
        QL_OPERATOR_TDM_GAMESTART = 263,
        QL_OPERATOR_TDM_TARGETSCORE_75PER = 264,
        QL_OPERATOR_TDM_REMAINTIME_ALERT = 265,
        QL_OPERATOR_TDM_OVERTIME_ALERT = 266,
        QL_OPERATOR_TDM_MYTEAM_UPPERHAND = 267,
        QL_OPERATOR_TDM_ENEMYTEAM_UPPERHAND = 268,
        QL_OPERATOR_TDM_MYTEAM_REVERSE = 269,
        QL_OPERATOR_TDM_ENEMYTEAM_REVERSE = 270,
        QL_OPERATOR_TDM_MYTEAM_BEFOER_WIN = 271,
        QL_OPERATOR_TDM_ENEMYTEAM_BEFOER_WIN = 272,
        QL_OPERATOR_TDM_MAINPLAYER_CARRY_TEAM = 273,
        QL_OPERATOR_TDM_MYTEAM_WIN = 274,
        QL_OPERATOR_TDM_ENEMYTEAM_WIN = 275,
        QL_OPERATOR_MS_START = 276,
        QL_OPERATOR_MS_PLAY_1ST = 277,
        QL_OPERATOR_MS_PLAY_LOST_1ST = 278,
        QL_OPERATOR_MS_BOAST = 279,
        QL_OPERATOR_MS_ROUND_1ST = 280,
        QL_OPERATOR_MS_ROUND_2ND_3RD = 281,
        QL_OPERATOR_MS_LAST_RESULT_1ST = 282,
        QL_OPERATOR_MS_LAST_RESULT_2ND_3RD = 283,
        QL_OPERATOR_MS_LAST_RESULT_OUT_RANK = 284,
        QL_OPERATOR_ENEMY_CREATE_UPS = 285,
        QL_OPERATOR_ENEMY_SEED_HIT_EMP = 286,
        QL_OPERATOR_MYTEAM_SEED_HIT_EMP = 287,
        QL_OPERATOR_ENEMY_UPS_BROKE = 288,
        QL_OPERATOR_MYTEAM_UPS_BROKE = 289,
        QL_OPERATOR_SEED_PLAYER_NOTIFY = 290,
        QL_OPERATOR_SEED_INSTALL_30SEC_NOTIFY = 291,
        QL_BI_NORMAL = 292,
        QL_BI_ALARMED = 293,
        QL_BI_COMBAT_SIMPLE = 294,
        QL_BI_COMBAT_HARD = 295,
        QL_Max = 296
    };

    enum class EQuestType : uint8_t //Enum VeiledExperts.EQuestType
    {
        QT_VOICE = 0,
        QT_BATTLE_INTENSITY = 1,
        QT_MAX = 2
    };

    enum class EReloadNotifyType : uint8_t //Enum VeiledExperts.EReloadNotifyType
    {
        NONE = 0,
        AttachMagazineToHand = 1,
        HideMagazine = 2,
        All = 3,
        EReloadNotifyType_MAX = 4
    };

    enum class ESceneEvent : uint8_t //Enum VeiledExperts.ESceneEvent
    {
        SE_None = 0,
        SE_ChangeMatchList = 1,
        SE_MatchingFail = 2,
        SE_MatchingStart = 3,
        SE_MatchingNotify = 4,
        SE_MatchingExpansion = 5,
        SE_MatchingCancel = 6,
        SE_LoadSelectedMatchList = 7,
        SE_ChangeMatchType = 8,
        SE_ChangeMatchCategory = 9,
        SE_RefreshMatchModeList = 10,
        SE_SingleMatchStart = 11,
        SE_AgentSelected = 12,
        SE_AgentSelectedReq = 13,
        SE_AgentCreateModelInputLock = 14,
        SE_AgentReload = 15,
        SE_WeaponSelected = 16,
        SE_WeaponSelectCategory = 17,
        SE_WeaponSelectLoadout = 18,
        SE_CustomizeEnter = 19,
        SE_CustomizeSelectMenu = 20,
        SE_CustomizeSelectMainCategory = 21,
        SE_CustomizeSelectSubCategory = 22,
        SE_CustomizeSelectContent = 23,
        SE_CustomizeEquipLepton = 24,
        SE_CustomizeResetPresetBtnClick = 25,
        SE_CustomizeResetPresetLepton = 26,
        SE_CustomizeCheckLeptonSaveAndLeave = 27,
        SE_CustomizeSaveEquipLepton = 28,
        SE_CustomizeUnlockContent = 29,
        SE_CustomizeEquipContent = 30,
        SE_CustomizeEquipComplete = 31,
        SE_CustomizeEquipFinish = 32,
        SE_CustomizeCheckEquipChanged = 33,
        SE_CustomizeCheckEquipChangedByMovePage = 34,
        SE_CustomizeSaveWeapon = 35,
        SE_CustomizeSaveAgent = 36,
        SE_CustomizeLoadingComplete = 37,
        SE_CustomizeEquipDefaultParts = 38,
        SE_CustomizeChangeLoadoutIndex = 39,
        SE_CustomizeEquipRecommendedParts = 40,
        SE_CustomizeHoverWeaponParts = 41,
        SE_UpdatePartyMember = 42,
        SE_RemovePartyMember = 43,
        SE_ResultMoveStep = 44,
        SE_ResultMoveNextStep = 45,
        SE_LoadingIntroMoviePlay = 46,
        SE_MatchCharSelect = 47,
        SE_CustomizeBannerEnter = 48,
        SE_CustomizeBannerDefault = 49,
        SE_CustomizeBannerRecommend = 50,
        SE_CustomizeBannerEquip = 51,
        SE_MAX = 52
    };

    enum class ESceneName : uint8_t //Enum VeiledExperts.ESceneName
    {
        None = 0,
        Start = 1,
        Login = 2,
        Outgame = 3,
        AgentNick = 4,
        MainLobby = 5,
        AgentCreate = 6,
        AgentSelect = 7,
        AgentCustomize = 8,
        WeaponSelect = 9,
        WeaponCustomize = 10,
        Clan = 11,
        Training = 12,
        CustomMatch = 13,
        MatchAgentSetting = 14,
        GameResult = 15,
        BannerCustomize = 16,
        Load = 17,
        LoadIntro = 18,
        LoadMatch = 19,
        LoadResult = 20,
        Ingame = 21,
        IngameDefault = 22,
        IngameBreakInto = 23,
        Scene_Max = 24,
        ESceneName_MAX = 25
    };

    enum class EPDSentryGunAnimState : uint8_t //Enum VeiledExperts.EPDSentryGunAnimState
    {
        None = 0,
        Spawn = 1,
        Ready = 2,
        Emp = 3,
        Install = 4,
        Activated = 5,
        EPDSentryGunAnimState_MAX = 6
    };

    enum class EBowStringAction : uint8_t //Enum VeiledExperts.EBowStringAction
    {
        Grab = 0,
        Release = 1,
        PullTight = 2,
        EBowStringAction_MAX = 3
    };

    enum class EPDSlidableType : uint8_t //Enum VeiledExperts.EPDSlidableType
    {
        Slidable_None = 0,
        Slidable_Start = 1,
        Slidable_Loop = 2,
        Slidable_End = 3,
        Slidable_MAX = 4
    };

    enum class ESplineMovementType : uint8_t //Enum VeiledExperts.ESplineMovementType
    {
        Position = 0,
        OffsetRotateAndPosition = 1,
        RotateAndPosition = 2,
        UseCustomRotation = 3,
        UseCharacterBone = 4,
        FOVOnly = 5,
        ESplineMovementType_MAX = 6
    };

    enum class EMoveInterpolateType : uint8_t //Enum VeiledExperts.EMoveInterpolateType
    {
        None = 0,
        PrevPosInclusive = 1,
        EMoveInterpolateType_MAX = 2
    };

    enum class ECustomizePage : uint8_t //Enum VeiledExperts.ECustomizePage
    {
        None = 0,
        AgentSkin = 1,
        AgentLepton = 2,
        AgentProfile = 3,
        AgentMelee = 4,
        AgentUnique = 5,
        WeaponSkin = 6,
        WeaponSticker = 7,
        WeaponParts = 8,
        WeaponAcc = 9,
        WeaponKillCounter = 10,
        WeaponUnique = 11,
        ECustomizePage_MAX = 12
    };

    enum class ETabButtonState : uint8_t //Enum VeiledExperts.ETabButtonState
    {
        UnSelect = 0,
        Select = 1,
        ETabButtonState_MAX = 2
    };

    enum class EPDTransformationActorType : uint8_t //Enum VeiledExperts.EPDTransformationActorType
    {
        None = 0,
        NPC = 1,
        SEED = 2,
        EPDTransformationActorType_MAX = 3
    };

    enum class EInvenSortOrder : uint8_t //Enum VeiledExperts.EInvenSortOrder
    {
        Property_Coin = 0,
        Property_ArmorPlate = 1,
        Property_Bandage = 2,
        Property_Painkiller = 3,
        Property_Pouchkit = 4,
        Property_FirstAidkit = 5,
        Property_Astrapi = 6,
        Property_SelfRevivalKit = 7,
        Property_Scope = 8,
        Property_FrontSight = 9,
        Property_SideSight = 10,
        Property_RearSight = 11,
        Property_Grip = 12,
        Property_Muzzle = 13,
        Property_Stock = 14,
        Property_Magazine = 15,
        Property_Ammo_10 = 16,
        Property_Ammo_557 = 17,
        Property_Ammo_763 = 18,
        Property_Ammo_762_LR = 19,
        Property_Ammo_12Gauge = 20,
        Property_Ammo_47 = 21,
        Property_Ammo_128 = 22,
        Property_Ammo_762G = 23,
        Property_Ammo_Arrow = 24,
        Property_Ammo_Exosuit = 25,
        Property_Ammo_Drill = 26,
        Property_AR = 27,
        Property_SMG = 28,
        Property_SR = 29,
        Property_SG = 30,
        Property_LMG = 31,
        Property_BOW = 32,
        Property_RPG = 33,
        Property_MINIGUN = 34,
        Property_EXOSUIT_SMG = 35,
        Property_ETC = 36,
        Property_Pistol = 37,
        Property_Grenade = 38,
        Property_Smoke = 39,
        Property_GasGrenade = 40,
        Property_ScanGrenade = 41,
        Property_Explosive = 42,
        Property_SND_BombDeactivateKit = 43,
        Property_MAX = 44
    };

    enum class EChannelRange : uint8_t //Enum VeiledExperts.EChannelRange
    {
        None = 0,
        Party = 1,
        Area = 2,
        Team = 3,
        Text = 4,
        Max = 5
    };

    enum class EMapObjectState : uint8_t //Enum VeiledExperts.EMapObjectState
    {
        None = 0,
        Normal = 1,
        Groggy = 2,
        Dead = 3,
        Revive = 4,
        Rescue = 5,
        Bandage = 6,
        Astrapi = 7,
        ArmorKit = 8,
        Seed = 9,
        Shop = 10,
        Max = 11
    };

    enum class EMapObjectType : uint8_t //Enum VeiledExperts.EMapObjectType
    {
        None = 0,
        MainPlayer = 1,
        Ally = 2,
        Enemy = 3,
        Npc = 4,
        SentryGunNpc = 5,
        DroneNpc = 6,
        Object = 101,
        Seed = 102,
        Demolition = 103,
        EnemyDamage = 104,
        EnemyDeath = 105,
        SafeZone = 106,
        FireSound = 107,
        Ping = 108,
        Camp = 109,
        Drawing = 110,
        ItemBox = 111,
        CoinBox = 112,
        YoungsikHacking = 113,
        TutorialMarker = 114,
        ThrowObj = 115,
        LevelRegion = 116,
        Spectating = 201,
        Max = 202
    };

    enum class EEntryPointType : uint8_t //Enum VeiledExperts.EEntryPointType
    {
        EPT_NONE = 0,
        EPT_Entry = 1,
        EPT_Exit = 2,
        EPT_MAX = 3
    };

    enum class EPDCaptureSpace : uint8_t //Enum PDAnimRuntime.EPDCaptureSpace
    {
        World = 0,
        Actor = 1,
        Component = 2,
        Target = 3,
        TargetComponent = 4,
        EPDCaptureSpace_MAX = 5
    };

    enum class EPDIKTargetType : uint8_t //Enum PDAnimRuntime.EPDIKTargetType
    {
        HandL = 0,
        HandR = 1,
        FootL = 2,
        FootR = 3,
        Max = 4
    };

    enum class ELifetimeCondition : uint8_t //Enum CoreUObject.ELifetimeCondition
    {
        COND_None = 0,
        COND_InitialOnly = 1,
        COND_OwnerOnly = 2,
        COND_SkipOwner = 3,
        COND_SimulatedOnly = 4,
        COND_AutonomousOnly = 5,
        COND_SimulatedOrPhysics = 6,
        COND_InitialOrOwner = 7,
        COND_Custom = 8,
        COND_ReplayOrOwner = 9,
        COND_ReplayOnly = 10,
        COND_SimulatedOnlyNoReplay = 11,
        COND_SimulatedOrPhysicsNoReplay = 12,
        COND_SkipReplay = 13,
        COND_Never = 15,
        COND_Max = 16
    };

    enum class EDataValidationResult : uint8_t //Enum CoreUObject.EDataValidationResult
    {
        Invalid = 0,
        Valid = 1,
        NotValidated = 2,
        EDataValidationResult_MAX = 3
    };

    enum class EPropertyAccessChangeNotifyMode : uint8_t //Enum CoreUObject.EPropertyAccessChangeNotifyMode
    {
        Default = 0,
        Never = 1,
        Always = 2,
        EPropertyAccessChangeNotifyMode_MAX = 3
    };

    enum class EUnit : uint8_t //Enum CoreUObject.EUnit
    {
        Micrometers = 0,
        Millimeters = 1,
        Centimeters = 2,
        Meters = 3,
        Kilometers = 4,
        Inches = 5,
        Feet = 6,
        Yards = 7,
        Miles = 8,
        Lightyears = 9,
        Degrees = 10,
        Radians = 11,
        MetersPerSecond = 12,
        KilometersPerHour = 13,
        MilesPerHour = 14,
        Celsius = 15,
        Farenheit = 16,
        Kelvin = 17,
        Micrograms = 18,
        Milligrams = 19,
        Grams = 20,
        Kilograms = 21,
        MetricTons = 22,
        Ounces = 23,
        Pounds = 24,
        Stones = 25,
        Newtons = 26,
        PoundsForce = 27,
        KilogramsForce = 28,
        Hertz = 29,
        Kilohertz = 30,
        Megahertz = 31,
        Gigahertz = 32,
        RevolutionsPerMinute = 33,
        Bytes = 34,
        Kilobytes = 35,
        Megabytes = 36,
        Gigabytes = 37,
        Terabytes = 38,
        Lumens = 39,
        Milliseconds = 43,
        Seconds = 44,
        Minutes = 45,
        Hours = 46,
        Days = 47,
        Months = 48,
        Years = 49,
        Multiplier = 52,
        Percentage = 51,
        Unspecified = 53,
        EUnit_MAX = 54
    };

    enum class EMouseCursor : uint8_t //Enum CoreUObject.EMouseCursor
    {
        None = 0,
        Default = 1,
        TextEditBeam = 2,
        ResizeLeftRight = 3,
        ResizeUpDown = 4,
        ResizeSouthEast = 5,
        ResizeSouthWest = 6,
        CardinalCross = 7,
        Crosshairs = 8,
        Hand = 9,
        GrabHand = 10,
        GrabHandClosed = 11,
        SlashedCircle = 12,
        EyeDropper = 13,
        EMouseCursor_MAX = 14
    };

    enum class EPixelFormat : uint8_t //Enum CoreUObject.EPixelFormat
    {
        PF_Unknown = 0,
        PF_A32B32G32R32F = 1,
        PF_B8G8R8A8 = 2,
        PF_G8 = 3,
        PF_G16 = 4,
        PF_DXT1 = 5,
        PF_DXT3 = 6,
        PF_DXT5 = 7,
        PF_UYVY = 8,
        PF_FloatRGB = 9,
        PF_FloatRGBA = 10,
        PF_DepthStencil = 11,
        PF_ShadowDepth = 12,
        PF_R32_FLOAT = 13,
        PF_G16R16 = 14,
        PF_G16R16F = 15,
        PF_G16R16F_FILTER = 16,
        PF_G32R32F = 17,
        PF_A2B10G10R10 = 18,
        PF_A16B16G16R16 = 19,
        PF_D24 = 20,
        PF_R16F = 21,
        PF_R16F_FILTER = 22,
        PF_BC5 = 23,
        PF_V8U8 = 24,
        PF_A1 = 25,
        PF_FloatR11G11B10 = 26,
        PF_A8 = 27,
        PF_R32_UINT = 28,
        PF_R32_SINT = 29,
        PF_PVRTC2 = 30,
        PF_PVRTC4 = 31,
        PF_R16_UINT = 32,
        PF_R16_SINT = 33,
        PF_R16G16B16A16_UINT = 34,
        PF_R16G16B16A16_SINT = 35,
        PF_R5G6B5_UNORM = 36,
        PF_R8G8B8A8 = 37,
        PF_A8R8G8B8 = 38,
        PF_BC4 = 39,
        PF_R8G8 = 40,
        PF_ATC_RGB = 41,
        PF_ATC_RGBA_E = 42,
        PF_ATC_RGBA_I = 43,
        PF_X24_G8 = 44,
        PF_ETC1 = 45,
        PF_ETC2_RGB = 46,
        PF_ETC2_RGBA = 47,
        PF_R32G32B32A32_UINT = 48,
        PF_R16G16_UINT = 49,
        PF_ASTC_4x4 = 50,
        PF_ASTC_6x6 = 51,
        PF_ASTC_8x8 = 52,
        PF_ASTC_10x10 = 53,
        PF_ASTC_12x12 = 54,
        PF_BC6H = 55,
        PF_BC7 = 56,
        PF_R8_UINT = 57,
        PF_L8 = 58,
        PF_XGXR8 = 59,
        PF_R8G8B8A8_UINT = 60,
        PF_R8G8B8A8_SNORM = 61,
        PF_R16G16B16A16_UNORM = 62,
        PF_R16G16B16A16_SNORM = 63,
        PF_PLATFORM_HDR_1 = 64,
        PF_PLATFORM_HDR_2 = 65,
        PF_PLATFORM_HDR_3 = 66,
        PF_NV12 = 67,
        PF_R32G32_UINT = 68,
        PF_ETC2_R11_EAC = 69,
        PF_ETC2_RG11_EAC = 70,
        PF_MAX = 71
    };

    enum class EAxis : uint8_t //Enum CoreUObject.EAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        EAxis_MAX = 4
    };

    enum class ELogTimes : uint8_t //Enum CoreUObject.ELogTimes
    {
        None = 0,
        UTC = 1,
        SinceGStartTime = 2,
        Local = 3,
        ELogTimes_MAX = 4
    };

    enum class ESearchDir : uint8_t //Enum CoreUObject.ESearchDir
    {
        FromStart = 0,
        FromEnd = 1,
        ESearchDir_MAX = 2
    };

    enum class ESearchCase : uint8_t //Enum CoreUObject.ESearchCase
    {
        CaseSensitive = 0,
        IgnoreCase = 1,
        ESearchCase_MAX = 2
    };

    enum class ETouchType : uint8_t //Enum InputCore.ETouchType
    {
        Began = 0,
        Moved = 1,
        Stationary = 2,
        ForceChanged = 3,
        FirstMove = 4,
        Ended = 5,
        NumTypes = 6,
        ETouchType_MAX = 7
    };

    enum class EConsoleForGamepadLabels : uint8_t //Enum InputCore.EConsoleForGamepadLabels
    {
        None = 0,
        XBoxOne = 1,
        PS4 = 2,
        EConsoleForGamepadLabels_MAX = 3
    };

    enum class EWidgetClipping : uint8_t //Enum SlateCore.EWidgetClipping
    {
        Inherit = 0,
        ClipToBounds = 1,
        ClipToBoundsWithoutIntersecting = 2,
        ClipToBoundsAlways = 3,
        OnDemand = 4,
        EWidgetClipping_MAX = 5
    };

    enum class EFontLayoutMethod : uint8_t //Enum SlateCore.EFontLayoutMethod
    {
        Metrics = 0,
        BoundingBox = 1,
        EFontLayoutMethod_MAX = 2
    };

    enum class EFontLoadingPolicy : uint8_t //Enum SlateCore.EFontLoadingPolicy
    {
        LazyLoad = 0,
        Stream = 1,
        Inline = 2,
        EFontLoadingPolicy_MAX = 3
    };

    enum class EFontHinting : uint8_t //Enum SlateCore.EFontHinting
    {
        Default = 0,
        Auto = 1,
        AutoLight = 2,
        Monochrome = 3,
        None = 4,
        EFontHinting_MAX = 5
    };

    enum class EFocusCause : uint8_t //Enum SlateCore.EFocusCause
    {
        Mouse = 0,
        Navigation = 1,
        SetDirectly = 2,
        Cleared = 3,
        OtherWidgetLostFocus = 4,
        WindowActivate = 5,
        EFocusCause_MAX = 6
    };

    enum class EFlowDirectionPreference : uint8_t //Enum SlateCore.EFlowDirectionPreference
    {
        Inherit = 0,
        Culture = 1,
        LeftToRight = 2,
        RightToLeft = 3,
        EFlowDirectionPreference_MAX = 4
    };

    enum class ETextShapingMethod : uint8_t //Enum SlateCore.ETextShapingMethod
    {
        Auto = 0,
        KerningOnly = 1,
        FullShaping = 2,
        ETextShapingMethod_MAX = 3
    };

    enum class EUINavigationRule : uint8_t //Enum SlateCore.EUINavigationRule
    {
        Escape = 0,
        Explicit = 1,
        Wrap = 2,
        Stop = 3,
        Custom = 4,
        CustomBoundary = 5,
        Invalid = 6,
        EUINavigationRule_MAX = 7
    };

    enum class EColorVisionDeficiency : uint8_t //Enum SlateCore.EColorVisionDeficiency
    {
        NormalVision = 0,
        Deuteranope = 1,
        Protanope = 2,
        Tritanope = 3,
        EColorVisionDeficiency_MAX = 4
    };

    enum class ESlateBrushImageType : uint8_t //Enum SlateCore.ESlateBrushImageType
    {
        NoImage = 0,
        FullColor = 1,
        Linear = 2,
        ESlateBrushImageType_MAX = 3
    };

    enum class ESlateBrushMirrorType : uint8_t //Enum SlateCore.ESlateBrushMirrorType
    {
        NoMirror = 0,
        Horizontal = 1,
        Vertical = 2,
        Both = 3,
        ESlateBrushMirrorType_MAX = 4
    };

    enum class ESlateBrushTileType : uint8_t //Enum SlateCore.ESlateBrushTileType
    {
        NoTile = 0,
        Horizontal = 1,
        Vertical = 2,
        Both = 3,
        ESlateBrushTileType_MAX = 4
    };

    enum class ESlateBrushDrawType : uint8_t //Enum SlateCore.ESlateBrushDrawType
    {
        NoDrawType = 0,
        Box = 1,
        Border = 2,
        Image = 3,
        ESlateBrushDrawType_MAX = 4
    };

    enum class ESlateColorStylingMode : uint8_t //Enum SlateCore.ESlateColorStylingMode
    {
        UseColor_Specified = 0,
        UseColor_Specified_Link = 1,
        UseColor_Foreground = 2,
        UseColor_Foreground_Subdued = 3,
        UseColor_MAX = 4
    };

    enum class ESlateDebuggingFocusEvent : uint8_t //Enum SlateCore.ESlateDebuggingFocusEvent
    {
        FocusChanging = 0,
        FocusLost = 1,
        FocusReceived = 2,
        ESlateDebuggingFocusEvent_MAX = 3
    };

    enum class ESlateDebuggingNavigationMethod : uint8_t //Enum SlateCore.ESlateDebuggingNavigationMethod
    {
        Unknown = 0,
        Explicit = 1,
        CustomDelegateBound = 2,
        CustomDelegateUnbound = 3,
        NextOrPrevious = 4,
        HitTestGrid = 5,
        ESlateDebuggingNavigationMethod_MAX = 6
    };

    enum class ESlateDebuggingStateChangeEvent : uint8_t //Enum SlateCore.ESlateDebuggingStateChangeEvent
    {
        MouseCaptureGained = 0,
        MouseCaptureLost = 1,
        ESlateDebuggingStateChangeEvent_MAX = 2
    };

    enum class ESlateDebuggingInputEvent : uint8_t //Enum SlateCore.ESlateDebuggingInputEvent
    {
        MouseMove = 0,
        MouseEnter = 1,
        MouseLeave = 2,
        MouseButtonDown = 3,
        MouseButtonUp = 4,
        MouseButtonDoubleClick = 5,
        MouseWheel = 6,
        TouchStart = 7,
        TouchEnd = 8,
        DragDetected = 9,
        DragEnter = 10,
        DragLeave = 11,
        DragOver = 12,
        DragDrop = 13,
        DropMessage = 14,
        KeyDown = 15,
        KeyUp = 16,
        KeyChar = 17,
        AnalogInput = 18,
        TouchGesture = 19,
        COUNT = 20,
        ESlateDebuggingInputEvent_MAX = 21
    };

    enum class ESelectInfo : uint8_t //Enum SlateCore.ESelectInfo
    {
        OnKeyPress = 0,
        OnNavigation = 1,
        OnMouseClick = 2,
        Direct = 3,
        ESelectInfo_MAX = 4
    };

    enum class ETextCommit : uint8_t //Enum SlateCore.ETextCommit
    {
        Default = 0,
        OnEnter = 1,
        OnUserMovedFocus = 2,
        OnCleared = 3,
        ETextCommit_MAX = 4
    };

    enum class EScrollDirection : uint8_t //Enum SlateCore.EScrollDirection
    {
        Scroll_Down = 0,
        Scroll_Up = 1,
        Scroll_MAX = 2
    };

    enum class EOrientation : uint8_t //Enum SlateCore.EOrientation
    {
        Orient_Horizontal = 0,
        Orient_Vertical = 1,
        Orient_MAX = 2
    };

    enum class EMenuPlacement : uint8_t //Enum SlateCore.EMenuPlacement
    {
        MenuPlacement_BelowAnchor = 0,
        MenuPlacement_CenteredBelowAnchor = 1,
        MenuPlacement_BelowRightAnchor = 2,
        MenuPlacement_ComboBox = 3,
        MenuPlacement_ComboBoxRight = 4,
        MenuPlacement_MenuRight = 5,
        MenuPlacement_AboveAnchor = 6,
        MenuPlacement_CenteredAboveAnchor = 7,
        MenuPlacement_AboveRightAnchor = 8,
        MenuPlacement_MenuLeft = 9,
        MenuPlacement_Center = 10,
        MenuPlacement_RightLeftCenter = 11,
        MenuPlacement_MatchBottomLeft = 12,
        MenuPlacement_MAX = 13
    };

    enum class EVerticalAlignment : uint8_t //Enum SlateCore.EVerticalAlignment
    {
        VAlign_Fill = 0,
        VAlign_Top = 1,
        VAlign_Center = 2,
        VAlign_Bottom = 3,
        VAlign_MAX = 4
    };

    enum class EHorizontalAlignment : uint8_t //Enum SlateCore.EHorizontalAlignment
    {
        HAlign_Fill = 0,
        HAlign_Left = 1,
        HAlign_Center = 2,
        HAlign_Right = 3,
        HAlign_MAX = 4
    };

    enum class ENavigationGenesis : uint8_t //Enum SlateCore.ENavigationGenesis
    {
        Keyboard = 0,
        Controller = 1,
        User = 2,
        ENavigationGenesis_MAX = 3
    };

    enum class ENavigationSource : uint8_t //Enum SlateCore.ENavigationSource
    {
        FocusedWidget = 0,
        WidgetUnderCursor = 1,
        ENavigationSource_MAX = 2
    };

    enum class EUINavigationAction : uint8_t //Enum SlateCore.EUINavigationAction
    {
        Accept = 0,
        Back = 1,
        Num = 2,
        Invalid = 3,
        EUINavigationAction_MAX = 4
    };

    enum class EUINavigation : uint8_t //Enum SlateCore.EUINavigation
    {
        Left = 0,
        Right = 1,
        Up = 2,
        Down = 3,
        Next = 4,
        Previous = 5,
        Num = 6,
        Invalid = 7,
        EUINavigation_MAX = 8
    };

    enum class EButtonPressMethod : uint8_t //Enum SlateCore.EButtonPressMethod
    {
        DownAndUp = 0,
        ButtonPress = 1,
        ButtonRelease = 2,
        EButtonPressMethod_MAX = 3
    };

    enum class EButtonTouchMethod : uint8_t //Enum SlateCore.EButtonTouchMethod
    {
        DownAndUp = 0,
        Down = 1,
        PreciseTap = 2,
        EButtonTouchMethod_MAX = 3
    };

    enum class EButtonClickMethod : uint8_t //Enum SlateCore.EButtonClickMethod
    {
        DownAndUp = 0,
        MouseDown = 1,
        MouseUp = 2,
        PreciseClick = 3,
        EButtonClickMethod_MAX = 4
    };

    enum class ECheckBoxState : uint8_t //Enum SlateCore.ECheckBoxState
    {
        Unchecked = 0,
        Checked = 1,
        Undetermined = 2,
        ECheckBoxState_MAX = 3
    };

    enum class ESlateCheckBoxType : uint8_t //Enum SlateCore.ESlateCheckBoxType
    {
        CheckBox = 0,
        ToggleButton = 1,
        ESlateCheckBoxType_MAX = 2
    };

    enum class ESlateParentWindowSearchMethod : uint8_t //Enum SlateCore.ESlateParentWindowSearchMethod
    {
        ActiveWindow = 0,
        MainWindow = 1,
        ESlateParentWindowSearchMethod_MAX = 2
    };

    enum class EConsumeMouseWheel : uint8_t //Enum SlateCore.EConsumeMouseWheel
    {
        WhenScrollingPossible = 0,
        Always = 1,
        Never = 2,
        EConsumeMouseWheel_MAX = 3
    };

    enum class EBitmapCSType : uint32_t //Enum ImageWrapper.EBitmapCSType
    {
        BCST_BLCS_CALIBRATED_RGB = 0,
        BCST_LCS_sRGB = 1934772034,
        BCST_LCS_WINDOWS_COLOR_SPACE = 1466527264,
        BCST_PROFILE_LINKED = 1279872587,
        BCST_PROFILE_EMBEDDED = 1296188740,
        BCST_MAX = 1934772035
    };

    enum class EBitmapHeaderVersion : uint8_t //Enum ImageWrapper.EBitmapHeaderVersion
    {
        BHV_BITMAPINFOHEADER = 0,
        BHV_BITMAPV2INFOHEADER = 1,
        BHV_BITMAPV3INFOHEADER = 2,
        BHV_BITMAPV4HEADER = 3,
        BHV_BITMAPV5HEADER = 4,
        BHV_MAX = 5
    };

    enum class EVirtualKeyboardDismissAction : uint8_t //Enum Slate.EVirtualKeyboardDismissAction
    {
        TextChangeOnDismiss = 0,
        TextCommitOnAccept = 1,
        TextCommitOnDismiss = 2,
        EVirtualKeyboardDismissAction_MAX = 3
    };

    enum class EVirtualKeyboardTrigger : uint8_t //Enum Slate.EVirtualKeyboardTrigger
    {
        OnFocusByPointer = 0,
        OnAllFocusEvents = 1,
        EVirtualKeyboardTrigger_MAX = 2
    };

    enum class ETableViewMode : uint8_t //Enum Slate.ETableViewMode
    {
        List = 0,
        Tile = 1,
        Tree = 2,
        ETableViewMode_MAX = 3
    };

    enum class ESelectionMode : uint8_t //Enum Slate.ESelectionMode
    {
        None = 0,
        Single = 1,
        SingleToggle = 2,
        Multi = 3,
        ESelectionMode_MAX = 4
    };

    enum class EMultiBlockType : uint8_t //Enum Slate.EMultiBlockType
    {
        None = 0,
        ButtonRow = 1,
        EditableText = 2,
        Heading = 3,
        MenuEntry = 4,
        MenuSeparator = 5,
        ToolBarButton = 6,
        ToolBarComboButton = 7,
        ToolBarSeparator = 8,
        Widget = 9,
        EMultiBlockType_MAX = 10
    };

    enum class EMultiBoxType : uint8_t //Enum Slate.EMultiBoxType
    {
        MenuBar = 0,
        ToolBar = 1,
        VerticalToolBar = 2,
        UniformToolBar = 3,
        Menu = 4,
        ButtonRow = 5,
        ToolMenuBar = 6,
        EMultiBoxType_MAX = 7
    };

    enum class EProgressBarFillType : uint8_t //Enum Slate.EProgressBarFillType
    {
        LeftToRight = 0,
        RightToLeft = 1,
        FillFromCenter = 2,
        TopToBottom = 3,
        BottomToTop = 4,
        EProgressBarFillType_MAX = 5
    };

    enum class EStretch : uint8_t //Enum Slate.EStretch
    {
        None = 0,
        Fill = 1,
        ScaleToFit = 2,
        ScaleToFitX = 3,
        ScaleToFitY = 4,
        ScaleToFill = 5,
        ScaleBySafeZone = 6,
        UserSpecified = 7,
        EStretch_MAX = 8
    };

    enum class EStretchDirection : uint8_t //Enum Slate.EStretchDirection
    {
        Both = 0,
        DownOnly = 1,
        UpOnly = 2,
        EStretchDirection_MAX = 3
    };

    enum class EScrollWhenFocusChanges : uint8_t //Enum Slate.EScrollWhenFocusChanges
    {
        NoScroll = 0,
        InstantScroll = 1,
        AnimatedScroll = 2,
        EScrollWhenFocusChanges_MAX = 3
    };

    enum class EDescendantScrollDestination : uint8_t //Enum Slate.EDescendantScrollDestination
    {
        IntoView = 0,
        TopOrLeft = 1,
        Center = 2,
        EDescendantScrollDestination_MAX = 3
    };

    enum class EListItemAlignment : uint8_t //Enum Slate.EListItemAlignment
    {
        EvenlyDistributed = 0,
        EvenlySize = 1,
        EvenlyWide = 2,
        LeftAligned = 3,
        RightAligned = 4,
        CenterAligned = 5,
        Fill = 6,
        EListItemAlignment_MAX = 7
    };

    enum class ETextFlowDirection : uint8_t //Enum Slate.ETextFlowDirection
    {
        Auto = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ETextFlowDirection_MAX = 3
    };

    enum class ETextWrappingPolicy : uint8_t //Enum Slate.ETextWrappingPolicy
    {
        DefaultWrapping = 0,
        AllowPerCharacterWrapping = 1,
        ETextWrappingPolicy_MAX = 2
    };

    enum class ETextJustify : uint8_t //Enum Slate.ETextJustify
    {
        Left = 0,
        Center = 1,
        Right = 2,
        ETextJustify_MAX = 3
    };

    enum class ECustomizedToolMenuVisibility : uint8_t //Enum Slate.ECustomizedToolMenuVisibility
    {
        None = 0,
        Visible = 1,
        Hidden = 2,
        ECustomizedToolMenuVisibility_MAX = 3
    };

    enum class EMultipleKeyBindingIndex : uint8_t //Enum Slate.EMultipleKeyBindingIndex
    {
        Primary = 0,
        Secondary = 1,
        NumChords = 2,
        EMultipleKeyBindingIndex_MAX = 3
    };

    enum class EUserInterfaceActionType : uint8_t //Enum Slate.EUserInterfaceActionType
    {
        None = 0,
        Button = 1,
        ToggleButton = 2,
        RadioButton = 3,
        Check = 4,
        CollapsedButton = 5,
        EUserInterfaceActionType_MAX = 6
    };

    enum class EDesiredImageFormat : uint8_t //Enum ImageWriteQueue.EDesiredImageFormat
    {
        PNG = 0,
        JPG = 1,
        BMP = 2,
        EXR = 3,
        EDesiredImageFormat_MAX = 4
    };

    enum class EMobileCSMQuality : uint8_t //Enum MaterialShaderQualitySettings.EMobileCSMQuality
    {
        NoFiltering = 0,
        PCF_1x1 = 1,
        PCF_2x2 = 2,
        PCF_3x3 = 3,
        EMobileCSMQuality_MAX = 4
    };

    enum class ESubLevelStripMode : uint8_t //Enum EngineSettings.ESubLevelStripMode
    {
        ExactClass = 0,
        IsChildOf = 1,
        ESubLevelStripMode_MAX = 2
    };

    enum class EFourPlayerSplitScreenType : uint8_t //Enum EngineSettings.EFourPlayerSplitScreenType
    {
        Grid = 0,
        Vertical = 1,
        Horizontal = 2,
        EFourPlayerSplitScreenType_MAX = 3
    };

    enum class EThreePlayerSplitScreenType : uint8_t //Enum EngineSettings.EThreePlayerSplitScreenType
    {
        FavorTop = 0,
        FavorBottom = 1,
        Vertical = 2,
        Horizontal = 3,
        EThreePlayerSplitScreenType_MAX = 4
    };

    enum class ETwoPlayerSplitScreenType : uint8_t //Enum EngineSettings.ETwoPlayerSplitScreenType
    {
        Horizontal = 0,
        Vertical = 1,
        ETwoPlayerSplitScreenType_MAX = 2
    };

    enum class EFieldPhysicsDefaultFields : uint8_t //Enum FieldSystemCore.EFieldPhysicsDefaultFields
    {
        Field_RadialIntMask = 0,
        Field_RadialFalloff = 1,
        Field_UniformVector = 2,
        Field_RadialVector = 3,
        Field_RadialVectorFalloff = 4,
        Field_EFieldPhysicsDefaultFields_Max = 5,
        Field_MAX = 6
    };

    enum class EFieldPhysicsType : uint8_t //Enum FieldSystemCore.EFieldPhysicsType
    {
        Field_None = 0,
        Field_DynamicState = 1,
        Field_LinearForce = 2,
        Field_ExternalClusterStrain = 3,
        Field_Kill = 4,
        Field_LinearVelocity = 5,
        Field_AngularVelociy = 6,
        Field_AngularTorque = 7,
        Field_InternalClusterStrain = 8,
        Field_DisableThreshold = 9,
        Field_SleepingThreshold = 10,
        Field_PositionStatic = 11,
        Field_PositionAnimated = 12,
        Field_PositionTarget = 13,
        Field_DynamicConstraint = 14,
        Field_CollisionGroup = 15,
        Field_ActivateDisabled = 16,
        Field_PhysicsType_Max = 17
    };

    enum class EFieldFalloffType : uint8_t //Enum FieldSystemCore.EFieldFalloffType
    {
        Field_FallOff_None = 0,
        Field_Falloff_Linear = 1,
        Field_Falloff_Inverse = 2,
        Field_Falloff_Squared = 3,
        Field_Falloff_Logarithmic = 4,
        Field_Falloff_Max = 5
    };

    enum class EFieldResolutionType : uint8_t //Enum FieldSystemCore.EFieldResolutionType
    {
        Field_Resolution_Minimal = 0,
        Field_Resolution_DisabledParents = 1,
        Field_Resolution_Maximum = 2,
        Field_Resolution_Max = 3
    };

    enum class EFieldCullingOperationType : uint8_t //Enum FieldSystemCore.EFieldCullingOperationType
    {
        Field_Culling_Inside = 0,
        Field_Culling_Outside = 1,
        Field_Culling_Operation_Max = 2,
        Field_Culling_MAX = 3
    };

    enum class EFieldOperationType : uint8_t //Enum FieldSystemCore.EFieldOperationType
    {
        Field_Multiply = 0,
        Field_Divide = 1,
        Field_Add = 2,
        Field_Substract = 3,
        Field_Operation_Max = 4
    };

    enum class ESetMaskConditionType : uint8_t //Enum FieldSystemCore.ESetMaskConditionType
    {
        Field_Set_Always = 0,
        Field_Set_IFF_NOT_Interior = 1,
        Field_Set_IFF_NOT_Exterior = 2,
        Field_MaskCondition_Max = 3
    };

    enum class EChaosBufferMode : uint8_t //Enum PhysicsCore.EChaosBufferMode
    {
        Double = 0,
        Triple = 1,
        Num = 2,
        Invalid = 3,
        EChaosBufferMode_MAX = 4
    };

    enum class EChaosThreadingMode : uint8_t //Enum PhysicsCore.EChaosThreadingMode
    {
        DedicatedThread = 0,
        TaskGraph = 1,
        SingleThread = 2,
        Num = 3,
        Invalid = 4,
        EChaosThreadingMode_MAX = 5
    };

    enum class EChaosSolverTickMode : uint8_t //Enum PhysicsCore.EChaosSolverTickMode
    {
        Fixed = 0,
        Variable = 1,
        VariableCapped = 2,
        VariableCappedWithTarget = 3,
        EChaosSolverTickMode_MAX = 4
    };

    enum class EMeshTrackerVertexColorMode : uint8_t //Enum MRMesh.EMeshTrackerVertexColorMode
    {
        None = 0,
        Confidence = 1,
        Block = 2,
        EMeshTrackerVertexColorMode_MAX = 3
    };

    enum class EARTrackingState : uint8_t //Enum AugmentedReality.EARTrackingState
    {
        Unknown = 0,
        Tracking = 1,
        NotTracking = 2,
        StoppedTracking = 3,
        EARTrackingState_MAX = 4
    };

    enum class EARSessionTrackingFeature : uint8_t //Enum AugmentedReality.EARSessionTrackingFeature
    {
        None = 0,
        PoseDetection2D = 1,
        PersonSegmentation = 2,
        PersonSegmentationWithDepth = 3,
        EARSessionTrackingFeature_MAX = 4
    };

    enum class EARFaceTrackingUpdate : uint8_t //Enum AugmentedReality.EARFaceTrackingUpdate
    {
        CurvesAndGeo = 0,
        CurvesOnly = 1,
        EARFaceTrackingUpdate_MAX = 2
    };

    enum class EAREnvironmentCaptureProbeType : uint8_t //Enum AugmentedReality.EAREnvironmentCaptureProbeType
    {
        None = 0,
        Manual = 1,
        Automatic = 2,
        EAREnvironmentCaptureProbeType_MAX = 3
    };

    enum class EARFrameSyncMode : uint8_t //Enum AugmentedReality.EARFrameSyncMode
    {
        SyncTickWithCameraImage = 0,
        SyncTickWithoutCameraImage = 1,
        EARFrameSyncMode_MAX = 2
    };

    enum class EARLightEstimationMode : uint8_t //Enum AugmentedReality.EARLightEstimationMode
    {
        None = 0,
        AmbientLightEstimate = 1,
        DirectionalLightEstimate = 2,
        EARLightEstimationMode_MAX = 3
    };

    enum class EARPlaneDetectionMode : uint8_t //Enum AugmentedReality.EARPlaneDetectionMode
    {
        None = 0,
        HorizontalPlaneDetection = 1,
        VerticalPlaneDetection = 2,
        EARPlaneDetectionMode_MAX = 3
    };

    enum class EARSessionType : uint8_t //Enum AugmentedReality.EARSessionType
    {
        None = 0,
        Orientation = 1,
        World = 2,
        Face = 3,
        Image = 4,
        ObjectScanning = 5,
        PoseTracking = 6,
        EARSessionType_MAX = 7
    };

    enum class EARWorldAlignment : uint8_t //Enum AugmentedReality.EARWorldAlignment
    {
        Gravity = 0,
        GravityAndHeading = 1,
        Camera = 2,
        EARWorldAlignment_MAX = 3
    };

    enum class EARDepthAccuracy : uint8_t //Enum AugmentedReality.EARDepthAccuracy
    {
        Unkown = 0,
        Approximate = 1,
        Accurate = 2,
        EARDepthAccuracy_MAX = 3
    };

    enum class EARDepthQuality : uint8_t //Enum AugmentedReality.EARDepthQuality
    {
        Unkown = 0,
        Low = 1,
        High = 2,
        EARDepthQuality_MAX = 3
    };

    enum class EARTextureType : uint8_t //Enum AugmentedReality.EARTextureType
    {
        CameraImage = 0,
        CameraDepth = 1,
        EnvironmentCapture = 2,
        EARTextureType_MAX = 3
    };

    enum class EAREye : uint8_t //Enum AugmentedReality.EAREye
    {
        LeftEye = 0,
        RightEye = 1,
        EAREye_MAX = 2
    };

    enum class EARFaceBlendShape : uint8_t //Enum AugmentedReality.EARFaceBlendShape
    {
        EyeBlinkLeft = 0,
        EyeLookDownLeft = 1,
        EyeLookInLeft = 2,
        EyeLookOutLeft = 3,
        EyeLookUpLeft = 4,
        EyeSquintLeft = 5,
        EyeWideLeft = 6,
        EyeBlinkRight = 7,
        EyeLookDownRight = 8,
        EyeLookInRight = 9,
        EyeLookOutRight = 10,
        EyeLookUpRight = 11,
        EyeSquintRight = 12,
        EyeWideRight = 13,
        JawForward = 14,
        JawLeft = 15,
        JawRight = 16,
        JawOpen = 17,
        MouthClose = 18,
        MouthFunnel = 19,
        MouthPucker = 20,
        MouthLeft = 21,
        MouthRight = 22,
        MouthSmileLeft = 23,
        MouthSmileRight = 24,
        MouthFrownLeft = 25,
        MouthFrownRight = 26,
        MouthDimpleLeft = 27,
        MouthDimpleRight = 28,
        MouthStretchLeft = 29,
        MouthStretchRight = 30,
        MouthRollLower = 31,
        MouthRollUpper = 32,
        MouthShrugLower = 33,
        MouthShrugUpper = 34,
        MouthPressLeft = 35,
        MouthPressRight = 36,
        MouthLowerDownLeft = 37,
        MouthLowerDownRight = 38,
        MouthUpperUpLeft = 39,
        MouthUpperUpRight = 40,
        BrowDownLeft = 41,
        BrowDownRight = 42,
        BrowInnerUp = 43,
        BrowOuterUpLeft = 44,
        BrowOuterUpRight = 45,
        CheekPuff = 46,
        CheekSquintLeft = 47,
        CheekSquintRight = 48,
        NoseSneerLeft = 49,
        NoseSneerRight = 50,
        TongueOut = 51,
        HeadYaw = 52,
        HeadPitch = 53,
        HeadRoll = 54,
        LeftEyeYaw = 55,
        LeftEyePitch = 56,
        LeftEyeRoll = 57,
        RightEyeYaw = 58,
        RightEyePitch = 59,
        RightEyeRoll = 60,
        MAX = 61
    };

    enum class EARFaceTrackingDirection : uint8_t //Enum AugmentedReality.EARFaceTrackingDirection
    {
        FaceRelative = 0,
        FaceMirrored = 1,
        EARFaceTrackingDirection_MAX = 2
    };

    enum class EARCandidateImageOrientation : uint8_t //Enum AugmentedReality.EARCandidateImageOrientation
    {
        Landscape = 0,
        Portrait = 1,
        EARCandidateImageOrientation_MAX = 2
    };

    enum class EARJointTransformSpace : uint8_t //Enum AugmentedReality.EARJointTransformSpace
    {
        Model = 0,
        ParentJoint = 1,
        EARJointTransformSpace_MAX = 2
    };

    enum class EARObjectClassification : uint8_t //Enum AugmentedReality.EARObjectClassification
    {
        NotApplicable = 0,
        Unknown = 1,
        Wall = 2,
        Ceiling = 3,
        Floor = 4,
        Table = 5,
        Seat = 6,
        Face = 7,
        Image = 8,
        World = 9,
        SceneObject = 10,
        HandMesh = 11,
        EARObjectClassification_MAX = 12
    };

    enum class EARPlaneOrientation : uint8_t //Enum AugmentedReality.EARPlaneOrientation
    {
        Horizontal = 0,
        Vertical = 1,
        Diagonal = 2,
        EARPlaneOrientation_MAX = 3
    };

    enum class EARWorldMappingState : uint8_t //Enum AugmentedReality.EARWorldMappingState
    {
        NotAvailable = 0,
        StillMappingNotRelocalizable = 1,
        StillMappingRelocalizable = 2,
        Mapped = 3,
        EARWorldMappingState_MAX = 4
    };

    enum class EARSessionStatus : uint8_t //Enum AugmentedReality.EARSessionStatus
    {
        NotStarted = 0,
        Running = 1,
        NotSupported = 2,
        FatalError = 3,
        PermissionNotGranted = 4,
        UnsupportedConfiguration = 5,
        Other = 6,
        EARSessionStatus_MAX = 7
    };

    enum class EARTrackingQualityReason : uint8_t //Enum AugmentedReality.EARTrackingQualityReason
    {
        None = 0,
        Initializing = 1,
        Relocalizing = 2,
        ExcessiveMotion = 3,
        InsufficientFeatures = 4,
        EARTrackingQualityReason_MAX = 5
    };

    enum class EARTrackingQuality : uint8_t //Enum AugmentedReality.EARTrackingQuality
    {
        NotTracking = 0,
        OrientationOnly = 1,
        OrientationAndPosition = 2,
        EARTrackingQuality_MAX = 3
    };

    enum class EARLineTraceChannels : uint8_t //Enum AugmentedReality.EARLineTraceChannels
    {
        None = 0,
        FeaturePoint = 1,
        GroundPlane = 2,
        PlaneUsingExtent = 4,
        PlaneUsingBoundaryPolygon = 8,
        EARLineTraceChannels_MAX = 9
    };

    enum class EXRTrackedDeviceType : uint32_t //Enum HeadMountedDisplay.EXRTrackedDeviceType
    {
        HeadMountedDisplay = 0,
        Controller = 1,
        TrackingReference = 2,
        Other = 3,
        Invalid = 254,
        Any = 255,
        EXRTrackedDeviceType_MAX = 256
    };

    enum class ESpectatorScreenMode : uint8_t //Enum HeadMountedDisplay.ESpectatorScreenMode
    {
        Disabled = 0,
        SingleEyeLetterboxed = 1,
        Undistorted = 2,
        Distorted = 3,
        SingleEye = 4,
        SingleEyeCroppedToFill = 5,
        Texture = 6,
        TexturePlusEye = 7,
        ESpectatorScreenMode_MAX = 8
    };

    enum class EHMDWornState : uint8_t //Enum HeadMountedDisplay.EHMDWornState
    {
        Unknown = 0,
        Worn = 1,
        NotWorn = 2,
        EHMDWornState_MAX = 3
    };

    enum class EHMDTrackingOrigin : uint8_t //Enum HeadMountedDisplay.EHMDTrackingOrigin
    {
        Floor = 0,
        Eye = 1,
        Stage = 2,
        EHMDTrackingOrigin_MAX = 3
    };

    enum class EOrientPositionSelector : uint8_t //Enum HeadMountedDisplay.EOrientPositionSelector
    {
        Orientation = 0,
        Position = 1,
        OrientationAndPosition = 2,
        EOrientPositionSelector_MAX = 3
    };

    enum class ETrackingStatus : uint8_t //Enum HeadMountedDisplay.ETrackingStatus
    {
        NotTracked = 0,
        InertialOnly = 1,
        Tracked = 2,
        ETrackingStatus_MAX = 3
    };

    enum class EFoliageScaling : uint8_t //Enum Foliage.EFoliageScaling
    {
        Uniform = 0,
        Free = 1,
        LockXY = 2,
        LockXZ = 3,
        LockYZ = 4,
        EFoliageScaling_MAX = 5
    };

    enum class EVertexColorMaskChannel : uint8_t //Enum Foliage.EVertexColorMaskChannel
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        MAX_None = 4,
        EVertexColorMaskChannel_MAX = 5
    };

    enum class FoliageVertexColorMask : uint8_t //Enum Foliage.FoliageVertexColorMask
    {
        FOLIAGEVERTEXCOLORMASK_Disabled = 0,
        FOLIAGEVERTEXCOLORMASK_Red = 1,
        FOLIAGEVERTEXCOLORMASK_Green = 2,
        FOLIAGEVERTEXCOLORMASK_Blue = 3,
        FOLIAGEVERTEXCOLORMASK_Alpha = 4,
        FOLIAGEVERTEXCOLORMASK_MAX = 5
    };

    enum class ESimulationQuery : uint8_t //Enum Foliage.ESimulationQuery
    {
        None = 0,
        CollisionOverlap = 1,
        ShadeOverlap = 2,
        AnyOverlap = 3,
        ESimulationQuery_MAX = 4
    };

    enum class ESimulationOverlap : uint8_t //Enum Foliage.ESimulationOverlap
    {
        CollisionOverlap = 0,
        ShadeOverlap = 1,
        None = 2,
        ESimulationOverlap_MAX = 3
    };

    enum class ELandscapeBlendMode : uint8_t //Enum Landscape.ELandscapeBlendMode
    {
        LSBM_AdditiveBlend = 0,
        LSBM_AlphaBlend = 1,
        LSBM_MAX = 2
    };

    enum class ELandscapeSetupErrors : uint8_t //Enum Landscape.ELandscapeSetupErrors
    {
        LSE_None = 0,
        LSE_NoLandscapeInfo = 1,
        LSE_CollsionXY = 2,
        LSE_NoLayerInfo = 3,
        LSE_MAX = 4
    };

    enum class ELandscapeClearMode : uint8_t //Enum Landscape.ELandscapeClearMode
    {
        Clear_Weightmap = 1,
        Clear_Heightmap = 2,
        Clear_All = 3,
        Clear_MAX = 4
    };

    enum class ELandscapeGizmoType : uint8_t //Enum Landscape.ELandscapeGizmoType
    {
        LGT_None = 0,
        LGT_Height = 1,
        LGT_Weight = 2,
        LGT_MAX = 3
    };

    enum class EGrassScaling : uint8_t //Enum Landscape.EGrassScaling
    {
        Uniform = 0,
        Free = 1,
        LockXY = 2,
        EGrassScaling_MAX = 3
    };

    enum class ESplineModulationColorMask : uint8_t //Enum Landscape.ESplineModulationColorMask
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        ESplineModulationColorMask_MAX = 4
    };

    enum class ELandscapeLODFalloff : uint8_t //Enum Landscape.ELandscapeLODFalloff
    {
        Linear = 0,
        SquareRoot = 1,
        ELandscapeLODFalloff_MAX = 2
    };

    enum class ELandscapeLayerDisplayMode : uint8_t //Enum Landscape.ELandscapeLayerDisplayMode
    {
        Default = 0,
        Alphabetical = 1,
        UserSpecific = 2,
        ELandscapeLayerDisplayMode_MAX = 3
    };

    enum class ELandscapeLayerPaintingRestriction : uint8_t //Enum Landscape.ELandscapeLayerPaintingRestriction
    {
        None = 0,
        UseMaxLayers = 1,
        ExistingOnly = 2,
        UseComponentWhitelist = 3,
        ELandscapeLayerPaintingRestriction_MAX = 4
    };

    enum class ELandscapeImportAlphamapType : uint8_t //Enum Landscape.ELandscapeImportAlphamapType
    {
        Additive = 0,
        Layered = 1,
        ELandscapeImportAlphamapType_MAX = 2
    };

    enum class LandscapeSplineMeshOrientation : uint8_t //Enum Landscape.LandscapeSplineMeshOrientation
    {
        LSMO_XUp = 0,
        LSMO_YUp = 1,
        LSMO_MAX = 2
    };

    enum class ELandscapeLayerBlendType : uint8_t //Enum Landscape.ELandscapeLayerBlendType
    {
        LB_WeightBlend = 0,
        LB_AlphaBlend = 1,
        LB_HeightBlend = 2,
        LB_MAX = 3
    };

    enum class ELandscapeCustomizedCoordType : uint8_t //Enum Landscape.ELandscapeCustomizedCoordType
    {
        LCCT_None = 0,
        LCCT_CustomUV0 = 1,
        LCCT_CustomUV1 = 2,
        LCCT_CustomUV2 = 3,
        LCCT_WeightMapUV = 4,
        LCCT_MAX = 5
    };

    enum class ETerrainCoordMappingType : uint8_t //Enum Landscape.ETerrainCoordMappingType
    {
        TCMT_Auto = 0,
        TCMT_XY = 1,
        TCMT_XZ = 2,
        TCMT_YZ = 3,
        TCMT_MAX = 4
    };

    enum class EFrameNumberDisplayFormats : uint8_t //Enum TimeManagement.EFrameNumberDisplayFormats
    {
        NonDropFrameTimecode = 0,
        DropFrameTimecode = 1,
        Seconds = 2,
        Frames = 3,
        MAX_Count = 4,
        EFrameNumberDisplayFormats_MAX = 5
    };

    enum class ETimedDataInputState : uint8_t //Enum TimeManagement.ETimedDataInputState
    {
        Connected = 0,
        Unresponsive = 1,
        Disconnected = 2,
        ETimedDataInputState_MAX = 3
    };

    enum class ETimedDataInputEvaluationType : uint8_t //Enum TimeManagement.ETimedDataInputEvaluationType
    {
        None = 0,
        Timecode = 1,
        PlatformTime = 2,
        ETimedDataInputEvaluationType_MAX = 3
    };

    enum class EMovieSceneKeyInterpolation : uint8_t //Enum MovieScene.EMovieSceneKeyInterpolation
    {
        Auto = 0,
        User = 1,
        Break = 2,
        Linear = 3,
        Constant = 4,
        EMovieSceneKeyInterpolation_MAX = 5
    };

    enum class EMovieSceneBlendType : uint8_t //Enum MovieScene.EMovieSceneBlendType
    {
        Invalid = 0,
        Absolute = 1,
        Additive = 2,
        Relative = 4,
        EMovieSceneBlendType_MAX = 5
    };

    enum class EMovieSceneBuiltInEasing : uint8_t //Enum MovieScene.EMovieSceneBuiltInEasing
    {
        Linear = 0,
        SinIn = 1,
        SinOut = 2,
        SinInOut = 3,
        QuadIn = 4,
        QuadOut = 5,
        QuadInOut = 6,
        CubicIn = 7,
        CubicOut = 8,
        CubicInOut = 9,
        QuartIn = 10,
        QuartOut = 11,
        QuartInOut = 12,
        QuintIn = 13,
        QuintOut = 14,
        QuintInOut = 15,
        ExpoIn = 16,
        ExpoOut = 17,
        ExpoInOut = 18,
        CircIn = 19,
        CircOut = 20,
        CircInOut = 21,
        EMovieSceneBuiltInEasing_MAX = 22
    };

    enum class EEvaluationMethod : uint8_t //Enum MovieScene.EEvaluationMethod
    {
        Static = 0,
        Swept = 1,
        EEvaluationMethod_MAX = 2
    };

    enum class EUpdateClockSource : uint8_t //Enum MovieScene.EUpdateClockSource
    {
        Tick = 0,
        Platform = 1,
        Audio = 2,
        RelativeTimecode = 3,
        Timecode = 4,
        Custom = 5,
        EUpdateClockSource_MAX = 6
    };

    enum class EMovieSceneEvaluationType : uint8_t //Enum MovieScene.EMovieSceneEvaluationType
    {
        FrameLocked = 0,
        WithSubFrames = 1,
        EMovieSceneEvaluationType_MAX = 2
    };

    enum class EMovieScenePlayerStatus : uint8_t //Enum MovieScene.EMovieScenePlayerStatus
    {
        Stopped = 0,
        Playing = 1,
        Recording = 2,
        Scrubbing = 3,
        Jumping = 4,
        Stepping = 5,
        Paused = 6,
        MAX = 7
    };

    enum class EMovieSceneObjectBindingSpace : uint8_t //Enum MovieScene.EMovieSceneObjectBindingSpace
    {
        Local = 0,
        Root = 1,
        EMovieSceneObjectBindingSpace_MAX = 2
    };

    enum class EMovieSceneCompletionMode : uint8_t //Enum MovieScene.EMovieSceneCompletionMode
    {
        KeepState = 0,
        RestoreState = 1,
        ProjectDefault = 2,
        EMovieSceneCompletionMode_MAX = 3
    };

    enum class ESectionEvaluationFlags : uint8_t //Enum MovieScene.ESectionEvaluationFlags
    {
        None = 0,
        PreRoll = 1,
        PostRoll = 2,
        ESectionEvaluationFlags_MAX = 3
    };

    enum class EUpdatePositionMethod : uint8_t //Enum MovieScene.EUpdatePositionMethod
    {
        Play = 0,
        Jump = 1,
        Scrub = 2,
        EUpdatePositionMethod_MAX = 3
    };

    enum class ESpawnOwnership : uint8_t //Enum MovieScene.ESpawnOwnership
    {
        InnerSequence = 0,
        MasterSequence = 1,
        External = 2,
        ESpawnOwnership_MAX = 3
    };

    enum class ETransformConstraintType : uint8_t //Enum AnimationCore.ETransformConstraintType
    {
        Translation = 0,
        Rotation = 1,
        Scale = 2,
        Parent = 3,
        ETransformConstraintType_MAX = 4
    };

    enum class EConstraintType : uint8_t //Enum AnimationCore.EConstraintType
    {
        Transform = 0,
        Aim = 1,
        MAX = 2
    };

    enum class ESphericalLimitType : uint8_t //Enum AnimGraphRuntime.ESphericalLimitType
    {
        Inner = 0,
        Outer = 1,
        ESphericalLimitType_MAX = 2
    };

    enum class AnimPhysSimSpaceType : uint8_t //Enum AnimGraphRuntime.AnimPhysSimSpaceType
    {
        Component = 0,
        Actor = 1,
        World = 2,
        RootRelative = 3,
        BoneRelative = 4,
        AnimPhysSimSpaceType_MAX = 5
    };

    enum class AnimPhysLinearConstraintType : uint8_t //Enum AnimGraphRuntime.AnimPhysLinearConstraintType
    {
        Free = 0,
        Limited = 1,
        AnimPhysLinearConstraintType_MAX = 2
    };

    enum class AnimPhysAngularConstraintType : uint8_t //Enum AnimGraphRuntime.AnimPhysAngularConstraintType
    {
        Angular = 0,
        Cone = 1,
        AnimPhysAngularConstraintType_MAX = 2
    };

    enum class EBlendListTransitionType : uint8_t //Enum AnimGraphRuntime.EBlendListTransitionType
    {
        StandardBlend = 0,
        Inertialization = 1,
        EBlendListTransitionType_MAX = 2
    };

    enum class EDrivenDestinationMode : uint8_t //Enum AnimGraphRuntime.EDrivenDestinationMode
    {
        Bone = 0,
        MorphTarget = 1,
        MaterialParameter = 2,
        EDrivenDestinationMode_MAX = 3
    };

    enum class EDrivenBoneModificationMode : uint8_t //Enum AnimGraphRuntime.EDrivenBoneModificationMode
    {
        AddToInput = 0,
        ReplaceComponent = 1,
        AddToRefPose = 2,
        EDrivenBoneModificationMode_MAX = 3
    };

    enum class EConstraintOffsetOption : uint8_t //Enum AnimGraphRuntime.EConstraintOffsetOption
    {
        None = 0,
        Offset_RefPose = 1,
        EConstraintOffsetOption_MAX = 2
    };

    enum class CopyBoneDeltaMode : uint8_t //Enum AnimGraphRuntime.CopyBoneDeltaMode
    {
        Accumulate = 0,
        Copy = 1,
        CopyBoneDeltaMode_MAX = 2
    };

    enum class EInterpolationBlend : uint8_t //Enum AnimGraphRuntime.EInterpolationBlend
    {
        Linear = 0,
        Cubic = 1,
        Sinusoidal = 2,
        EaseInOutExponent2 = 3,
        EaseInOutExponent3 = 4,
        EaseInOutExponent4 = 5,
        EaseInOutExponent5 = 6,
        MAX = 7
    };

    enum class EBoneModificationMode : uint8_t //Enum AnimGraphRuntime.EBoneModificationMode
    {
        BMM_Ignore = 0,
        BMM_Replace = 1,
        BMM_Additive = 2,
        BMM_MAX = 3
    };

    enum class EModifyCurveApplyMode : uint8_t //Enum AnimGraphRuntime.EModifyCurveApplyMode
    {
        Add = 0,
        Scale = 1,
        Blend = 2,
        WeightedMovingAverage = 3,
        RemapCurve = 4,
        EModifyCurveApplyMode_MAX = 5
    };

    enum class EPoseDriverOutput : uint8_t //Enum AnimGraphRuntime.EPoseDriverOutput
    {
        DrivePoses = 0,
        DriveCurves = 1,
        EPoseDriverOutput_MAX = 2
    };

    enum class EPoseDriverSource : uint8_t //Enum AnimGraphRuntime.EPoseDriverSource
    {
        Rotation = 0,
        Translation = 1,
        EPoseDriverSource_MAX = 2
    };

    enum class EPoseDriverType : uint8_t //Enum AnimGraphRuntime.EPoseDriverType
    {
        SwingAndTwist = 0,
        SwingOnly = 1,
        Translation = 2,
        EPoseDriverType_MAX = 3
    };

    enum class ESnapshotSourceMode : uint8_t //Enum AnimGraphRuntime.ESnapshotSourceMode
    {
        NamedSnapshot = 0,
        SnapshotPin = 1,
        ESnapshotSourceMode_MAX = 2
    };

    enum class ERefPoseType : uint8_t //Enum AnimGraphRuntime.ERefPoseType
    {
        EIT_LocalSpace = 0,
        EIT_Additive = 1,
        EIT_MAX = 2
    };

    enum class ESimulationSpace : uint8_t //Enum AnimGraphRuntime.ESimulationSpace
    {
        ComponentSpace = 0,
        WorldSpace = 1,
        BaseBoneSpace = 2,
        ESimulationSpace_MAX = 3
    };

    enum class EScaleChainInitialLength : uint8_t //Enum AnimGraphRuntime.EScaleChainInitialLength
    {
        FixedDefaultLengthValue = 0,
        Distance = 1,
        ChainLength = 2,
        EScaleChainInitialLength_MAX = 3
    };

    enum class ESequenceEvalReinit : uint8_t //Enum AnimGraphRuntime.ESequenceEvalReinit
    {
        NoReset = 0,
        StartPosition = 1,
        ExplicitTime = 2,
        ESequenceEvalReinit_MAX = 3
    };

    enum class ESplineBoneAxis : uint8_t //Enum AnimGraphRuntime.ESplineBoneAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        ESplineBoneAxis_MAX = 4
    };

    enum class ERotationComponent : uint8_t //Enum AnimGraphRuntime.ERotationComponent
    {
        EulerX = 0,
        EulerY = 1,
        EulerZ = 2,
        QuaternionAngle = 3,
        SwingAngle = 4,
        TwistAngle = 5,
        ERotationComponent_MAX = 6
    };

    enum class EEasingFuncType : uint8_t //Enum AnimGraphRuntime.EEasingFuncType
    {
        Linear = 0,
        Sinusoidal = 1,
        Cubic = 2,
        QuadraticInOut = 3,
        CubicInOut = 4,
        HermiteCubic = 5,
        QuarticInOut = 6,
        QuinticInOut = 7,
        CircularIn = 8,
        CircularOut = 9,
        CircularInOut = 10,
        ExpIn = 11,
        ExpOut = 12,
        ExpInOut = 13,
        CustomCurve = 14,
        EEasingFuncType_MAX = 15
    };

    enum class ERBFNormalizeMethod : uint8_t //Enum AnimGraphRuntime.ERBFNormalizeMethod
    {
        OnlyNormalizeAboveOne = 0,
        AlwaysNormalize = 1,
        NormalizeWithinMedian = 2,
        NoNormalization = 3,
        ERBFNormalizeMethod_MAX = 4
    };

    enum class ERBFDistanceMethod : uint8_t //Enum AnimGraphRuntime.ERBFDistanceMethod
    {
        Euclidean = 0,
        Quaternion = 1,
        SwingAngle = 2,
        TwistAngle = 3,
        DefaultMethod = 4,
        ERBFDistanceMethod_MAX = 5
    };

    enum class ERBFFunctionType : uint8_t //Enum AnimGraphRuntime.ERBFFunctionType
    {
        Gaussian = 0,
        Exponential = 1,
        Linear = 2,
        Cubic = 3,
        Quintic = 4,
        DefaultFunction = 5,
        ERBFFunctionType_MAX = 6
    };

    enum class ERBFSolverType : uint8_t //Enum AnimGraphRuntime.ERBFSolverType
    {
        Additive = 0,
        Interpolative = 1,
        ERBFSolverType_MAX = 2
    };

    enum class MovieScene3DPathSection_Axis : uint8_t //Enum MovieSceneTracks.MovieScene3DPathSection_Axis
    {
        X = 0,
        Y = 1,
        Z = 2,
        NEG_X = 3,
        NEG_Y = 4,
        NEG_Z = 5,
        MovieScene3DPathSection_MAX = 6
    };

    enum class EFireEventsAtPosition : uint8_t //Enum MovieSceneTracks.EFireEventsAtPosition
    {
        AtStartOfEvaluation = 0,
        AtEndOfEvaluation = 1,
        AfterSpawn = 2,
        EFireEventsAtPosition_MAX = 3
    };

    enum class ELevelVisibility : uint8_t //Enum MovieSceneTracks.ELevelVisibility
    {
        Visible = 0,
        Hidden = 1,
        ELevelVisibility_MAX = 2
    };

    enum class EParticleKey : uint8_t //Enum MovieSceneTracks.EParticleKey
    {
        Activate = 0,
        Deactivate = 1,
        Trigger = 2,
        EParticleKey_MAX = 3
    };

    enum class ESlateAccessibleBehavior : uint8_t //Enum UMG.ESlateAccessibleBehavior
    {
        NotAccessible = 0,
        Auto = 1,
        Summary = 2,
        Custom = 3,
        ToolTip = 4,
        ESlateAccessibleBehavior_MAX = 5
    };

    enum class ESlateVisibility : uint8_t //Enum UMG.ESlateVisibility
    {
        Visible = 0,
        Collapsed = 1,
        Hidden = 2,
        HitTestInvisible = 3,
        SelfHitTestInvisible = 4,
        ESlateVisibility_MAX = 5
    };

    enum class EMouseLockMode : uint8_t //Enum Engine.EMouseLockMode
    {
        DoNotLock = 0,
        LockOnCapture = 1,
        LockAlways = 2,
        LockInFullscreen = 3,
        EMouseLockMode_MAX = 4
    };

    enum class EWindowTitleBarMode : uint8_t //Enum Engine.EWindowTitleBarMode
    {
        Overlay = 0,
        VerticalBox = 1,
        EWindowTitleBarMode_MAX = 2
    };

    enum class EVirtualKeyboardType : uint8_t //Enum UMG.EVirtualKeyboardType
    {
        Default = 0,
        Number = 1,
        Web = 2,
        Email = 3,
        Password = 4,
        AlphaNumeric = 5,
        EVirtualKeyboardType_MAX = 6
    };

    enum class EDragPivot : uint8_t //Enum UMG.EDragPivot
    {
        MouseDown = 0,
        TopLeft = 1,
        TopCenter = 2,
        TopRight = 3,
        CenterLeft = 4,
        CenterCenter = 5,
        CenterRight = 6,
        BottomLeft = 7,
        BottomCenter = 8,
        BottomRight = 9,
        EDragPivot_MAX = 10
    };

    enum class EDynamicBoxType : uint8_t //Enum UMG.EDynamicBoxType
    {
        Horizontal = 0,
        Vertical = 1,
        Wrap = 2,
        Overlay = 3,
        EDynamicBoxType_MAX = 4
    };

    enum class ESlateSizeRule : uint8_t //Enum UMG.ESlateSizeRule
    {
        Automatic = 0,
        Fill = 1,
        ESlateSizeRule_MAX = 2
    };

    enum class EUMGSequencePlayMode : uint8_t //Enum UMG.EUMGSequencePlayMode
    {
        Forward = 0,
        Reverse = 1,
        PingPong = 2,
        EUMGSequencePlayMode_MAX = 3
    };

    enum class EWidgetAnimationEvent : uint8_t //Enum UMG.EWidgetAnimationEvent
    {
        Started = 0,
        Finished = 1,
        EWidgetAnimationEvent_MAX = 2
    };

    enum class EWidgetTickFrequency : uint8_t //Enum UMG.EWidgetTickFrequency
    {
        Never = 0,
        Auto = 1,
        EWidgetTickFrequency_MAX = 2
    };

    enum class EWidgetDesignFlags : uint8_t //Enum UMG.EWidgetDesignFlags
    {
        None = 0,
        Designing = 1,
        ShowOutline = 2,
        ExecutePreConstruct = 4,
        EWidgetDesignFlags_MAX = 5
    };

    enum class EBindingKind : uint8_t //Enum UMG.EBindingKind
    {
        Function = 0,
        Property = 1,
        EBindingKind_MAX = 2
    };

    enum class EWindowVisibility : uint8_t //Enum UMG.EWindowVisibility
    {
        Visible = 0,
        SelfHitTestInvisible = 1,
        EWindowVisibility_MAX = 2
    };

    enum class EWidgetGeometryMode : uint8_t //Enum UMG.EWidgetGeometryMode
    {
        Plane = 0,
        Cylinder = 1,
        EWidgetGeometryMode_MAX = 2
    };

    enum class EWidgetBlendMode : uint8_t //Enum UMG.EWidgetBlendMode
    {
        Opaque = 0,
        Masked = 1,
        Transparent = 2,
        EWidgetBlendMode_MAX = 3
    };

    enum class EWidgetTimingPolicy : uint8_t //Enum UMG.EWidgetTimingPolicy
    {
        RealTime = 0,
        GameTime = 1,
        EWidgetTimingPolicy_MAX = 2
    };

    enum class EWidgetSpace : uint8_t //Enum UMG.EWidgetSpace
    {
        World = 0,
        Screen = 1,
        EWidgetSpace_MAX = 2
    };

    enum class EWidgetInteractionSource : uint8_t //Enum UMG.EWidgetInteractionSource
    {
        World = 0,
        Mouse = 1,
        CenterScreen = 2,
        Custom = 3,
        EWidgetInteractionSource_MAX = 4
    };

    enum class ECameraFocusMethod : uint8_t //Enum CinematicCamera.ECameraFocusMethod
    {
        DoNotOverride = 0,
        Manual = 1,
        Tracking = 2,
        Disable = 3,
        MAX = 4
    };

    enum class ESoundwaveSampleRateSettings : uint8_t //Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
    {
        Max = 0,
        High = 1,
        Medium = 2,
        Low = 3,
        Min = 4,
        MatchDevice = 5
    };

    enum class EAudioSpectrumType : uint8_t //Enum AudioMixer.EAudioSpectrumType
    {
        MagnitudeSpectrum = 0,
        PowerSpectrum = 1,
        EAudioSpectrumType_MAX = 2
    };

    enum class EFFTWindowType : uint8_t //Enum AudioMixer.EFFTWindowType
    {
        None = 0,
        Hamming = 1,
        Hann = 2,
        Blackman = 3,
        EFFTWindowType_MAX = 4
    };

    enum class EFFTPeakInterpolationMethod : uint8_t //Enum AudioMixer.EFFTPeakInterpolationMethod
    {
        NearestNeighbor = 0,
        Linear = 1,
        Quadratic = 2,
        EFFTPeakInterpolationMethod_MAX = 3
    };

    enum class EFFTSize : uint8_t //Enum AudioMixer.EFFTSize
    {
        DefaultSize = 0,
        Min = 1,
        Small = 2,
        Medium = 3,
        Large = 4,
        Max = 5
    };

    enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
    {
        Disabled = 0,
        Average = 1,
        Peak = 2,
        Count = 3,
        ESubmixEffectDynamicsChannelLinkMode_MAX = 4
    };

    enum class ESubmixEffectDynamicsPeakMode : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        ESubmixEffectDynamicsPeakMode_MAX = 4
    };

    enum class ESubmixEffectDynamicsProcessorType : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsProcessorType
    {
        Compressor = 0,
        Limiter = 1,
        Expander = 2,
        Gate = 3,
        Count = 4,
        ESubmixEffectDynamicsProcessorType_MAX = 5
    };

    enum class EGameplayTagQueryExprType : uint8_t //Enum GameplayTags.EGameplayTagQueryExprType
    {
        Undefined = 0,
        AnyTagsMatch = 1,
        AllTagsMatch = 2,
        NoTagsMatch = 3,
        AnyExprMatch = 4,
        AllExprMatch = 5,
        NoExprMatch = 6,
        EGameplayTagQueryExprType_MAX = 7
    };

    enum class EGameplayContainerMatchType : uint8_t //Enum GameplayTags.EGameplayContainerMatchType
    {
        Any = 0,
        All = 1,
        EGameplayContainerMatchType_MAX = 2
    };

    enum class EGameplayTagMatchType : uint8_t //Enum GameplayTags.EGameplayTagMatchType
    {
        Explicit = 0,
        IncludeParentTags = 1,
        EGameplayTagMatchType_MAX = 2
    };

    enum class EGameplayTagSelectionType : uint8_t //Enum GameplayTags.EGameplayTagSelectionType
    {
        None = 0,
        NonRestrictedOnly = 1,
        RestrictedOnly = 2,
        All = 3,
        EGameplayTagSelectionType_MAX = 4
    };

    enum class EGameplayTagSourceType : uint8_t //Enum GameplayTags.EGameplayTagSourceType
    {
        Native = 0,
        DefaultTagList = 1,
        TagList = 2,
        RestrictedTagList = 3,
        DataTable = 4,
        Invalid = 5,
        EGameplayTagSourceType_MAX = 6
    };

    enum class EComputeNTBsOptions : uint8_t //Enum MeshDescription.EComputeNTBsOptions
    {
        None = 0,
        Normals = 1,
        Tangents = 2,
        WeightedNTBs = 4,
        EComputeNTBsOptions_MAX = 5
    };

    enum class EGeometryCollectionCacheType : uint8_t //Enum GeometryCollectionCore.EGeometryCollectionCacheType
    {
        None = 0,
        Record = 1,
        Play = 2,
        RecordAndPlay = 3,
        EGeometryCollectionCacheType_MAX = 4
    };

    enum class EEmissionPatternTypeEnum : uint8_t //Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
    {
        Chaos_Emission_Pattern_First_Frame = 0,
        Chaos_Emission_Pattern_On_Demand = 1,
        Chaos_Max = 2
    };

    enum class EInitialVelocityTypeEnum : uint8_t //Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
    {
        Chaos_Initial_Velocity_User_Defined = 0,
        Chaos_Initial_Velocity_None = 1,
        Chaos_Max = 2
    };

    enum class EGeometryCollectionPhysicsTypeEnum : uint8_t //Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
    {
        Chaos_AngularVelocity = 0,
        Chaos_DynamicState = 1,
        Chaos_LinearVelocity = 2,
        Chaos_InitialAngularVelocity = 3,
        Chaos_InitialLinearVelocity = 4,
        Chaos_CollisionGroup = 5,
        Chaos_LinearForce = 6,
        Chaos_AngularTorque = 7,
        Chaos_Max = 8
    };

    enum class EObjectStateTypeEnum : uint8_t //Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
    {
        Chaos_NONE = 0,
        Chaos_Object_Sleeping = 1,
        Chaos_Object_Kinematic = 2,
        Chaos_Object_Static = 3,
        Chaos_Object_Dynamic = 4,
        Chaos_Object_UserDefined = 100,
        Chaos_Max = 101
    };

    enum class EImplicitTypeEnum : uint8_t //Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
    {
        Chaos_Implicit_Box = 0,
        Chaos_Implicit_Sphere = 1,
        Chaos_Implicit_Capsule = 2,
        Chaos_Implicit_LevelSet = 3,
        Chaos_Implicit_None = 4,
        Chaos_Max = 5
    };

    enum class ECollisionTypeEnum : uint8_t //Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
    {
        Chaos_Volumetric = 0,
        Chaos_Surface_Volumetric = 1,
        Chaos_Max = 2
    };

    enum class EEyeTrackerStatus : uint8_t //Enum EyeTracker.EEyeTrackerStatus
    {
        NotConnected = 0,
        NotTracking = 1,
        Tracking = 2,
        EEyeTrackerStatus_MAX = 3
    };

    enum class EMediaPlayerOptionBooleanOverride : uint8_t //Enum MediaUtils.EMediaPlayerOptionBooleanOverride
    {
        UseMediaPlayerSetting = 0,
        Enabled = 1,
        Disabled = 2,
        EMediaPlayerOptionBooleanOverride_MAX = 3
    };

    enum class EMediaWebcamCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
    {
        None = 0,
        DepthSensor = 1,
        Front = 2,
        Rear = 4,
        Unknown = 8,
        EMediaWebcamCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaVideoCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaVideoCaptureDeviceFilter
    {
        None = 0,
        Card = 1,
        Software = 2,
        Unknown = 4,
        Webcam = 8,
        EMediaVideoCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaAudioCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaAudioCaptureDeviceFilter
    {
        None = 0,
        Card = 1,
        Microphone = 2,
        Software = 4,
        Unknown = 8,
        EMediaAudioCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaPlayerTrack : uint8_t //Enum MediaAssets.EMediaPlayerTrack
    {
        Audio = 0,
        Caption = 1,
        Metadata = 2,
        Script = 3,
        Subtitle = 4,
        Text = 5,
        Video = 6,
        EMediaPlayerTrack_MAX = 7
    };

    enum class EMediaSoundComponentFFTSize : uint8_t //Enum MediaAssets.EMediaSoundComponentFFTSize
    {
        Min_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        EMediaSoundComponentFFTSize_MAX = 4
    };

    enum class EMediaSoundChannels : uint8_t //Enum MediaAssets.EMediaSoundChannels
    {
        Mono = 0,
        Stereo = 1,
        Surround = 2,
        EMediaSoundChannels_MAX = 3
    };

    enum class EHDRCaptureGamut : uint8_t //Enum MovieSceneCapture.EHDRCaptureGamut
    {
        HCGM_Rec709 = 0,
        HCGM_P3DCI = 1,
        HCGM_Rec2020 = 2,
        HCGM_ACES = 3,
        HCGM_ACEScg = 4,
        HCGM_Linear = 5,
        HCGM_MAX = 6
    };

    enum class EMovieSceneCaptureProtocolState : uint8_t //Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
    {
        Idle = 0,
        Initialized = 1,
        Capturing = 2,
        Finalizing = 3,
        EMovieSceneCaptureProtocolState_MAX = 4
    };

    enum class EMoviePlaybackType : uint8_t //Enum MoviePlayer.EMoviePlaybackType
    {
        MT_Normal = 0,
        MT_Looped = 1,
        MT_LoadingLoop = 2,
        MT_MAX = 3
    };

    enum class EActorUpdateOverlapsMethod : uint8_t //Enum Engine.EActorUpdateOverlapsMethod
    {
        UseConfigDefault = 0,
        AlwaysUpdate = 1,
        OnlyUpdateMovable = 2,
        NeverUpdate = 3,
        EActorUpdateOverlapsMethod_MAX = 4
    };

    enum class EAlphaBlendOption : uint8_t //Enum Engine.EAlphaBlendOption
    {
        Linear = 0,
        Cubic = 1,
        HermiteCubic = 2,
        Sinusoidal = 3,
        QuadraticInOut = 4,
        CubicInOut = 5,
        QuarticInOut = 6,
        QuinticInOut = 7,
        CircularIn = 8,
        CircularOut = 9,
        CircularInOut = 10,
        ExpIn = 11,
        ExpOut = 12,
        ExpInOut = 13,
        Custom = 14,
        EAlphaBlendOption_MAX = 15
    };

    enum class EAnimGroupRole : uint8_t //Enum Engine.EAnimGroupRole
    {
        CanBeLeader = 0,
        AlwaysFollower = 1,
        AlwaysLeader = 2,
        TransitionLeader = 3,
        TransitionFollower = 4,
        EAnimGroupRole_MAX = 5
    };

    enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t //Enum Engine.EPreviewAnimationBlueprintApplicationMethod
    {
        LinkedLayers = 0,
        LinkedAnimGraph = 1,
        EPreviewAnimationBlueprintApplicationMethod_MAX = 2
    };

    enum class AnimationKeyFormat : uint8_t //Enum Engine.AnimationKeyFormat
    {
        AKF_ConstantKeyLerp = 0,
        AKF_VariableKeyLerp = 1,
        AKF_PerTrackCompression = 2,
        AKF_MAX = 3
    };

    enum class ERawCurveTrackTypes : uint8_t //Enum Engine.ERawCurveTrackTypes
    {
        RCT_Float = 0,
        RCT_Vector = 1,
        RCT_Transform = 2,
        RCT_MAX = 3
    };

    enum class EAnimAssetCurveFlags : uint8_t //Enum Engine.EAnimAssetCurveFlags
    {
        AACF_NONE = 0,
        AACF_DriveMorphTarget_DEPRECATED = 1,
        AACF_DriveAttribute_DEPRECATED = 2,
        AACF_Editable = 4,
        AACF_DriveMaterial_DEPRECATED = 8,
        AACF_Metadata = 16,
        AACF_DriveTrack = 32,
        AACF_Disabled = 64,
        AACF_MAX = 65
    };

    enum class AnimationCompressionFormat : uint8_t //Enum Engine.AnimationCompressionFormat
    {
        ACF_None = 0,
        ACF_Float96NoW = 1,
        ACF_Fixed48NoW = 2,
        ACF_IntervalFixed32NoW = 3,
        ACF_Fixed32NoW = 4,
        ACF_Float32NoW = 5,
        ACF_Identity = 6,
        ACF_MAX = 7
    };

    enum class EAdditiveBasePoseType : uint8_t //Enum Engine.EAdditiveBasePoseType
    {
        ABPT_None = 0,
        ABPT_RefPose = 1,
        ABPT_AnimScaled = 2,
        ABPT_AnimFrame = 3,
        ABPT_MAX = 4
    };

    enum class ERootMotionMode : uint8_t //Enum Engine.ERootMotionMode
    {
        NoRootMotionExtraction = 0,
        IgnoreRootMotion = 1,
        RootMotionFromEverything = 2,
        RootMotionFromMontagesOnly = 3,
        ERootMotionMode_MAX = 4
    };

    enum class ERootMotionRootLock : uint8_t //Enum Engine.ERootMotionRootLock
    {
        RefPose = 0,
        AnimFirstFrame = 1,
        Zero = 2,
        ERootMotionRootLock_MAX = 3
    };

    enum class EMontagePlayReturnType : uint8_t //Enum Engine.EMontagePlayReturnType
    {
        MontageLength = 0,
        Duration = 1,
        EMontagePlayReturnType_MAX = 2
    };

    enum class EDrawDebugItemType : uint8_t //Enum Engine.EDrawDebugItemType
    {
        DirectionalArrow = 0,
        Sphere = 1,
        Line = 2,
        OnScreenMessage = 3,
        CoordinateSystem = 4,
        EDrawDebugItemType_MAX = 5
    };

    enum class EAnimLinkMethod : uint8_t //Enum Engine.EAnimLinkMethod
    {
        Absolute = 0,
        Relative = 1,
        Proportional = 2,
        EAnimLinkMethod_MAX = 3
    };

    enum class EMontageSubStepResult : uint8_t //Enum Engine.EMontageSubStepResult
    {
        Moved = 0,
        NotMoved = 1,
        InvalidSection = 2,
        InvalidMontage = 3,
        EMontageSubStepResult_MAX = 4
    };

    enum class EAnimNotifyEventType : uint8_t //Enum Engine.EAnimNotifyEventType
    {
        Begin = 0,
        End = 1,
        EAnimNotifyEventType_MAX = 2
    };

    enum class EInertializationSpace : uint8_t //Enum Engine.EInertializationSpace
    {
        Default = 0,
        WorldSpace = 1,
        WorldRotation = 2,
        EInertializationSpace_MAX = 3
    };

    enum class EInertializationBoneState : uint8_t //Enum Engine.EInertializationBoneState
    {
        Invalid = 0,
        Valid = 1,
        Excluded = 2,
        EInertializationBoneState_MAX = 3
    };

    enum class EInertializationState : uint8_t //Enum Engine.EInertializationState
    {
        Inactive = 0,
        Pending = 1,
        Active = 2,
        EInertializationState_MAX = 3
    };

    enum class EEvaluatorMode : uint8_t //Enum Engine.EEvaluatorMode
    {
        EM_Standard = 0,
        EM_Freeze = 1,
        EM_DelayedFreeze = 2,
        EM_MAX = 3
    };

    enum class EEvaluatorDataSource : uint8_t //Enum Engine.EEvaluatorDataSource
    {
        EDS_SourcePose = 0,
        EDS_DestinationPose = 1,
        EDS_MAX = 2
    };

    enum class ECopyType : uint8_t //Enum Engine.ECopyType
    {
        PlainProperty = 0,
        BoolProperty = 1,
        StructProperty = 2,
        ObjectProperty = 3,
        NameProperty = 4,
        ECopyType_MAX = 5
    };

    enum class EPostCopyOperation : uint8_t //Enum Engine.EPostCopyOperation
    {
        None = 0,
        LogicalNegateBool = 1,
        EPostCopyOperation_MAX = 2
    };

    enum class EPinHidingMode : uint8_t //Enum Engine.EPinHidingMode
    {
        NeverAsPin = 0,
        PinHiddenByDefault = 1,
        PinShownByDefault = 2,
        AlwaysAsPin = 3,
        EPinHidingMode_MAX = 4
    };

    enum class AnimPhysCollisionType : uint8_t //Enum Engine.AnimPhysCollisionType
    {
        CoM = 0,
        CustomSphere = 1,
        InnerSphere = 2,
        OuterSphere = 3,
        AnimPhysCollisionType_MAX = 4
    };

    enum class AnimPhysTwistAxis : uint8_t //Enum Engine.AnimPhysTwistAxis
    {
        AxisX = 0,
        AxisY = 1,
        AxisZ = 2,
        AnimPhysTwistAxis_MAX = 3
    };

    enum class ETypeAdvanceAnim : uint8_t //Enum Engine.ETypeAdvanceAnim
    {
        ETAA_Default = 0,
        ETAA_Finished = 1,
        ETAA_Looped = 2,
        ETAA_MAX = 3
    };

    enum class ETransitionLogicType : uint8_t //Enum Engine.ETransitionLogicType
    {
        TLT_StandardBlend = 0,
        TLT_Inertialization = 1,
        TLT_Custom = 2,
        TLT_MAX = 3
    };

    enum class ETransitionBlendMode : uint8_t //Enum Engine.ETransitionBlendMode
    {
        TBM_Linear = 0,
        TBM_Cubic = 1,
        TBM_MAX = 2
    };

    enum class EComponentType : uint8_t //Enum Engine.EComponentType
    {
        None = 0,
        TranslationX = 1,
        TranslationY = 2,
        TranslationZ = 3,
        RotationX = 4,
        RotationY = 5,
        RotationZ = 6,
        Scale = 7,
        ScaleX = 8,
        ScaleY = 9,
        ScaleZ = 10,
        EComponentType_MAX = 11
    };

    enum class EAxisOption : uint8_t //Enum Engine.EAxisOption
    {
        X = 0,
        Y = 1,
        Z = 2,
        X_Neg = 3,
        Y_Neg = 4,
        Z_Neg = 5,
        Custom = 6,
        EAxisOption_MAX = 7
    };

    enum class EAnimInterpolationType : uint8_t //Enum Engine.EAnimInterpolationType
    {
        Linear = 0,
        Step = 1,
        EAnimInterpolationType_MAX = 2
    };

    enum class ECurveBlendOption : uint8_t //Enum Engine.ECurveBlendOption
    {
        Override = 0,
        DoNotOverride = 1,
        NormalizeByWeight = 2,
        BlendByWeight = 3,
        UseBasePose = 4,
        UseMaxValue = 5,
        UseMinValue = 6,
        ECurveBlendOption_MAX = 7
    };

    enum class EAdditiveAnimationType : uint8_t //Enum Engine.EAdditiveAnimationType
    {
        AAT_None = 0,
        AAT_LocalSpaceBase = 1,
        AAT_RotationOffsetMeshSpace = 2,
        AAT_MAX = 3
    };

    enum class ENotifyFilterType : uint8_t //Enum Engine.ENotifyFilterType
    {
        NoFiltering = 0,
        LOD = 1,
        ENotifyFilterType_MAX = 2
    };

    enum class EMontageNotifyTickType : uint8_t //Enum Engine.EMontageNotifyTickType
    {
        Queued = 0,
        BranchingPoint = 1,
        EMontageNotifyTickType_MAX = 2
    };

    enum class EBoneRotationSource : uint8_t //Enum Engine.EBoneRotationSource
    {
        BRS_KeepComponentSpaceRotation = 0,
        BRS_KeepLocalSpaceRotation = 1,
        BRS_CopyFromTarget = 2,
        BRS_MAX = 3
    };

    enum class EBoneControlSpace : uint8_t //Enum Engine.EBoneControlSpace
    {
        BCS_WorldSpace = 0,
        BCS_ComponentSpace = 1,
        BCS_ParentBoneSpace = 2,
        BCS_BoneSpace = 3,
        BCS_MAX = 4
    };

    enum class EBoneAxis : uint8_t //Enum Engine.EBoneAxis
    {
        BA_X = 0,
        BA_Y = 1,
        BA_Z = 2,
        BA_MAX = 3
    };

    enum class EPrimaryAssetCookRule : uint8_t //Enum Engine.EPrimaryAssetCookRule
    {
        Unknown = 0,
        NeverCook = 1,
        DevelopmentCook = 2,
        DevelopmentAlwaysCook = 3,
        AlwaysCook = 4,
        EPrimaryAssetCookRule_MAX = 5
    };

    enum class ENaturalSoundFalloffMode : uint8_t //Enum Engine.ENaturalSoundFalloffMode
    {
        Continues = 0,
        Silent = 1,
        Hold = 2,
        ENaturalSoundFalloffMode_MAX = 3
    };

    enum class EAttenuationShape : uint8_t //Enum Engine.EAttenuationShape
    {
        Sphere = 0,
        Capsule = 1,
        Box = 2,
        Cone = 3,
        EAttenuationShape_MAX = 4
    };

    enum class EAttenuationDistanceModel : uint8_t //Enum Engine.EAttenuationDistanceModel
    {
        Linear = 0,
        Logarithmic = 1,
        Inverse = 2,
        LogReverse = 3,
        NaturalSound = 4,
        Custom = 5,
        EAttenuationDistanceModel_MAX = 6
    };

    enum class EAudioFaderCurve : uint8_t //Enum Engine.EAudioFaderCurve
    {
        Linear = 0,
        Logarithmic = 1,
        SCurve = 2,
        Sin = 3,
        Count = 4,
        EAudioFaderCurve_MAX = 5
    };

    enum class EAudioComponentPlayState : uint8_t //Enum Engine.EAudioComponentPlayState
    {
        Playing = 0,
        Stopped = 1,
        Paused = 2,
        FadingIn = 3,
        FadingOut = 4,
        Count = 5,
        EAudioComponentPlayState_MAX = 6
    };

    enum class EAudioOutputTarget : uint8_t //Enum Engine.EAudioOutputTarget
    {
        Speaker = 0,
        Controller = 1,
        ControllerFallbackToSpeaker = 2,
        EAudioOutputTarget_MAX = 3
    };

    enum class EMonoChannelUpmixMethod : uint8_t //Enum Engine.EMonoChannelUpmixMethod
    {
        Linear = 0,
        EqualPower = 1,
        FullVolume = 2,
        EMonoChannelUpmixMethod_MAX = 3
    };

    enum class EPanningMethod : uint8_t //Enum Engine.EPanningMethod
    {
        Linear = 0,
        EqualPower = 1,
        EPanningMethod_MAX = 2
    };

    enum class EVoiceSampleRate : uint32_t //Enum Engine.EVoiceSampleRate
    {
        Low16000Hz = 16000,
        Normal24000Hz = 24000,
        EVoiceSampleRate_MAX = 24001
    };

    enum class EBlendableLocation : uint8_t //Enum Engine.EBlendableLocation
    {
        BL_AfterTonemapping = 0,
        BL_BeforeTonemapping = 1,
        BL_BeforeTranslucency = 2,
        BL_ReplacingTonemapper = 3,
        BL_SSRInput = 4,
        BL_MAX = 5
    };

    enum class ENotifyTriggerMode : uint8_t //Enum Engine.ENotifyTriggerMode
    {
        AllAnimations = 0,
        HighestWeightedAnimation = 1,
        None = 2,
        ENotifyTriggerMode_MAX = 3
    };

    enum class EBlendSpaceAxis : uint8_t //Enum Engine.EBlendSpaceAxis
    {
        BSA_None = 0,
        BSA_X = 1,
        BSA_Y = 2,
        BSA_Max = 3
    };

    enum class EBlueprintNativizationFlag : uint8_t //Enum Engine.EBlueprintNativizationFlag
    {
        Disabled = 0,
        Dependency = 1,
        ExplicitlyEnabled = 2,
        EBlueprintNativizationFlag_MAX = 3
    };

    enum class EBlueprintCompileMode : uint8_t //Enum Engine.EBlueprintCompileMode
    {
        Default = 0,
        Development = 1,
        FinalRelease = 2,
        EBlueprintCompileMode_MAX = 3
    };

    enum class EBlueprintType : uint8_t //Enum Engine.EBlueprintType
    {
        BPTYPE_Normal = 0,
        BPTYPE_Const = 1,
        BPTYPE_MacroLibrary = 2,
        BPTYPE_Interface = 3,
        BPTYPE_LevelScript = 4,
        BPTYPE_FunctionLibrary = 5,
        BPTYPE_MAX = 6
    };

    enum class EBlueprintStatus : uint8_t //Enum Engine.EBlueprintStatus
    {
        BS_Unknown = 0,
        BS_Dirty = 1,
        BS_Error = 2,
        BS_UpToDate = 3,
        BS_BeingCreated = 4,
        BS_UpToDateWithWarnings = 5,
        BS_MAX = 6
    };

    enum class EDOFMode : uint8_t //Enum Engine.EDOFMode
    {
        Default = 0,
        SixDOF = 1,
        YZPlane = 2,
        XZPlane = 3,
        XYPlane = 4,
        CustomPlane = 5,
        None = 6,
        EDOFMode_MAX = 7
    };

    enum class EBodyCollisionResponse : uint8_t //Enum Engine.EBodyCollisionResponse
    {
        BodyCollision_Enabled = 0,
        BodyCollision_Disabled = 1,
        BodyCollision_MAX = 2
    };

    enum class EPhysicsType : uint8_t //Enum Engine.EPhysicsType
    {
        PhysType_Default = 0,
        PhysType_Kinematic = 1,
        PhysType_Simulated = 2,
        PhysType_MAX = 3
    };

    enum class ECollisionTraceFlag : uint8_t //Enum Engine.ECollisionTraceFlag
    {
        CTF_UseDefault = 0,
        CTF_UseSimpleAndComplex = 1,
        CTF_UseSimpleAsComplex = 2,
        CTF_UseComplexAsSimple = 3,
        CTF_MAX = 4
    };

    enum class EBrushType : uint8_t //Enum Engine.EBrushType
    {
        Brush_Default = 0,
        Brush_Add = 1,
        Brush_Subtract = 2,
        Brush_MAX = 3
    };

    enum class ECsgOper : uint8_t //Enum Engine.ECsgOper
    {
        CSG_Active = 0,
        CSG_Add = 1,
        CSG_Subtract = 2,
        CSG_Intersect = 3,
        CSG_Deintersect = 4,
        CSG_None = 5,
        CSG_MAX = 6
    };

    enum class EInitialOscillatorOffset : uint8_t //Enum Engine.EInitialOscillatorOffset
    {
        EOO_OffsetRandom = 0,
        EOO_OffsetZero = 1,
        EOO_MAX = 2
    };

    enum class EOscillatorWaveform : uint8_t //Enum Engine.EOscillatorWaveform
    {
        SineWave = 0,
        PerlinNoise = 1,
        EOscillatorWaveform_MAX = 2
    };

    enum class ECameraShakeAttenuation : uint8_t //Enum Engine.ECameraShakeAttenuation
    {
        Linear = 0,
        Quadratic = 1,
        ECameraShakeAttenuation_MAX = 2
    };

    enum class ECameraAlphaBlendMode : uint8_t //Enum Engine.ECameraAlphaBlendMode
    {
        CABM_Linear = 0,
        CABM_Cubic = 1,
        CABM_MAX = 2
    };

    enum class ECameraAnimPlaySpace : uint8_t //Enum Engine.ECameraAnimPlaySpace
    {
        CameraLocal = 0,
        World = 1,
        UserDefined = 2,
        ECameraAnimPlaySpace_MAX = 3
    };

    enum class ECameraProjectionMode : uint8_t //Enum Engine.ECameraProjectionMode
    {
        Perspective = 0,
        Orthographic = 1,
        ECameraProjectionMode_MAX = 2
    };

    enum class ECloudStorageDelegate : uint8_t //Enum Engine.ECloudStorageDelegate
    {
        CSD_KeyValueReadComplete = 0,
        CSD_KeyValueWriteComplete = 1,
        CSD_ValueChanged = 2,
        CSD_DocumentQueryComplete = 3,
        CSD_DocumentReadComplete = 4,
        CSD_DocumentWriteComplete = 5,
        CSD_DocumentConflictDetected = 6,
        CSD_MAX = 7
    };

    enum class EAngularDriveMode : uint8_t //Enum Engine.EAngularDriveMode
    {
        SLERP = 0,
        TwistAndSwing = 1,
        EAngularDriveMode_MAX = 2
    };

    enum class ELinearConstraintMotion : uint8_t //Enum Engine.ELinearConstraintMotion
    {
        LCM_Free = 0,
        LCM_Limited = 1,
        LCM_Locked = 2,
        LCM_MAX = 3
    };

    enum class ECurveTableMode : uint8_t //Enum Engine.ECurveTableMode
    {
        Empty = 0,
        SimpleCurves = 1,
        RichCurves = 2,
        ECurveTableMode_MAX = 3
    };

    enum class EEvaluateCurveTableResult : uint8_t //Enum Engine.EEvaluateCurveTableResult
    {
        RowFound = 0,
        RowNotFound = 1,
        EEvaluateCurveTableResult_MAX = 2
    };

    enum class EGrammaticalNumber : uint8_t //Enum Engine.EGrammaticalNumber
    {
        Singular = 0,
        Plural = 1,
        EGrammaticalNumber_MAX = 2
    };

    enum class EGrammaticalGender : uint8_t //Enum Engine.EGrammaticalGender
    {
        Neuter = 0,
        Masculine = 1,
        Feminine = 2,
        Mixed = 3,
        EGrammaticalGender_MAX = 4
    };

    enum class DistributionParamMode : uint8_t //Enum Engine.DistributionParamMode
    {
        DPM_Normal = 0,
        DPM_Abs = 1,
        DPM_Direct = 2,
        DPM_MAX = 3
    };

    enum class EDistributionVectorMirrorFlags : uint8_t //Enum Engine.EDistributionVectorMirrorFlags
    {
        EDVMF_Same = 0,
        EDVMF_Different = 1,
        EDVMF_Mirror = 2,
        EDVMF_MAX = 3
    };

    enum class EDistributionVectorLockFlags : uint8_t //Enum Engine.EDistributionVectorLockFlags
    {
        EDVLF_None = 0,
        EDVLF_XY = 1,
        EDVLF_XZ = 2,
        EDVLF_YZ = 3,
        EDVLF_XYZ = 4,
        EDVLF_MAX = 5
    };

    enum class ENodeEnabledState : uint8_t //Enum Engine.ENodeEnabledState
    {
        Enabled = 0,
        Disabled = 1,
        DevelopmentOnly = 2,
        ENodeEnabledState_MAX = 3
    };

    enum class ENodeAdvancedPins : uint8_t //Enum Engine.ENodeAdvancedPins
    {
        NoPins = 0,
        Shown = 1,
        Hidden = 2,
        ENodeAdvancedPins_MAX = 3
    };

    enum class ENodeTitleType : uint8_t //Enum Engine.ENodeTitleType
    {
        FullTitle = 0,
        ListView = 1,
        EditableTitle = 2,
        MenuTitle = 3,
        MAX_TitleTypes = 4,
        ENodeTitleType_MAX = 5
    };

    enum class EPinContainerType : uint8_t //Enum Engine.EPinContainerType
    {
        None = 0,
        Array = 1,
        Set = 2,
        Map = 3,
        EPinContainerType_MAX = 4
    };

    enum class EEdGraphPinDirection : uint8_t //Enum Engine.EEdGraphPinDirection
    {
        EGPD_Input = 0,
        EGPD_Output = 1,
        EGPD_MAX = 2
    };

    enum class EBlueprintPinStyleType : uint8_t //Enum Engine.EBlueprintPinStyleType
    {
        BPST_Original = 0,
        BPST_VariantA = 1,
        BPST_MAX = 2
    };

    enum class ECanCreateConnectionResponse : uint8_t //Enum Engine.ECanCreateConnectionResponse
    {
        CONNECT_RESPONSE_MAKE = 0,
        CONNECT_RESPONSE_DISALLOW = 1,
        CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
        CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
        CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
        CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
        CONNECT_RESPONSE_MAX = 6
    };

    enum class EGraphType : uint8_t //Enum Engine.EGraphType
    {
        GT_Function = 0,
        GT_Ubergraph = 1,
        GT_Macro = 2,
        GT_Animation = 3,
        GT_StateMachine = 4,
        GT_MAX = 5
    };

    enum class ETransitionType : uint8_t //Enum Engine.ETransitionType
    {
        None = 0,
        Paused = 1,
        Loading = 2,
        Saving = 3,
        Connecting = 4,
        Precaching = 5,
        WaitingToConnect = 6,
        MAX = 7
    };

    enum class EFullyLoadPackageType : uint8_t //Enum Engine.EFullyLoadPackageType
    {
        FULLYLOAD_Map = 0,
        FULLYLOAD_Game_PreLoadClass = 1,
        FULLYLOAD_Game_PostLoadClass = 2,
        FULLYLOAD_Always = 3,
        FULLYLOAD_Mutator = 4,
        FULLYLOAD_MAX = 5
    };

    enum class EViewModeIndex : uint8_t //Enum Engine.EViewModeIndex
    {
        VMI_BrushWireframe = 0,
        VMI_Wireframe = 1,
        VMI_Unlit = 2,
        VMI_Lit = 3,
        VMI_Lit_DetailLighting = 4,
        VMI_LightingOnly = 5,
        VMI_LightComplexity = 6,
        VMI_ShaderComplexity = 8,
        VMI_LightmapDensity = 9,
        VMI_LitLightmapDensity = 10,
        VMI_ReflectionOverride = 11,
        VMI_VisualizeBuffer = 12,
        VMI_StationaryLightOverlap = 14,
        VMI_CollisionPawn = 15,
        VMI_CollisionVisibility = 16,
        VMI_LODColoration = 18,
        VMI_QuadOverdraw = 19,
        VMI_PrimitiveDistanceAccuracy = 20,
        VMI_MeshUVDensityAccuracy = 21,
        VMI_ShaderComplexityWithQuadOverdraw = 22,
        VMI_HLODColoration = 23,
        VMI_GroupLODColoration = 24,
        VMI_MaterialTextureScaleAccuracy = 25,
        VMI_RequiredTextureResolution = 26,
        VMI_PathTracing = 27,
        VMI_RayTracingDebug = 28,
        VMI_Max = 29,
        VMI_Unknown = 255
    };

    enum class EDemoPlayFailure : uint8_t //Enum Engine.EDemoPlayFailure
    {
        Generic = 0,
        DemoNotFound = 1,
        Corrupt = 2,
        InvalidVersion = 3,
        InitBase = 4,
        GameSpecificHeader = 5,
        ReplayStreamerInternal = 6,
        LoadMap = 7,
        Serialization = 8,
        EDemoPlayFailure_MAX = 9
    };

    enum class ETravelType : uint8_t //Enum Engine.ETravelType
    {
        TRAVEL_Absolute = 0,
        TRAVEL_Partial = 1,
        TRAVEL_Relative = 2,
        TRAVEL_MAX = 3
    };

    enum class ENetworkLagState : uint8_t //Enum Engine.ENetworkLagState
    {
        NotLagging = 0,
        Lagging = 1,
        ENetworkLagState_MAX = 2
    };

    enum class EMouseCaptureMode : uint8_t //Enum Engine.EMouseCaptureMode
    {
        NoCapture = 0,
        CapturePermanently = 1,
        CapturePermanently_IncludingInitialMouseDown = 2,
        CaptureDuringMouseDown = 3,
        CaptureDuringRightMouseDown = 4,
        EMouseCaptureMode_MAX = 5
    };

    enum class EInputEvent : uint8_t //Enum Engine.EInputEvent
    {
        IE_Pressed = 0,
        IE_Released = 1,
        IE_Repeat = 2,
        IE_DoubleClick = 3,
        IE_Axis = 4,
        IE_MAX = 5
    };

    enum class ECustomTimeStepSynchronizationState : uint8_t //Enum Engine.ECustomTimeStepSynchronizationState
    {
        Closed = 0,
        Error = 1,
        Synchronized = 2,
        Synchronizing = 3,
        ECustomTimeStepSynchronizationState_MAX = 4
    };

    enum class EMeshBufferAccess : uint8_t //Enum Engine.EMeshBufferAccess
    {
        Default = 0,
        ForceCPUAndGPU = 1,
        EMeshBufferAccess_MAX = 2
    };

    enum class ESpawnActorCollisionHandlingMethod : uint8_t //Enum Engine.ESpawnActorCollisionHandlingMethod
    {
        Undefined = 0,
        AlwaysSpawn = 1,
        AdjustIfPossibleButAlwaysSpawn = 2,
        AdjustIfPossibleButDontSpawnIfColliding = 3,
        DontSpawnIfColliding = 4,
        ESpawnActorCollisionHandlingMethod_MAX = 5
    };

    enum class EConstraintFrame : uint8_t //Enum Engine.EConstraintFrame
    {
        Frame1 = 0,
        Frame2 = 1,
        EConstraintFrame_MAX = 2
    };

    enum class EAngularConstraintMotion : uint8_t //Enum Engine.EAngularConstraintMotion
    {
        ACM_Free = 0,
        ACM_Limited = 1,
        ACM_Locked = 2,
        ACM_MAX = 3
    };

    enum class EComponentSocketType : uint8_t //Enum Engine.EComponentSocketType
    {
        Invalid = 0,
        Bone = 1,
        Socket = 2,
        EComponentSocketType_MAX = 3
    };

    enum class EPhysicalMaterialMaskColor : uint8_t //Enum Engine.EPhysicalMaterialMaskColor
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Cyan = 3,
        Magenta = 4,
        Yellow = 5,
        White = 6,
        Black = 7,
        MAX = 8
    };

    enum class EPhysicalSurface : uint8_t //Enum Engine.EPhysicalSurface
    {
        SurfaceType_Default = 0,
        SurfaceType1 = 1,
        SurfaceType2 = 2,
        SurfaceType3 = 3,
        SurfaceType4 = 4,
        SurfaceType5 = 5,
        SurfaceType6 = 6,
        SurfaceType7 = 7,
        SurfaceType8 = 8,
        SurfaceType9 = 9,
        SurfaceType10 = 10,
        SurfaceType11 = 11,
        SurfaceType12 = 12,
        SurfaceType13 = 13,
        SurfaceType14 = 14,
        SurfaceType15 = 15,
        SurfaceType16 = 16,
        SurfaceType17 = 17,
        SurfaceType18 = 18,
        SurfaceType19 = 19,
        SurfaceType20 = 20,
        SurfaceType21 = 21,
        SurfaceType22 = 22,
        SurfaceType23 = 23,
        SurfaceType24 = 24,
        SurfaceType25 = 25,
        SurfaceType26 = 26,
        SurfaceType27 = 27,
        SurfaceType28 = 28,
        SurfaceType29 = 29,
        SurfaceType30 = 30,
        SurfaceType31 = 31,
        SurfaceType32 = 32,
        SurfaceType33 = 33,
        SurfaceType34 = 34,
        SurfaceType35 = 35,
        SurfaceType36 = 36,
        SurfaceType37 = 37,
        SurfaceType38 = 38,
        SurfaceType39 = 39,
        SurfaceType40 = 40,
        SurfaceType41 = 41,
        SurfaceType42 = 42,
        SurfaceType43 = 43,
        SurfaceType44 = 44,
        SurfaceType45 = 45,
        SurfaceType46 = 46,
        SurfaceType47 = 47,
        SurfaceType48 = 48,
        SurfaceType49 = 49,
        SurfaceType50 = 50,
        SurfaceType51 = 51,
        SurfaceType52 = 52,
        SurfaceType53 = 53,
        SurfaceType54 = 54,
        SurfaceType55 = 55,
        SurfaceType56 = 56,
        SurfaceType57 = 57,
        SurfaceType58 = 58,
        SurfaceType59 = 59,
        SurfaceType60 = 60,
        SurfaceType61 = 61,
        SurfaceType62 = 62,
        SurfaceType_Max = 63,
        EPhysicalSurface_MAX = 64
    };

    enum class EWalkableSlopeBehavior : uint8_t //Enum Engine.EWalkableSlopeBehavior
    {
        WalkableSlope_Default = 0,
        WalkableSlope_Increase = 1,
        WalkableSlope_Decrease = 2,
        WalkableSlope_Unwalkable = 3,
        WalkableSlope_Max = 4
    };

    enum class ERotatorQuantization : uint8_t //Enum Engine.ERotatorQuantization
    {
        ByteComponents = 0,
        ShortComponents = 1,
        ERotatorQuantization_MAX = 2
    };

    enum class EVectorQuantization : uint8_t //Enum Engine.EVectorQuantization
    {
        RoundWholeNumber = 0,
        RoundOneDecimal = 1,
        RoundTwoDecimals = 2,
        EVectorQuantization_MAX = 3
    };

    enum class EAutoPossessAI : uint8_t //Enum Engine.EAutoPossessAI
    {
        Disabled = 0,
        PlacedInWorld = 1,
        Spawned = 2,
        PlacedInWorldOrSpawned = 3,
        EAutoPossessAI_MAX = 4
    };

    enum class EAutoReceiveInput : uint8_t //Enum Engine.EAutoReceiveInput
    {
        Disabled = 0,
        Player0 = 1,
        Player1 = 2,
        Player2 = 3,
        Player3 = 4,
        Player4 = 5,
        Player5 = 6,
        Player6 = 7,
        Player7 = 8,
        EAutoReceiveInput_MAX = 9
    };

    enum class ENetDormancy : uint8_t //Enum Engine.ENetDormancy
    {
        DORM_Never = 0,
        DORM_Awake = 1,
        DORM_DormantAll = 2,
        DORM_DormantPartial = 3,
        DORM_Initial = 4,
        DORM_MAX = 5
    };

    enum class ENetRole : uint8_t //Enum Engine.ENetRole
    {
        ROLE_None = 0,
        ROLE_SimulatedProxy = 1,
        ROLE_AutonomousProxy = 2,
        ROLE_Authority = 3,
        ROLE_MAX = 4
    };

    enum class EUpdateRateShiftBucket : uint8_t //Enum Engine.EUpdateRateShiftBucket
    {
        ShiftBucket0 = 0,
        ShiftBucket1 = 1,
        ShiftBucket2 = 2,
        ShiftBucket3 = 3,
        ShiftBucket4 = 4,
        ShiftBucket5 = 5,
        ShiftBucketMax = 6,
        EUpdateRateShiftBucket_MAX = 7
    };

    enum class EShadowMapFlags : uint8_t //Enum Engine.EShadowMapFlags
    {
        SMF_None = 0,
        SMF_Streamed = 1,
        SMF_MAX = 2
    };

    enum class ELightMapPaddingType : uint8_t //Enum Engine.ELightMapPaddingType
    {
        LMPT_NormalPadding = 0,
        LMPT_PrePadding = 1,
        LMPT_NoPadding = 2,
        LMPT_MAX = 3
    };

    enum class ECollisionEnabled : uint8_t //Enum Engine.ECollisionEnabled
    {
        NoCollision = 0,
        QueryOnly = 1,
        PhysicsOnly = 2,
        QueryAndPhysics = 3,
        ECollisionEnabled_MAX = 4
    };

    enum class ETimelineSigType : uint8_t //Enum Engine.ETimelineSigType
    {
        ETS_EventSignature = 0,
        ETS_FloatSignature = 1,
        ETS_VectorSignature = 2,
        ETS_LinearColorSignature = 3,
        ETS_InvalidSignature = 4,
        ETS_MAX = 5
    };

    enum class ESleepFamily : uint8_t //Enum Engine.ESleepFamily
    {
        Normal = 0,
        Sensitive = 1,
        Custom = 2,
        ESleepFamily_MAX = 3
    };

    enum class ERadialImpulseFalloff : uint8_t //Enum Engine.ERadialImpulseFalloff
    {
        RIF_Constant = 0,
        RIF_Linear = 1,
        RIF_MAX = 2
    };

    enum class EFilterInterpolationType : uint8_t //Enum Engine.EFilterInterpolationType
    {
        BSIT_Average = 0,
        BSIT_Linear = 1,
        BSIT_Cubic = 2,
        BSIT_MAX = 3
    };

    enum class ECollisionResponse : uint8_t //Enum Engine.ECollisionResponse
    {
        ECR_Ignore = 0,
        ECR_Overlap = 1,
        ECR_Block = 2,
        ECR_MAX = 3
    };

    enum class EOverlapFilterOption : uint8_t //Enum Engine.EOverlapFilterOption
    {
        OverlapFilter_All = 0,
        OverlapFilter_DynamicOnly = 1,
        OverlapFilter_StaticOnly = 2,
        OverlapFilter_MAX = 3
    };

    enum class ECollisionChannel : uint8_t //Enum Engine.ECollisionChannel
    {
        ECC_WorldStatic = 0,
        ECC_WorldDynamic = 1,
        ECC_Pawn = 2,
        ECC_Visibility = 3,
        ECC_Camera = 4,
        ECC_PhysicsBody = 5,
        ECC_Vehicle = 6,
        ECC_Destructible = 7,
        ECC_EngineTraceChannel1 = 8,
        ECC_EngineTraceChannel2 = 9,
        ECC_EngineTraceChannel3 = 10,
        ECC_EngineTraceChannel4 = 11,
        ECC_EngineTraceChannel5 = 12,
        ECC_EngineTraceChannel6 = 13,
        ECC_GameTraceChannel1 = 14,
        ECC_GameTraceChannel2 = 15,
        ECC_GameTraceChannel3 = 16,
        ECC_GameTraceChannel4 = 17,
        ECC_GameTraceChannel5 = 18,
        ECC_GameTraceChannel6 = 19,
        ECC_GameTraceChannel7 = 20,
        ECC_GameTraceChannel8 = 21,
        ECC_GameTraceChannel9 = 22,
        ECC_GameTraceChannel10 = 23,
        ECC_GameTraceChannel11 = 24,
        ECC_GameTraceChannel12 = 25,
        ECC_GameTraceChannel13 = 26,
        ECC_GameTraceChannel14 = 27,
        ECC_GameTraceChannel15 = 28,
        ECC_GameTraceChannel16 = 29,
        ECC_GameTraceChannel17 = 30,
        ECC_GameTraceChannel18 = 31,
        ECC_OverlapAll_Deprecated = 32,
        ECC_MAX = 33
    };

    enum class ENetworkSmoothingMode : uint8_t //Enum Engine.ENetworkSmoothingMode
    {
        Disabled = 0,
        Linear = 1,
        Exponential = 2,
        Replay = 3,
        ENetworkSmoothingMode_MAX = 4
    };

    enum class ELightingBuildQuality : uint8_t //Enum Engine.ELightingBuildQuality
    {
        Quality_Preview = 0,
        Quality_Medium = 1,
        Quality_High = 2,
        Quality_Production = 3,
        Quality_MAX = 4
    };

    enum class EMaterialStencilCompare : uint8_t //Enum Engine.EMaterialStencilCompare
    {
        MSC_Less = 0,
        MSC_LessEqual = 1,
        MSC_Greater = 2,
        MSC_GreaterEqual = 3,
        MSC_Equal = 4,
        MSC_NotEqual = 5,
        MSC_Never = 6,
        MSC_Always = 7,
        MSC_Count = 8,
        MSC_MAX = 9
    };

    enum class EMaterialSamplerType : uint8_t //Enum Engine.EMaterialSamplerType
    {
        SAMPLERTYPE_Color = 0,
        SAMPLERTYPE_Grayscale = 1,
        SAMPLERTYPE_Alpha = 2,
        SAMPLERTYPE_Normal = 3,
        SAMPLERTYPE_Masks = 4,
        SAMPLERTYPE_DistanceFieldFont = 5,
        SAMPLERTYPE_LinearColor = 6,
        SAMPLERTYPE_LinearGrayscale = 7,
        SAMPLERTYPE_Data = 8,
        SAMPLERTYPE_External = 9,
        SAMPLERTYPE_VirtualColor = 10,
        SAMPLERTYPE_VirtualGrayscale = 11,
        SAMPLERTYPE_VirtualAlpha = 12,
        SAMPLERTYPE_VirtualNormal = 13,
        SAMPLERTYPE_VirtualMasks = 14,
        SAMPLERTYPE_VirtualLinearColor = 15,
        SAMPLERTYPE_VirtualLinearGrayscale = 16,
        SAMPLERTYPE_MAX = 17
    };

    enum class EMaterialTessellationMode : uint8_t //Enum Engine.EMaterialTessellationMode
    {
        MTM_NoTessellation = 0,
        MTM_FlatTessellation = 1,
        MTM_PNTriangles = 2,
        MTM_MAX = 3
    };

    enum class EMaterialShadingModel : uint8_t //Enum Engine.EMaterialShadingModel
    {
        MSM_Unlit = 0,
        MSM_DefaultLit = 1,
        MSM_Subsurface = 2,
        MSM_PreintegratedSkin = 3,
        MSM_ClearCoat = 4,
        MSM_SubsurfaceProfile = 5,
        MSM_TwoSidedFoliage = 6,
        MSM_Hair = 7,
        MSM_Cloth = 8,
        MSM_Eye = 9,
        MSM_SingleLayerWater = 10,
        MSM_ThinTranslucent = 11,
        MSM_NUM = 12,
        MSM_FromMaterialExpression = 13,
        MSM_MAX = 14
    };

    enum class EParticleCollisionMode : uint8_t //Enum Engine.EParticleCollisionMode
    {
        SceneDepth = 0,
        DistanceField = 1,
        EParticleCollisionMode_MAX = 2
    };

    enum class ETrailWidthMode : uint8_t //Enum Engine.ETrailWidthMode
    {
        ETrailWidthMode_FromCentre = 0,
        ETrailWidthMode_FromFirst = 1,
        ETrailWidthMode_FromSecond = 2,
        ETrailWidthMode_MAX = 3
    };

    enum class EGBufferFormat : uint8_t //Enum Engine.EGBufferFormat
    {
        Force8BitsPerChannel = 0,
        Default = 1,
        HighPrecisionNormals = 3,
        Force16BitsPerChannel = 5,
        EGBufferFormat_MAX = 6
    };

    enum class ESceneCaptureCompositeMode : uint8_t //Enum Engine.ESceneCaptureCompositeMode
    {
        SCCM_Overwrite = 0,
        SCCM_Additive = 1,
        SCCM_Composite = 2,
        SCCM_MAX = 3
    };

    enum class ESceneCaptureSource : uint8_t //Enum Engine.ESceneCaptureSource
    {
        SCS_SceneColorHDR = 0,
        SCS_SceneColorHDRNoAlpha = 1,
        SCS_FinalColorLDR = 2,
        SCS_SceneColorSceneDepth = 3,
        SCS_SceneDepth = 4,
        SCS_DeviceDepth = 5,
        SCS_Normal = 6,
        SCS_BaseColor = 7,
        SCS_FinalColorHDR = 8,
        SCS_FinalToneCurveHDR = 9,
        SCS_MAX = 10
    };

    enum class ETranslucentSortPolicy : uint8_t //Enum Engine.ETranslucentSortPolicy
    {
        SortByDistance = 0,
        SortByProjectedZ = 1,
        SortAlongAxis = 2,
        ETranslucentSortPolicy_MAX = 3
    };

    enum class ERefractionMode : uint8_t //Enum Engine.ERefractionMode
    {
        RM_IndexOfRefraction = 0,
        RM_PixelNormalOffset = 1,
        RM_MAX = 2
    };

    enum class ETranslucencyLightingMode : uint8_t //Enum Engine.ETranslucencyLightingMode
    {
        TLM_VolumetricNonDirectional = 0,
        TLM_VolumetricDirectional = 1,
        TLM_VolumetricPerVertexNonDirectional = 2,
        TLM_VolumetricPerVertexDirectional = 3,
        TLM_Surface = 4,
        TLM_SurfacePerPixelLighting = 5,
        TLM_MAX = 6
    };

    enum class ESamplerSourceMode : uint8_t //Enum Engine.ESamplerSourceMode
    {
        SSM_FromTextureAsset = 0,
        SSM_Wrap_WorldGroupSettings = 1,
        SSM_Clamp_WorldGroupSettings = 2,
        SSM_MAX = 3
    };

    enum class EBlendMode : uint8_t //Enum Engine.EBlendMode
    {
        BLEND_Opaque = 0,
        BLEND_Masked = 1,
        BLEND_Translucent = 2,
        BLEND_Additive = 3,
        BLEND_Modulate = 4,
        BLEND_AlphaComposite = 5,
        BLEND_AlphaHoldout = 6,
        BLEND_MAX = 7
    };

    enum class EOcclusionCombineMode : uint8_t //Enum Engine.EOcclusionCombineMode
    {
        OCM_Minimum = 0,
        OCM_Multiply = 1,
        OCM_MAX = 2
    };

    enum class ELightmapType : uint8_t //Enum Engine.ELightmapType
    {
        Default = 0,
        ForceSurface = 1,
        ForceVolumetric = 2,
        ELightmapType_MAX = 3
    };

    enum class EIndirectLightingCacheQuality : uint8_t //Enum Engine.EIndirectLightingCacheQuality
    {
        ILCQ_Off = 0,
        ILCQ_Point = 1,
        ILCQ_Volume = 2,
        ILCQ_MAX = 3
    };

    enum class ESceneDepthPriorityGroup : uint8_t //Enum Engine.ESceneDepthPriorityGroup
    {
        SDPG_World = 0,
        SDPG_Foreground = 1,
        SDPG_MAX = 2
    };

    enum class EAspectRatioAxisConstraint : uint8_t //Enum Engine.EAspectRatioAxisConstraint
    {
        AspectRatio_MaintainYFOV = 0,
        AspectRatio_MaintainXFOV = 1,
        AspectRatio_MajorAxisFOV = 2,
        AspectRatio_MAX = 3
    };

    enum class EFontCacheType : uint8_t //Enum Engine.EFontCacheType
    {
        Offline = 0,
        Runtime = 1,
        EFontCacheType_MAX = 2
    };

    enum class EFontImportCharacterSet : uint8_t //Enum Engine.EFontImportCharacterSet
    {
        FontICS_Default = 0,
        FontICS_Ansi = 1,
        FontICS_Symbol = 2,
        FontICS_MAX = 3
    };

    enum class EStandbyType : uint8_t //Enum Engine.EStandbyType
    {
        STDBY_Rx = 0,
        STDBY_Tx = 1,
        STDBY_BadPing = 2,
        STDBY_MAX = 3
    };

    enum class ESuggestProjVelocityTraceOption : uint8_t //Enum Engine.ESuggestProjVelocityTraceOption
    {
        DoNotTrace = 0,
        TraceFullPath = 1,
        OnlyTraceWhileAscending = 2,
        ESuggestProjVelocityTraceOption_MAX = 3
    };

    enum class EWindowMode : uint8_t //Enum Engine.EWindowMode
    {
        Fullscreen = 0,
        WindowedFullscreen = 1,
        Windowed = 2,
        EWindowMode_MAX = 3
    };

    enum class EHitProxyPriority : uint8_t //Enum Engine.EHitProxyPriority
    {
        HPP_World = 0,
        HPP_Wireframe = 1,
        HPP_Foreground = 2,
        HPP_UI = 3,
        HPP_MAX = 4
    };

    enum class EImportanceWeight : uint8_t //Enum Engine.EImportanceWeight
    {
        Luminance = 0,
        Red = 1,
        Green = 2,
        Blue = 3,
        Alpha = 4,
        EImportanceWeight_MAX = 5
    };

    enum class EAdManagerDelegate : uint8_t //Enum Engine.EAdManagerDelegate
    {
        AMD_ClickedBanner = 0,
        AMD_UserClosedAd = 1,
        AMD_MAX = 2
    };

    enum class EControllerAnalogStick : uint8_t //Enum Engine.EControllerAnalogStick
    {
        CAS_LeftStick = 0,
        CAS_RightStick = 1,
        CAS_MAX = 2
    };

    enum class EAnimAlphaInputType : uint8_t //Enum Engine.EAnimAlphaInputType
    {
        Float = 0,
        Bool = 1,
        Curve = 2,
        EAnimAlphaInputType_MAX = 3
    };

    enum class ETrackActiveCondition : uint8_t //Enum Engine.ETrackActiveCondition
    {
        ETAC_Always = 0,
        ETAC_GoreEnabled = 1,
        ETAC_GoreDisabled = 2,
        ETAC_MAX = 3
    };

    enum class EInterpTrackMoveRotMode : uint8_t //Enum Engine.EInterpTrackMoveRotMode
    {
        IMR_Keyframed = 0,
        IMR_LookAtGroup = 1,
        IMR_Ignore = 2,
        IMR_MAX = 3
    };

    enum class EInterpMoveAxis : uint8_t //Enum Engine.EInterpMoveAxis
    {
        AXIS_TranslationX = 0,
        AXIS_TranslationY = 1,
        AXIS_TranslationZ = 2,
        AXIS_RotationX = 3,
        AXIS_RotationY = 4,
        AXIS_RotationZ = 5,
        AXIS_MAX = 6
    };

    enum class ETrackToggleAction : uint8_t //Enum Engine.ETrackToggleAction
    {
        ETTA_Off = 0,
        ETTA_On = 1,
        ETTA_Toggle = 2,
        ETTA_Trigger = 3,
        ETTA_MAX = 4
    };

    enum class EVisibilityTrackCondition : uint8_t //Enum Engine.EVisibilityTrackCondition
    {
        EVTC_Always = 0,
        EVTC_GoreEnabled = 1,
        EVTC_GoreDisabled = 2,
        EVTC_MAX = 3
    };

    enum class EVisibilityTrackAction : uint8_t //Enum Engine.EVisibilityTrackAction
    {
        EVTA_Hide = 0,
        EVTA_Show = 1,
        EVTA_Toggle = 2,
        EVTA_MAX = 3
    };

    enum class ESlateGesture : uint8_t //Enum Engine.ESlateGesture
    {
        None = 0,
        Scroll = 1,
        Magnify = 2,
        Swipe = 3,
        Rotate = 4,
        LongPress = 5,
        ESlateGesture_MAX = 6
    };

    enum class EMatrixColumns : uint8_t //Enum Engine.EMatrixColumns
    {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        EMatrixColumns_MAX = 4
    };

    enum class ELerpInterpolationMode : uint8_t //Enum Engine.ELerpInterpolationMode
    {
        QuatInterp = 0,
        EulerInterp = 1,
        DualQuatInterp = 2,
        ELerpInterpolationMode_MAX = 3
    };

    enum class EEasingFunc : uint8_t //Enum Engine.EEasingFunc
    {
        Linear = 0,
        Step = 1,
        SinusoidalIn = 2,
        SinusoidalOut = 3,
        SinusoidalInOut = 4,
        EaseIn = 5,
        EaseOut = 6,
        EaseInOut = 7,
        ExpoIn = 8,
        ExpoOut = 9,
        ExpoInOut = 10,
        CircularIn = 11,
        CircularOut = 12,
        CircularInOut = 13,
        EEasingFunc_MAX = 14
    };

    enum class ERoundingMode : uint8_t //Enum Engine.ERoundingMode
    {
        HalfToEven = 0,
        HalfFromZero = 1,
        HalfToZero = 2,
        FromZero = 3,
        ToZero = 4,
        ToNegativeInfinity = 5,
        ToPositiveInfinity = 6,
        ERoundingMode_MAX = 7
    };

    enum class EStreamingVolumeUsage : uint8_t //Enum Engine.EStreamingVolumeUsage
    {
        SVB_Loading = 0,
        SVB_LoadingAndVisibility = 1,
        SVB_VisibilityBlockingOnLoad = 2,
        SVB_BlockingOnLoad = 3,
        SVB_LoadingNotVisible = 4,
        SVB_MAX = 5
    };

    enum class EMaterialDecalResponse : uint8_t //Enum Engine.EMaterialDecalResponse
    {
        MDR_None = 0,
        MDR_ColorNormalRoughness = 1,
        MDR_Color = 2,
        MDR_ColorNormal = 3,
        MDR_ColorRoughness = 4,
        MDR_Normal = 5,
        MDR_NormalRoughness = 6,
        MDR_Roughness = 7,
        MDR_MAX = 8
    };

    enum class EDecalBlendMode : uint8_t //Enum Engine.EDecalBlendMode
    {
        DBM_Translucent = 0,
        DBM_Stain = 1,
        DBM_Normal = 2,
        DBM_Emissive = 3,
        DBM_DBuffer_ColorNormalRoughness = 4,
        DBM_DBuffer_Color = 5,
        DBM_DBuffer_ColorNormal = 6,
        DBM_DBuffer_ColorRoughness = 7,
        DBM_DBuffer_Normal = 8,
        DBM_DBuffer_NormalRoughness = 9,
        DBM_DBuffer_Roughness = 10,
        DBM_DBuffer_Emissive = 11,
        DBM_DBuffer_AlphaComposite = 12,
        DBM_DBuffer_EmissiveAlphaComposite = 13,
        DBM_Volumetric_DistanceFunction = 14,
        DBM_AlphaComposite = 15,
        DBM_AmbientOcclusion = 16,
        DBM_MAX = 17
    };

    enum class ETextureColorChannel : uint8_t //Enum Engine.ETextureColorChannel
    {
        TCC_Red = 0,
        TCC_Green = 1,
        TCC_Blue = 2,
        TCC_Alpha = 3,
        TCC_MAX = 4
    };

    enum class EMaterialAttributeBlend : uint8_t //Enum Engine.EMaterialAttributeBlend
    {
        Blend = 0,
        UseA = 1,
        UseB = 2,
        EMaterialAttributeBlend_MAX = 3
    };

    enum class EChannelMaskParameterColor : uint8_t //Enum Engine.EChannelMaskParameterColor
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        EChannelMaskParameterColor_MAX = 4
    };

    enum class EClampMode : uint8_t //Enum Engine.EClampMode
    {
        CMODE_Clamp = 0,
        CMODE_ClampMin = 1,
        CMODE_ClampMax = 2,
        CMODE_MAX = 3
    };

    enum class ECustomMaterialOutputType : uint8_t //Enum Engine.ECustomMaterialOutputType
    {
        CMOT_Float1 = 0,
        CMOT_Float2 = 1,
        CMOT_Float3 = 2,
        CMOT_Float4 = 3,
        CMOT_MaterialAttributes = 4,
        CMOT_MAX = 5
    };

    enum class EDepthOfFieldFunctionValue : uint8_t //Enum Engine.EDepthOfFieldFunctionValue
    {
        TDOF_NearAndFarMask = 0,
        TDOF_NearMask = 1,
        TDOF_FarMask = 2,
        TDOF_CircleOfConfusionRadius = 3,
        TDOF_MAX = 4
    };

    enum class EFunctionInputType : uint8_t //Enum Engine.EFunctionInputType
    {
        FunctionInput_Scalar = 0,
        FunctionInput_Vector2 = 1,
        FunctionInput_Vector3 = 2,
        FunctionInput_Vector4 = 3,
        FunctionInput_Texture2D = 4,
        FunctionInput_TextureCube = 5,
        FunctionInput_Texture2DArray = 6,
        FunctionInput_VolumeTexture = 7,
        FunctionInput_StaticBool = 8,
        FunctionInput_MaterialAttributes = 9,
        FunctionInput_TextureExternal = 10,
        FunctionInput_MAX = 11
    };

    enum class ENoiseFunction : uint8_t //Enum Engine.ENoiseFunction
    {
        NOISEFUNCTION_SimplexTex = 0,
        NOISEFUNCTION_GradientTex = 1,
        NOISEFUNCTION_GradientTex3D = 2,
        NOISEFUNCTION_GradientALU = 3,
        NOISEFUNCTION_ValueALU = 4,
        NOISEFUNCTION_VoronoiALU = 5,
        NOISEFUNCTION_MAX = 6
    };

    enum class ERuntimeVirtualTextureMipValueMode : uint8_t //Enum Engine.ERuntimeVirtualTextureMipValueMode
    {
        RVTMVM_None = 0,
        RVTMVM_MipLevel = 1,
        RVTMVM_MipBias = 2,
        RVTMVM_MAX = 3
    };

    enum class EMaterialSceneAttributeInputMode : uint8_t //Enum Engine.EMaterialSceneAttributeInputMode
    {
        Coordinates = 0,
        OffsetFraction = 1,
        EMaterialSceneAttributeInputMode_MAX = 2
    };

    enum class ESpeedTreeLODType : uint8_t //Enum Engine.ESpeedTreeLODType
    {
        STLOD_Pop = 0,
        STLOD_Smooth = 1,
        STLOD_MAX = 2
    };

    enum class ESpeedTreeWindType : uint8_t //Enum Engine.ESpeedTreeWindType
    {
        STW_None = 0,
        STW_Fastest = 1,
        STW_Fast = 2,
        STW_Better = 3,
        STW_Best = 4,
        STW_Palm = 5,
        STW_BestPlus = 6,
        STW_MAX = 7
    };

    enum class ESpeedTreeGeometryType : uint8_t //Enum Engine.ESpeedTreeGeometryType
    {
        STG_Branch = 0,
        STG_Frond = 1,
        STG_Leaf = 2,
        STG_FacingLeaf = 3,
        STG_Billboard = 4,
        STG_MAX = 5
    };

    enum class EMaterialExposedTextureProperty : uint8_t //Enum Engine.EMaterialExposedTextureProperty
    {
        TMTM_TextureSize = 0,
        TMTM_TexelSize = 1,
        TMTM_MAX = 2
    };

    enum class ETextureMipValueMode : uint8_t //Enum Engine.ETextureMipValueMode
    {
        TMVM_None = 0,
        TMVM_MipLevel = 1,
        TMVM_MipBias = 2,
        TMVM_Derivative = 3,
        TMVM_MAX = 4
    };

    enum class EMaterialVectorCoordTransform : uint8_t //Enum Engine.EMaterialVectorCoordTransform
    {
        TRANSFORM_Tangent = 0,
        TRANSFORM_Local = 1,
        TRANSFORM_World = 2,
        TRANSFORM_View = 3,
        TRANSFORM_Camera = 4,
        TRANSFORM_ParticleWorld = 5,
        TRANSFORM_MAX = 6
    };

    enum class EMaterialVectorCoordTransformSource : uint8_t //Enum Engine.EMaterialVectorCoordTransformSource
    {
        TRANSFORMSOURCE_Tangent = 0,
        TRANSFORMSOURCE_Local = 1,
        TRANSFORMSOURCE_World = 2,
        TRANSFORMSOURCE_View = 3,
        TRANSFORMSOURCE_Camera = 4,
        TRANSFORMSOURCE_ParticleWorld = 5,
        TRANSFORMSOURCE_MAX = 6
    };

    enum class EMaterialPositionTransformSource : uint8_t //Enum Engine.EMaterialPositionTransformSource
    {
        TRANSFORMPOSSOURCE_Local = 0,
        TRANSFORMPOSSOURCE_World = 1,
        TRANSFORMPOSSOURCE_TranslatedWorld = 2,
        TRANSFORMPOSSOURCE_View = 3,
        TRANSFORMPOSSOURCE_Camera = 4,
        TRANSFORMPOSSOURCE_Particle = 5,
        TRANSFORMPOSSOURCE_MAX = 6
    };

    enum class EVectorNoiseFunction : uint8_t //Enum Engine.EVectorNoiseFunction
    {
        VNF_CellnoiseALU = 0,
        VNF_VectorALU = 1,
        VNF_GradientALU = 2,
        VNF_CurlALU = 3,
        VNF_VoronoiALU = 4,
        VNF_MAX = 5
    };

    enum class EMaterialExposedViewProperty : uint8_t //Enum Engine.EMaterialExposedViewProperty
    {
        MEVP_BufferSize = 0,
        MEVP_FieldOfView = 1,
        MEVP_TanHalfFieldOfView = 2,
        MEVP_ViewSize = 3,
        MEVP_WorldSpaceViewPosition = 4,
        MEVP_WorldSpaceCameraPosition = 5,
        MEVP_ViewportOffset = 6,
        MEVP_TemporalSampleCount = 7,
        MEVP_TemporalSampleIndex = 8,
        MEVP_TemporalSampleOffset = 9,
        MEVP_RuntimeVirtualTextureOutputLevel = 10,
        MEVP_RuntimeVirtualTextureOutputDerivative = 11,
        MEVP_PreExposure = 12,
        MEVP_MAX = 13
    };

    enum class EWorldPositionIncludedOffsets : uint8_t //Enum Engine.EWorldPositionIncludedOffsets
    {
        WPT_Default = 0,
        WPT_ExcludeAllShaderOffsets = 1,
        WPT_CameraRelative = 2,
        WPT_CameraRelativeNoOffsets = 3,
        WPT_MAX = 4
    };

    enum class EMaterialFunctionUsage : uint8_t //Enum Engine.EMaterialFunctionUsage
    {
        Default = 0,
        MaterialLayer = 1,
        MaterialLayerBlend = 2,
        EMaterialFunctionUsage_MAX = 3
    };

    enum class EMaterialUsage : uint8_t //Enum Engine.EMaterialUsage
    {
        MATUSAGE_SkeletalMesh = 0,
        MATUSAGE_ParticleSprites = 1,
        MATUSAGE_BeamTrails = 2,
        MATUSAGE_MeshParticles = 3,
        MATUSAGE_StaticLighting = 4,
        MATUSAGE_MorphTargets = 5,
        MATUSAGE_SplineMesh = 6,
        MATUSAGE_InstancedStaticMeshes = 7,
        MATUSAGE_GeometryCollections = 8,
        MATUSAGE_Clothing = 9,
        MATUSAGE_NiagaraSprites = 10,
        MATUSAGE_NiagaraRibbons = 11,
        MATUSAGE_NiagaraMeshParticles = 12,
        MATUSAGE_GeometryCache = 13,
        MATUSAGE_Water = 14,
        MATUSAGE_HairStrands = 15,
        MATUSAGE_LidarPointCloud = 16,
        MATUSAGE_MAX = 17
    };

    enum class EMaterialParameterAssociation : uint8_t //Enum Engine.EMaterialParameterAssociation
    {
        LayerParameter = 0,
        BlendParameter = 1,
        GlobalParameter = 2,
        EMaterialParameterAssociation_MAX = 3
    };

    enum class EMaterialMergeType : uint8_t //Enum Engine.EMaterialMergeType
    {
        MaterialMergeType_Default = 0,
        MaterialMergeType_Simplygon = 1,
        MaterialMergeType_MAX = 2
    };

    enum class ETextureSizingType : uint8_t //Enum Engine.ETextureSizingType
    {
        TextureSizingType_UseSingleTextureSize = 0,
        TextureSizingType_UseAutomaticBiasedSizes = 1,
        TextureSizingType_UseManualOverrideTextureSize = 2,
        TextureSizingType_UseSimplygonAutomaticSizing = 3,
        TextureSizingType_MAX = 4
    };

    enum class ESceneTextureId : uint8_t //Enum Engine.ESceneTextureId
    {
        PPI_SceneColor = 0,
        PPI_SceneDepth = 1,
        PPI_DiffuseColor = 2,
        PPI_SpecularColor = 3,
        PPI_SubsurfaceColor = 4,
        PPI_BaseColor = 5,
        PPI_Specular = 6,
        PPI_Metallic = 7,
        PPI_WorldNormal = 8,
        PPI_SeparateTranslucency = 9,
        PPI_Opacity = 10,
        PPI_Roughness = 11,
        PPI_MaterialAO = 12,
        PPI_CustomDepth = 13,
        PPI_PostProcessInput0 = 14,
        PPI_PostProcessInput1 = 15,
        PPI_PostProcessInput2 = 16,
        PPI_PostProcessInput3 = 17,
        PPI_PostProcessInput4 = 18,
        PPI_PostProcessInput5 = 19,
        PPI_PostProcessInput6 = 20,
        PPI_DecalMask = 21,
        PPI_ShadingModelColor = 22,
        PPI_ShadingModelID = 23,
        PPI_AmbientOcclusion = 24,
        PPI_CustomStencil = 25,
        PPI_StoredBaseColor = 26,
        PPI_StoredSpecular = 27,
        PPI_Velocity = 28,
        PPI_WorldTangent = 29,
        PPI_Anisotropy = 30,
        PPI_MAX = 31
    };

    enum class EMaterialDomain : uint8_t //Enum Engine.EMaterialDomain
    {
        MD_Surface = 0,
        MD_DeferredDecal = 1,
        MD_LightFunction = 2,
        MD_Volume = 3,
        MD_PostProcess = 4,
        MD_UI = 5,
        MD_RuntimeVirtualTexture = 6,
        MD_MAX = 7
    };

    enum class EMeshInstancingReplacementMethod : uint8_t //Enum Engine.EMeshInstancingReplacementMethod
    {
        RemoveOriginalActors = 0,
        KeepOriginalActorsAsEditorOnly = 1,
        EMeshInstancingReplacementMethod_MAX = 2
    };

    enum class EUVOutput : uint8_t //Enum Engine.EUVOutput
    {
        DoNotOutputChannel = 0,
        OutputChannel = 1,
        EUVOutput_MAX = 2
    };

    enum class EMeshMergeType : uint8_t //Enum Engine.EMeshMergeType
    {
        MeshMergeType_Default = 0,
        MeshMergeType_MergeActor = 1,
        MeshMergeType_MAX = 2
    };

    enum class EMeshLODSelectionType : uint8_t //Enum Engine.EMeshLODSelectionType
    {
        AllLODs = 0,
        SpecificLOD = 1,
        CalculateLOD = 2,
        LowestDetailLOD = 3,
        EMeshLODSelectionType_MAX = 4
    };

    enum class EProxyNormalComputationMethod : uint8_t //Enum Engine.EProxyNormalComputationMethod
    {
        AngleWeighted = 0,
        AreaWeighted = 1,
        EqualWeighted = 2,
        EProxyNormalComputationMethod_MAX = 3
    };

    enum class ELandscapeCullingPrecision : uint8_t //Enum Engine.ELandscapeCullingPrecision
    {
        High = 0,
        Medium = 1,
        Low = 2,
        ELandscapeCullingPrecision_MAX = 3
    };

    enum class EStaticMeshReductionTerimationCriterion : uint8_t //Enum Engine.EStaticMeshReductionTerimationCriterion
    {
        Triangles = 0,
        Vertices = 1,
        Any = 2,
        EStaticMeshReductionTerimationCriterion_MAX = 3
    };

    enum class EMeshFeatureImportance : uint8_t //Enum Engine.EMeshFeatureImportance
    {
        Off = 0,
        Lowest = 1,
        Low = 2,
        Normal = 3,
        High = 4,
        Highest = 5,
        EMeshFeatureImportance_MAX = 6
    };

    enum class EVertexPaintAxis : uint8_t //Enum Engine.EVertexPaintAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        EVertexPaintAxis_MAX = 3
    };

    enum class EMicroTransactionResult : uint8_t //Enum Engine.EMicroTransactionResult
    {
        MTR_Succeeded = 0,
        MTR_Failed = 1,
        MTR_Canceled = 2,
        MTR_RestoredFromServer = 3,
        MTR_MAX = 4
    };

    enum class EMicroTransactionDelegate : uint8_t //Enum Engine.EMicroTransactionDelegate
    {
        MTD_PurchaseQueryComplete = 0,
        MTD_PurchaseComplete = 1,
        MTD_MAX = 2
    };

    enum class FNavigationSystemRunMode : uint8_t //Enum Engine.FNavigationSystemRunMode
    {
        InvalidMode = 0,
        GameMode = 1,
        EditorMode = 2,
        SimulationMode = 3,
        PIEMode = 4,
        FNavigationSystemRunMode_MAX = 5
    };

    enum class ENavigationQueryResult : uint8_t //Enum Engine.ENavigationQueryResult
    {
        Invalid = 0,
        Error = 1,
        Fail = 2,
        Success = 3,
        ENavigationQueryResult_MAX = 4
    };

    enum class ENavPathEvent : uint8_t //Enum Engine.ENavPathEvent
    {
        Cleared = 0,
        NewPath = 1,
        UpdatedDueToGoalMoved = 2,
        UpdatedDueToNavigationChanged = 3,
        Invalidated = 4,
        RePathFailed = 5,
        MetaPathUpdate = 6,
        Custom = 7,
        ENavPathEvent_MAX = 8
    };

    enum class ENavDataGatheringModeConfig : uint8_t //Enum Engine.ENavDataGatheringModeConfig
    {
        Invalid = 0,
        Instant = 1,
        Lazy = 2,
        ENavDataGatheringModeConfig_MAX = 3
    };

    enum class ENavDataGatheringMode : uint8_t //Enum Engine.ENavDataGatheringMode
    {
        Default = 0,
        Instant = 1,
        Lazy = 2,
        ENavDataGatheringMode_MAX = 3
    };

    enum class ENavigationOptionFlag : uint8_t //Enum Engine.ENavigationOptionFlag
    {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3
    };

    enum class ENavLinkDirection : uint8_t //Enum Engine.ENavLinkDirection
    {
        BothWays = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ENavLinkDirection_MAX = 3
    };

    enum class EFastArraySerializerDeltaFlags : uint8_t //Enum Engine.EFastArraySerializerDeltaFlags
    {
        None = 0,
        HasBeenSerialized = 1,
        HasDeltaBeenRequested = 2,
        IsUsingDeltaSerialization = 4,
        EFastArraySerializerDeltaFlags_MAX = 5
    };

    enum class EEmitterRenderMode : uint8_t //Enum Engine.EEmitterRenderMode
    {
        ERM_Normal = 0,
        ERM_Point = 1,
        ERM_Cross = 2,
        ERM_LightsOnly = 3,
        ERM_None = 4,
        ERM_MAX = 5
    };

    enum class EParticleSubUVInterpMethod : uint8_t //Enum Engine.EParticleSubUVInterpMethod
    {
        PSUVIM_None = 0,
        PSUVIM_Linear = 1,
        PSUVIM_Linear_Blend = 2,
        PSUVIM_Random = 3,
        PSUVIM_Random_Blend = 4,
        PSUVIM_MAX = 5
    };

    enum class EParticleBurstMethod : uint8_t //Enum Engine.EParticleBurstMethod
    {
        EPBM_Instant = 0,
        EPBM_Interpolated = 1,
        EPBM_MAX = 2
    };

    enum class EParticleSystemInsignificanceReaction : uint8_t //Enum Engine.EParticleSystemInsignificanceReaction
    {
        Auto = 0,
        Complete = 1,
        DisableTick = 2,
        DisableTickAndKill = 3,
        Num = 4,
        EParticleSystemInsignificanceReaction_MAX = 5
    };

    enum class EParticleSignificanceLevel : uint8_t //Enum Engine.EParticleSignificanceLevel
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Critical = 3,
        Num = 4,
        EParticleSignificanceLevel_MAX = 5
    };

    enum class EParticleDetailMode : uint8_t //Enum Engine.EParticleDetailMode
    {
        PDM_Low = 0,
        PDM_Medium = 1,
        PDM_High = 2,
        PDM_MAX = 3
    };

    enum class EParticleSourceSelectionMethod : uint8_t //Enum Engine.EParticleSourceSelectionMethod
    {
        EPSSM_Random = 0,
        EPSSM_Sequential = 1,
        EPSSM_MAX = 2
    };

    enum class EModuleType : uint8_t //Enum Engine.EModuleType
    {
        EPMT_General = 0,
        EPMT_TypeData = 1,
        EPMT_Beam = 2,
        EPMT_Trail = 3,
        EPMT_Spawn = 4,
        EPMT_Required = 5,
        EPMT_Event = 6,
        EPMT_Light = 7,
        EPMT_SubUV = 8,
        EPMT_MAX = 9
    };

    enum class EAttractorParticleSelectionMethod : uint8_t //Enum Engine.EAttractorParticleSelectionMethod
    {
        EAPSM_Random = 0,
        EAPSM_Sequential = 1,
        EAPSM_MAX = 2
    };

    enum class Beam2SourceTargetTangentMethod : uint8_t //Enum Engine.Beam2SourceTargetTangentMethod
    {
        PEB2STTM_Direct = 0,
        PEB2STTM_UserSet = 1,
        PEB2STTM_Distribution = 2,
        PEB2STTM_Emitter = 3,
        PEB2STTM_MAX = 4
    };

    enum class Beam2SourceTargetMethod : uint8_t //Enum Engine.Beam2SourceTargetMethod
    {
        PEB2STM_Default = 0,
        PEB2STM_UserSet = 1,
        PEB2STM_Emitter = 2,
        PEB2STM_Particle = 3,
        PEB2STM_Actor = 4,
        PEB2STM_MAX = 5
    };

    enum class BeamModifierType : uint8_t //Enum Engine.BeamModifierType
    {
        PEB2MT_Source = 0,
        PEB2MT_Target = 1,
        PEB2MT_MAX = 2
    };

    enum class EParticleCameraOffsetUpdateMethod : uint8_t //Enum Engine.EParticleCameraOffsetUpdateMethod
    {
        EPCOUM_DirectSet = 0,
        EPCOUM_Additive = 1,
        EPCOUM_Scalar = 2,
        EPCOUM_MAX = 3
    };

    enum class EParticleCollisionComplete : uint8_t //Enum Engine.EParticleCollisionComplete
    {
        EPCC_Kill = 0,
        EPCC_Freeze = 1,
        EPCC_HaltCollisions = 2,
        EPCC_FreezeTranslation = 3,
        EPCC_FreezeRotation = 4,
        EPCC_FreezeMovement = 5,
        EPCC_MAX = 6
    };

    enum class EParticleCollisionResponse : uint8_t //Enum Engine.EParticleCollisionResponse
    {
        Bounce = 0,
        Stop = 1,
        Kill = 2,
        EParticleCollisionResponse_MAX = 3
    };

    enum class ELocationBoneSocketSelectionMethod : uint8_t //Enum Engine.ELocationBoneSocketSelectionMethod
    {
        BONESOCKETSEL_Sequential = 0,
        BONESOCKETSEL_Random = 1,
        BONESOCKETSEL_MAX = 2
    };

    enum class ELocationBoneSocketSource : uint8_t //Enum Engine.ELocationBoneSocketSource
    {
        BONESOCKETSOURCE_Bones = 0,
        BONESOCKETSOURCE_Sockets = 1,
        BONESOCKETSOURCE_MAX = 2
    };

    enum class ELocationEmitterSelectionMethod : uint8_t //Enum Engine.ELocationEmitterSelectionMethod
    {
        ELESM_Random = 0,
        ELESM_Sequential = 1,
        ELESM_MAX = 2
    };

    enum class CylinderHeightAxis : uint8_t //Enum Engine.CylinderHeightAxis
    {
        PMLPC_HEIGHTAXIS_X = 0,
        PMLPC_HEIGHTAXIS_Y = 1,
        PMLPC_HEIGHTAXIS_Z = 2,
        PMLPC_HEIGHTAXIS_MAX = 3
    };

    enum class ELocationSkelVertSurfaceSource : uint8_t //Enum Engine.ELocationSkelVertSurfaceSource
    {
        VERTSURFACESOURCE_Vert = 0,
        VERTSURFACESOURCE_Surface = 1,
        VERTSURFACESOURCE_MAX = 2
    };

    enum class EOrbitChainMode : uint8_t //Enum Engine.EOrbitChainMode
    {
        EOChainMode_Add = 0,
        EOChainMode_Scale = 1,
        EOChainMode_Link = 2,
        EOChainMode_MAX = 3
    };

    enum class EParticleAxisLock : uint8_t //Enum Engine.EParticleAxisLock
    {
        EPAL_NONE = 0,
        EPAL_X = 1,
        EPAL_Y = 2,
        EPAL_Z = 3,
        EPAL_NEGATIVE_X = 4,
        EPAL_NEGATIVE_Y = 5,
        EPAL_NEGATIVE_Z = 6,
        EPAL_ROTATE_X = 7,
        EPAL_ROTATE_Y = 8,
        EPAL_ROTATE_Z = 9,
        EPAL_MAX = 10
    };

    enum class EEmitterDynamicParameterValue : uint8_t //Enum Engine.EEmitterDynamicParameterValue
    {
        EDPV_UserSet = 0,
        EDPV_AutoSet = 1,
        EDPV_VelocityX = 2,
        EDPV_VelocityY = 3,
        EDPV_VelocityZ = 4,
        EDPV_VelocityMag = 5,
        EDPV_MAX = 6
    };

    enum class EEmitterNormalsMode : uint8_t //Enum Engine.EEmitterNormalsMode
    {
        ENM_CameraFacing = 0,
        ENM_Spherical = 1,
        ENM_Cylindrical = 2,
        ENM_MAX = 3
    };

    enum class EParticleSortMode : uint8_t //Enum Engine.EParticleSortMode
    {
        PSORTMODE_None = 0,
        PSORTMODE_ViewProjDepth = 1,
        PSORTMODE_DistanceToView = 2,
        PSORTMODE_Age_OldestFirst = 3,
        PSORTMODE_Age_NewestFirst = 4,
        PSORTMODE_MAX = 5
    };

    enum class EParticleUVFlipMode : uint8_t //Enum Engine.EParticleUVFlipMode
    {
        None = 0,
        FlipUV = 1,
        FlipUOnly = 2,
        FlipVOnly = 3,
        RandomFlipUV = 4,
        RandomFlipUOnly = 5,
        RandomFlipVOnly = 6,
        RandomFlipUVIndependent = 7,
        EParticleUVFlipMode_MAX = 8
    };

    enum class ETrail2SourceMethod : uint8_t //Enum Engine.ETrail2SourceMethod
    {
        PET2SRCM_Default = 0,
        PET2SRCM_Particle = 1,
        PET2SRCM_Actor = 2,
        PET2SRCM_MAX = 3
    };

    enum class EBeamTaperMethod : uint8_t //Enum Engine.EBeamTaperMethod
    {
        PEBTM_None = 0,
        PEBTM_Full = 1,
        PEBTM_Partial = 2,
        PEBTM_MAX = 3
    };

    enum class EBeam2Method : uint8_t //Enum Engine.EBeam2Method
    {
        PEB2M_Distance = 0,
        PEB2M_Target = 1,
        PEB2M_Branch = 2,
        PEB2M_MAX = 3
    };

    enum class EMeshCameraFacingOptions : uint8_t //Enum Engine.EMeshCameraFacingOptions
    {
        XAxisFacing_NoUp = 0,
        XAxisFacing_ZUp = 1,
        XAxisFacing_NegativeZUp = 2,
        XAxisFacing_YUp = 3,
        XAxisFacing_NegativeYUp = 4,
        LockedAxis_ZAxisFacing = 5,
        LockedAxis_NegativeZAxisFacing = 6,
        LockedAxis_YAxisFacing = 7,
        LockedAxis_NegativeYAxisFacing = 8,
        VelocityAligned_ZAxisFacing = 9,
        VelocityAligned_NegativeZAxisFacing = 10,
        VelocityAligned_YAxisFacing = 11,
        VelocityAligned_NegativeYAxisFacing = 12,
        EMeshCameraFacingOptions_MAX = 13
    };

    enum class EMeshCameraFacingUpAxis : uint8_t //Enum Engine.EMeshCameraFacingUpAxis
    {
        CameraFacing_NoneUP = 0,
        CameraFacing_ZUp = 1,
        CameraFacing_NegativeZUp = 2,
        CameraFacing_YUp = 3,
        CameraFacing_NegativeYUp = 4,
        CameraFacing_MAX = 5
    };

    enum class EMeshScreenAlignment : uint8_t //Enum Engine.EMeshScreenAlignment
    {
        PSMA_MeshFaceCameraWithRoll = 0,
        PSMA_MeshFaceCameraWithSpin = 1,
        PSMA_MeshFaceCameraWithLockedAxis = 2,
        PSMA_MAX = 3
    };

    enum class ETrailsRenderAxisOption : uint8_t //Enum Engine.ETrailsRenderAxisOption
    {
        Trails_CameraUp = 0,
        Trails_SourceUp = 1,
        Trails_WorldUp = 2,
        Trails_MAX = 3
    };

    enum class EParticleScreenAlignment : uint8_t //Enum Engine.EParticleScreenAlignment
    {
        PSA_FacingCameraPosition = 0,
        PSA_Square = 1,
        PSA_Rectangle = 2,
        PSA_Velocity = 3,
        PSA_AwayFromCenter = 4,
        PSA_TypeSpecific = 5,
        PSA_FacingCameraDistanceBlend = 6,
        PSA_MAX = 7
    };

    enum class EParticleSystemOcclusionBoundsMethod : uint8_t //Enum Engine.EParticleSystemOcclusionBoundsMethod
    {
        EPSOBM_None = 0,
        EPSOBM_ParticleBounds = 1,
        EPSOBM_CustomBounds = 2,
        EPSOBM_MAX = 3
    };

    enum class ParticleSystemLODMethod : uint8_t //Enum Engine.ParticleSystemLODMethod
    {
        PARTICLESYSTEMLODMETHOD_Automatic = 0,
        PARTICLESYSTEMLODMETHOD_DirectSet = 1,
        PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
        PARTICLESYSTEMLODMETHOD_MAX = 3
    };

    enum class EParticleSystemUpdateMode : uint8_t //Enum Engine.EParticleSystemUpdateMode
    {
        EPSUM_RealTime = 0,
        EPSUM_FixedTime = 1,
        EPSUM_MAX = 2
    };

    enum class EParticleEventType : uint8_t //Enum Engine.EParticleEventType
    {
        EPET_Any = 0,
        EPET_Spawn = 1,
        EPET_Death = 2,
        EPET_Collision = 3,
        EPET_Burst = 4,
        EPET_Blueprint = 5,
        EPET_MAX = 6
    };

    enum class ParticleReplayState : uint8_t //Enum Engine.ParticleReplayState
    {
        PRS_Disabled = 0,
        PRS_Capturing = 1,
        PRS_Replaying = 2,
        PRS_MAX = 3
    };

    enum class EParticleSysParamType : uint8_t //Enum Engine.EParticleSysParamType
    {
        PSPT_None = 0,
        PSPT_Scalar = 1,
        PSPT_ScalarRand = 2,
        PSPT_Vector = 3,
        PSPT_VectorRand = 4,
        PSPT_Color = 5,
        PSPT_Actor = 6,
        PSPT_Material = 7,
        PSPT_VectorUnitRand = 8,
        PSPT_MAX = 9
    };

    enum class ESettingsLockedAxis : uint8_t //Enum Engine.ESettingsLockedAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        Invalid = 4,
        ESettingsLockedAxis_MAX = 5
    };

    enum class ESettingsDOF : uint8_t //Enum Engine.ESettingsDOF
    {
        Full3D = 0,
        YZPlane = 1,
        XZPlane = 2,
        XYPlane = 3,
        ESettingsDOF_MAX = 4
    };

    enum class EFrictionCombineMode : uint8_t //Enum Engine.EFrictionCombineMode
    {
        Average = 0,
        Min = 1,
        Multiply = 2,
        Max = 3
    };

    enum class EViewTargetBlendFunction : uint8_t //Enum Engine.EViewTargetBlendFunction
    {
        VTBlend_Linear = 0,
        VTBlend_Cubic = 1,
        VTBlend_EaseIn = 2,
        VTBlend_EaseOut = 3,
        VTBlend_EaseInOut = 4,
        VTBlend_MAX = 5
    };

    enum class EDynamicForceFeedbackAction : uint8_t //Enum Engine.EDynamicForceFeedbackAction
    {
        Start = 0,
        Update = 1,
        Stop = 2,
        EDynamicForceFeedbackAction_MAX = 3
    };

    enum class ERendererStencilMask : uint8_t //Enum Engine.ERendererStencilMask
    {
        ERSM_Default = 0,
        ERSM_256 = 1,
        ERSM_2 = 2,
        ERSM_3 = 3,
        ERSM_5 = 4,
        ERSM_9 = 5,
        ERSM_17 = 6,
        ERSM_33 = 7,
        ERSM_65 = 8,
        ERSM_129 = 9,
        ERSM_MAX = 10
    };

    enum class EHasCustomNavigableGeometry : uint8_t //Enum Engine.EHasCustomNavigableGeometry
    {
        No = 0,
        Yes = 1,
        EvenIfNotCollidable = 2,
        DontExport = 3,
        EHasCustomNavigableGeometry_MAX = 4
    };

    enum class ECanBeCharacterBase : uint8_t //Enum Engine.ECanBeCharacterBase
    {
        ECB_No = 0,
        ECB_Yes = 1,
        ECB_Owner = 2,
        ECB_MAX = 3
    };

    enum class ERichCurveExtrapolation : uint8_t //Enum Engine.ERichCurveExtrapolation
    {
        RCCE_Cycle = 0,
        RCCE_CycleWithOffset = 1,
        RCCE_Oscillate = 2,
        RCCE_Linear = 3,
        RCCE_Constant = 4,
        RCCE_None = 5,
        RCCE_MAX = 6
    };

    enum class ERichCurveInterpMode : uint8_t //Enum Engine.ERichCurveInterpMode
    {
        RCIM_Linear = 0,
        RCIM_Constant = 1,
        RCIM_Cubic = 2,
        RCIM_None = 3,
        RCIM_MAX = 4
    };

    enum class EReflectionSourceType : uint8_t //Enum Engine.EReflectionSourceType
    {
        CapturedScene = 0,
        SpecifiedCubemap = 1,
        EReflectionSourceType_MAX = 2
    };

    enum class EDefaultBackBufferPixelFormat : uint8_t //Enum Engine.EDefaultBackBufferPixelFormat
    {
        DBBPF_B8G8R8A8 = 0,
        DBBPF_A16B16G16R16_DEPRECATED = 1,
        DBBPF_FloatRGB_DEPRECATED = 2,
        DBBPF_FloatRGBA = 3,
        DBBPF_A2B10G10R10 = 4,
        DBBPF_MAX = 5
    };

    enum class EAutoExposureMethodUI : uint8_t //Enum Engine.EAutoExposureMethodUI
    {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3
    };

    enum class EAlphaChannelMode : uint8_t //Enum Engine.EAlphaChannelMode
    {
        Disabled = 0,
        LinearColorSpaceOnly = 1,
        AllowThroughTonemapper = 2,
        EAlphaChannelMode_MAX = 3
    };

    enum class EEarlyZPass : uint8_t //Enum Engine.EEarlyZPass
    {
        None = 0,
        OpaqueOnly = 1,
        OpaqueAndMasked = 2,
        Auto = 3,
        EEarlyZPass_MAX = 4
    };

    enum class ECustomDepthStencil : uint8_t //Enum Engine.ECustomDepthStencil
    {
        Disabled = 0,
        Enabled = 1,
        EnabledOnDemand = 2,
        EnabledWithStencil = 3,
        ECustomDepthStencil_MAX = 4
    };

    enum class EMobileMSAASampleCount : uint8_t //Enum Engine.EMobileMSAASampleCount
    {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        EMobileMSAASampleCount_MAX = 9
    };

    enum class ECompositingSampleCount : uint8_t //Enum Engine.ECompositingSampleCount
    {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        ECompositingSampleCount_MAX = 9
    };

    enum class EClearSceneOptions : uint8_t //Enum Engine.EClearSceneOptions
    {
        NoClear = 0,
        HardwareClear = 1,
        QuadAtMaxZ = 2,
        EClearSceneOptions_MAX = 3
    };

    enum class EReporterLineStyle : uint8_t //Enum Engine.EReporterLineStyle
    {
        Line = 0,
        Dash = 1,
        EReporterLineStyle_MAX = 2
    };

    enum class ELegendPosition : uint8_t //Enum Engine.ELegendPosition
    {
        Outside = 0,
        Inside = 1,
        ELegendPosition_MAX = 2
    };

    enum class EGraphDataStyle : uint8_t //Enum Engine.EGraphDataStyle
    {
        Lines = 0,
        Filled = 1,
        EGraphDataStyle_MAX = 2
    };

    enum class EGraphAxisStyle : uint8_t //Enum Engine.EGraphAxisStyle
    {
        Lines = 0,
        Notches = 1,
        Grid = 2,
        EGraphAxisStyle_MAX = 3
    };

    enum class ReverbPreset : uint8_t //Enum Engine.ReverbPreset
    {
        REVERB_Default = 0,
        REVERB_Bathroom = 1,
        REVERB_StoneRoom = 2,
        REVERB_Auditorium = 3,
        REVERB_ConcertHall = 4,
        REVERB_Cave = 5,
        REVERB_Hallway = 6,
        REVERB_StoneCorridor = 7,
        REVERB_Alley = 8,
        REVERB_Forest = 9,
        REVERB_City = 10,
        REVERB_Mountains = 11,
        REVERB_Quarry = 12,
        REVERB_Plain = 13,
        REVERB_ParkingLot = 14,
        REVERB_SewerPipe = 15,
        REVERB_Underwater = 16,
        REVERB_SmallRoom = 17,
        REVERB_MediumRoom = 18,
        REVERB_LargeRoom = 19,
        REVERB_MediumHall = 20,
        REVERB_LargeHall = 21,
        REVERB_Plate = 22,
        REVERB_MAX = 23
    };

    enum class ERichCurveKeyTimeCompressionFormat : uint8_t //Enum Engine.ERichCurveKeyTimeCompressionFormat
    {
        RCKTCF_uint16 = 0,
        RCKTCF_float32 = 1,
        RCKTCF_MAX = 2
    };

    enum class ERichCurveCompressionFormat : uint8_t //Enum Engine.ERichCurveCompressionFormat
    {
        RCCF_Empty = 0,
        RCCF_Constant = 1,
        RCCF_Linear = 2,
        RCCF_Cubic = 3,
        RCCF_Mixed = 4,
        RCCF_MAX = 5
    };

    enum class ERichCurveTangentWeightMode : uint8_t //Enum Engine.ERichCurveTangentWeightMode
    {
        RCTWM_WeightedNone = 0,
        RCTWM_WeightedArrive = 1,
        RCTWM_WeightedLeave = 2,
        RCTWM_WeightedBoth = 3,
        RCTWM_MAX = 4
    };

    enum class ERichCurveTangentMode : uint8_t //Enum Engine.ERichCurveTangentMode
    {
        RCTM_Auto = 0,
        RCTM_User = 1,
        RCTM_Break = 2,
        RCTM_None = 3,
        RCTM_MAX = 4
    };

    enum class EConstraintTransform : uint8_t //Enum Engine.EConstraintTransform
    {
        Absolute = 0,
        Relative = 1,
        EConstraintTransform_MAX = 2
    };

    enum class EControlConstraint : uint8_t //Enum Engine.EControlConstraint
    {
        Orientation = 0,
        Translation = 1,
        MAX = 2
    };

    enum class ERootMotionFinishVelocityMode : uint8_t //Enum Engine.ERootMotionFinishVelocityMode
    {
        MaintainLastRootMotionVelocity = 0,
        SetVelocity = 1,
        ClampVelocity = 2,
        ERootMotionFinishVelocityMode_MAX = 3
    };

    enum class ERootMotionSourceSettingsFlags : uint8_t //Enum Engine.ERootMotionSourceSettingsFlags
    {
        UseSensitiveLiftoffCheck = 1,
        DisablePartialEndTick = 2,
        IgnoreZAccumulate = 4,
        ERootMotionSourceSettingsFlags_MAX = 5
    };

    enum class ERootMotionSourceStatusFlags : uint8_t //Enum Engine.ERootMotionSourceStatusFlags
    {
        Prepared = 1,
        Finished = 2,
        MarkedForRemoval = 4,
        ERootMotionSourceStatusFlags_MAX = 5
    };

    enum class ERootMotionAccumulateMode : uint8_t //Enum Engine.ERootMotionAccumulateMode
    {
        Override = 0,
        Additive = 1,
        ERootMotionAccumulateMode_MAX = 2
    };

    enum class ERuntimeVirtualTextureMainPassType : uint8_t //Enum Engine.ERuntimeVirtualTextureMainPassType
    {
        Never = 0,
        Exclusive = 1,
        Always = 2,
        ERuntimeVirtualTextureMainPassType_MAX = 3
    };

    enum class ERuntimeVirtualTextureMaterialType : uint8_t //Enum Engine.ERuntimeVirtualTextureMaterialType
    {
        BaseColor = 0,
        BaseColor_Normal_DEPRECATED = 1,
        BaseColor_Normal_Specular = 2,
        BaseColor_Normal_Specular_YCoCg = 3,
        BaseColor_Normal_Specular_Mask_YCoCg = 4,
        WorldHeight = 5,
        Count = 6,
        ERuntimeVirtualTextureMaterialType_MAX = 7
    };

    enum class EReflectedAndRefractedRayTracedShadows : uint8_t //Enum Engine.EReflectedAndRefractedRayTracedShadows
    {
        Disabled = 0,
        Hard_shadows = 1,
        Area_shadows = 2,
        EReflectedAndRefractedRayTracedShadows_MAX = 3
    };

    enum class ERayTracingGlobalIlluminationType : uint8_t //Enum Engine.ERayTracingGlobalIlluminationType
    {
        Disabled = 0,
        BruteForce = 1,
        FinalGather = 2,
        ERayTracingGlobalIlluminationType_MAX = 3
    };

    enum class ETranslucencyType : uint8_t //Enum Engine.ETranslucencyType
    {
        Raster = 0,
        RayTracing = 1,
        ETranslucencyType_MAX = 2
    };

    enum class EReflectionsType : uint8_t //Enum Engine.EReflectionsType
    {
        ScreenSpace = 0,
        RayTracing = 1,
        EReflectionsType_MAX = 2
    };

    enum class ELightUnits : uint8_t //Enum Engine.ELightUnits
    {
        Unitless = 0,
        Candelas = 1,
        Lumens = 2,
        ELightUnits_MAX = 3
    };

    enum class EBloomMethod : uint8_t //Enum Engine.EBloomMethod
    {
        BM_SOG = 0,
        BM_FFT = 1,
        BM_MAX = 2
    };

    enum class EAutoExposureMethod : uint8_t //Enum Engine.EAutoExposureMethod
    {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3
    };

    enum class EAntiAliasingMethod : uint8_t //Enum Engine.EAntiAliasingMethod
    {
        AAM_None = 0,
        AAM_FXAA = 1,
        AAM_TemporalAA = 2,
        AAM_MSAA = 3,
        AAM_MAX = 4
    };

    enum class EDepthOfFieldMethod : uint8_t //Enum Engine.EDepthOfFieldMethod
    {
        DOFM_BokehDOF = 0,
        DOFM_Gaussian = 1,
        DOFM_CircleDOF = 2,
        DOFM_MAX = 3
    };

    enum class ESceneCapturePrimitiveRenderMode : uint8_t //Enum Engine.ESceneCapturePrimitiveRenderMode
    {
        PRM_LegacySceneCapture = 0,
        PRM_RenderScenePrimitives = 1,
        PRM_UseShowOnlyList = 2,
        PRM_MAX = 3
    };

    enum class EMaterialProperty : uint8_t //Enum Engine.EMaterialProperty
    {
        MP_EmissiveColor = 0,
        MP_Opacity = 1,
        MP_OpacityMask = 2,
        MP_DiffuseColor = 3,
        MP_SpecularColor = 4,
        MP_BaseColor = 5,
        MP_Metallic = 6,
        MP_Specular = 7,
        MP_Roughness = 8,
        MP_Anisotropy = 9,
        MP_Normal = 10,
        MP_Tangent = 11,
        MP_WorldPositionOffset = 12,
        MP_WorldDisplacement = 13,
        MP_TessellationMultiplier = 14,
        MP_SubsurfaceColor = 15,
        MP_CustomData0 = 16,
        MP_CustomData1 = 17,
        MP_AmbientOcclusion = 18,
        MP_Refraction = 19,
        MP_CustomizedUVs0 = 20,
        MP_CustomizedUVs1 = 21,
        MP_CustomizedUVs2 = 22,
        MP_CustomizedUVs3 = 23,
        MP_CustomizedUVs4 = 24,
        MP_CustomizedUVs5 = 25,
        MP_CustomizedUVs6 = 26,
        MP_CustomizedUVs7 = 27,
        MP_PixelDepthOffset = 28,
        MP_ShadingModel = 29,
        MP_MaterialAttributes = 30,
        MP_CustomOutput = 31,
        MP_MAX = 32
    };

    enum class ESkinCacheDefaultBehavior : uint8_t //Enum Engine.ESkinCacheDefaultBehavior
    {
        Exclusive = 0,
        Inclusive = 1,
        ESkinCacheDefaultBehavior_MAX = 2
    };

    enum class ESkinCacheUsage : uint32_t //Enum Engine.ESkinCacheUsage
    {
        Auto = 0,
        Disabled = 255,
        Enabled = 1,
        ESkinCacheUsage_MAX = 256
    };

    enum class EPhysicsTransformUpdateMode : uint8_t //Enum Engine.EPhysicsTransformUpdateMode
    {
        SimulationUpatesComponentTransform = 0,
        ComponentTransformIsKinematic = 1,
        EPhysicsTransformUpdateMode_MAX = 2
    };

    enum class EAnimationMode : uint8_t //Enum Engine.EAnimationMode
    {
        AnimationBlueprint = 0,
        AnimationSingleNode = 1,
        AnimationCustomMode = 2,
        EAnimationMode_MAX = 3
    };

    enum class EKinematicBonesUpdateToPhysics : uint8_t //Enum Engine.EKinematicBonesUpdateToPhysics
    {
        SkipSimulatingBones = 0,
        SkipAllBones = 1,
        EKinematicBonesUpdateToPhysics_MAX = 2
    };

    enum class EClothMassMode : uint8_t //Enum Engine.EClothMassMode
    {
        UniformMass = 0,
        TotalMass = 1,
        Density = 2,
        MaxClothMassMode = 3,
        EClothMassMode_MAX = 4
    };

    enum class EAnimCurveType : uint8_t //Enum Engine.EAnimCurveType
    {
        AttributeCurve = 0,
        MaterialCurve = 1,
        MorphTargetCurve = 2,
        MaxAnimCurveType = 3,
        EAnimCurveType_MAX = 4
    };

    enum class ESkeletalMeshSkinningImportVersions : uint8_t //Enum Engine.ESkeletalMeshSkinningImportVersions
    {
        Before_Versionning = 0,
        SkeletalMeshBuildRefactor = 1,
        VersionPlusOne = 2,
        LatestVersion = 1,
        ESkeletalMeshSkinningImportVersions_MAX = 3
    };

    enum class ESkeletalMeshGeoImportVersions : uint8_t //Enum Engine.ESkeletalMeshGeoImportVersions
    {
        Before_Versionning = 0,
        SkeletalMeshBuildRefactor = 1,
        VersionPlusOne = 2,
        LatestVersion = 1,
        ESkeletalMeshGeoImportVersions_MAX = 3
    };

    enum class EBoneFilterActionOption : uint8_t //Enum Engine.EBoneFilterActionOption
    {
        Remove = 0,
        Keep = 1,
        Invalid = 2,
        EBoneFilterActionOption_MAX = 3
    };

    enum class SkeletalMeshOptimizationImportance : uint8_t //Enum Engine.SkeletalMeshOptimizationImportance
    {
        SMOI_Off = 0,
        SMOI_Lowest = 1,
        SMOI_Low = 2,
        SMOI_Normal = 3,
        SMOI_High = 4,
        SMOI_Highest = 5,
        SMOI_MAX = 6
    };

    enum class SkeletalMeshOptimizationType : uint8_t //Enum Engine.SkeletalMeshOptimizationType
    {
        SMOT_NumOfTriangles = 0,
        SMOT_MaxDeviation = 1,
        SMOT_TriangleOrDeviation = 2,
        SMOT_MAX = 3
    };

    enum class SkeletalMeshTerminationCriterion : uint8_t //Enum Engine.SkeletalMeshTerminationCriterion
    {
        SMTC_NumOfTriangles = 0,
        SMTC_NumOfVerts = 1,
        SMTC_TriangleOrVert = 2,
        SMTC_AbsNumOfTriangles = 3,
        SMTC_AbsNumOfVerts = 4,
        SMTC_AbsTriangleOrVert = 5,
        SMTC_MAX = 6
    };

    enum class EBoneTranslationRetargetingMode : uint8_t //Enum Engine.EBoneTranslationRetargetingMode
    {
        Animation = 0,
        Skeleton = 1,
        AnimationScaled = 2,
        AnimationRelative = 3,
        OrientAndScale = 4,
        EBoneTranslationRetargetingMode_MAX = 5
    };

    enum class EBoneSpaces : uint8_t //Enum Engine.EBoneSpaces
    {
        WorldSpace = 0,
        ComponentSpace = 1,
        EBoneSpaces_MAX = 2
    };

    enum class EVisibilityBasedAnimTickOption : uint8_t //Enum Engine.EVisibilityBasedAnimTickOption
    {
        AlwaysTickPoseAndRefreshBones = 0,
        AlwaysTickPose = 1,
        OnlyTickMontagesWhenNotRendered = 2,
        OnlyTickPoseWhenRendered = 3,
        EVisibilityBasedAnimTickOption_MAX = 4
    };

    enum class EPhysBodyOp : uint8_t //Enum Engine.EPhysBodyOp
    {
        PBO_None = 0,
        PBO_Term = 1,
        PBO_MAX = 2
    };

    enum class EBoneVisibilityStatus : uint8_t //Enum Engine.EBoneVisibilityStatus
    {
        BVS_HiddenByParent = 0,
        BVS_Visible = 1,
        BVS_ExplicitlyHidden = 2,
        BVS_MAX = 3
    };

    enum class ESkyAtmosphereTransformMode : uint8_t //Enum Engine.ESkyAtmosphereTransformMode
    {
        PlanetTopAtAbsoluteWorldOrigin = 0,
        PlanetTopAtComponentTransform = 1,
        PlanetCenterAtComponentTransform = 2,
        ESkyAtmosphereTransformMode_MAX = 3
    };

    enum class ESkyLightSourceType : uint8_t //Enum Engine.ESkyLightSourceType
    {
        SLS_CapturedScene = 0,
        SLS_SpecifiedCubemap = 1,
        SLS_MAX = 2
    };

    enum class EPriorityAttenuationMethod : uint8_t //Enum Engine.EPriorityAttenuationMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        EPriorityAttenuationMethod_MAX = 3
    };

    enum class ESubmixSendMethod : uint8_t //Enum Engine.ESubmixSendMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESubmixSendMethod_MAX = 3
    };

    enum class EReverbSendMethod : uint8_t //Enum Engine.EReverbSendMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        EReverbSendMethod_MAX = 3
    };

    enum class EAirAbsorptionMethod : uint8_t //Enum Engine.EAirAbsorptionMethod
    {
        Linear = 0,
        CustomCurve = 1,
        EAirAbsorptionMethod_MAX = 2
    };

    enum class ESoundSpatializationAlgorithm : uint8_t //Enum Engine.ESoundSpatializationAlgorithm
    {
        SPATIALIZATION_Default = 0,
        SPATIALIZATION_HRTF = 1,
        SPATIALIZATION_MAX = 2
    };

    enum class ESoundDistanceCalc : uint8_t //Enum Engine.ESoundDistanceCalc
    {
        SOUNDDISTANCE_Normal = 0,
        SOUNDDISTANCE_InfiniteXYPlane = 1,
        SOUNDDISTANCE_InfiniteXZPlane = 2,
        SOUNDDISTANCE_InfiniteYZPlane = 3,
        SOUNDDISTANCE_MAX = 4
    };

    enum class EVirtualizationMode : uint8_t //Enum Engine.EVirtualizationMode
    {
        Disabled = 0,
        PlayWhenSilent = 1,
        Restart = 2,
        EVirtualizationMode_MAX = 3
    };

    enum class EMaxConcurrentResolutionRule : uint8_t //Enum Engine.EMaxConcurrentResolutionRule
    {
        PreventNew = 0,
        StopOldest = 1,
        StopFarthestThenPreventNew = 2,
        StopFarthestThenOldest = 3,
        StopLowestPriority = 4,
        StopQuietest = 5,
        StopLowestPriorityThenPreventNew = 6,
        Count = 7,
        EMaxConcurrentResolutionRule_MAX = 8
    };

    enum class ESoundGroup : uint8_t //Enum Engine.ESoundGroup
    {
        SOUNDGROUP_Default = 0,
        SOUNDGROUP_Effects = 1,
        SOUNDGROUP_UI = 2,
        SOUNDGROUP_Music = 3,
        SOUNDGROUP_Voice = 4,
        SOUNDGROUP_GameSoundGroup1 = 5,
        SOUNDGROUP_GameSoundGroup2 = 6,
        SOUNDGROUP_GameSoundGroup3 = 7,
        SOUNDGROUP_GameSoundGroup4 = 8,
        SOUNDGROUP_GameSoundGroup5 = 9,
        SOUNDGROUP_GameSoundGroup6 = 10,
        SOUNDGROUP_GameSoundGroup7 = 11,
        SOUNDGROUP_GameSoundGroup8 = 12,
        SOUNDGROUP_GameSoundGroup9 = 13,
        SOUNDGROUP_GameSoundGroup10 = 14,
        SOUNDGROUP_GameSoundGroup11 = 15,
        SOUNDGROUP_GameSoundGroup12 = 16,
        SOUNDGROUP_GameSoundGroup13 = 17,
        SOUNDGROUP_GameSoundGroup14 = 18,
        SOUNDGROUP_GameSoundGroup15 = 19,
        SOUNDGROUP_GameSoundGroup16 = 20,
        SOUNDGROUP_GameSoundGroup17 = 21,
        SOUNDGROUP_GameSoundGroup18 = 22,
        SOUNDGROUP_GameSoundGroup19 = 23,
        SOUNDGROUP_GameSoundGroup20 = 24,
        SOUNDGROUP_MAX = 25
    };

    enum class ModulationParamMode : uint8_t //Enum Engine.ModulationParamMode
    {
        MPM_Normal = 0,
        MPM_Abs = 1,
        MPM_Direct = 2,
        MPM_MAX = 3
    };

    enum class ESourceBusChannels : uint8_t //Enum Engine.ESourceBusChannels
    {
        Mono = 0,
        Stereo = 1,
        ESourceBusChannels_MAX = 2
    };

    enum class ESourceBusSendLevelControlMethod : uint8_t //Enum Engine.ESourceBusSendLevelControlMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESourceBusSendLevelControlMethod_MAX = 3
    };

    enum class ESendLevelControlMethod : uint8_t //Enum Engine.ESendLevelControlMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESendLevelControlMethod_MAX = 3
    };

    enum class EAudioRecordingExportType : uint8_t //Enum Engine.EAudioRecordingExportType
    {
        SoundWave = 0,
        WavFile = 1,
        EAudioRecordingExportType_MAX = 2
    };

    enum class ESoundWaveFFTSize : uint8_t //Enum Engine.ESoundWaveFFTSize
    {
        VerySmall_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        VeryLarge_2049 = 4,
        ESoundWaveFFTSize_MAX = 5
    };

    enum class EDecompressionType : uint8_t //Enum Engine.EDecompressionType
    {
        DTYPE_Setup = 0,
        DTYPE_Invalid = 1,
        DTYPE_Preview = 2,
        DTYPE_Native = 3,
        DTYPE_RealTime = 4,
        DTYPE_Procedural = 5,
        DTYPE_Xenon = 6,
        DTYPE_Streaming = 7,
        DTYPE_MAX = 8
    };

    enum class ESoundWaveLoadingBehavior : uint32_t //Enum Engine.ESoundWaveLoadingBehavior
    {
        Inherited = 0,
        RetainOnLoad = 1,
        PrimeOnLoad = 2,
        LoadOnDemand = 3,
        ForceInline = 4,
        Uninitialized = 255,
        ESoundWaveLoadingBehavior_MAX = 256
    };

    enum class ESplineCoordinateSpace : uint8_t //Enum Engine.ESplineCoordinateSpace
    {
        Local = 0,
        World = 1,
        ESplineCoordinateSpace_MAX = 2
    };

    enum class ESplinePointType : uint8_t //Enum Engine.ESplinePointType
    {
        Linear = 0,
        Curve = 1,
        Constant = 2,
        CurveClamped = 3,
        CurveCustomTangent = 4,
        ESplinePointType_MAX = 5
    };

    enum class ESplineMeshAxis : uint8_t //Enum Engine.ESplineMeshAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        ESplineMeshAxis_MAX = 3
    };

    enum class EOptimizationType : uint8_t //Enum Engine.EOptimizationType
    {
        OT_NumOfTriangles = 0,
        OT_MaxDeviation = 1,
        OT_MAX = 2
    };

    enum class EImportanceLevel : uint8_t //Enum Engine.EImportanceLevel
    {
        IL_Off = 0,
        IL_Lowest = 1,
        IL_Low = 2,
        IL_Normal = 3,
        IL_High = 4,
        IL_Highest = 5,
        TEMP_BROKEN2 = 6,
        EImportanceLevel_MAX = 7
    };

    enum class ENormalMode : uint8_t //Enum Engine.ENormalMode
    {
        NM_PreserveSmoothingGroups = 0,
        NM_RecalculateNormals = 1,
        NM_RecalculateNormalsSmooth = 2,
        NM_RecalculateNormalsHard = 3,
        TEMP_BROKEN = 4,
        ENormalMode_MAX = 5
    };

    enum class EStereoLayerShape : uint8_t //Enum Engine.EStereoLayerShape
    {
        SLSH_QuadLayer = 0,
        SLSH_CylinderLayer = 1,
        SLSH_CubemapLayer = 2,
        SLSH_EquirectLayer = 3,
        SLSH_MAX = 4
    };

    enum class EStereoLayerType : uint8_t //Enum Engine.EStereoLayerType
    {
        SLT_WorldLocked = 0,
        SLT_TrackerLocked = 1,
        SLT_FaceLocked = 2,
        SLT_MAX = 3
    };

    enum class EOpacitySourceMode : uint8_t //Enum Engine.EOpacitySourceMode
    {
        OSM_Alpha = 0,
        OSM_ColorBrightness = 1,
        OSM_RedChannel = 2,
        OSM_GreenChannel = 3,
        OSM_BlueChannel = 4,
        OSM_MAX = 5
    };

    enum class ESubUVBoundingVertexCount : uint8_t //Enum Engine.ESubUVBoundingVertexCount
    {
        BVC_FourVertices = 0,
        BVC_EightVertices = 1,
        BVC_MAX = 2
    };

    enum class EVerticalTextAligment : uint8_t //Enum Engine.EVerticalTextAligment
    {
        EVRTA_TextTop = 0,
        EVRTA_TextCenter = 1,
        EVRTA_TextBottom = 2,
        EVRTA_QuadTop = 3,
        EVRTA_MAX = 4
    };

    enum class EHorizTextAligment : uint8_t //Enum Engine.EHorizTextAligment
    {
        EHTA_Left = 0,
        EHTA_Center = 1,
        EHTA_Right = 2,
        EHTA_MAX = 3
    };

    enum class ETextureLossyCompressionAmount : uint8_t //Enum Engine.ETextureLossyCompressionAmount
    {
        TLCA_Default = 0,
        TLCA_None = 1,
        TLCA_Lowest = 2,
        TLCA_Low = 3,
        TLCA_Medium = 4,
        TLCA_High = 5,
        TLCA_Highest = 6,
        TLCA_MAX = 7
    };

    enum class ETextureCompressionQuality : uint8_t //Enum Engine.ETextureCompressionQuality
    {
        TCQ_Default = 0,
        TCQ_Lowest = 1,
        TCQ_Low = 2,
        TCQ_Medium = 3,
        TCQ_High = 4,
        TCQ_Highest = 5,
        TCQ_MAX = 6
    };

    enum class ETextureSourceFormat : uint8_t //Enum Engine.ETextureSourceFormat
    {
        TSF_Invalid = 0,
        TSF_G8 = 1,
        TSF_BGRA8 = 2,
        TSF_BGRE8 = 3,
        TSF_RGBA16 = 4,
        TSF_RGBA16F = 5,
        TSF_RGBA8 = 6,
        TSF_RGBE8 = 7,
        TSF_G16 = 8,
        TSF_MAX = 9
    };

    enum class ETextureSourceArtType : uint8_t //Enum Engine.ETextureSourceArtType
    {
        TSAT_Uncompressed = 0,
        TSAT_PNGCompressed = 1,
        TSAT_DDSFile = 2,
        TSAT_MAX = 3
    };

    enum class ETextureMipCount : uint8_t //Enum Engine.ETextureMipCount
    {
        TMC_ResidentMips = 0,
        TMC_AllMips = 1,
        TMC_AllMipsBiased = 2,
        TMC_MAX = 3
    };

    enum class ECompositeTextureMode : uint8_t //Enum Engine.ECompositeTextureMode
    {
        CTM_Disabled = 0,
        CTM_NormalRoughnessToRed = 1,
        CTM_NormalRoughnessToGreen = 2,
        CTM_NormalRoughnessToBlue = 3,
        CTM_NormalRoughnessToAlpha = 4,
        CTM_MAX = 5
    };

    enum class TextureAddress : uint8_t //Enum Engine.TextureAddress
    {
        TA_Wrap = 0,
        TA_Clamp = 1,
        TA_Mirror = 2,
        TA_MAX = 3
    };

    enum class TextureFilter : uint8_t //Enum Engine.TextureFilter
    {
        TF_Nearest = 0,
        TF_Bilinear = 1,
        TF_Trilinear = 2,
        TF_Default = 3,
        TF_MAX = 4
    };

    enum class TextureCompressionSettings : uint8_t //Enum Engine.TextureCompressionSettings
    {
        TC_Default = 0,
        TC_Normalmap = 1,
        TC_Masks = 2,
        TC_Grayscale = 3,
        TC_Displacementmap = 4,
        TC_VectorDisplacementmap = 5,
        TC_HDR = 6,
        TC_EditorIcon = 7,
        TC_Alpha = 8,
        TC_DistanceFieldFont = 9,
        TC_HDR_Compressed = 10,
        TC_BC7 = 11,
        TC_MAX = 12
    };

    enum class ETextureMipLoadOptions : uint8_t //Enum Engine.ETextureMipLoadOptions
    {
        Default = 0,
        AllMips = 1,
        OnlyFirstMip = 2,
        ETextureMipLoadOptions_MAX = 3
    };

    enum class ETextureSamplerFilter : uint8_t //Enum Engine.ETextureSamplerFilter
    {
        Point = 0,
        Bilinear = 1,
        Trilinear = 2,
        AnisotropicPoint = 3,
        AnisotropicLinear = 4,
        ETextureSamplerFilter_MAX = 5
    };

    enum class ETexturePowerOfTwoSetting : uint8_t //Enum Engine.ETexturePowerOfTwoSetting
    {
        None = 0,
        PadToPowerOfTwo = 1,
        PadToSquarePowerOfTwo = 2,
        ETexturePowerOfTwoSetting_MAX = 3
    };

    enum class TextureMipGenSettings : uint8_t //Enum Engine.TextureMipGenSettings
    {
        TMGS_FromTextureGroup = 0,
        TMGS_SimpleAverage = 1,
        TMGS_Sharpen0 = 2,
        TMGS_Sharpen1 = 3,
        TMGS_Sharpen2 = 4,
        TMGS_Sharpen3 = 5,
        TMGS_Sharpen4 = 6,
        TMGS_Sharpen5 = 7,
        TMGS_Sharpen6 = 8,
        TMGS_Sharpen7 = 9,
        TMGS_Sharpen8 = 10,
        TMGS_Sharpen9 = 11,
        TMGS_Sharpen10 = 12,
        TMGS_NoMipmaps = 13,
        TMGS_LeaveExistingMips = 14,
        TMGS_Blur1 = 15,
        TMGS_Blur2 = 16,
        TMGS_Blur3 = 17,
        TMGS_Blur4 = 18,
        TMGS_Blur5 = 19,
        TMGS_Unfiltered = 20,
        TMGS_MAX = 21
    };

    enum class TextureGroup : uint8_t //Enum Engine.TextureGroup
    {
        TEXTUREGROUP_World = 0,
        TEXTUREGROUP_WorldNormalMap = 1,
        TEXTUREGROUP_WorldSpecular = 2,
        TEXTUREGROUP_Character = 3,
        TEXTUREGROUP_CharacterNormalMap = 4,
        TEXTUREGROUP_CharacterSpecular = 5,
        TEXTUREGROUP_Weapon = 6,
        TEXTUREGROUP_WeaponNormalMap = 7,
        TEXTUREGROUP_WeaponSpecular = 8,
        TEXTUREGROUP_Vehicle = 9,
        TEXTUREGROUP_VehicleNormalMap = 10,
        TEXTUREGROUP_VehicleSpecular = 11,
        TEXTUREGROUP_Cinematic = 12,
        TEXTUREGROUP_Effects = 13,
        TEXTUREGROUP_EffectsNotFiltered = 14,
        TEXTUREGROUP_Skybox = 15,
        TEXTUREGROUP_UI = 16,
        TEXTUREGROUP_Lightmap = 17,
        TEXTUREGROUP_RenderTarget = 18,
        TEXTUREGROUP_MobileFlattened = 19,
        TEXTUREGROUP_ProcBuilding_Face = 20,
        TEXTUREGROUP_ProcBuilding_LightMap = 21,
        TEXTUREGROUP_Shadowmap = 22,
        TEXTUREGROUP_ColorLookupTable = 23,
        TEXTUREGROUP_Terrain_Heightmap = 24,
        TEXTUREGROUP_Terrain_Weightmap = 25,
        TEXTUREGROUP_Bokeh = 26,
        TEXTUREGROUP_IESLightProfile = 27,
        TEXTUREGROUP_Pixels2D = 28,
        TEXTUREGROUP_HierarchicalLOD = 29,
        TEXTUREGROUP_Impostor = 30,
        TEXTUREGROUP_ImpostorNormalDepth = 31,
        TEXTUREGROUP_8BitData = 32,
        TEXTUREGROUP_16BitData = 33,
        TEXTUREGROUP_Project01 = 34,
        TEXTUREGROUP_Project02 = 35,
        TEXTUREGROUP_Project03 = 36,
        TEXTUREGROUP_Project04 = 37,
        TEXTUREGROUP_Project05 = 38,
        TEXTUREGROUP_Project06 = 39,
        TEXTUREGROUP_Project07 = 40,
        TEXTUREGROUP_Project08 = 41,
        TEXTUREGROUP_Project09 = 42,
        TEXTUREGROUP_Project10 = 43,
        TEXTUREGROUP_Project11 = 44,
        TEXTUREGROUP_Project12 = 45,
        TEXTUREGROUP_Project13 = 46,
        TEXTUREGROUP_Project14 = 47,
        TEXTUREGROUP_Project15 = 48,
        TEXTUREGROUP_MAX = 49
    };

    enum class ETextureRenderTargetFormat : uint8_t //Enum Engine.ETextureRenderTargetFormat
    {
        RTF_R8 = 0,
        RTF_RG8 = 1,
        RTF_RGBA8 = 2,
        RTF_RGBA8_SRGB = 3,
        RTF_R16f = 4,
        RTF_RG16f = 5,
        RTF_RGBA16f = 6,
        RTF_R32f = 7,
        RTF_RG32f = 8,
        RTF_RGBA32f = 9,
        RTF_RGB10A2 = 10,
        RTF_MAX = 11
    };

    enum class ETimecodeProviderSynchronizationState : uint8_t //Enum Engine.ETimecodeProviderSynchronizationState
    {
        Closed = 0,
        Error = 1,
        Synchronized = 2,
        Synchronizing = 3,
        ETimecodeProviderSynchronizationState_MAX = 4
    };

    enum class ETimelineDirection : uint8_t //Enum Engine.ETimelineDirection
    {
        Forward = 0,
        Backward = 1,
        ETimelineDirection_MAX = 2
    };

    enum class ETimelineLengthMode : uint8_t //Enum Engine.ETimelineLengthMode
    {
        TL_TimelineLength = 0,
        TL_LastKeyFrame = 1,
        TL_MAX = 2
    };

    enum class ETimeStretchCurveMapping : uint8_t //Enum Engine.ETimeStretchCurveMapping
    {
        T_Original = 0,
        T_TargetMin = 1,
        T_TargetMax = 2,
        MAX = 3
    };

    enum class ETwitterIntegrationDelegate : uint8_t //Enum Engine.ETwitterIntegrationDelegate
    {
        TID_AuthorizeComplete = 0,
        TID_TweetUIComplete = 1,
        TID_RequestComplete = 2,
        TID_MAX = 3
    };

    enum class ETwitterRequestMethod : uint8_t //Enum Engine.ETwitterRequestMethod
    {
        TRM_Get = 0,
        TRM_Post = 1,
        TRM_Delete = 2,
        TRM_MAX = 3
    };

    enum class EUserDefinedStructureStatus : uint8_t //Enum Engine.EUserDefinedStructureStatus
    {
        UDSS_UpToDate = 0,
        UDSS_Dirty = 1,
        UDSS_Error = 2,
        UDSS_Duplicate = 3,
        UDSS_MAX = 4
    };

    enum class EUIScalingRule : uint8_t //Enum Engine.EUIScalingRule
    {
        ShortestSide = 0,
        LongestSide = 1,
        Horizontal = 2,
        Vertical = 3,
        Custom = 4,
        EUIScalingRule_MAX = 5
    };

    enum class ERenderFocusRule : uint8_t //Enum Engine.ERenderFocusRule
    {
        Always = 0,
        NonPointer = 1,
        NavigationOnly = 2,
        Never = 3,
        ERenderFocusRule_MAX = 4
    };

    enum class EVectorFieldConstructionOp : uint8_t //Enum Engine.EVectorFieldConstructionOp
    {
        VFCO_Extrude = 0,
        VFCO_Revolve = 1,
        VFCO_MAX = 2
    };

    enum class EWindSourceType : uint8_t //Enum Engine.EWindSourceType
    {
        Directional = 0,
        Point = 1,
        EWindSourceType_MAX = 2
    };

    enum class EPSCPoolMethod : uint8_t //Enum Engine.EPSCPoolMethod
    {
        None = 0,
        AutoRelease = 1,
        ManualRelease = 2,
        ManualRelease_OnComplete = 3,
        FreeInPool = 4,
        EPSCPoolMethod_MAX = 5
    };

    enum class EVolumeLightingMethod : uint8_t //Enum Engine.EVolumeLightingMethod
    {
        VLM_VolumetricLightmap = 0,
        VLM_SparseVolumeLightingSamples = 1,
        VLM_MAX = 2
    };

    enum class EVisibilityAggressiveness : uint8_t //Enum Engine.EVisibilityAggressiveness
    {
        VIS_LeastAggressive = 0,
        VIS_ModeratelyAggressive = 1,
        VIS_MostAggressive = 2,
        VIS_Max = 3
    };

    enum class EClothingWindMethod_Legacy : uint8_t //Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
    {
        Legacy = 0,
        Accurate = 1,
        EClothingWindMethod_MAX = 2
    };

    enum class EWeightMapTargetCommon : uint8_t //Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
    {
        None = 0,
        MaxDistance = 1,
        BackstopDistance = 2,
        BackstopRadius = 3,
        AnimDriveMultiplier = 4,
        EWeightMapTargetCommon_MAX = 5
    };

    enum class EClothingWindMethodNv : uint8_t //Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
    {
        Legacy = 0,
        Accurate = 1,
        EClothingWindMethodNv_MAX = 2
    };

    enum class ERuntimeGenerationType : uint8_t //Enum NavigationSystem.ERuntimeGenerationType
    {
        Static = 0,
        DynamicModifiersOnly = 1,
        Dynamic = 2,
        LegacyGeneration = 3,
        ERuntimeGenerationType_MAX = 4
    };

    enum class ENavCostDisplay : uint8_t //Enum NavigationSystem.ENavCostDisplay
    {
        TotalCost = 0,
        HeuristicOnly = 1,
        RealCostOnly = 2,
        ENavCostDisplay_MAX = 3
    };

    enum class ENavSystemOverridePolicy : uint8_t //Enum NavigationSystem.ENavSystemOverridePolicy
    {
        Override = 0,
        Append = 1,
        Skip = 2,
        ENavSystemOverridePolicy_MAX = 3
    };

    enum class ERecastPartitioning : uint8_t //Enum NavigationSystem.ERecastPartitioning
    {
        Monotone = 0,
        Watershed = 1,
        ChunkyMonotone = 2,
        ERecastPartitioning_MAX = 3
    };

    enum class EInputCaptureState : uint8_t //Enum InteractiveToolsFramework.EInputCaptureState
    {
        Begin = 1,
        Continue = 2,
        End = 3,
        Ignore = 4,
        EInputCaptureState_MAX = 5
    };

    enum class EInputCaptureRequestType : uint8_t //Enum InteractiveToolsFramework.EInputCaptureRequestType
    {
        Begin = 1,
        Ignore = 2,
        EInputCaptureRequestType_MAX = 3
    };

    enum class EInputCaptureSide : uint8_t //Enum InteractiveToolsFramework.EInputCaptureSide
    {
        None = 0,
        Left = 1,
        Right = 2,
        Both = 3,
        Any = 99,
        EInputCaptureSide_MAX = 100
    };

    enum class EInputDevices : uint32_t //Enum InteractiveToolsFramework.EInputDevices
    {
        None = 0,
        Keyboard = 1,
        Mouse = 2,
        Gamepad = 4,
        OculusTouch = 8,
        HTCViveWands = 16,
        AnySpatialDevice = 24,
        TabletFingers = 1024,
        EInputDevices_MAX = 1025
    };

    enum class ETransformGizmoSubElements : uint32_t //Enum InteractiveToolsFramework.ETransformGizmoSubElements
    {
        None = 0,
        TranslateAxisX = 2,
        TranslateAxisY = 4,
        TranslateAxisZ = 8,
        TranslateAllAxes = 14,
        TranslatePlaneXY = 16,
        TranslatePlaneXZ = 32,
        TranslatePlaneYZ = 64,
        TranslateAllPlanes = 112,
        RotateAxisX = 128,
        RotateAxisY = 256,
        RotateAxisZ = 512,
        RotateAllAxes = 896,
        ScaleAxisX = 1024,
        ScaleAxisY = 2048,
        ScaleAxisZ = 4096,
        ScaleAllAxes = 7168,
        ScalePlaneYZ = 8192,
        ScalePlaneXZ = 16384,
        ScalePlaneXY = 32768,
        ScaleAllPlanes = 57344,
        ScaleUniform = 65536,
        StandardTranslateRotate = 1022,
        TranslateRotateUniformScale = 66558,
        FullTranslateRotateScale = 131070,
        ETransformGizmoSubElements_MAX = 131071
    };

    enum class EToolChangeTrackingMode : uint8_t //Enum InteractiveToolsFramework.EToolChangeTrackingMode
    {
        NoChangeTracking = 1,
        UndoToExit = 2,
        FullUndoRedo = 3,
        EToolChangeTrackingMode_MAX = 4
    };

    enum class EToolSide : uint8_t //Enum InteractiveToolsFramework.EToolSide
    {
        Left = 1,
        Mouse = 1,
        Right = 2,
        EToolSide_MAX = 3
    };

    enum class ESelectedObjectsModificationType : uint8_t //Enum InteractiveToolsFramework.ESelectedObjectsModificationType
    {
        Replace = 0,
        Add = 1,
        Remove = 2,
        Clear = 3,
        ESelectedObjectsModificationType_MAX = 4
    };

    enum class EToolMessageLevel : uint8_t //Enum InteractiveToolsFramework.EToolMessageLevel
    {
        Internal = 0,
        UserMessage = 1,
        UserNotification = 2,
        UserWarning = 3,
        UserError = 4,
        EToolMessageLevel_MAX = 5
    };

    enum class EToolContextCoordinateSystem : uint8_t //Enum InteractiveToolsFramework.EToolContextCoordinateSystem
    {
        World = 0,
        Local = 1,
        EToolContextCoordinateSystem_MAX = 2
    };

    enum class EStandardToolContextMaterials : uint8_t //Enum InteractiveToolsFramework.EStandardToolContextMaterials
    {
        VertexColorMaterial = 1,
        EStandardToolContextMaterials_MAX = 2
    };

    enum class ESceneSnapQueryTargetType : uint8_t //Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
    {
        None = 0,
        MeshVertex = 1,
        MeshEdge = 2,
        Grid = 4,
        All = 7,
        ESceneSnapQueryTargetType_MAX = 8
    };

    enum class ESceneSnapQueryType : uint8_t //Enum InteractiveToolsFramework.ESceneSnapQueryType
    {
        Position = 1,
        ESceneSnapQueryType_MAX = 2
    };

    enum class ETaskResourceOverlapPolicy : uint8_t //Enum GameplayTasks.ETaskResourceOverlapPolicy
    {
        StartOnTop = 0,
        StartAtEnd = 1,
        ETaskResourceOverlapPolicy_MAX = 2
    };

    enum class EGameplayTaskState : uint8_t //Enum GameplayTasks.EGameplayTaskState
    {
        Uninitialized = 0,
        AwaitingActivation = 1,
        Paused = 2,
        Active = 3,
        Finished = 4,
        EGameplayTaskState_MAX = 5
    };

    enum class EGameplayTaskRunResult : uint8_t //Enum GameplayTasks.EGameplayTaskRunResult
    {
        Error = 0,
        Failed = 1,
        Success_Paused = 2,
        Success_Active = 3,
        Success_Finished = 4,
        EGameplayTaskRunResult_MAX = 5
    };

    enum class EPathFollowingResult : uint8_t //Enum AIModule.EPathFollowingResult
    {
        Success = 0,
        Blocked = 1,
        OffPath = 2,
        Aborted = 3,
        Skipped_DEPRECATED = 4,
        Invalid = 5,
        EPathFollowingResult_MAX = 6
    };

    enum class EEnvQueryStatus : uint8_t //Enum AIModule.EEnvQueryStatus
    {
        Processing = 0,
        Success = 1,
        Failed = 2,
        Aborted = 3,
        OwnerLost = 4,
        MissingParam = 5,
        EEnvQueryStatus_MAX = 6
    };

    enum class EAISenseNotifyType : uint8_t //Enum AIModule.EAISenseNotifyType
    {
        OnEveryPerception = 0,
        OnPerceptionChange = 1,
        EAISenseNotifyType_MAX = 2
    };

    enum class EAITaskPriority : uint8_t //Enum AIModule.EAITaskPriority
    {
        Lowest = 0,
        Low = 64,
        AutonomousAI = 127,
        High = 192,
        Ultimate = 254,
        EAITaskPriority_MAX = 255
    };

    enum class EGenericAICheck : uint8_t //Enum AIModule.EGenericAICheck
    {
        Less = 0,
        LessOrEqual = 1,
        Equal = 2,
        NotEqual = 3,
        GreaterOrEqual = 4,
        Greater = 5,
        IsTrue = 6,
        MAX = 7
    };

    enum class EAILockSource : uint8_t //Enum AIModule.EAILockSource
    {
        Animation = 0,
        Logic = 1,
        Script = 2,
        Gameplay = 3,
        MAX = 4
    };

    enum class EAIRequestPriority : uint8_t //Enum AIModule.EAIRequestPriority
    {
        SoftScript = 0,
        Logic = 1,
        HardScript = 2,
        Reaction = 3,
        Ultimate = 4,
        MAX = 5
    };

    enum class EPawnActionEventType : uint8_t //Enum AIModule.EPawnActionEventType
    {
        Invalid = 0,
        FailedToStart = 1,
        InstantAbort = 2,
        FinishedAborting = 3,
        FinishedExecution = 4,
        Push = 5,
        EPawnActionEventType_MAX = 6
    };

    enum class EPawnActionResult : uint8_t //Enum AIModule.EPawnActionResult
    {
        NotStarted = 0,
        InProgress = 1,
        Success = 2,
        Failed = 3,
        Aborted = 4,
        EPawnActionResult_MAX = 5
    };

    enum class EPawnActionAbortState : uint8_t //Enum AIModule.EPawnActionAbortState
    {
        NeverStarted = 0,
        NotBeingAborted = 1,
        MarkPendingAbort = 2,
        LatentAbortInProgress = 3,
        AbortDone = 4,
        MAX = 5
    };

    enum class FAIDistanceType : uint8_t //Enum AIModule.FAIDistanceType
    {
        Distance3D = 0,
        Distance2D = 1,
        DistanceZ = 2,
        MAX = 3
    };

    enum class EAIOptionFlag : uint8_t //Enum AIModule.EAIOptionFlag
    {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3
    };

    enum class EBTFlowAbortMode : uint8_t //Enum AIModule.EBTFlowAbortMode
    {
        None = 0,
        LowerPriority = 1,
        Self = 2,
        Both = 3,
        EBTFlowAbortMode_MAX = 4
    };

    enum class EBTNodeResult : uint8_t //Enum AIModule.EBTNodeResult
    {
        Succeeded = 0,
        Failed = 1,
        Aborted = 2,
        InProgress = 3,
        EBTNodeResult_MAX = 4
    };

    enum class ETextKeyOperation : uint8_t //Enum AIModule.ETextKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Contain = 2,
        NotContain = 3,
        ETextKeyOperation_MAX = 4
    };

    enum class EArithmeticKeyOperation : uint8_t //Enum AIModule.EArithmeticKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Less = 2,
        LessOrEqual = 3,
        Greater = 4,
        GreaterOrEqual = 5,
        EArithmeticKeyOperation_MAX = 6
    };

    enum class EBasicKeyOperation : uint8_t //Enum AIModule.EBasicKeyOperation
    {
        Set = 0,
        NotSet = 1,
        EBasicKeyOperation_MAX = 2
    };

    enum class EBTParallelMode : uint8_t //Enum AIModule.EBTParallelMode
    {
        AbortBackground = 0,
        WaitForBackground = 1,
        EBTParallelMode_MAX = 2
    };

    enum class EBTDecoratorLogic : uint8_t //Enum AIModule.EBTDecoratorLogic
    {
        Invalid = 0,
        Test = 1,
        And = 2,
        Or = 3,
        Not = 4,
        EBTDecoratorLogic_MAX = 5
    };

    enum class EBTChildIndex : uint8_t //Enum AIModule.EBTChildIndex
    {
        FirstNode = 0,
        TaskNode = 1,
        EBTChildIndex_MAX = 2
    };

    enum class EBTBlackboardRestart : uint8_t //Enum AIModule.EBTBlackboardRestart
    {
        ValueChange = 0,
        ResultChange = 1,
        EBTBlackboardRestart_MAX = 2
    };

    enum class EBlackBoardEntryComparison : uint8_t //Enum AIModule.EBlackBoardEntryComparison
    {
        Equal = 0,
        NotEqual = 1,
        EBlackBoardEntryComparison_MAX = 2
    };

    enum class EPathExistanceQueryType : uint8_t //Enum AIModule.EPathExistanceQueryType
    {
        NavmeshRaycast2D = 0,
        HierarchicalQuery = 1,
        RegularPathFinding = 2,
        EPathExistanceQueryType_MAX = 3
    };

    enum class EPointOnCircleSpacingMethod : uint8_t //Enum AIModule.EPointOnCircleSpacingMethod
    {
        BySpaceBetween = 0,
        ByNumberOfPoints = 1,
        EPointOnCircleSpacingMethod_MAX = 2
    };

    enum class EEQSNormalizationType : uint8_t //Enum AIModule.EEQSNormalizationType
    {
        Absolute = 0,
        RelativeToScores = 1,
        EEQSNormalizationType_MAX = 2
    };

    enum class EEnvTestDistance : uint8_t //Enum AIModule.EEnvTestDistance
    {
        Distance3D = 0,
        Distance2D = 1,
        DistanceZ = 2,
        DistanceAbsoluteZ = 3,
        EEnvTestDistance_MAX = 4
    };

    enum class EEnvTestDot : uint8_t //Enum AIModule.EEnvTestDot
    {
        Dot3D = 0,
        Dot2D = 1,
        EEnvTestDot_MAX = 2
    };

    enum class EEnvTestPathfinding : uint8_t //Enum AIModule.EEnvTestPathfinding
    {
        PathExist = 0,
        PathCost = 1,
        PathLength = 2,
        EEnvTestPathfinding_MAX = 3
    };

    enum class EEnvQueryTestClamping : uint8_t //Enum AIModule.EEnvQueryTestClamping
    {
        None = 0,
        SpecifiedValue = 1,
        FilterThreshold = 2,
        EEnvQueryTestClamping_MAX = 3
    };

    enum class EEnvDirection : uint8_t //Enum AIModule.EEnvDirection
    {
        TwoPoints = 0,
        Rotation = 1,
        EEnvDirection_MAX = 2
    };

    enum class EEnvOverlapShape : uint8_t //Enum AIModule.EEnvOverlapShape
    {
        Box = 0,
        Sphere = 1,
        Capsule = 2,
        EEnvOverlapShape_MAX = 3
    };

    enum class EEnvTraceShape : uint8_t //Enum AIModule.EEnvTraceShape
    {
        Line = 0,
        Box = 1,
        Sphere = 2,
        Capsule = 3,
        EEnvTraceShape_MAX = 4
    };

    enum class EEnvQueryTrace : uint8_t //Enum AIModule.EEnvQueryTrace
    {
        None = 0,
        Navigation = 1,
        Geometry = 2,
        NavigationOverLedges = 3,
        EEnvQueryTrace_MAX = 4
    };

    enum class EAIParamType : uint8_t //Enum AIModule.EAIParamType
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        MAX = 3
    };

    enum class EEnvQueryParam : uint8_t //Enum AIModule.EEnvQueryParam
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        EEnvQueryParam_MAX = 3
    };

    enum class EEnvQueryRunMode : uint8_t //Enum AIModule.EEnvQueryRunMode
    {
        SingleResult = 0,
        RandomBest5Pct = 1,
        RandomBest25Pct = 2,
        AllMatching = 3,
        EEnvQueryRunMode_MAX = 4
    };

    enum class EEnvTestScoreOperator : uint8_t //Enum AIModule.EEnvTestScoreOperator
    {
        AverageScore = 0,
        MinScore = 1,
        MaxScore = 2,
        Multiply = 3,
        EEnvTestScoreOperator_MAX = 4
    };

    enum class EEnvTestFilterOperator : uint8_t //Enum AIModule.EEnvTestFilterOperator
    {
        AllPass = 0,
        AnyPass = 1,
        EEnvTestFilterOperator_MAX = 2
    };

    enum class EEnvTestCost : uint8_t //Enum AIModule.EEnvTestCost
    {
        Low = 0,
        Medium = 1,
        High = 2,
        EEnvTestCost_MAX = 3
    };

    enum class EEnvTestWeight : uint8_t //Enum AIModule.EEnvTestWeight
    {
        None = 0,
        Square = 1,
        Inverse = 2,
        Unused = 3,
        Constant = 4,
        Skip = 5,
        EEnvTestWeight_MAX = 6
    };

    enum class EEnvTestScoreEquation : uint8_t //Enum AIModule.EEnvTestScoreEquation
    {
        Linear = 0,
        Square = 1,
        InverseLinear = 2,
        SquareRoot = 3,
        Constant = 4,
        EEnvTestScoreEquation_MAX = 5
    };

    enum class EEnvTestFilterType : uint8_t //Enum AIModule.EEnvTestFilterType
    {
        Minimum = 0,
        Maximum = 1,
        Range = 2,
        Match = 3,
        EEnvTestFilterType_MAX = 4
    };

    enum class EEnvTestPurpose : uint8_t //Enum AIModule.EEnvTestPurpose
    {
        Filter = 0,
        Score = 1,
        FilterAndScore = 2,
        EEnvTestPurpose_MAX = 3
    };

    enum class EEnvQueryHightlightMode : uint8_t //Enum AIModule.EEnvQueryHightlightMode
    {
        All = 0,
        Best5Pct = 1,
        Best25Pct = 2,
        EEnvQueryHightlightMode_MAX = 3
    };

    enum class ETeamAttitude : uint8_t //Enum AIModule.ETeamAttitude
    {
        Friendly = 0,
        Neutral = 1,
        Hostile = 2,
        ETeamAttitude_MAX = 3
    };

    enum class EPathFollowingRequestResult : uint8_t //Enum AIModule.EPathFollowingRequestResult
    {
        Failed = 0,
        AlreadyAtGoal = 1,
        RequestSuccessful = 2,
        EPathFollowingRequestResult_MAX = 3
    };

    enum class EPathFollowingAction : uint8_t //Enum AIModule.EPathFollowingAction
    {
        Error = 0,
        NoMove = 1,
        DirectMove = 2,
        PartialPath = 3,
        PathToGoal = 4,
        EPathFollowingAction_MAX = 5
    };

    enum class EPathFollowingStatus : uint8_t //Enum AIModule.EPathFollowingStatus
    {
        Idle = 0,
        Waiting = 1,
        Paused = 2,
        Moving = 3,
        EPathFollowingStatus_MAX = 4
    };

    enum class EPawnActionFailHandling : uint8_t //Enum AIModule.EPawnActionFailHandling
    {
        RequireSuccess = 0,
        IgnoreFailure = 1,
        EPawnActionFailHandling_MAX = 2
    };

    enum class EPawnSubActionTriggeringPolicy : uint8_t //Enum AIModule.EPawnSubActionTriggeringPolicy
    {
        CopyBeforeTriggering = 0,
        ReuseInstances = 1,
        EPawnSubActionTriggeringPolicy_MAX = 2
    };

    enum class EPawnActionMoveMode : uint8_t //Enum AIModule.EPawnActionMoveMode
    {
        UsePathfinding = 0,
        StraightLine = 1,
        EPawnActionMoveMode_MAX = 2
    };

    enum class EClusterConnectionTypeEnum : uint8_t //Enum ChaosSolverEngine.EClusterConnectionTypeEnum
    {
        Chaos_PointImplicit = 0,
        Chaos_DelaunayTriangulation = 1,
        Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
        Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
        Chaos_None = 4,
        Chaos_EClsuterCreationParameters_Max = 5,
        Chaos_MAX = 6
    };

    enum class EChaosBreakingSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosBreakingSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByNearestFirst = 3,
        Count = 4,
        EChaosBreakingSortMethod_MAX = 5
    };

    enum class EChaosCollisionSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosCollisionSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByHighestImpulse = 3,
        SortByNearestFirst = 4,
        Count = 5,
        EChaosCollisionSortMethod_MAX = 6
    };

    enum class EChaosTrailingSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosTrailingSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByNearestFirst = 3,
        Count = 4,
        EChaosTrailingSortMethod_MAX = 5
    };

    enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t //Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
    {
        HideNone = 0,
        HideWithCollision = 1,
        HideSelected = 2,
        HideWholeCollection = 3,
        HideAll = 4,
        EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
    };

    enum class ECollectionGroupEnum : uint8_t //Enum GeometryCollectionEngine.ECollectionGroupEnum
    {
        Chaos_Traansform = 0,
        Chaos_Max = 1
    };

    enum class ECollectionAttributeEnum : uint8_t //Enum GeometryCollectionEngine.ECollectionAttributeEnum
    {
        Chaos_Active = 0,
        Chaos_DynamicState = 1,
        Chaos_CollisionGroup = 2,
        Chaos_Max = 3
    };

    enum class EVectorVMOp : uint8_t //Enum VectorVM.EVectorVMOp
    {
        done = 0,
        add = 1,
        sub = 2,
        mul = 3,
        div = 4,
        mad = 5,
        lerp = 6,
        rcp = 7,
        rsq = 8,
        sqrt = 9,
        neg = 10,
        abs = 11,
        exp = 12,
        exp2 = 13,
        log = 14,
        log2 = 15,
        sin = 16,
        cos = 17,
        tan = 18,
        asin = 19,
        acos = 20,
        atan = 21,
        atan2 = 22,
        ceil = 23,
        floor = 24,
        fmod = 25,
        frac = 26,
        trunc = 27,
        clamp = 28,
        min = 29,
        max = 30,
        pow = 31,
        round = 32,
        sign = 33,
        step = 34,
        random = 35,
        noise = 36,
        cmplt = 37,
        cmple = 38,
        cmpgt = 39,
        cmpge = 40,
        cmpeq = 41,
        cmpneq = 42,
        select = 43,
        addi = 44,
        subi = 45,
        muli = 46,
        divi = 47,
        clampi = 48,
        mini = 49,
        maxi = 50,
        absi = 51,
        negi = 52,
        signi = 53,
        randomi = 54,
        cmplti = 55,
        cmplei = 56,
        cmpgti = 57,
        cmpgei = 58,
        cmpeqi = 59,
        cmpneqi = 60,
        bit_and = 61,
        bit_or = 62,
        bit_xor = 63,
        bit_not = 64,
        bit_lshift = 65,
        bit_rshift = 66,
        logic_and = 67,
        logic_or = 68,
        logic_xor = 69,
        logic_not = 70,
        f2i = 71,
        i2f = 72,
        f2b = 73,
        b2f = 74,
        i2b = 75,
        b2i = 76,
        inputdata_32bit = 77,
        inputdata_noadvance_32bit = 78,
        outputdata_32bit = 79,
        acquireindex = 80,
        external_func_call = 81,
        exec_index = 82,
        noise2D = 83,
        noise3D = 84,
        enter_stat_scope = 85,
        exit_stat_scope = 86,
        update_id = 87,
        acquire_id = 88,
        NumOpcodes = 89
    };

    enum class EVectorVMOperandLocation : uint8_t //Enum VectorVM.EVectorVMOperandLocation
    {
        Register = 0,
        Constant = 1,
        Num = 2,
        EVectorVMOperandLocation_MAX = 3
    };

    enum class EVectorVMBaseTypes : uint8_t //Enum VectorVM.EVectorVMBaseTypes
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        Num = 3,
        EVectorVMBaseTypes_MAX = 4
    };

    enum class ELuminPrivilege : uint8_t //Enum LuminRuntimeSettings.ELuminPrivilege
    {
        Invalid = 0,
        BatteryInfo = 1,
        CameraCapture = 2,
        ComputerVision = 3,
        WorldReconstruction = 4,
        InAppPurchase = 5,
        AudioCaptureMic = 6,
        DrmCertificates = 7,
        Occlusion = 8,
        LowLatencyLightwear = 9,
        Internet = 10,
        IdentityRead = 11,
        BackgroundDownload = 12,
        BackgroundUpload = 13,
        MediaDrm = 14,
        Media = 15,
        MediaMetadata = 16,
        PowerInfo = 17,
        LocalAreaNetwork = 18,
        VoiceInput = 19,
        Documents = 20,
        ConnectBackgroundMusicService = 21,
        RegisterBackgroundMusicService = 22,
        PcfRead = 23,
        PwFoundObjRead = 23,
        NormalNotificationsUsage = 24,
        MusicService = 25,
        ControllerPose = 26,
        GesturesSubscribe = 27,
        GesturesConfig = 28,
        AddressBookRead = 29,
        AddressBookWrite = 30,
        AddressBookBasicAccess = 31,
        CoarseLocation = 32,
        FineLocation = 33,
        HandMesh = 34,
        WifiStatusRead = 35,
        SocialConnectionsInvitesAccess = 36,
        ELuminPrivilege_MAX = 37
    };

    enum class ELuminFrameTimingHint : uint8_t //Enum LuminRuntimeSettings.ELuminFrameTimingHint
    {
        Unspecified = 0,
        Maximum = 1,
        FPS_61 = 2,
        FPS_121 = 3,
        ELuminFrameTimingHint_MAX = 4
    };

    enum class ELuminComponentType : uint8_t //Enum LuminRuntimeSettings.ELuminComponentType
    {
        Universe = 0,
        Fullscreen = 1,
        SearchProvider = 2,
        MusicService = 3,
        Screens = 4,
        ScreensImmersive = 5,
        Console = 6,
        SystemUI = 7,
        ELuminComponentType_MAX = 8
    };

    enum class ELuminComponentSubElementType : uint8_t //Enum LuminRuntimeSettings.ELuminComponentSubElementType
    {
        FileExtension = 0,
        MimeType = 1,
        Mode = 2,
        MusicAttribute = 3,
        Schema = 4,
        ELuminComponentSubElementType_MAX = 5
    };

    enum class ELiveLinkCameraProjectionMode : uint8_t //Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
    {
        Perspective = 0,
        Orthographic = 1,
        ELiveLinkCameraProjectionMode_MAX = 2
    };

    enum class ELiveLinkSourceMode : uint8_t //Enum LiveLinkInterface.ELiveLinkSourceMode
    {
        Latest = 0,
        EngineTime = 1,
        Timecode = 2,
        ELiveLinkSourceMode_MAX = 3
    };

    enum class Default__UserDefinedEnum : uint8_t //UserDefinedEnum Engine.Default__UserDefinedEnum
    {
    };

    enum class ENiagaraCoordinateSpace : uint8_t //UserDefinedEnum ENiagaraCoordinateSpace.ENiagaraCoordinateSpace
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        ENiagaraCoordinateSpace_MAX = 3
    };

    enum class ENiagaraOrientationAxis : uint8_t //UserDefinedEnum ENiagaraOrientationAxis.ENiagaraOrientationAxis
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        ENiagaraOrientationAxis_MAX = 3
    };

    enum class ENiagaraBooleanLogicOps : uint8_t //UserDefinedEnum ENiagaraBooleanLogicOps.ENiagaraBooleanLogicOps
    {
        NewEnumerator0 = 0,
        NewEnumerator2 = 1,
        NewEnumerator4 = 2,
        NewEnumerator5 = 3,
        ENiagaraBooleanLogicOps_MAX = 4
    };

    enum class ENiagaraRandomnessMode : uint8_t //UserDefinedEnum ENiagaraRandomnessMode.ENiagaraRandomnessMode
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        ENiagaraRandomnessMode_MAX = 3
    };

    enum class ENiagaraExpansionMode : uint8_t //UserDefinedEnum ENiagaraExpansionMode.ENiagaraExpansionMode
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        ENiagaraExpansionMode_MAX = 3
    };

    enum class EN_DistributionMethod : uint8_t //UserDefinedEnum EN_DistributionMethod.EN_DistributionMethod
    {
        NewEnumerator3 = 0,
        NewEnumerator4 = 1,
        NewEnumerator0 = 2,
        NewEnumerator1 = 3,
        NewEnumerator2 = 4,
        EN_MAX = 5
    };


}