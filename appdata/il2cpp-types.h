// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2021.1.0+

#if defined(_GHIDRA_) || defined(_IDA_)
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;
typedef __int8 int8_t;
typedef __int16 int16_t;
typedef __int32 int32_t;
typedef __int64 int64_t;
#endif

#if defined(_GHIDRA_)
typedef __int32 size_t;
typedef size_t intptr_t;
typedef size_t uintptr_t;
#endif

#if !defined(_GHIDRA_) && !defined(_IDA_)
#define _CPLUSPLUS_
#endif

// ******************************************************************************
// * IL2CPP internal types
// ******************************************************************************
#pragma region il2cpp_internal
//{ il2cpp_internal_scintilla

#define IS_32BIT
typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppType Il2CppType;
typedef struct EventInfo EventInfo;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppArray Il2CppArray;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppProfiler Il2CppProfiler;
typedef struct Il2CppObject Il2CppObject;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppReflectionType Il2CppReflectionType;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppThread Il2CppThread;
typedef struct Il2CppAsyncResult Il2CppAsyncResult;
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef struct Il2CppCustomAttrInfo Il2CppCustomAttrInfo;
typedef enum {
    IL2CPP_PROFILE_NONE = 0,
    IL2CPP_PROFILE_APPDOMAIN_EVENTS = 1 << 0,
    IL2CPP_PROFILE_ASSEMBLY_EVENTS = 1 << 1,
    IL2CPP_PROFILE_MODULE_EVENTS = 1 << 2,
    IL2CPP_PROFILE_CLASS_EVENTS = 1 << 3,
    IL2CPP_PROFILE_JIT_COMPILATION = 1 << 4,
    IL2CPP_PROFILE_INLINING = 1 << 5,
    IL2CPP_PROFILE_EXCEPTIONS = 1 << 6,
    IL2CPP_PROFILE_ALLOCATIONS = 1 << 7,
    IL2CPP_PROFILE_GC = 1 << 8,
    IL2CPP_PROFILE_THREADS = 1 << 9,
    IL2CPP_PROFILE_REMOTING = 1 << 10,
    IL2CPP_PROFILE_TRANSITIONS = 1 << 11,
    IL2CPP_PROFILE_ENTER_LEAVE = 1 << 12,
    IL2CPP_PROFILE_COVERAGE = 1 << 13,
    IL2CPP_PROFILE_INS_COVERAGE = 1 << 14,
    IL2CPP_PROFILE_STATISTICAL = 1 << 15,
    IL2CPP_PROFILE_METHOD_EVENTS = 1 << 16,
    IL2CPP_PROFILE_MONITOR_EVENTS = 1 << 17,
    IL2CPP_PROFILE_IOMAP_EVENTS = 1 << 18,
    IL2CPP_PROFILE_GC_MOVES = 1 << 19,
    IL2CPP_PROFILE_FILEIO = 1 << 20
} Il2CppProfileFlags;
typedef enum {
    IL2CPP_PROFILE_FILEIO_WRITE = 0,
    IL2CPP_PROFILE_FILEIO_READ
} Il2CppProfileFileIOKind;
typedef enum {
    IL2CPP_GC_EVENT_START,
    IL2CPP_GC_EVENT_MARK_START,
    IL2CPP_GC_EVENT_MARK_END,
    IL2CPP_GC_EVENT_RECLAIM_START,
    IL2CPP_GC_EVENT_RECLAIM_END,
    IL2CPP_GC_EVENT_END,
    IL2CPP_GC_EVENT_PRE_STOP_WORLD,
    IL2CPP_GC_EVENT_POST_STOP_WORLD,
    IL2CPP_GC_EVENT_PRE_START_WORLD,
    IL2CPP_GC_EVENT_POST_START_WORLD
} Il2CppGCEvent;
typedef enum {
    IL2CPP_GC_MODE_DISABLED = 0,
    IL2CPP_GC_MODE_ENABLED = 1,
    IL2CPP_GC_MODE_MANUAL = 2
} Il2CppGCMode;
typedef enum {
    IL2CPP_STAT_NEW_OBJECT_COUNT,
    IL2CPP_STAT_INITIALIZED_CLASS_COUNT,
    IL2CPP_STAT_METHOD_COUNT,
    IL2CPP_STAT_CLASS_STATIC_DATA_SIZE,
    IL2CPP_STAT_GENERIC_INSTANCE_COUNT,
    IL2CPP_STAT_GENERIC_CLASS_COUNT,
    IL2CPP_STAT_INFLATED_METHOD_COUNT,
    IL2CPP_STAT_INFLATED_TYPE_COUNT,
} Il2CppStat;
typedef enum {
    IL2CPP_UNHANDLED_POLICY_LEGACY,
    IL2CPP_UNHANDLED_POLICY_CURRENT
} Il2CppRuntimeUnhandledExceptionPolicy;
typedef struct Il2CppStackFrameInfo {
    const MethodInfo* method;
    uintptr_t raw_ip;
    int sourceCodeLineNumber;
    int ilOffset;
    const char* filePath;
} Il2CppStackFrameInfo;
typedef void(*Il2CppMethodPointer)();
typedef struct Il2CppMethodDebugInfo {
    Il2CppMethodPointer methodPointer;
    int32_t code_size;
    const char* file;
} Il2CppMethodDebugInfo;
typedef struct {
    void* (*malloc_func)(size_t size);
    void* (*aligned_malloc_func)(size_t size, size_t alignment);
    void (*free_func)(void* ptr);
    void (*aligned_free_func)(void* ptr);
    void* (*calloc_func)(size_t nmemb, size_t size);
    void* (*realloc_func)(void* ptr, size_t size);
    void* (*aligned_realloc_func)(void* ptr, size_t size, size_t alignment);
} Il2CppMemoryCallbacks;
typedef struct {
    const char* name;
    void(*connect)(const char* address);
    int(*wait_for_attach)(void);
    void(*close1)(void);
    void(*close2)(void);
    int(*send)(void* buf, int len);
    int(*recv)(void* buf, int len);
} Il2CppDebuggerTransport;
typedef uint16_t Il2CppChar;
typedef char Il2CppNativeChar;
typedef void (*il2cpp_register_object_callback)(Il2CppObject** arr, int size, void* userdata);
typedef void (*il2cpp_WorldChangedCallback)();
typedef void (*Il2CppFrameWalkFunc) (const Il2CppStackFrameInfo* info, void* user_data);
typedef void (*Il2CppProfileFunc) (Il2CppProfiler* prof);
typedef void (*Il2CppProfileMethodFunc) (Il2CppProfiler* prof, const MethodInfo* method);
typedef void (*Il2CppProfileAllocFunc) (Il2CppProfiler* prof, Il2CppObject* obj, Il2CppClass* klass);
typedef void (*Il2CppProfileGCFunc) (Il2CppProfiler* prof, Il2CppGCEvent event, int generation);
typedef void (*Il2CppProfileGCResizeFunc) (Il2CppProfiler* prof, int64_t new_size);
typedef void (*Il2CppProfileFileIOFunc) (Il2CppProfiler* prof, Il2CppProfileFileIOKind kind, int count);
typedef void (*Il2CppProfileThreadFunc) (Il2CppProfiler* prof, unsigned long tid);
typedef const Il2CppNativeChar* (*Il2CppSetFindPlugInCallback)(const Il2CppNativeChar*);
typedef void (*Il2CppLogCallback)(const char*);
typedef size_t(*Il2CppBacktraceFunc) (Il2CppMethodPointer* buffer, size_t maxSize);
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef uintptr_t il2cpp_array_size_t;
typedef void (*SynchronizationContextCallback)(intptr_t arg);
typedef uint16_t Il2CppMethodSlot;
static const uint16_t kInvalidIl2CppMethodSlot = 65535;
static const int ipv6AddressSize = 16;
typedef int32_t il2cpp_hresult_t;
typedef enum {
    IL2CPP_TOKEN_MODULE = 0x00000000,
    IL2CPP_TOKEN_TYPE_REF = 0x01000000,
    IL2CPP_TOKEN_TYPE_DEF = 0x02000000,
    IL2CPP_TOKEN_FIELD_DEF = 0x04000000,
    IL2CPP_TOKEN_METHOD_DEF = 0x06000000,
    IL2CPP_TOKEN_PARAM_DEF = 0x08000000,
    IL2CPP_TOKEN_INTERFACE_IMPL = 0x09000000,
    IL2CPP_TOKEN_MEMBER_REF = 0x0a000000,
    IL2CPP_TOKEN_CUSTOM_ATTRIBUTE = 0x0c000000,
    IL2CPP_TOKEN_PERMISSION = 0x0e000000,
    IL2CPP_TOKEN_SIGNATURE = 0x11000000,
    IL2CPP_TOKEN_EVENT = 0x14000000,
    IL2CPP_TOKEN_PROPERTY = 0x17000000,
    IL2CPP_TOKEN_MODULE_REF = 0x1a000000,
    IL2CPP_TOKEN_TYPE_SPEC = 0x1b000000,
    IL2CPP_TOKEN_ASSEMBLY = 0x20000000,
    IL2CPP_TOKEN_ASSEMBLY_REF = 0x23000000,
    IL2CPP_TOKEN_FILE = 0x26000000,
    IL2CPP_TOKEN_EXPORTED_TYPE = 0x27000000,
    IL2CPP_TOKEN_MANIFEST_RESOURCE = 0x28000000,
    IL2CPP_TOKEN_GENERIC_PARAM = 0x2a000000,
    IL2CPP_TOKEN_METHOD_SPEC = 0x2b000000,
} Il2CppTokenType;
typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
typedef int32_t InteropDataIndex;
typedef int32_t TypeFieldIndex;
typedef int32_t TypeMethodIndex;
typedef int32_t MethodParameterIndex;
typedef int32_t TypePropertyIndex;
typedef int32_t TypeEventIndex;
typedef int32_t TypeInterfaceIndex;
typedef int32_t TypeNestedTypeIndex;
typedef int32_t TypeInterfaceOffsetIndex;
typedef int32_t GenericContainerParameterIndex;
typedef int32_t AssemblyTypeIndex;
typedef int32_t AssemblyExportedTypeIndex;
static const TypeIndex kTypeIndexInvalid = -1;
static const TypeDefinitionIndex kTypeDefinitionIndexInvalid = -1;
static const DefaultValueDataIndex kDefaultValueIndexNull = -1;
static const CustomAttributeIndex kCustomAttributeIndexInvalid = -1;
static const EventIndex kEventIndexInvalid = -1;
static const FieldIndex kFieldIndexInvalid = -1;
static const MethodIndex kMethodIndexInvalid = -1;
static const PropertyIndex kPropertyIndexInvalid = -1;
static const GenericContainerIndex kGenericContainerIndexInvalid = -1;
static const GenericParameterIndex kGenericParameterIndexInvalid = -1;
static const RGCTXIndex kRGCTXIndexInvalid = -1;
static const StringLiteralIndex kStringLiteralIndexInvalid = -1;
static const InteropDataIndex kInteropDataIndexInvalid = -1;
static const int kPublicKeyByteLength = 8;
typedef struct Il2CppMethodSpec {
    MethodIndex methodDefinitionIndex;
    GenericInstIndex classIndexIndex;
    GenericInstIndex methodIndexIndex;
} Il2CppMethodSpec;
typedef enum Il2CppRGCTXDataType {
    IL2CPP_RGCTX_DATA_INVALID,
    IL2CPP_RGCTX_DATA_TYPE,
    IL2CPP_RGCTX_DATA_CLASS,
    IL2CPP_RGCTX_DATA_METHOD,
    IL2CPP_RGCTX_DATA_ARRAY,
} Il2CppRGCTXDataType;
typedef union Il2CppRGCTXDefinitionData {
    int32_t rgctxDataDummy;
    MethodIndex __methodIndex;
    TypeIndex __typeIndex;
} Il2CppRGCTXDefinitionData;
typedef struct Il2CppRGCTXDefinition {
    Il2CppRGCTXDataType type;
    const Il2CppRGCTXDefinitionData* data;
} Il2CppRGCTXDefinition;
typedef struct {
    MethodIndex methodIndex;
    MethodIndex invokerIndex;
} Il2CppGenericMethodIndices;
typedef struct Il2CppGenericMethodFunctionsDefinitions {
    GenericMethodIndex genericMethodIndex;
    Il2CppGenericMethodIndices indices;
} Il2CppGenericMethodFunctionsDefinitions;
static inline uint32_t GetTokenType(uint32_t token) {
    return token & 0xFF000000;
}
static inline uint32_t GetTokenRowId(uint32_t token) {
    return token & 0x00FFFFFF;
}
typedef const struct ___Il2CppMetadataImageHandle* Il2CppMetadataImageHandle;
typedef const struct ___Il2CppMetadataCustomAttributeHandle* Il2CppMetadataCustomAttributeHandle;
typedef const struct ___Il2CppMetadataTypeHandle* Il2CppMetadataTypeHandle;
typedef const struct ___Il2CppMetadataMethodHandle* Il2CppMetadataMethodDefinitionHandle;
typedef const struct ___Il2CppMetadataGenericContainerHandle* Il2CppMetadataGenericContainerHandle;
typedef const struct ___Il2CppMetadataGenericParameterHandle* Il2CppMetadataGenericParameterHandle;
typedef uint32_t EncodedMethodIndex;
typedef enum Il2CppMetadataUsage {
    kIl2CppMetadataUsageInvalid,
    kIl2CppMetadataUsageTypeInfo,
    kIl2CppMetadataUsageIl2CppType,
    kIl2CppMetadataUsageMethodDef,
    kIl2CppMetadataUsageFieldInfo,
    kIl2CppMetadataUsageStringLiteral,
    kIl2CppMetadataUsageMethodRef,
} Il2CppMetadataUsage;
typedef struct Il2CppInterfaceOffsetPair {
    TypeIndex interfaceTypeIndex;
    int32_t offset;
} Il2CppInterfaceOffsetPair;
typedef struct Il2CppTypeDefinition {
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    TypeIndex byvalTypeIndex;
    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex;
    GenericContainerIndex genericContainerIndex;
    uint32_t flags;
    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint32_t bitfield;
    uint32_t token;
} Il2CppTypeDefinition;
typedef struct Il2CppFieldDefinition {
    StringIndex nameIndex;
    TypeIndex typeIndex;
    uint32_t token;
} Il2CppFieldDefinition;
typedef struct Il2CppFieldDefaultValue {
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
} Il2CppFieldDefaultValue;
typedef struct Il2CppFieldMarshaledSize {
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    int32_t size;
} Il2CppFieldMarshaledSize;
typedef struct Il2CppFieldRef {
    TypeIndex typeIndex;
    FieldIndex fieldIndex;
} Il2CppFieldRef;
typedef struct Il2CppParameterDefinition {
    StringIndex nameIndex;
    uint32_t token;
    TypeIndex typeIndex;
} Il2CppParameterDefinition;
typedef struct Il2CppParameterDefaultValue {
    ParameterIndex parameterIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
} Il2CppParameterDefaultValue;
typedef struct Il2CppMethodDefinition {
    StringIndex nameIndex;
    TypeDefinitionIndex declaringType;
    TypeIndex returnType;
    ParameterIndex parameterStart;
    GenericContainerIndex genericContainerIndex;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMethodDefinition;
typedef struct Il2CppEventDefinition {
    StringIndex nameIndex;
    TypeIndex typeIndex;
    MethodIndex add;
    MethodIndex remove;
    MethodIndex raise;
    uint32_t token;
} Il2CppEventDefinition;
typedef struct Il2CppPropertyDefinition {
    StringIndex nameIndex;
    MethodIndex get;
    MethodIndex set;
    uint32_t attrs;
    uint32_t token;
} Il2CppPropertyDefinition;
typedef struct Il2CppStringLiteral {
    uint32_t length;
    StringLiteralIndex dataIndex;
} Il2CppStringLiteral;
typedef struct Il2CppAssemblyNameDefinition {
    StringIndex nameIndex;
    StringIndex cultureIndex;
    StringIndex publicKeyIndex;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t public_key_token[8];
} Il2CppAssemblyNameDefinition;
typedef struct Il2CppImageDefinition {
    StringIndex nameIndex;
    AssemblyIndex assemblyIndex;
    TypeDefinitionIndex typeStart;
    uint32_t typeCount;
    TypeDefinitionIndex exportedTypeStart;
    uint32_t exportedTypeCount;
    MethodIndex entryPointIndex;
    uint32_t token;
    CustomAttributeIndex customAttributeStart;
    uint32_t customAttributeCount;
} Il2CppImageDefinition;
typedef struct Il2CppAssemblyDefinition {
    ImageIndex imageIndex;
    uint32_t token;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyNameDefinition aname;
} Il2CppAssemblyDefinition;
typedef struct Il2CppCustomAttributeTypeRange {
    uint32_t token;
    int32_t start;
    int32_t count;
} Il2CppCustomAttributeTypeRange;
typedef struct Il2CppMetadataRange {
    int32_t start;
    int32_t length;
} Il2CppMetadataRange;
typedef struct Il2CppGenericContainer {
    int32_t ownerIndex;
    int32_t type_argc;
    int32_t is_method;
    GenericParameterIndex genericParameterStart;
} Il2CppGenericContainer;
typedef struct Il2CppGenericParameter {
    GenericContainerIndex ownerIndex;
    StringIndex nameIndex;
    GenericParameterConstraintIndex constraintsStart;
    int16_t constraintsCount;
    uint16_t num;
    uint16_t flags;
} Il2CppGenericParameter;
typedef struct Il2CppWindowsRuntimeTypeNamePair {
    StringIndex nameIndex;
    TypeIndex typeIndex;
} Il2CppWindowsRuntimeTypeNamePair;
#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader {
    int32_t sanity;
    int32_t version;
    int32_t stringLiteralOffset;
    int32_t stringLiteralCount;
    int32_t stringLiteralDataOffset;
    int32_t stringLiteralDataCount;
    int32_t stringOffset;
    int32_t stringCount;
    int32_t eventsOffset;
    int32_t eventsCount;
    int32_t propertiesOffset;
    int32_t propertiesCount;
    int32_t methodsOffset;
    int32_t methodsCount;
    int32_t parameterDefaultValuesOffset;
    int32_t parameterDefaultValuesCount;
    int32_t fieldDefaultValuesOffset;
    int32_t fieldDefaultValuesCount;
    int32_t fieldAndParameterDefaultValueDataOffset;
    int32_t fieldAndParameterDefaultValueDataCount;
    int32_t fieldMarshaledSizesOffset;
    int32_t fieldMarshaledSizesCount;
    int32_t parametersOffset;
    int32_t parametersCount;
    int32_t fieldsOffset;
    int32_t fieldsCount;
    int32_t genericParametersOffset;
    int32_t genericParametersCount;
    int32_t genericParameterConstraintsOffset;
    int32_t genericParameterConstraintsCount;
    int32_t genericContainersOffset;
    int32_t genericContainersCount;
    int32_t nestedTypesOffset;
    int32_t nestedTypesCount;
    int32_t interfacesOffset;
    int32_t interfacesCount;
    int32_t vtableMethodsOffset;
    int32_t vtableMethodsCount;
    int32_t interfaceOffsetsOffset;
    int32_t interfaceOffsetsCount;
    int32_t typeDefinitionsOffset;
    int32_t typeDefinitionsCount;
    int32_t imagesOffset;
    int32_t imagesCount;
    int32_t assembliesOffset;
    int32_t assembliesCount;
    int32_t fieldRefsOffset;
    int32_t fieldRefsCount;
    int32_t referencedAssembliesOffset;
    int32_t referencedAssembliesCount;
    int32_t attributesInfoOffset;
    int32_t attributesInfoCount;
    int32_t attributeTypesOffset;
    int32_t attributeTypesCount;
    int32_t unresolvedVirtualCallParameterTypesOffset;
    int32_t unresolvedVirtualCallParameterTypesCount;
    int32_t unresolvedVirtualCallParameterRangesOffset;
    int32_t unresolvedVirtualCallParameterRangesCount;
    int32_t windowsRuntimeTypeNamesOffset;
    int32_t windowsRuntimeTypeNamesSize;
    int32_t windowsRuntimeStringsOffset;
    int32_t windowsRuntimeStringsSize;
    int32_t exportedTypeDefinitionsOffset;
    int32_t exportedTypeDefinitionsCount;
} Il2CppGlobalMetadataHeader;
#pragma pack(pop, p1)
typedef struct Il2CppMetadataField {
    uint32_t offset;
    uint32_t typeIndex;
    const char* name;
    uint8_t isStatic;
} Il2CppMetadataField;
typedef enum Il2CppMetadataTypeFlags {
    kNone = 0,
    kValueType = 1 << 0,
    kArray = 1 << 1,
    kArrayRankMask = 0xFFFF0000
} Il2CppMetadataTypeFlags;
typedef struct Il2CppMetadataType {
    Il2CppMetadataTypeFlags flags;
    Il2CppMetadataField* fields;
    uint32_t fieldCount;
    uint32_t staticsSize;
    uint8_t* statics;
    uint32_t baseOrElementTypeIndex;
    char* name;
    const char* assemblyName;
    uint64_t typeInfoAddress;
    uint32_t size;
} Il2CppMetadataType;
typedef struct Il2CppMetadataSnapshot {
    uint32_t typeCount;
    Il2CppMetadataType* types;
} Il2CppMetadataSnapshot;
typedef struct Il2CppManagedMemorySection {
    uint64_t sectionStartAddress;
    uint32_t sectionSize;
    uint8_t* sectionBytes;
} Il2CppManagedMemorySection;
typedef struct Il2CppManagedHeap {
    uint32_t sectionCount;
    Il2CppManagedMemorySection* sections;
} Il2CppManagedHeap;
typedef struct Il2CppStacks {
    uint32_t stackCount;
    Il2CppManagedMemorySection* stacks;
} Il2CppStacks;
typedef struct NativeObject {
    uint32_t gcHandleIndex;
    uint32_t size;
    uint32_t instanceId;
    uint32_t classId;
    uint32_t referencedNativeObjectIndicesCount;
    uint32_t* referencedNativeObjectIndices;
} NativeObject;
typedef struct Il2CppGCHandles {
    uint32_t trackedObjectCount;
    uint64_t* pointersToObjects;
} Il2CppGCHandles;
typedef struct Il2CppRuntimeInformation {
    uint32_t pointerSize;
    uint32_t objectHeaderSize;
    uint32_t arrayHeaderSize;
    uint32_t arrayBoundsOffsetInHeader;
    uint32_t arraySizeOffsetInHeader;
    uint32_t allocationGranularity;
} Il2CppRuntimeInformation;
typedef struct Il2CppManagedMemorySnapshot {
    Il2CppManagedHeap heap;
    Il2CppStacks stacks;
    Il2CppMetadataSnapshot metadata;
    Il2CppGCHandles gcHandles;
    Il2CppRuntimeInformation runtimeInformation;
    void* additionalUserInformation;
} Il2CppManagedMemorySnapshot;
typedef enum Il2CppTypeEnum {
    IL2CPP_TYPE_END = 0x00,
    IL2CPP_TYPE_VOID = 0x01,
    IL2CPP_TYPE_BOOLEAN = 0x02,
    IL2CPP_TYPE_CHAR = 0x03,
    IL2CPP_TYPE_I1 = 0x04,
    IL2CPP_TYPE_U1 = 0x05,
    IL2CPP_TYPE_I2 = 0x06,
    IL2CPP_TYPE_U2 = 0x07,
    IL2CPP_TYPE_I4 = 0x08,
    IL2CPP_TYPE_U4 = 0x09,
    IL2CPP_TYPE_I8 = 0x0a,
    IL2CPP_TYPE_U8 = 0x0b,
    IL2CPP_TYPE_R4 = 0x0c,
    IL2CPP_TYPE_R8 = 0x0d,
    IL2CPP_TYPE_STRING = 0x0e,
    IL2CPP_TYPE_PTR = 0x0f,
    IL2CPP_TYPE_BYREF = 0x10,
    IL2CPP_TYPE_VALUETYPE = 0x11,
    IL2CPP_TYPE_CLASS = 0x12,
    IL2CPP_TYPE_VAR = 0x13,
    IL2CPP_TYPE_ARRAY = 0x14,
    IL2CPP_TYPE_GENERICINST = 0x15,
    IL2CPP_TYPE_TYPEDBYREF = 0x16,
    IL2CPP_TYPE_I = 0x18,
    IL2CPP_TYPE_U = 0x19,
    IL2CPP_TYPE_FNPTR = 0x1b,
    IL2CPP_TYPE_OBJECT = 0x1c,
    IL2CPP_TYPE_SZARRAY = 0x1d,
    IL2CPP_TYPE_MVAR = 0x1e,
    IL2CPP_TYPE_CMOD_REQD = 0x1f,
    IL2CPP_TYPE_CMOD_OPT = 0x20,
    IL2CPP_TYPE_INTERNAL = 0x21,
    IL2CPP_TYPE_MODIFIER = 0x40,
    IL2CPP_TYPE_SENTINEL = 0x41,
    IL2CPP_TYPE_PINNED = 0x45,
    IL2CPP_TYPE_ENUM = 0x55
} Il2CppTypeEnum;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppArrayType {
    const Il2CppType* etype;
    uint8_t rank;
    uint8_t numsizes;
    uint8_t numlobounds;
    int* sizes;
    int* lobounds;
} Il2CppArrayType;
typedef struct Il2CppGenericInst {
    uint32_t type_argc;
    const Il2CppType** type_argv;
} Il2CppGenericInst;
typedef struct Il2CppGenericContext {
    const Il2CppGenericInst* class_inst;
    const Il2CppGenericInst* method_inst;
} Il2CppGenericContext;
typedef struct Il2CppGenericClass {
    const Il2CppType* type;
    Il2CppGenericContext context;
    Il2CppClass* cached_class;
} Il2CppGenericClass;
typedef struct Il2CppGenericMethod {
    const MethodInfo* methodDefinition;
    Il2CppGenericContext context;
} Il2CppGenericMethod;
typedef struct Il2CppType {
    union {
        void* dummy;
        TypeDefinitionIndex __klassIndex;
        Il2CppMetadataTypeHandle typeHandle;
        const Il2CppType* type;
        Il2CppArrayType* array;
        GenericParameterIndex __genericParameterIndex;
        Il2CppMetadataGenericParameterHandle genericParameterHandle;
        Il2CppGenericClass* generic_class;
    } data;
    unsigned int attrs : 16;
    Il2CppTypeEnum type : 8;
    unsigned int num_mods : 5;
    unsigned int byref : 1;
    unsigned int pinned : 1;
    unsigned int valuetype : 1;
} Il2CppType;
typedef struct Il2CppMetadataFieldInfo {
    const Il2CppType* type;
    const char* name;
    uint32_t token;
} Il2CppMetadataFieldInfo;
typedef struct Il2CppMetadataMethodInfo {
    Il2CppMetadataMethodDefinitionHandle handle;
    const char* name;
    const Il2CppType* return_type;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
} Il2CppMetadataMethodInfo;
typedef struct Il2CppMetadataParameterInfo {
    const char* name;
    uint32_t token;
    const Il2CppType* type;
} Il2CppMetadataParameterInfo;
typedef struct Il2CppMetadataPropertyInfo {
    const char* name;
    const MethodInfo* get;
    const MethodInfo* set;
    uint32_t attrs;
    uint32_t token;
} Il2CppMetadataPropertyInfo;
typedef struct Il2CppMetadataEventInfo {
    const char* name;
    const Il2CppType* type;
    const MethodInfo* add;
    const MethodInfo* remove;
    const MethodInfo* raise;
    uint32_t token;
} Il2CppMetadataEventInfo;
typedef struct Il2CppInterfaceOffsetInfo {
    const Il2CppType* interfaceType;
    int32_t offset;
} Il2CppInterfaceOffsetInfo;
typedef struct Il2CppGenericParameterInfo {
    Il2CppMetadataGenericContainerHandle containerHandle;
    const char* name;
    uint16_t num;
    uint16_t flags;
} Il2CppGenericParameterInfo;
typedef enum Il2CppCallConvention {
    IL2CPP_CALL_DEFAULT,
    IL2CPP_CALL_C,
    IL2CPP_CALL_STDCALL,
    IL2CPP_CALL_THISCALL,
    IL2CPP_CALL_FASTCALL,
    IL2CPP_CALL_VARARG
} Il2CppCallConvention;
typedef enum Il2CppCharSet {
    CHARSET_ANSI,
    CHARSET_UNICODE,
    CHARSET_NOT_SPECIFIED
} Il2CppCharSet;
typedef struct Il2CppHString__ {
    int unused;
} Il2CppHString__;
typedef Il2CppHString__* Il2CppHString;
typedef struct Il2CppHStringHeader {
    union {
        void* Reserved1;
        char Reserved2[24];
    } Reserved;
} Il2CppHStringHeader;
typedef struct Il2CppGuid {
    uint32_t data1;
    uint16_t data2;
    uint16_t data3;
    uint8_t data4[8];
} Il2CppGuid;
typedef struct Il2CppSafeArrayBound {
    uint32_t element_count;
    int32_t lower_bound;
} Il2CppSafeArrayBound;
typedef struct Il2CppSafeArray {
    uint16_t dimension_count;
    uint16_t features;
    uint32_t element_size;
    uint32_t lock_count;
    void* data;
    Il2CppSafeArrayBound bounds[1];
} Il2CppSafeArray;
typedef struct Il2CppWin32Decimal {
    uint16_t reserved;
    union {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } s;
        uint16_t signscale;
    } u;
    uint32_t hi32;
    union {
        struct
        {
            uint32_t lo32;
            uint32_t mid32;
        } s2;
        uint64_t lo64;
    } u2;
} Il2CppWin32Decimal;
typedef int16_t IL2CPP_VARIANT_BOOL;
typedef enum Il2CppVarType {
    IL2CPP_VT_EMPTY = 0,
    IL2CPP_VT_NULL = 1,
    IL2CPP_VT_I2 = 2,
    IL2CPP_VT_I4 = 3,
    IL2CPP_VT_R4 = 4,
    IL2CPP_VT_R8 = 5,
    IL2CPP_VT_CY = 6,
    IL2CPP_VT_DATE = 7,
    IL2CPP_VT_BSTR = 8,
    IL2CPP_VT_DISPATCH = 9,
    IL2CPP_VT_ERROR = 10,
    IL2CPP_VT_BOOL = 11,
    IL2CPP_VT_VARIANT = 12,
    IL2CPP_VT_UNKNOWN = 13,
    IL2CPP_VT_DECIMAL = 14,
    IL2CPP_VT_I1 = 16,
    IL2CPP_VT_UI1 = 17,
    IL2CPP_VT_UI2 = 18,
    IL2CPP_VT_UI4 = 19,
    IL2CPP_VT_I8 = 20,
    IL2CPP_VT_UI8 = 21,
    IL2CPP_VT_INT = 22,
    IL2CPP_VT_UINT = 23,
    IL2CPP_VT_VOID = 24,
    IL2CPP_VT_HRESULT = 25,
    IL2CPP_VT_PTR = 26,
    IL2CPP_VT_SAFEARRAY = 27,
    IL2CPP_VT_CARRAY = 28,
    IL2CPP_VT_USERDEFINED = 29,
    IL2CPP_VT_LPSTR = 30,
    IL2CPP_VT_LPWSTR = 31,
    IL2CPP_VT_RECORD = 36,
    IL2CPP_VT_INT_PTR = 37,
    IL2CPP_VT_UINT_PTR = 38,
    IL2CPP_VT_FILETIME = 64,
    IL2CPP_VT_BLOB = 65,
    IL2CPP_VT_STREAM = 66,
    IL2CPP_VT_STORAGE = 67,
    IL2CPP_VT_STREAMED_OBJECT = 68,
    IL2CPP_VT_STORED_OBJECT = 69,
    IL2CPP_VT_BLOB_OBJECT = 70,
    IL2CPP_VT_CF = 71,
    IL2CPP_VT_CLSID = 72,
    IL2CPP_VT_VERSIONED_STREAM = 73,
    IL2CPP_VT_BSTR_BLOB = 0xfff,
    IL2CPP_VT_VECTOR = 0x1000,
    IL2CPP_VT_ARRAY = 0x2000,
    IL2CPP_VT_BYREF = 0x4000,
    IL2CPP_VT_RESERVED = 0x8000,
    IL2CPP_VT_ILLEGAL = 0xffff,
    IL2CPP_VT_ILLEGALMASKED = 0xfff,
    IL2CPP_VT_TYPEMASK = 0xfff,
} Il2CppVarType;
typedef struct Il2CppVariant Il2CppVariant;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppVariant {
    union {
        struct __tagVARIANT
        {
            uint16_t type;
            uint16_t reserved1;
            uint16_t reserved2;
            uint16_t reserved3;
            union
            {
                int64_t llVal;
                int32_t lVal;
                uint8_t bVal;
                int16_t iVal;
                float fltVal;
                double dblVal;
                IL2CPP_VARIANT_BOOL boolVal;
                int32_t scode;
                int64_t cyVal;
                double date;
                Il2CppChar* bstrVal;
                Il2CppIUnknown* punkVal;
                void* pdispVal;
                Il2CppSafeArray* parray;
                uint8_t* pbVal;
                int16_t* piVal;
                int32_t* plVal;
                int64_t* pllVal;
                float* pfltVal;
                double* pdblVal;
                IL2CPP_VARIANT_BOOL* pboolVal;
                int32_t* pscode;
                int64_t* pcyVal;
                double* pdate;
                Il2CppChar* pbstrVal;
                Il2CppIUnknown** ppunkVal;
                void** ppdispVal;
                Il2CppSafeArray** pparray;
                struct Il2CppVariant* pvarVal;
                void* byref;
                char cVal;
                uint16_t uiVal;
                uint32_t ulVal;
                uint64_t ullVal;
                int intVal;
                unsigned int uintVal;
                Il2CppWin32Decimal* pdecVal;
                char* pcVal;
                uint16_t* puiVal;
                uint32_t* pulVal;
                uint64_t* pullVal;
                int* pintVal;
                unsigned int* puintVal;
                struct __tagBRECORD
                {
                    void* pvRecord;
                    void* pRecInfo;
                } n4;
            } n3;
        } n2;
        Il2CppWin32Decimal decVal;
    } n1;
} Il2CppVariant;
typedef struct Il2CppFileTime {
    uint32_t low;
    uint32_t high;
} Il2CppFileTime;
typedef struct Il2CppStatStg {
    Il2CppChar* name;
    uint32_t type;
    uint64_t size;
    Il2CppFileTime mtime;
    Il2CppFileTime ctime;
    Il2CppFileTime atime;
    uint32_t mode;
    uint32_t locks;
    Il2CppGuid clsid;
    uint32_t state;
    uint32_t reserved;
} Il2CppStatStg;
typedef enum Il2CppWindowsRuntimeTypeKind {
    kTypeKindPrimitive = 0,
    kTypeKindMetadata,
    kTypeKindCustom
} Il2CppWindowsRuntimeTypeKind;
typedef struct Il2CppWindowsRuntimeTypeName {
    Il2CppHString typeName;
    enum Il2CppWindowsRuntimeTypeKind typeKind;
} Il2CppWindowsRuntimeTypeName;
typedef void (*PInvokeMarshalToNativeFunc)(void* managedStructure, void* marshaledStructure);
typedef void (*PInvokeMarshalFromNativeFunc)(void* marshaledStructure, void* managedStructure);
typedef void (*PInvokeMarshalCleanupFunc)(void* marshaledStructure);
typedef struct Il2CppIUnknown* (*CreateCCWFunc)(Il2CppObject* obj);
typedef struct Il2CppInteropData {
    Il2CppMethodPointer delegatePInvokeWrapperFunction;
    PInvokeMarshalToNativeFunc pinvokeMarshalToNativeFunction;
    PInvokeMarshalFromNativeFunc pinvokeMarshalFromNativeFunction;
    PInvokeMarshalCleanupFunc pinvokeMarshalCleanupFunction;
    CreateCCWFunc createCCWFunction;
    const Il2CppGuid* guid;
    const Il2CppType* type;
} Il2CppInteropData;
typedef struct Il2CppCodeGenModule Il2CppCodeGenModule;
typedef struct Il2CppMetadataRegistration Il2CppMetadataRegistration;
typedef struct Il2CppCodeRegistration Il2CppCodeRegistration;
typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppGuid Il2CppGuid;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppAppDomain Il2CppAppDomain;
typedef struct Il2CppAppDomainSetup Il2CppAppDomainSetup;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppAppContext Il2CppAppContext;
typedef struct Il2CppNameToTypeHandleHashTable Il2CppNameToTypeHandleHashTable;
typedef struct Il2CppCodeGenModule Il2CppCodeGenModule;
typedef struct Il2CppMetadataRegistration Il2CppMetadataRegistration;
typedef struct Il2CppCodeRegistration Il2CppCodeRegistration;
typedef struct VirtualInvokeData {
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
} VirtualInvokeData;
typedef enum Il2CppTypeNameFormat {
    IL2CPP_TYPE_NAME_FORMAT_IL,
    IL2CPP_TYPE_NAME_FORMAT_REFLECTION,
    IL2CPP_TYPE_NAME_FORMAT_FULL_NAME,
    IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED
} Il2CppTypeNameFormat;
typedef struct Il2CppDefaults {
    Il2CppImage* corlib;
    Il2CppClass* object_class;
    Il2CppClass* byte_class;
    Il2CppClass* void_class;
    Il2CppClass* boolean_class;
    Il2CppClass* sbyte_class;
    Il2CppClass* int16_class;
    Il2CppClass* uint16_class;
    Il2CppClass* int32_class;
    Il2CppClass* uint32_class;
    Il2CppClass* int_class;
    Il2CppClass* uint_class;
    Il2CppClass* int64_class;
    Il2CppClass* uint64_class;
    Il2CppClass* single_class;
    Il2CppClass* double_class;
    Il2CppClass* char_class;
    Il2CppClass* string_class;
    Il2CppClass* enum_class;
    Il2CppClass* array_class;
    Il2CppClass* delegate_class;
    Il2CppClass* multicastdelegate_class;
    Il2CppClass* asyncresult_class;
    Il2CppClass* manualresetevent_class;
    Il2CppClass* typehandle_class;
    Il2CppClass* fieldhandle_class;
    Il2CppClass* methodhandle_class;
    Il2CppClass* systemtype_class;
    Il2CppClass* monotype_class;
    Il2CppClass* exception_class;
    Il2CppClass* threadabortexception_class;
    Il2CppClass* thread_class;
    Il2CppClass* internal_thread_class;
    Il2CppClass* appdomain_class;
    Il2CppClass* appdomain_setup_class;
    Il2CppClass* field_info_class;
    Il2CppClass* method_info_class;
    Il2CppClass* property_info_class;
    Il2CppClass* event_info_class;
    Il2CppClass* mono_event_info_class;
    Il2CppClass* stringbuilder_class;
    Il2CppClass* stack_frame_class;
    Il2CppClass* stack_trace_class;
    Il2CppClass* marshal_class;
    Il2CppClass* typed_reference_class;
    Il2CppClass* marshalbyrefobject_class;
    Il2CppClass* generic_ilist_class;
    Il2CppClass* generic_icollection_class;
    Il2CppClass* generic_ienumerable_class;
    Il2CppClass* generic_ireadonlylist_class;
    Il2CppClass* generic_ireadonlycollection_class;
    Il2CppClass* runtimetype_class;
    Il2CppClass* generic_nullable_class;
    Il2CppClass* il2cpp_com_object_class;
    Il2CppClass* attribute_class;
    Il2CppClass* customattribute_data_class;
    Il2CppClass* version;
    Il2CppClass* culture_info;
    Il2CppClass* async_call_class;
    Il2CppClass* assembly_class;
    Il2CppClass* mono_assembly_class;
    Il2CppClass* assembly_name_class;
    Il2CppClass* mono_field_class;
    Il2CppClass* mono_method_class;
    Il2CppClass* mono_method_info_class;
    Il2CppClass* mono_property_info_class;
    Il2CppClass* parameter_info_class;
    Il2CppClass* mono_parameter_info_class;
    Il2CppClass* module_class;
    Il2CppClass* pointer_class;
    Il2CppClass* system_exception_class;
    Il2CppClass* argument_exception_class;
    Il2CppClass* wait_handle_class;
    Il2CppClass* safe_handle_class;
    Il2CppClass* sort_key_class;
    Il2CppClass* dbnull_class;
    Il2CppClass* error_wrapper_class;
    Il2CppClass* missing_class;
    Il2CppClass* value_type_class;
    Il2CppClass* threadpool_wait_callback_class;
    MethodInfo* threadpool_perform_wait_callback_method;
    Il2CppClass* mono_method_message_class;
    Il2CppClass* ireference_class;
    Il2CppClass* ireferencearray_class;
    Il2CppClass* ikey_value_pair_class;
    Il2CppClass* key_value_pair_class;
    Il2CppClass* windows_foundation_uri_class;
    Il2CppClass* windows_foundation_iuri_runtime_class_class;
    Il2CppClass* system_uri_class;
    Il2CppClass* system_guid_class;
    Il2CppClass* sbyte_shared_enum;
    Il2CppClass* int16_shared_enum;
    Il2CppClass* int32_shared_enum;
    Il2CppClass* int64_shared_enum;
    Il2CppClass* byte_shared_enum;
    Il2CppClass* uint16_shared_enum;
    Il2CppClass* uint32_shared_enum;
    Il2CppClass* uint64_shared_enum;
} Il2CppDefaults;
extern Il2CppDefaults il2cpp_defaults;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct Il2CppObject Il2CppObject;
typedef struct MemberInfo MemberInfo;
typedef struct CustomAttributesCache {
    int count;
    Il2CppObject** attributes;
} CustomAttributesCache;
typedef void (*CustomAttributesCacheGenerator)(CustomAttributesCache*);
typedef struct FieldInfo {
    const char* name;
    const Il2CppType* type;
    Il2CppClass* parent;
    int32_t offset;
    uint32_t token;
} FieldInfo;
typedef struct PropertyInfo {
    Il2CppClass* parent;
    const char* name;
    const MethodInfo* get;
    const MethodInfo* set;
    uint32_t attrs;
    uint32_t token;
} PropertyInfo;
typedef struct EventInfo {
    const char* name;
    const Il2CppType* eventType;
    Il2CppClass* parent;
    const MethodInfo* add;
    const MethodInfo* remove;
    const MethodInfo* raise;
    uint32_t token;
} EventInfo;
typedef struct ParameterInfo {
    const char* name;
    int32_t position;
    uint32_t token;
    const Il2CppType* parameter_type;
} ParameterInfo;
typedef void (*InvokerMethod)(Il2CppMethodPointer, const MethodInfo*, void*, void**, void*);
typedef enum MethodVariableKind {
    kMethodVariableKind_This,
    kMethodVariableKind_Parameter,
    kMethodVariableKind_LocalVariable
} MethodVariableKind;
typedef enum SequencePointKind {
    kSequencePointKind_Normal,
    kSequencePointKind_StepOut
} SequencePointKind;
typedef struct Il2CppMethodExecutionContextInfo {
    TypeIndex typeIndex;
    int32_t nameIndex;
    int32_t scopeIndex;
} Il2CppMethodExecutionContextInfo;
typedef struct Il2CppMethodExecutionContextInfoIndex {
    int32_t startIndex;
    int32_t count;
} Il2CppMethodExecutionContextInfoIndex;
typedef struct Il2CppMethodScope {
    int32_t startOffset;
    int32_t endOffset;
} Il2CppMethodScope;
typedef struct Il2CppMethodHeaderInfo {
    int32_t code_size;
    int32_t startScope;
    int32_t numScopes;
} Il2CppMethodHeaderInfo;
typedef struct Il2CppSequencePointSourceFile {
    const char* file;
    uint8_t hash[16];
} Il2CppSequencePointSourceFile;
typedef struct Il2CppTypeSourceFilePair {
    TypeDefinitionIndex __klassIndex;
    int32_t sourceFileIndex;
} Il2CppTypeSourceFilePair;
typedef struct Il2CppSequencePoint {
    MethodIndex __methodDefinitionIndex;
    int32_t sourceFileIndex;
    int32_t lineStart, lineEnd;
    int32_t columnStart, columnEnd;
    int32_t ilOffset;
    SequencePointKind kind;
    int32_t isActive;
    int32_t id;
} Il2CppSequencePoint;
typedef struct Il2CppCatchPoint {
    MethodIndex __methodDefinitionIndex;
    TypeIndex catchTypeIndex;
    int32_t ilOffset;
    int32_t tryId;
    int32_t parentTryId;
} Il2CppCatchPoint;
typedef struct Il2CppDebuggerMetadataRegistration {
    Il2CppMethodExecutionContextInfo* methodExecutionContextInfos;
    Il2CppMethodExecutionContextInfoIndex* methodExecutionContextInfoIndexes;
    Il2CppMethodScope* methodScopes;
    Il2CppMethodHeaderInfo* methodHeaderInfos;
    Il2CppSequencePointSourceFile* sequencePointSourceFiles;
    int32_t numSequencePoints;
    Il2CppSequencePoint* sequencePoints;
    int32_t numCatchPoints;
    Il2CppCatchPoint* catchPoints;
    int32_t numTypeSourceFileEntries;
    Il2CppTypeSourceFilePair* typeSourceFiles;
    const char** methodExecutionContextInfoStrings;
} Il2CppDebuggerMetadataRegistration;
typedef union Il2CppRGCTXData {
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
} Il2CppRGCTXData;
typedef struct MethodInfo {
    Il2CppMethodPointer methodPointer;
    InvokerMethod invoker_method;
    const char* name;
    Il2CppClass* klass;
    const Il2CppType* return_type;
    const ParameterInfo* parameters;
    union {
        const Il2CppRGCTXData* rgctx_data;
        Il2CppMetadataMethodDefinitionHandle methodMetadataHandle;
    } Il2CppVariant;
    union {
        const Il2CppGenericMethod* genericMethod;
        Il2CppMetadataGenericContainerHandle genericContainerHandle;
    };
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint8_t parameters_count;
    uint8_t is_generic : 1;
    uint8_t is_inflated : 1;
    uint8_t wrapper_type : 1;
    uint8_t is_marshaled_from_native : 1;
} MethodInfo;
typedef struct Il2CppRuntimeInterfaceOffsetPair {
    Il2CppClass* interfaceType;
    int32_t offset;
} Il2CppRuntimeInterfaceOffsetPair;
typedef struct Il2CppClass {
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass* generic_class;
    Il2CppMetadataTypeHandle typeMetadataHandle;
    const Il2CppInteropData* interopData;
    Il2CppClass* klass;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass** typeHierarchy;
    void* unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    __declspec(align(8)) size_t cctor_thread;
    Il2CppMetadataGenericContainerHandle genericContainerHandle;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t initialized_and_no_error : 1;
    uint8_t valuetype : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    uint8_t has_initialization_error : 1;
    VirtualInvokeData vtable[32];
} Il2CppClass;

typedef struct Il2CppClass_0 {
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass* generic_class;
    Il2CppMetadataTypeHandle typeMetadataHandle;
    const Il2CppInteropData* interopData;
    Il2CppClass* klass;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
} Il2CppClass_0;

typedef struct Il2CppClass_1 {
    struct Il2CppClass** typeHierarchy;
    void* unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
#ifdef IS_32BIT
    uint32_t cctor_thread;
#else
    __declspec(align(8)) size_t cctor_thread;
#endif
    Il2CppMetadataGenericContainerHandle genericContainerHandle;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t initialized_and_no_error : 1;
    uint8_t valuetype : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    uint8_t has_initialization_error : 1;
} Il2CppClass_1;

typedef struct __declspec(align(8)) Il2CppClass_Merged {
    struct Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass_1 _1;
    VirtualInvokeData vtable[32];
} Il2CppClass_Merged;

typedef struct Il2CppTypeDefinitionSizes {
    uint32_t instance_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
} Il2CppTypeDefinitionSizes;
typedef struct Il2CppDomain {
    Il2CppAppDomain* domain;
    Il2CppAppDomainSetup* setup;
    Il2CppAppContext* default_context;
    const char* friendly_name;
    uint32_t domain_id;
    volatile int threadpool_jobs;
    void* agent_info;
} Il2CppDomain;
typedef struct Il2CppAssemblyName {
    const char* name;
    const char* culture;
    const uint8_t* public_key;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t public_key_token[8];
} Il2CppAssemblyName;
typedef struct Il2CppImage {
    const char* name;
    const char* nameNoExt;
    Il2CppAssembly* assembly;
    uint32_t typeCount;
    uint32_t exportedTypeCount;
    uint32_t customAttributeCount;
    Il2CppMetadataImageHandle metadataHandle;
    Il2CppNameToTypeHandleHashTable* nameToClassHashTable;
    const Il2CppCodeGenModule* codeGenModule;
    uint32_t token;
    uint8_t dynamic;
} Il2CppImage;
typedef struct Il2CppAssembly {
    Il2CppImage* image;
    uint32_t token;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyName aname;
} Il2CppAssembly;
typedef struct Il2CppCodeGenOptions {
    uint8_t enablePrimitiveValueTypeGenericSharing;
    int maximumRuntimeGenericDepth;
} Il2CppCodeGenOptions;
typedef struct Il2CppRange {
    int32_t start;
    int32_t length;
} Il2CppRange;
typedef struct Il2CppTokenRangePair {
    uint32_t token;
    Il2CppRange range;
} Il2CppTokenRangePair;
typedef struct Il2CppTokenIndexMethodTuple {
    uint32_t token;
    int32_t index;
    void** method;
    uint32_t __genericMethodIndex;
} Il2CppTokenIndexMethodTuple;
typedef struct Il2CppWindowsRuntimeFactoryTableEntry {
    const Il2CppType* type;
    Il2CppMethodPointer createFactoryFunction;
} Il2CppWindowsRuntimeFactoryTableEntry;
typedef struct Il2CppCodeGenModule {
    const char* moduleName;
    const uint32_t methodPointerCount;
    const Il2CppMethodPointer* methodPointers;
    const int32_t* invokerIndices;
    const uint32_t reversePInvokeWrapperCount;
    const Il2CppTokenIndexMethodTuple* reversePInvokeWrapperIndices;
    const uint32_t rgctxRangesCount;
    const Il2CppTokenRangePair* rgctxRanges;
    const uint32_t rgctxsCount;
    const Il2CppRGCTXDefinition* rgctxs;
    const Il2CppDebuggerMetadataRegistration* debuggerMetadata;
    const CustomAttributesCacheGenerator* customAttributeCacheGenerator;
    const Il2CppMethodPointer moduleInitializer;
    TypeDefinitionIndex* staticConstructorTypeIndices;
    const Il2CppMetadataRegistration* metadataRegistration;
    const Il2CppCodeRegistration* codeRegistaration;
} Il2CppCodeGenModule;
typedef struct Il2CppCodeRegistration {
    uint32_t reversePInvokeWrapperCount;
    const Il2CppMethodPointer* reversePInvokeWrappers;
    uint32_t genericMethodPointersCount;
    const Il2CppMethodPointer* genericMethodPointers;
    uint32_t invokerPointersCount;
    const InvokerMethod* invokerPointers;
    uint32_t unresolvedVirtualCallCount;
    const Il2CppMethodPointer* unresolvedVirtualCallPointers;
    uint32_t interopDataCount;
    Il2CppInteropData* interopData;
    uint32_t windowsRuntimeFactoryCount;
    Il2CppWindowsRuntimeFactoryTableEntry* windowsRuntimeFactoryTable;
    uint32_t codeGenModulesCount;
    const Il2CppCodeGenModule** codeGenModules;
} Il2CppCodeRegistration;
typedef struct Il2CppMetadataRegistration {
    int32_t genericClassesCount;
    Il2CppGenericClass* const* genericClasses;
    int32_t genericInstsCount;
    const Il2CppGenericInst* const* genericInsts;
    int32_t genericMethodTableCount;
    const Il2CppGenericMethodFunctionsDefinitions* genericMethodTable;
    int32_t typesCount;
    const Il2CppType* const* types;
    int32_t methodSpecsCount;
    const Il2CppMethodSpec* methodSpecs;
    FieldIndex fieldOffsetsCount;
    const int32_t** fieldOffsets;
    TypeDefinitionIndex typeDefinitionsSizesCount;
    const Il2CppTypeDefinitionSizes** typeDefinitionsSizes;
    const size_t metadataUsagesCount;
    void** const* metadataUsages;
} Il2CppMetadataRegistration;
typedef struct Il2CppPerfCounters {
    uint32_t jit_methods;
    uint32_t jit_bytes;
    uint32_t jit_time;
    uint32_t jit_failures;
    uint32_t exceptions_thrown;
    uint32_t exceptions_filters;
    uint32_t exceptions_finallys;
    uint32_t exceptions_depth;
    uint32_t aspnet_requests_queued;
    uint32_t aspnet_requests;
    uint32_t gc_collections0;
    uint32_t gc_collections1;
    uint32_t gc_collections2;
    uint32_t gc_promotions0;
    uint32_t gc_promotions1;
    uint32_t gc_promotion_finalizers;
    uint32_t gc_gen0size;
    uint32_t gc_gen1size;
    uint32_t gc_gen2size;
    uint32_t gc_lossize;
    uint32_t gc_fin_survivors;
    uint32_t gc_num_handles;
    uint32_t gc_allocated;
    uint32_t gc_induced;
    uint32_t gc_time;
    uint32_t gc_total_bytes;
    uint32_t gc_committed_bytes;
    uint32_t gc_reserved_bytes;
    uint32_t gc_num_pinned;
    uint32_t gc_sync_blocks;
    uint32_t remoting_calls;
    uint32_t remoting_channels;
    uint32_t remoting_proxies;
    uint32_t remoting_classes;
    uint32_t remoting_objects;
    uint32_t remoting_contexts;
    uint32_t loader_classes;
    uint32_t loader_total_classes;
    uint32_t loader_appdomains;
    uint32_t loader_total_appdomains;
    uint32_t loader_assemblies;
    uint32_t loader_total_assemblies;
    uint32_t loader_failures;
    uint32_t loader_bytes;
    uint32_t loader_appdomains_uloaded;
    uint32_t thread_contentions;
    uint32_t thread_queue_len;
    uint32_t thread_queue_max;
    uint32_t thread_num_logical;
    uint32_t thread_num_physical;
    uint32_t thread_cur_recognized;
    uint32_t thread_num_recognized;
    uint32_t interop_num_ccw;
    uint32_t interop_num_stubs;
    uint32_t interop_num_marshals;
    uint32_t security_num_checks;
    uint32_t security_num_link_checks;
    uint32_t security_time;
    uint32_t security_depth;
    uint32_t unused;
    uint64_t threadpool_workitems;
    uint64_t threadpool_ioworkitems;
    unsigned int threadpool_threads;
    unsigned int threadpool_iothreads;
} Il2CppPerfCounters;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct FieldInfo FieldInfo;
typedef struct EventInfo EventInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppAsyncCall Il2CppAsyncCall;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppWaitHandle Il2CppWaitHandle;
typedef struct MonitorData MonitorData;
typedef struct Il2CppReflectionAssembly Il2CppReflectionAssembly;
typedef Il2CppClass Il2CppVTable;
typedef struct Il2CppObject {
    union {
        Il2CppClass* klass;
        Il2CppVTable* vtable;
    } Il2CppClass;
    void* monitor;
} Il2CppObject;
typedef int32_t il2cpp_array_lower_bound_t;
typedef struct Il2CppArrayBounds {
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
} Il2CppArrayBounds;
typedef struct Il2CppArray {
    Il2CppObject obj;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
} Il2CppArray;
typedef struct Il2CppArraySize {
    Il2CppObject obj;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    __declspec(align(8)) void* vector[32];
} Il2CppArraySize;
typedef struct Il2CppString {
    Il2CppObject object;
    int32_t length;
    Il2CppChar chars[32];
} Il2CppString;
typedef struct Il2CppReflectionType {
    Il2CppObject object;
    const Il2CppType* type;
} Il2CppReflectionType;
typedef struct Il2CppReflectionRuntimeType {
    Il2CppReflectionType type;
    Il2CppObject* type_info;
    Il2CppObject* genericCache;
    Il2CppObject* serializationCtor;
} Il2CppReflectionRuntimeType;
typedef struct Il2CppReflectionMonoType {
    Il2CppReflectionRuntimeType type;
} Il2CppReflectionMonoType;
typedef struct Il2CppReflectionEvent {
    Il2CppObject object;
    Il2CppObject* cached_add_event;
} Il2CppReflectionEvent;
typedef struct Il2CppReflectionMonoEvent {
    Il2CppReflectionEvent event;
    Il2CppReflectionType* reflectedType;
    const EventInfo* eventInfo;
} Il2CppReflectionMonoEvent;
typedef struct Il2CppReflectionMonoEventInfo {
    Il2CppReflectionType* declaringType;
    Il2CppReflectionType* reflectedType;
    Il2CppString* name;
    Il2CppReflectionMethod* addMethod;
    Il2CppReflectionMethod* removeMethod;
    Il2CppReflectionMethod* raiseMethod;
    uint32_t eventAttributes;
    Il2CppArray* otherMethods;
} Il2CppReflectionMonoEventInfo;
typedef struct Il2CppReflectionField {
    Il2CppObject object;
    Il2CppClass* klass;
    FieldInfo* field;
    Il2CppString* name;
    Il2CppReflectionType* type;
    uint32_t attrs;
} Il2CppReflectionField;
typedef struct Il2CppReflectionProperty {
    Il2CppObject object;
    Il2CppClass* klass;
    const PropertyInfo* property;
} Il2CppReflectionProperty;
typedef struct Il2CppReflectionMethod {
    Il2CppObject object;
    const MethodInfo* method;
    Il2CppString* name;
    Il2CppReflectionType* reftype;
} Il2CppReflectionMethod;
typedef struct Il2CppReflectionGenericMethod {
    Il2CppReflectionMethod base;
} Il2CppReflectionGenericMethod;
typedef struct Il2CppMethodInfo {
    Il2CppReflectionType* parent;
    Il2CppReflectionType* ret;
    uint32_t attrs;
    uint32_t implattrs;
    uint32_t callconv;
} Il2CppMethodInfo;
typedef struct Il2CppPropertyInfo {
    Il2CppReflectionType* parent;
    Il2CppReflectionType* declaringType;
    Il2CppString* name;
    Il2CppReflectionMethod* get;
    Il2CppReflectionMethod* set;
    uint32_t attrs;
} Il2CppPropertyInfo;
typedef struct Il2CppReflectionParameter {
    Il2CppObject object;
    Il2CppReflectionType* ClassImpl;
    Il2CppObject* DefaultValueImpl;
    Il2CppObject* MemberImpl;
    Il2CppString* NameImpl;
    int32_t PositionImpl;
    uint32_t AttrsImpl;
    Il2CppObject* MarshalAsImpl;
} Il2CppReflectionParameter;
typedef struct Il2CppReflectionModule {
    Il2CppObject obj;
    const Il2CppImage* image;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* fqname;
    Il2CppString* name;
    Il2CppString* scopename;
    uint8_t is_resource;
    uint32_t token;
} Il2CppReflectionModule;
typedef struct Il2CppReflectionAssemblyName {
    Il2CppObject obj;
    Il2CppString* name;
    Il2CppString* codebase;
    int32_t major, minor, build, revision;
    Il2CppObject* cultureInfo;
    uint32_t flags;
    uint32_t hashalg;
    Il2CppObject* keypair;
    Il2CppArray* publicKey;
    Il2CppArray* keyToken;
    uint32_t versioncompat;
    Il2CppObject* version;
    uint32_t processor_architecture;
    uint32_t contentType;
} Il2CppReflectionAssemblyName;
typedef struct Il2CppReflectionAssembly {
    Il2CppObject object;
    const Il2CppAssembly* assembly;
    Il2CppObject* resolve_event_holder;
    Il2CppObject* evidence;
    Il2CppObject* minimum;
    Il2CppObject* optional;
    Il2CppObject* refuse;
    Il2CppObject* granted;
    Il2CppObject* denied;
    uint8_t from_byte_array;
    Il2CppString* name;
} Il2CppReflectionAssembly;
typedef struct Il2CppReflectionMarshal {
    Il2CppObject object;
    int32_t count;
    int32_t type;
    int32_t eltype;
    Il2CppString* guid;
    Il2CppString* mcookie;
    Il2CppString* marshaltype;
    Il2CppObject* marshaltyperef;
    int32_t param_num;
    uint8_t has_size;
} Il2CppReflectionMarshal;
typedef struct Il2CppReflectionPointer {
    Il2CppObject object;
    void* data;
    Il2CppReflectionType* type;
} Il2CppReflectionPointer;
typedef struct Il2CppInternalThread {
    Il2CppObject obj;
    int lock_thread_id;
    void* handle;
    void* native_handle;
    Il2CppArray* cached_culture_info;
    Il2CppChar* name;
    int name_len;
    uint32_t state;
    Il2CppObject* abort_exc;
    int abort_state_handle;
    uint64_t tid;
    intptr_t debugger_thread;
    void** static_data;
    void* runtime_thread_info;
    Il2CppObject* current_appcontext;
    Il2CppObject* root_domain_thread;
    Il2CppArray* _serialized_principal;
    int _serialized_principal_version;
    void* appdomain_refs;
    int32_t interruption_requested;
    void* synch_cs;
    uint8_t threadpool_thread;
    uint8_t thread_interrupt_requested;
    int stack_size;
    uint8_t apartment_state;
    int critical_region_level;
    int managed_id;
    uint32_t small_id;
    void* manage_callback;
    void* interrupt_on_stop;
    intptr_t flags;
    void* thread_pinning_ref;
    void* abort_protected_block_count;
    int32_t priority;
    void* owned_mutexes;
    void* suspended;
    int32_t self_suspended;
    size_t thread_state;
    size_t unused2;
    void* last;
} Il2CppInternalThread;
typedef struct Il2CppIOSelectorJob {
    Il2CppObject object;
    int32_t operation;
    Il2CppObject* callback;
    Il2CppObject* state;
} Il2CppIOSelectorJob;
typedef enum {
    Il2Cpp_CallType_Sync = 0,
    Il2Cpp_CallType_BeginInvoke = 1,
    Il2Cpp_CallType_EndInvoke = 2,
    Il2Cpp_CallType_OneWay = 3
} Il2CppCallType;
typedef struct Il2CppMethodMessage {
    Il2CppObject obj;
    Il2CppReflectionMethod* method;
    Il2CppArray* args;
    Il2CppArray* names;
    Il2CppArray* arg_types;
    Il2CppObject* ctx;
    Il2CppObject* rval;
    Il2CppObject* exc;
    Il2CppAsyncResult* async_result;
    uint32_t call_type;
} Il2CppMethodMessage;
typedef struct Il2CppAppDomainSetup {
    Il2CppObject object;
    Il2CppString* application_base;
    Il2CppString* application_name;
    Il2CppString* cache_path;
    Il2CppString* configuration_file;
    Il2CppString* dynamic_base;
    Il2CppString* license_file;
    Il2CppString* private_bin_path;
    Il2CppString* private_bin_path_probe;
    Il2CppString* shadow_copy_directories;
    Il2CppString* shadow_copy_files;
    uint8_t publisher_policy;
    uint8_t path_changed;
    int loader_optimization;
    uint8_t disallow_binding_redirects;
    uint8_t disallow_code_downloads;
    Il2CppObject* activation_arguments;
    Il2CppObject* domain_initializer;
    Il2CppObject* application_trust;
    Il2CppArray* domain_initializer_args;
    uint8_t disallow_appbase_probe;
    Il2CppArray* configuration_bytes;
    Il2CppArray* serialized_non_primitives;
} Il2CppAppDomainSetup;
typedef struct Il2CppThread {
    Il2CppObject obj;
    Il2CppInternalThread* internal_thread;
    Il2CppObject* start_obj;
    Il2CppException* pending_exception;
    Il2CppObject* principal;
    int32_t principal_version;
    Il2CppDelegate* delegate;
    Il2CppObject* executionContext;
    uint8_t executionContextBelongsToOuterScope;
} Il2CppThread;
typedef struct Il2CppException {
    Il2CppObject object;
    Il2CppString* className;
    Il2CppString* message;
    Il2CppObject* _data;
    Il2CppException* inner_ex;
    Il2CppString* _helpURL;
    Il2CppArray* trace_ips;
    Il2CppString* stack_trace;
    Il2CppString* remote_stack_trace;
    int remote_stack_index;
    Il2CppObject* _dynamicMethods;
    il2cpp_hresult_t hresult;
    Il2CppString* source;
    Il2CppObject* safeSerializationManager;
    Il2CppArray* captured_traces;
    Il2CppArray* native_trace_ips;
} Il2CppException;
typedef struct Il2CppSystemException {
    Il2CppException base;
} Il2CppSystemException;
typedef struct Il2CppArgumentException {
    Il2CppException base;
    Il2CppString* argName;
} Il2CppArgumentException;
typedef struct Il2CppTypedRef {
    const Il2CppType* type;
    void* value;
    Il2CppClass* klass;
} Il2CppTypedRef;
typedef struct Il2CppDelegate {
    Il2CppObject object;
    Il2CppMethodPointer method_ptr;
    InvokerMethod invoke_impl;
    Il2CppObject* target;
    const MethodInfo* method;
    void* delegate_trampoline;
    intptr_t extraArg;
    uint8_t** method_code;
    Il2CppReflectionMethod* method_info;
    Il2CppReflectionMethod* original_method_info;
    Il2CppObject* data;
    uint8_t method_is_virtual;
} Il2CppDelegate;
typedef struct Il2CppMulticastDelegate {
    Il2CppDelegate delegate;
    Il2CppArray* delegates;
} Il2CppMulticastDelegate;
typedef struct Il2CppMarshalByRefObject {
    Il2CppObject obj;
    Il2CppObject* identity;
} Il2CppMarshalByRefObject;
typedef struct Il2CppAppDomain {
    Il2CppMarshalByRefObject mbr;
    Il2CppDomain* data;
} Il2CppAppDomain;
typedef struct Il2CppStackFrame {
    Il2CppObject obj;
    int32_t il_offset;
    int32_t native_offset;
    uint64_t methodAddress;
    uint32_t methodIndex;
    Il2CppReflectionMethod* method;
    Il2CppString* filename;
    int32_t line;
    int32_t column;
    Il2CppString* internal_method_name;
} Il2CppStackFrame;
typedef struct Il2CppDateTimeFormatInfo {
    Il2CppObject obj;
    Il2CppObject* CultureData;
    Il2CppString* Name;
    Il2CppString* LangName;
    Il2CppObject* CompareInfo;
    Il2CppObject* CultureInfo;
    Il2CppString* AMDesignator;
    Il2CppString* PMDesignator;
    Il2CppString* DateSeparator;
    Il2CppString* GeneralShortTimePattern;
    Il2CppString* GeneralLongTimePattern;
    Il2CppString* TimeSeparator;
    Il2CppString* MonthDayPattern;
    Il2CppString* DateTimeOffsetPattern;
    Il2CppObject* Calendar;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
    Il2CppString* FullDateTimePattern;
    Il2CppArray* AbbreviatedDayNames;
    Il2CppArray* ShortDayNames;
    Il2CppArray* DayNames;
    Il2CppArray* AbbreviatedMonthNames;
    Il2CppArray* MonthNames;
    Il2CppArray* GenitiveMonthNames;
    Il2CppArray* GenitiveAbbreviatedMonthNames;
    Il2CppArray* LeapYearMonthNames;
    Il2CppString* LongDatePattern;
    Il2CppString* ShortDatePattern;
    Il2CppString* YearMonthPattern;
    Il2CppString* LongTimePattern;
    Il2CppString* ShortTimePattern;
    Il2CppArray* YearMonthPatterns;
    Il2CppArray* ShortDatePatterns;
    Il2CppArray* LongDatePatterns;
    Il2CppArray* ShortTimePatterns;
    Il2CppArray* LongTimePatterns;
    Il2CppArray* EraNames;
    Il2CppArray* AbbrevEraNames;
    Il2CppArray* AbbrevEnglishEraNames;
    Il2CppArray* OptionalCalendars;
    uint8_t readOnly;
    int32_t FormatFlags;
    int32_t CultureID;
    uint8_t UseUserOverride;
    uint8_t UseCalendarInfo;
    int32_t DataItem;
    uint8_t IsDefaultCalendar;
    Il2CppArray* DateWords;
    Il2CppString* FullTimeSpanPositivePattern;
    Il2CppString* FullTimeSpanNegativePattern;
    Il2CppArray* dtfiTokenHash;
} Il2CppDateTimeFormatInfo;
typedef struct Il2CppNumberFormatInfo {
    Il2CppObject obj;
    Il2CppArray* numberGroupSizes;
    Il2CppArray* currencyGroupSizes;
    Il2CppArray* percentGroupSizes;
    Il2CppString* positiveSign;
    Il2CppString* negativeSign;
    Il2CppString* numberDecimalSeparator;
    Il2CppString* numberGroupSeparator;
    Il2CppString* currencyGroupSeparator;
    Il2CppString* currencyDecimalSeparator;
    Il2CppString* currencySymbol;
    Il2CppString* ansiCurrencySymbol;
    Il2CppString* naNSymbol;
    Il2CppString* positiveInfinitySymbol;
    Il2CppString* negativeInfinitySymbol;
    Il2CppString* percentDecimalSeparator;
    Il2CppString* percentGroupSeparator;
    Il2CppString* percentSymbol;
    Il2CppString* perMilleSymbol;
    Il2CppArray* nativeDigits;
    int dataItem;
    int numberDecimalDigits;
    int currencyDecimalDigits;
    int currencyPositivePattern;
    int currencyNegativePattern;
    int numberNegativePattern;
    int percentPositivePattern;
    int percentNegativePattern;
    int percentDecimalDigits;
    int digitSubstitution;
    uint8_t readOnly;
    uint8_t useUserOverride;
    uint8_t isInvariant;
    uint8_t validForParseAsNumber;
    uint8_t validForParseAsCurrency;
} Il2CppNumberFormatInfo;
typedef struct Il2CppCultureData {
    Il2CppObject obj;
    Il2CppString* AMDesignator;
    Il2CppString* PMDesignator;
    Il2CppString* TimeSeparator;
    Il2CppArray* LongTimePatterns;
    Il2CppArray* ShortTimePatterns;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
} Il2CppCultureData;
typedef struct Il2CppCalendarData {
    Il2CppObject obj;
    Il2CppString* NativeName;
    Il2CppArray* ShortDatePatterns;
    Il2CppArray* YearMonthPatterns;
    Il2CppArray* LongDatePatterns;
    Il2CppString* MonthDayPattern;
    Il2CppArray* EraNames;
    Il2CppArray* AbbreviatedEraNames;
    Il2CppArray* AbbreviatedEnglishEraNames;
    Il2CppArray* DayNames;
    Il2CppArray* AbbreviatedDayNames;
    Il2CppArray* SuperShortDayNames;
    Il2CppArray* MonthNames;
    Il2CppArray* AbbreviatedMonthNames;
    Il2CppArray* GenitiveMonthNames;
    Il2CppArray* GenitiveAbbreviatedMonthNames;
} Il2CppCalendarData;
typedef struct Il2CppCultureInfo {
    Il2CppObject obj;
    uint8_t is_read_only;
    int32_t lcid;
    int32_t parent_lcid;
    int32_t datetime_index;
    int32_t number_index;
    int32_t default_calendar_type;
    uint8_t use_user_override;
    Il2CppNumberFormatInfo* number_format;
    Il2CppDateTimeFormatInfo* datetime_format;
    Il2CppObject* textinfo;
    Il2CppString* name;
    Il2CppString* englishname;
    Il2CppString* nativename;
    Il2CppString* iso3lang;
    Il2CppString* iso2lang;
    Il2CppString* win3lang;
    Il2CppString* territory;
    Il2CppArray* native_calendar_names;
    Il2CppString* compareinfo;
    const void* text_info_data;
    int dataItem;
    Il2CppObject* calendar;
    Il2CppObject* parent_culture;
    uint8_t constructed;
    Il2CppArray* cached_serialized_form;
    Il2CppObject* cultureData;
    uint8_t isInherited;
} Il2CppCultureInfo;
typedef struct Il2CppRegionInfo {
    Il2CppObject obj;
    int32_t geo_id;
    Il2CppString* iso2name;
    Il2CppString* iso3name;
    Il2CppString* win3name;
    Il2CppString* english_name;
    Il2CppString* native_name;
    Il2CppString* currency_symbol;
    Il2CppString* iso_currency_symbol;
    Il2CppString* currency_english_name;
    Il2CppString* currency_native_name;
} Il2CppRegionInfo;
typedef struct Il2CppSafeHandle {
    Il2CppObject base;
    void* handle;
    int state;
    uint8_t owns_handle;
    uint8_t fullyInitialized;
} Il2CppSafeHandle;
typedef struct Il2CppStringBuilder Il2CppStringBuilder;
typedef struct Il2CppStringBuilder {
    Il2CppObject object;
    Il2CppArray* chunkChars;
    Il2CppStringBuilder* chunkPrevious;
    int chunkLength;
    int chunkOffset;
    int maxCapacity;
} Il2CppStringBuilder;
typedef struct Il2CppSocketAddress {
    Il2CppObject base;
    int m_Size;
    Il2CppArray* data;
    uint8_t m_changed;
    int m_hash;
} Il2CppSocketAddress;
typedef struct Il2CppSortKey {
    Il2CppObject base;
    Il2CppString* str;
    Il2CppArray* key;
    int32_t options;
    int32_t lcid;
} Il2CppSortKey;
typedef struct Il2CppErrorWrapper {
    Il2CppObject base;
    int32_t errorCode;
} Il2CppErrorWrapper;
typedef struct Il2CppAsyncResult {
    Il2CppObject base;
    Il2CppObject* async_state;
    Il2CppWaitHandle* handle;
    Il2CppDelegate* async_delegate;
    void* data;
    Il2CppAsyncCall* object_data;
    uint8_t sync_completed;
    uint8_t completed;
    uint8_t endinvoke_called;
    Il2CppObject* async_callback;
    Il2CppObject* execution_context;
    Il2CppObject* original_context;
} Il2CppAsyncResult;
typedef struct Il2CppAsyncCall {
    Il2CppObject base;
    Il2CppMethodMessage* msg;
    MethodInfo* cb_method;
    Il2CppDelegate* cb_target;
    Il2CppObject* state;
    Il2CppObject* res;
    Il2CppArray* out_args;
} Il2CppAsyncCall;
typedef struct Il2CppExceptionWrapper Il2CppExceptionWrapper;
typedef struct Il2CppExceptionWrapper {
    Il2CppException* ex;
} Il2CppExceptionWrapper;
typedef struct Il2CppIOAsyncResult {
    Il2CppObject base;
    Il2CppDelegate* callback;
    Il2CppObject* state;
    Il2CppWaitHandle* wait_handle;
    uint8_t completed_synchronously;
    uint8_t completed;
} Il2CppIOAsyncResult;
typedef struct Il2CppSocketAsyncResult {
    Il2CppIOAsyncResult base;
    Il2CppObject* socket;
    int32_t operation;
    Il2CppException* delayedException;
    Il2CppObject* endPoint;
    Il2CppArray* buffer;
    int32_t offset;
    int32_t size;
    int32_t socket_flags;
    Il2CppObject* acceptSocket;
    Il2CppArray* addresses;
    int32_t port;
    Il2CppObject* buffers;
    uint8_t reuseSocket;
    int32_t currentAddress;
    Il2CppObject* acceptedSocket;
    int32_t total;
    int32_t error;
    int32_t endCalled;
} Il2CppSocketAsyncResult;
typedef enum Il2CppResourceLocation {
    IL2CPP_RESOURCE_LOCATION_EMBEDDED = 1,
    IL2CPP_RESOURCE_LOCATION_ANOTHER_ASSEMBLY = 2,
    IL2CPP_RESOURCE_LOCATION_IN_MANIFEST = 4
} Il2CppResourceLocation;
typedef struct Il2CppManifestResourceInfo {
    Il2CppObject object;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* filename;
    uint32_t location;
} Il2CppManifestResourceInfo;
typedef struct Il2CppAppContext {
    Il2CppObject obj;
    int32_t domain_id;
    int32_t context_id;
    void* static_data;
} Il2CppAppContext;
typedef struct Il2CppDecimal {
    uint16_t reserved;
    union {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } u;
        uint16_t signscale;
    } u;
    uint32_t Hi32;
    union {
        struct
        {
            uint32_t Lo32;
            uint32_t Mid32;
        } v;
        uint64_t Lo64;
    } v;
} Il2CppDecimal;
typedef struct Il2CppDouble {
    uint32_t mantLo : 32;
    uint32_t mantHi : 20;
    uint32_t exp : 11;
    uint32_t sign : 1;
} Il2CppDouble;
typedef union Il2CppDouble_double {
    Il2CppDouble s;
    double d;
} Il2CppDouble_double;
typedef enum Il2CppDecimalCompareResult {
    IL2CPP_DECIMAL_CMP_LT = -1,
    IL2CPP_DECIMAL_CMP_EQ,
    IL2CPP_DECIMAL_CMP_GT
} Il2CppDecimalCompareResult;
typedef struct Il2CppSingle {
    uint32_t mant : 23;
    uint32_t exp : 8;
    uint32_t sign : 1;
} Il2CppSingle;
typedef union Il2CppSingle_float {
    Il2CppSingle s;
    float f;
} Il2CppSingle_float;
#pragma endregion

#pragma region Wrappers
#define WRAPPER_IL2CPP_ARRAY(CLASS, TYPE) \
    struct CLASS##__Array__VTable { \
    }; \
    struct CLASS##__Array__StaticFields { \
    }; \
    struct CLASS##__Array__Class { \
        Il2CppClass_0 _0; \
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets; \
        struct CLASS##__Array__StaticFields* static_fields; \
        const Il2CppRGCTXData* rgctx_data; \
        Il2CppClass_1 _1; \
        struct CLASS##__Array__VTable vtable; \
    }; \
    struct CLASS##__Array { \
        struct CLASS##__Array__Class* klass; \
        MonitorData* monitor; \
        Il2CppArrayBounds* bounds; \
        il2cpp_array_size_t max_length; \
        TYPE vector[32]; \
    }

#define WRAPPER_IL2CPP_LIST_2(CLASS, ARRAY_CLASS, TYPE) \
    WRAPPER_IL2CPP_ARRAY(ARRAY_CLASS, TYPE); \
    struct List_1_##CLASS##___VTable { \
        VirtualInvokeData Equals; \
        VirtualInvokeData Finalize; \
        VirtualInvokeData GetHashCode; \
        VirtualInvokeData ToString; \
        VirtualInvokeData get_Item; \
        VirtualInvokeData set_Item; \
        VirtualInvokeData IndexOf; \
        VirtualInvokeData Insert; \
        VirtualInvokeData RemoveAt; \
        VirtualInvokeData get_Count; \
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly; \
        VirtualInvokeData Add; \
        VirtualInvokeData Clear; \
        VirtualInvokeData Contains; \
        VirtualInvokeData CopyTo; \
        VirtualInvokeData Remove; \
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator; \
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator; \
        VirtualInvokeData System_Collections_IList_get_Item; \
        VirtualInvokeData System_Collections_IList_set_Item; \
        VirtualInvokeData System_Collections_IList_Add; \
        VirtualInvokeData System_Collections_IList_Contains; \
        VirtualInvokeData Clear_1; \
        VirtualInvokeData System_Collections_IList_get_IsReadOnly; \
        VirtualInvokeData System_Collections_IList_get_IsFixedSize; \
        VirtualInvokeData System_Collections_IList_IndexOf; \
        VirtualInvokeData System_Collections_IList_Insert; \
        VirtualInvokeData System_Collections_IList_Remove; \
        VirtualInvokeData RemoveAt_1; \
        VirtualInvokeData System_Collections_ICollection_CopyTo; \
        VirtualInvokeData get_Count_1; \
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot; \
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized; \
        VirtualInvokeData get_Item_1; \
        VirtualInvokeData get_Count_2; \
    }; \
    struct List_1_##CLASS##___StaticFields { \
        struct ARRAY_CLASS##__Array* _emptyArray; \
    }; \
    struct List_1_##CLASS##___Class { \
        Il2CppClass_0 _0; \
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets; \
        struct List_1_##CLASS##___StaticFields* static_fields; \
        const Il2CppRGCTXData* rgctx_data; \
        Il2CppClass_1 _1; \
        struct List_1_##CLASS##___VTable vtable; \
    }; \
    struct __declspec(align(4)) List_1_##CLASS##___Fields { \
        struct ARRAY_CLASS##__Array* _items; \
        int32_t _size; \
        int32_t _version; \
        struct Object* _syncRoot; \
    }; \
    struct List_1_##CLASS##_ { \
        struct List_1_##CLASS##___Class* klass; \
        MonitorData* monitor; \
        struct List_1_##CLASS##___Fields fields; \
    }

#define WRAPPER_IL2CPP_LIST(CLASS, TYPE) \
    WRAPPER_IL2CPP_LIST_2(CLASS, CLASS, TYPE)

#define WRAPPER_IL2CPP_DICTIONARY(KEY_CLASS,VALUE_CLASS, KEY_TYPE, VALUE_TYPE) \
    struct __declspec(align(4)) Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___Fields { \
        struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##_* dictionary; \
    }; \
    struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##_ { \
        struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___Class* klass; \
        MonitorData* monitor; \
        struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___Fields fields; \
    }; \
    struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___VTable { \
        VirtualInvokeData Equals; \
        VirtualInvokeData Finalize; \
        VirtualInvokeData GetHashCode; \
        VirtualInvokeData ToString; \
        VirtualInvokeData get_Count; \
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly; \
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add; \
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear; \
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains; \
        VirtualInvokeData CopyTo; \
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove; \
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator; \
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator; \
        VirtualInvokeData System_Collections_ICollection_CopyTo; \
        VirtualInvokeData get_Count_1; \
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot; \
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized; \
        VirtualInvokeData get_Count_2; \
    }; \
    struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___Class { \
        Il2CppClass_0 _0; \
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets; \
        struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___StaticFields* static_fields; \
        const Il2CppRGCTXData* rgctx_data; \
        Il2CppClass_1 _1; \
        struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##___VTable vtable; \
    }; \
    struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##_ { \
        int32_t hashCode; \
        int32_t next; \
        KEY_TYPE key; \
        VALUE_TYPE value; \
    }; \
    struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##___VTable { \
        VirtualInvokeData Equals; \
        VirtualInvokeData Finalize; \
        VirtualInvokeData GetHashCode; \
        VirtualInvokeData ToString; \
    }; \
    struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##___StaticFields { \
    }; \
    struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##___Class { \
        Il2CppClass_0 _0; \
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets; \
        struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##___StaticFields* static_fields; \
        const Il2CppRGCTXData* rgctx_data; \
        Il2CppClass_1 _1; \
        struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##___VTable vtable; \
    }; \
    WRAPPER_IL2CPP_ARRAY(Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##_, struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##_); \
    struct __declspec(align(4)) Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___Fields { \
        void* buckets; \
        struct Dictionary_2_TKey_TValue_Entry_##KEY_CLASS##_##VALUE_CLASS##___Array* entries; \
        int32_t count; \
        int32_t version; \
        int32_t freeList; \
        int32_t freeCount; \
        void* comparer; \
        struct Dictionary_2_TKey_TValue_KeyCollection_##KEY_CLASS##_##VALUE_CLASS##_* keys; \
        struct Dictionary_2_TKey_TValue_ValueCollection_##KEY_CLASS##_##VALUE_CLASS##_* values; \
        void* _syncRoot; \
    }; \
    struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___VTable { \
        VirtualInvokeData Equals; \
        VirtualInvokeData Finalize; \
        VirtualInvokeData GetHashCode; \
        VirtualInvokeData ToString; \
        VirtualInvokeData get_Item; \
        VirtualInvokeData set_Item; \
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys; \
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values; \
        VirtualInvokeData ContainsKey; \
        VirtualInvokeData Add; \
        VirtualInvokeData Remove; \
        VirtualInvokeData TryGetValue; \
        VirtualInvokeData get_Count; \
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly; \
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add; \
        VirtualInvokeData Clear; \
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains; \
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo; \
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove; \
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator; \
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator; \
        VirtualInvokeData System_Collections_IDictionary_get_Item; \
        VirtualInvokeData System_Collections_IDictionary_set_Item; \
        VirtualInvokeData System_Collections_IDictionary_get_Keys; \
        VirtualInvokeData System_Collections_IDictionary_get_Values; \
        VirtualInvokeData System_Collections_IDictionary_Contains; \
        VirtualInvokeData System_Collections_IDictionary_Add; \
        VirtualInvokeData Clear_1; \
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly; \
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize; \
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator; \
        VirtualInvokeData System_Collections_IDictionary_Remove; \
        VirtualInvokeData System_Collections_ICollection_CopyTo; \
        VirtualInvokeData get_Count_1; \
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot; \
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized; \
        VirtualInvokeData ContainsKey_1; \
        VirtualInvokeData TryGetValue_1; \
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys; \
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values; \
        VirtualInvokeData get_Count_2; \
        VirtualInvokeData GetObjectData; \
        VirtualInvokeData OnDeserialization; \
        VirtualInvokeData GetObjectData_1; \
        VirtualInvokeData OnDeserialization_1; \
    }; \
    struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___StaticFields { \
    }; \
    struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___Class { \
        Il2CppClass_0 _0; \
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets; \
        struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___StaticFields* static_fields; \
        const Il2CppRGCTXData* rgctx_data; \
        Il2CppClass_1 _1; \
        struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___VTable vtable; \
    }; \
    struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##_{ \
        struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___Class * klass; \
        MonitorData* monitor; \
        struct Dictionary_2_##KEY_CLASS##_##VALUE_CLASS##___Fields fields; \
    }
#pragma endregion

// ******************************************************************************
// * Game types
// ******************************************************************************
#pragma warning(disable : 4369)
#pragma warning(disable : 4309)
#pragma warning(disable : 4359)
#if !defined(_GHIDRA_) && !defined(_IDA_)
namespace app {
#endif

#pragma region Object
    struct Object {
        struct Object__Class* klass;
        void* monitor;
    };

    struct Object__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Object__StaticFields {
    };

    struct Object__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Object__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Object__VTable vtable;
    };

#pragma endregion

#pragma region Type
    struct RuntimeTypeHandle {
        void* value;
    };

    struct __declspec(align(4)) Type__Fields {
        struct RuntimeTypeHandle _impl;
    };

    struct Type {
        struct Type__Class* klass;
        void* monitor;
        struct Type__Fields fields;
    };

    struct Type__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
        VirtualInvokeData get_MemberType;
        VirtualInvokeData __unknown;
        VirtualInvokeData get_DeclaringType;
        VirtualInvokeData get_ReflectedType;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData GetCustomAttributesData;
        VirtualInvokeData get_MetadataToken;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData get_DeclaringMethod;
        VirtualInvokeData MakePointerType;
        VirtualInvokeData MakeByRefType;
        VirtualInvokeData MakeArrayType;
        VirtualInvokeData MakeArrayType_1;
        VirtualInvokeData GetTypeCodeImpl;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData InvokeMember;
        VirtualInvokeData __unknown_7;
        VirtualInvokeData get_TypeHandle;
        VirtualInvokeData __unknown_8;
        VirtualInvokeData __unknown_9;
        VirtualInvokeData __unknown_10;
        VirtualInvokeData GetArrayRank;
        VirtualInvokeData __unknown_11;
        VirtualInvokeData GetConstructor;
        VirtualInvokeData GetConstructor_1;
        VirtualInvokeData GetConstructor_2;
        VirtualInvokeData __unknown_12;
        VirtualInvokeData GetConstructors;
        VirtualInvokeData __unknown_13;
        VirtualInvokeData GetMethod;
        VirtualInvokeData GetMethod_1;
        VirtualInvokeData GetMethod_2;
        VirtualInvokeData GetMethod_3;
        VirtualInvokeData __unknown_14;
        VirtualInvokeData GetMethods;
        VirtualInvokeData __unknown_15;
        VirtualInvokeData __unknown_16;
        VirtualInvokeData GetField;
        VirtualInvokeData GetFields;
        VirtualInvokeData __unknown_17;
        VirtualInvokeData __unknown_18;
        VirtualInvokeData FindInterfaces;
        VirtualInvokeData GetEvent;
        VirtualInvokeData __unknown_19;
        VirtualInvokeData __unknown_20;
        VirtualInvokeData GetProperty;
        VirtualInvokeData GetProperty_1;
        VirtualInvokeData GetProperty_2;
        VirtualInvokeData GetProperty_3;
        VirtualInvokeData GetProperty_4;
        VirtualInvokeData __unknown_21;
        VirtualInvokeData __unknown_22;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetNestedType;
        VirtualInvokeData __unknown_23;
        VirtualInvokeData GetMember;
        VirtualInvokeData GetMember_1;
        VirtualInvokeData GetMember_2;
        VirtualInvokeData __unknown_24;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_GenericParameterAttributes;
        VirtualInvokeData get_IsNotPublic;
        VirtualInvokeData get_IsPublic;
        VirtualInvokeData get_IsNestedPublic;
        VirtualInvokeData get_IsNestedAssembly;
        VirtualInvokeData get_IsExplicitLayout;
        VirtualInvokeData get_IsClass;
        VirtualInvokeData get_IsInterface;
        VirtualInvokeData get_IsValueType;
        VirtualInvokeData get_IsAbstract;
        VirtualInvokeData get_IsSealed;
        VirtualInvokeData get_IsEnum;
        VirtualInvokeData get_IsSerializable;
        VirtualInvokeData get_IsArray;
        VirtualInvokeData get_IsSzArray;
        VirtualInvokeData get_IsGenericType;
        VirtualInvokeData get_IsGenericTypeDefinition;
        VirtualInvokeData get_IsConstructedGenericType;
        VirtualInvokeData get_IsGenericParameter;
        VirtualInvokeData get_GenericParameterPosition;
        VirtualInvokeData get_ContainsGenericParameters;
        VirtualInvokeData GetGenericParameterConstraints;
        VirtualInvokeData get_IsByRef;
        VirtualInvokeData get_IsPointer;
        VirtualInvokeData get_IsPrimitive;
        VirtualInvokeData get_IsCOMObject;
        VirtualInvokeData get_HasElementType;
        VirtualInvokeData get_IsContextful;
        VirtualInvokeData get_IsMarshalByRef;
        VirtualInvokeData IsValueTypeImpl;
        VirtualInvokeData __unknown_25;
        VirtualInvokeData __unknown_26;
        VirtualInvokeData __unknown_27;
        VirtualInvokeData __unknown_28;
        VirtualInvokeData __unknown_29;
        VirtualInvokeData __unknown_30;
        VirtualInvokeData MakeGenericType;
        VirtualInvokeData IsContextfulImpl;
        VirtualInvokeData IsMarshalByRefImpl;
        VirtualInvokeData __unknown_31;
        VirtualInvokeData GetGenericArguments;
        VirtualInvokeData GetGenericTypeDefinition;
        VirtualInvokeData __unknown_32;
        VirtualInvokeData GetEnumNames;
        VirtualInvokeData GetEnumValues;
        VirtualInvokeData GetEnumUnderlyingType;
        VirtualInvokeData IsEnumDefined;
        VirtualInvokeData GetEnumName;
        VirtualInvokeData __unknown_33;
        VirtualInvokeData IsSubclassOf;
        VirtualInvokeData IsInstanceOfType;
        VirtualInvokeData IsAssignableFrom;
        VirtualInvokeData IsEquivalentTo;
        VirtualInvokeData FormatTypeName;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetType;
        VirtualInvokeData get_IsSZArray;
    };

    struct Type__StaticFields {
        void* FilterAttribute;
        void* FilterName;
        void* FilterNameIgnoreCase;
        struct Object* Missing;
        uint16_t Delimiter;
        void* EmptyTypes;
        void* defaultBinder;
    };

    struct Type__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Type__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Type__VTable vtable;
    };
#pragma endregion

#pragma region String
    struct __declspec(align(4)) String__Fields {
        int32_t m_stringLength;
        uint16_t m_firstChar;
    };

    struct String {
        struct String__Class* klass;
        void* monitor;
        struct String__Fields fields;
    };

    struct String__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData Clone;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_1;
        VirtualInvokeData System_IConvertible_ToType;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData CompareTo_1;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Char__GetEnumerator;
        VirtualInvokeData Equals_1;
    };

    struct String__StaticFields {
        struct String* Empty;
    };

    struct String__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct String__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct String__VTable vtable;
    };
#pragma endregion

#pragma region Object_1
    struct __declspec(align(4)) Object_1__Fields {
        void* m_CachedPtr;
    };

    struct Object_1 {
        struct Object_1__Class* klass;
        void* monitor;
        struct Object_1__Fields fields;
    };

    struct Object_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Object_1__StaticFields {
        int32_t OffsetOfInstanceIDInCPlusPlusObject;
    };

    struct Object_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Object_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Object_1__VTable vtable;
    };
#pragma endregion

#pragma region Component_1
    struct Component_1__Fields {
        struct Object_1__Fields _;
    };

    struct Component_1 {
        struct Component_1__Class* klass;
        void* monitor;
        struct Component_1__Fields fields;
    };

    struct Component_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Component_1__StaticFields {
    };

    struct Component_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Component_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Component_1__VTable vtable;
    };
#pragma endregion

#pragma region Behaviour
    struct Behaviour__Fields {
        struct Component_1__Fields _;
    };

    struct Behaviour {
        struct Behaviour__Class* klass;
        void* monitor;
        struct Behaviour__Fields fields;
    };

    struct Behaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Behaviour__StaticFields {
    };

    struct Behaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Behaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Behaviour__VTable vtable;
    };
#pragma endregion

#pragma region Camera
    struct Camera__Fields {
        struct Behaviour__Fields _;
    };

    struct Camera {
        struct Camera__Class* klass;
        void* monitor;
        struct Camera__Fields fields;
    };

    struct Camera__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Camera__StaticFields {
        void* onPreCull;
        void* onPreRender;
        void* onPostRender;
    };

    struct Camera__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Camera__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Camera__VTable vtable;
    };
#pragma endregion

#pragma region Vector3
    struct Vector3 {
        float x;
        float y;
        float z;
    };
#pragma endregion

#pragma region Camera__Array
    WRAPPER_IL2CPP_ARRAY(Camera, struct Camera*);
#pragma endregion

#pragma region Exception
    struct __declspec(align(4)) Exception__Fields {
        struct String* _className;
        struct String* _message;
        void* _data;
        struct Exception* _innerException;
        struct String* _helpURL;
        struct Object* _stackTrace;
        struct String* _stackTraceString;
        struct String* _remoteStackTraceString;
        int32_t _remoteStackIndex;
        struct Object* _dynamicMethods;
        int32_t _HResult;
        struct String* _source;
        void* _safeSerializationManager;
        void* captured_traces;
        void* native_trace_ips;
    };

    struct Exception {
        struct Exception__Class* klass;
        void* monitor;
        struct Exception__Fields fields;
    };

    struct Exception__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct Exception__StaticFields {
        struct Object* s_EDILock;
    };

    struct Exception__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Exception__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Exception__VTable vtable;
    };
#pragma endregion

#pragma region Renderer
    struct Renderer__Fields {
        struct Component_1__Fields _;
    };

    struct Renderer {
        struct Renderer__Class* klass;
        void* monitor;
        struct Renderer__Fields fields;
    };

    struct Renderer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Renderer__StaticFields {
    };

    struct Renderer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Renderer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Renderer__VTable vtable;
    };
#pragma endregion

#pragma region Matrix4x4
    struct Matrix4x4 {
        float m00;
        float m10;
        float m20;
        float m30;
        float m01;
        float m11;
        float m21;
        float m31;
        float m02;
        float m12;
        float m22;
        float m32;
        float m03;
        float m13;
        float m23;
        float m33;
    };
#pragma endregion

#pragma region Color32
    struct Color32 {
        union {
            int32_t rgba;
            struct {
                uint8_t r;
                uint8_t g;
                uint8_t b;
                uint8_t a;
            };
        };
    };
#pragma endregion

#pragma region Color
    struct Color {
        float r;
        float g;
        float b;
        float a;
    };
#pragma endregion

#pragma region Vector2
    struct Vector2 {
        float x;
        float y;
    };
#pragma endregion

#pragma region Vector4
    struct Vector4 {
        float x;
        float y;
        float z;
        float w;
    };
#pragma endregion

#pragma region Transform
    struct Transform__Fields {
        struct Component_1__Fields _;
    };

    struct Transform {
        struct Transform__Class* klass;
        void* monitor;
        struct Transform__Fields fields;
    };

    struct Transform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
    };

    struct Transform__StaticFields {
    };

    struct Transform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Transform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Transform__VTable vtable;
    };
#pragma endregion

#pragma region GameObject
    struct GameObject__Fields {
        struct Object_1__Fields _;
    };

    struct GameObject {
        struct GameObject__Class* klass;
        void* monitor;
        struct GameObject__Fields fields;
    };

    struct GameObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameObject__StaticFields {
    };

    struct GameObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameObject__VTable vtable;
    };
#pragma endregion

#pragma region Object_1__Array
    WRAPPER_IL2CPP_ARRAY(Object_1, struct Object_1*);
#pragma endregion

#pragma region SpriteRenderer
    struct SpriteRenderer__Fields {
        struct Renderer__Fields _;
    };

    struct SpriteRenderer {
        struct SpriteRenderer__Class* klass;
        void* monitor;
        struct SpriteRenderer__Fields fields;
    };

    struct SpriteRenderer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpriteRenderer__StaticFields {
    };

    struct SpriteRenderer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteRenderer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteRenderer__VTable vtable;
    };
#pragma endregion

#pragma region Color32__Array
    WRAPPER_IL2CPP_ARRAY(Color32, struct Color32);
#pragma endregion

#pragma region Scene
    struct Scene {
        int32_t m_Handle;
    };
#pragma endregion

#pragma region Collider2D
    struct Collider2D__Fields {
        struct Behaviour__Fields _;
    };

    struct Collider2D {
        struct Collider2D__Class* klass;
        void* monitor;
        struct Collider2D__Fields fields;
    };

    struct Collider2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Collider2D__StaticFields {
    };

    struct Collider2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Collider2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Collider2D__VTable vtable;
    };
#pragma endregion

#pragma region MessageReader
    struct __declspec(align(4)) MessageReader__Fields {
        struct Byte__Array* Buffer;
        uint8_t Tag;
        int32_t Length;
        int32_t Offset;
        struct MessageReader* Parent;
        int32_t _position;
        int32_t readHead;
    };

    struct MessageReader {
        struct MessageReader__Class* klass;
        void* monitor;
        struct MessageReader__Fields fields;
    };

    struct MessageReader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Recycle;
    };

    struct MessageReader__StaticFields {
        void* ReaderPool;
    };

    struct MessageReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageReader__VTable vtable;
    };
#pragma endregion

#pragma region Byte__Array
    WRAPPER_IL2CPP_ARRAY(Byte, uint8_t);
#pragma endregion

#pragma region MessageWriter

#if defined(_CPLUSPLUS_)
    enum class SendOption__Enum : uint8_t {
        None = 0x00,
        Reliable = 0x01,
    };

#else
    enum SendOption__Enum {
        SendOption__Enum_None = 0x00,
        SendOption__Enum_Reliable = 0x01,
    };

#endif

    struct __declspec(align(4)) MessageWriter__Fields {
        struct Byte__Array* Buffer;
        int32_t Length;
        int32_t Position;
#if defined(_CPLUSPLUS_)
        SendOption__Enum _SendOption_k__BackingField;
#else
        uint8_t _SendOption_k__BackingField;
#endif
        void* messageStarts;
    };

    struct MessageWriter {
        struct MessageWriter__Class* klass;
        void* monitor;
        struct MessageWriter__Fields fields;
    };

    struct MessageWriter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Recycle;
    };

    struct MessageWriter__StaticFields {
        int32_t BufferSize;
        void* WriterPool;
    };

    struct MessageWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageWriter__VTable vtable;
    };
#pragma endregion

#pragma region MonoBehaviour
    struct MonoBehaviour__Fields {
        struct Behaviour__Fields _;
    };

    struct MonoBehaviour {
        struct MonoBehaviour__Class* klass;
        MonitorData* monitor;
        struct MonoBehaviour__Fields fields;
    };

    struct MonoBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MonoBehaviour__StaticFields {
    };

    struct MonoBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonoBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonoBehaviour__VTable vtable;
    };
#pragma endregion

#pragma region Extents
    struct Extents {
        struct Vector2 min;
        struct Vector2 max;
    };
#pragma endregion

#pragma region TextMeshPro garbage

    struct UIBehaviour__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct TextBoxTMP__Fields {
        struct MonoBehaviour__Fields _;
        bool allowAllCharacters;
        struct String* text;
        struct String* compoText;
        int32_t characterLimit;
        struct TextMeshPro* outputText;
        struct SpriteRenderer* Background;
        struct MeshRenderer* Pipe;
        struct TextMeshPro* placeholderText;
        float pipeBlinkTimer;
        bool ClearOnFocus;
        bool ForceUppercase;
        struct Button_ButtonClickedEvent* OnEnter;
        struct Button_ButtonClickedEvent* OnChange;
        struct Button_ButtonClickedEvent* OnFocusLost;
        struct TouchScreenKeyboard* keyboard;
        bool AllowSymbols;
        bool AllowEmail;
        bool IpMode;
        bool AllowPaste;
        bool Hidden;
        struct Collider2D__Array* colliders;
        bool hasFocus;
        int32_t caretPos;
        float caretRepeatTimer;
        float caretYOffset;
        struct Color colorBackground;
        struct StringBuilder* tempTxt;
        struct SpriteRenderer* sendButtonGlyph;
        bool SendOnFullChars;
    };

    struct TextBoxTMP {
        struct TextBoxTMP__Class* klass;
        MonitorData* monitor;
        struct TextBoxTMP__Fields fields;
    };

    struct Graphic__Fields {
        struct UIBehaviour__Fields _;
        void* m_Material;
        struct Color m_Color;
        bool m_SkipLayoutUpdate;
        bool m_SkipMaterialUpdate;
        bool m_RaycastTarget;
        bool m_RaycastTargetCache;
        struct Vector4 m_RaycastPadding;
        void* m_RectTransform;
        void* m_CanvasRenderer;
        void* m_Canvas;
        bool m_VertsDirty;
        bool m_MaterialDirty;
        void* m_OnDirtyLayoutCallback;
        void* m_OnDirtyVertsCallback;
        void* m_OnDirtyMaterialCallback;
        void* m_CachedMesh;
        void* m_CachedUvs;
        void* m_ColorTweenRunner;
        bool _useLegacyMeshGeneration_k__BackingField;
    };

    struct MaskableGraphic__Fields {
        struct Graphic__Fields _;
        bool m_ShouldRecalculateStencil;
        void* m_MaskMaterial;
        void* m_ParentMask;
        bool m_Maskable;
        bool m_IsMaskingGraphic;
        bool m_IncludeForMasking;
        void* m_OnCullStateChanged;
        bool m_ShouldRecalculate;
        int32_t m_StencilValue;
        void* m_Corners;
    };

    struct MaterialReference {
        int32_t index;
        void* fontAsset;
        void* spriteAsset;
        void* material;
        bool isDefaultMaterial;
        bool isFallbackMaterial;
        void* fallbackMaterial;
        float padding;
        int32_t referenceCount;
    };

    struct TMP_TextProcessingStack_1_MaterialReference_ {
        void* itemStack;
        int32_t index;
        struct MaterialReference m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct VertexGradient {
        struct Color topLeft;
        struct Color topRight;
        struct Color bottomLeft;
        struct Color bottomRight;
    };

    struct TMP_TextProcessingStack_1_System_Single_ {
        void* itemStack;
        int32_t index;
        float m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_TextProcessingStack_1_FontWeight_ {
        void* itemStack;
        int32_t index;
        int32_t m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_FontStyleStack {
        uint8_t bold;
        uint8_t italic;
        uint8_t underline;
        uint8_t strikethrough;
        uint8_t highlight;
        uint8_t superscript;
        uint8_t subscript;
        uint8_t uppercase;
        uint8_t lowercase;
        uint8_t smallcaps;
    };

    struct TMP_TextProcessingStack_1_HorizontalAlignmentOptions_ {
        void* itemStack;
        int32_t index;
        int32_t m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_LineInfo {
        int32_t controlCharacterCount;
        int32_t characterCount;
        int32_t visibleCharacterCount;
        int32_t spaceCount;
        int32_t wordCount;
        int32_t firstCharacterIndex;
        int32_t firstVisibleCharacterIndex;
        int32_t lastCharacterIndex;
        int32_t lastVisibleCharacterIndex;
        float length;
        float lineHeight;
        float ascender;
        float baseline;
        float descender;
        float maxAdvance;
        float width;
        float marginLeft;
        float marginRight;
        int32_t alignment;
        struct Extents lineExtents;
    };

    struct TMP_TextProcessingStack_1_System_Int32_ {
        void* itemStack;
        int32_t index;
        int32_t m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_TextProcessingStack_1_UnityEngine_Color32_ {
        void* itemStack;
        int32_t index;
        struct Color32 m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_Offset {
        float m_Left;
        float m_Right;
        float m_Top;
        float m_Bottom;
    };

    struct HighlightState {
        struct Color32 color;
        struct TMP_Offset padding;
    };

    struct TMP_TextProcessingStack_1_HighlightState_ {
        void* itemStack;
        int32_t index;
        struct HighlightState m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_TextProcessingStack_1_TMP_ColorGradient_ {
        void* itemStack;
        int32_t index;
        void* m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct WordWrapState {
        int32_t previous_WordBreak;
        int32_t total_CharacterCount;
        int32_t visible_CharacterCount;
        int32_t visible_SpriteCount;
        int32_t visible_LinkCount;
        int32_t firstCharacterIndex;
        int32_t firstVisibleCharacterIndex;
        int32_t lastCharacterIndex;
        int32_t lastVisibleCharIndex;
        int32_t lineNumber;
        float maxCapHeight;
        float maxAscender;
        float maxDescender;
        float startOfLineAscender;
        float maxLineAscender;
        float maxLineDescender;
        float pageAscender;
        int32_t horizontalAlignment;
        float marginLeft;
        float marginRight;
        float xAdvance;
        float preferredWidth;
        float preferredHeight;
        float previousLineScale;
        int32_t wordCount;
        int32_t fontStyle;
        int32_t italicAngle;
        float fontScaleMultiplier;
        float currentFontSize;
        float baselineOffset;
        float lineOffset;
        bool isDrivenLineSpacing;
        float glyphHorizontalAdvanceAdjustment;
        float cSpace;
        float mSpace;
        struct TMP_TextInfo* textInfo;
        struct TMP_LineInfo lineInfo;
        struct Color32 vertexColor;
        struct Color32 underlineColor;
        struct Color32 strikethroughColor;
        struct Color32 highlightColor;
        struct TMP_FontStyleStack basicStyleStack;
        struct TMP_TextProcessingStack_1_System_Int32_ italicAngleStack;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ colorStack;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ underlineColorStack;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ strikethroughColorStack;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ highlightColorStack;
        struct TMP_TextProcessingStack_1_HighlightState_ highlightStateStack;
        struct TMP_TextProcessingStack_1_TMP_ColorGradient_ colorGradientStack;
        struct TMP_TextProcessingStack_1_System_Single_ sizeStack;
        struct TMP_TextProcessingStack_1_System_Single_ indentStack;
        struct TMP_TextProcessingStack_1_FontWeight_ fontWeightStack;
        struct TMP_TextProcessingStack_1_System_Int32_ styleStack;
        struct TMP_TextProcessingStack_1_System_Single_ baselineStack;
        struct TMP_TextProcessingStack_1_System_Int32_ actionStack;
        struct TMP_TextProcessingStack_1_MaterialReference_ materialReferenceStack;
        struct TMP_TextProcessingStack_1_HorizontalAlignmentOptions_ lineJustificationStack;
        int32_t spriteAnimationID;
        struct TMP_FontAsset* currentFontAsset;
        struct TMP_SpriteAsset* currentSpriteAsset;
        struct Material* currentMaterial;
        int32_t currentMaterialIndex;
        struct Extents meshExtents;
        bool tagNoParsing;
        bool isNonBreakingSpace;
    };

    struct TMP_TextProcessingStack_1_WordWrapState_ {
        void* itemStack;
        int32_t index;
        struct WordWrapState m_DefaultItem;
        int32_t m_Capacity;
        int32_t m_RolloverSize;
        int32_t m_Count;
    };

    struct TMP_Text_SpecialCharacter {
        void* character;
        void* fontAsset;
        void* material;
        int32_t materialIndex;
    };

    struct TMP_Text_TextBackingContainer {
        void* m_Array;
        int32_t m_Count;
    };

#if defined(_CPLUSPLUS_)
    enum class TextAlignmentOptions__Enum : int32_t {
        TopLeft = 0x00000101,
        Top = 0x00000102,
        TopRight = 0x00000104,
        TopJustified = 0x00000108,
        TopFlush = 0x00000110,
        TopGeoAligned = 0x00000120,
        Left = 0x00000201,
        Center = 0x00000202,
        Right = 0x00000204,
        Justified = 0x00000208,
        Flush = 0x00000210,
        CenterGeoAligned = 0x00000220,
        BottomLeft = 0x00000401,
        Bottom = 0x00000402,
        BottomRight = 0x00000404,
        BottomJustified = 0x00000408,
        BottomFlush = 0x00000410,
        BottomGeoAligned = 0x00000420,
        BaselineLeft = 0x00000801,
        Baseline = 0x00000802,
        BaselineRight = 0x00000804,
        BaselineJustified = 0x00000808,
        BaselineFlush = 0x00000810,
        BaselineGeoAligned = 0x00000820,
        MidlineLeft = 0x00001001,
        Midline = 0x00001002,
        MidlineRight = 0x00001004,
        MidlineJustified = 0x00001008,
        MidlineFlush = 0x00001010,
        MidlineGeoAligned = 0x00001020,
        CaplineLeft = 0x00002001,
        Capline = 0x00002002,
        CaplineRight = 0x00002004,
        CaplineJustified = 0x00002008,
        CaplineFlush = 0x00002010,
        CaplineGeoAligned = 0x00002020,
        Converted = 0x0000ffff,
    };

#else
    enum TextAlignmentOptions__Enum {
        TextAlignmentOptions__Enum_TopLeft = 0x00000101,
        TextAlignmentOptions__Enum_Top = 0x00000102,
        TextAlignmentOptions__Enum_TopRight = 0x00000104,
        TextAlignmentOptions__Enum_TopJustified = 0x00000108,
        TextAlignmentOptions__Enum_TopFlush = 0x00000110,
        TextAlignmentOptions__Enum_TopGeoAligned = 0x00000120,
        TextAlignmentOptions__Enum_Left = 0x00000201,
        TextAlignmentOptions__Enum_Center = 0x00000202,
        TextAlignmentOptions__Enum_Right = 0x00000204,
        TextAlignmentOptions__Enum_Justified = 0x00000208,
        TextAlignmentOptions__Enum_Flush = 0x00000210,
        TextAlignmentOptions__Enum_CenterGeoAligned = 0x00000220,
        TextAlignmentOptions__Enum_BottomLeft = 0x00000401,
        TextAlignmentOptions__Enum_Bottom = 0x00000402,
        TextAlignmentOptions__Enum_BottomRight = 0x00000404,
        TextAlignmentOptions__Enum_BottomJustified = 0x00000408,
        TextAlignmentOptions__Enum_BottomFlush = 0x00000410,
        TextAlignmentOptions__Enum_BottomGeoAligned = 0x00000420,
        TextAlignmentOptions__Enum_BaselineLeft = 0x00000801,
        TextAlignmentOptions__Enum_Baseline = 0x00000802,
        TextAlignmentOptions__Enum_BaselineRight = 0x00000804,
        TextAlignmentOptions__Enum_BaselineJustified = 0x00000808,
        TextAlignmentOptions__Enum_BaselineFlush = 0x00000810,
        TextAlignmentOptions__Enum_BaselineGeoAligned = 0x00000820,
        TextAlignmentOptions__Enum_MidlineLeft = 0x00001001,
        TextAlignmentOptions__Enum_Midline = 0x00001002,
        TextAlignmentOptions__Enum_MidlineRight = 0x00001004,
        TextAlignmentOptions__Enum_MidlineJustified = 0x00001008,
        TextAlignmentOptions__Enum_MidlineFlush = 0x00001010,
        TextAlignmentOptions__Enum_MidlineGeoAligned = 0x00001020,
        TextAlignmentOptions__Enum_CaplineLeft = 0x00002001,
        TextAlignmentOptions__Enum_Capline = 0x00002002,
        TextAlignmentOptions__Enum_CaplineRight = 0x00002004,
        TextAlignmentOptions__Enum_CaplineJustified = 0x00002008,
        TextAlignmentOptions__Enum_CaplineFlush = 0x00002010,
        TextAlignmentOptions__Enum_CaplineGeoAligned = 0x00002020,
        TextAlignmentOptions__Enum_Converted = 0x0000ffff,
    };

#endif
#pragma region TMP_Text
    struct TMP_Text__Fields {
        struct MaskableGraphic__Fields _;
        struct String* m_text;
        bool m_IsTextBackingStringDirty;
        struct ITextPreprocessor* m_TextPreprocessor;
        bool m_isRightToLeft;
        struct TMP_FontAsset* m_fontAsset;
        struct TMP_FontAsset* m_currentFontAsset;
        bool m_isSDFShader;
        struct Material* m_sharedMaterial;
        struct Material* m_currentMaterial;
        int32_t m_currentMaterialIndex;
        struct Material__Array* m_fontSharedMaterials;
        struct Material* m_fontMaterial;
        struct Material__Array* m_fontMaterials;
        bool m_isMaterialDirty;
        struct Color32 m_fontColor32;
        struct Color m_fontColor;
        struct Color32 m_underlineColor;
        struct Color32 m_strikethroughColor;
        bool m_enableVertexGradient;
        int32_t m_colorMode;
        struct VertexGradient m_fontColorGradient;
        struct TMP_ColorGradient* m_fontColorGradientPreset;
        struct TMP_SpriteAsset* m_spriteAsset;
        bool m_tintAllSprites;
        bool m_tintSprite;
        struct Color32 m_spriteColor;
        struct TMP_StyleSheet* m_StyleSheet;
        struct TMP_Style* m_TextStyle;
        int32_t m_TextStyleHashCode;
        bool m_overrideHtmlColors;
        struct Color32 m_faceColor;
        struct Color32 m_outlineColor;
        float m_outlineWidth;
        float m_fontSize;
        float m_currentFontSize;
        float m_fontSizeBase;
        struct TMP_TextProcessingStack_1_System_Single_ m_sizeStack;
        int32_t m_fontWeight;
        int32_t m_FontWeightInternal;
        struct TMP_TextProcessingStack_1_FontWeight_ m_FontWeightStack;
        bool m_enableAutoSizing;
        float m_maxFontSize;
        float m_minFontSize;
        int32_t m_AutoSizeIterationCount;
        int32_t m_AutoSizeMaxIterationCount;
        bool m_IsAutoSizePointSizeSet;
        float m_fontSizeMin;
        float m_fontSizeMax;
        int32_t m_fontStyle;
        int32_t m_FontStyleInternal;
        struct TMP_FontStyleStack m_fontStyleStack;
        bool m_isUsingBold;
        int32_t m_HorizontalAlignment;
        int32_t m_VerticalAlignment;
#if defined(_CPLUSPLUS_)
        TextAlignmentOptions__Enum m_textAlignment;
#else
        int32_t m_textAlignment;
#endif
        int32_t m_lineJustification;
        struct TMP_TextProcessingStack_1_HorizontalAlignmentOptions_ m_lineJustificationStack;
        void* m_textContainerLocalCorners;
        float m_characterSpacing;
        float m_cSpacing;
        float m_monoSpacing;
        float m_wordSpacing;
        float m_lineSpacing;
        float m_lineSpacingDelta;
        float m_lineHeight;
        bool m_IsDrivenLineSpacing;
        float m_lineSpacingMax;
        float m_paragraphSpacing;
        float m_charWidthMaxAdj;
        float m_charWidthAdjDelta;
        bool m_enableWordWrapping;
        bool m_isCharacterWrappingEnabled;
        bool m_isNonBreakingSpace;
        bool m_isIgnoringAlignment;
        float m_wordWrappingRatios;
        int32_t m_overflowMode;
        int32_t m_firstOverflowCharacterIndex;
        struct TMP_Text* m_linkedTextComponent;
        struct TMP_Text* parentLinkedComponent;
        bool m_isTextTruncated;
        bool m_enableKerning;
        float m_GlyphHorizontalAdvanceAdjustment;
        bool m_enableExtraPadding;
        bool checkPaddingRequired;
        bool m_isRichText;
        bool m_parseCtrlCharacters;
        bool m_isOverlay;
        bool m_isOrthographic;
        bool m_isCullingEnabled;
        bool m_isMaskingEnabled;
        bool isMaskUpdateRequired;
        bool m_ignoreCulling;
        int32_t m_horizontalMapping;
        int32_t m_verticalMapping;
        float m_uvLineOffset;
        int32_t m_renderMode;
        int32_t m_geometrySortingOrder;
        bool m_IsTextObjectScaleStatic;
        bool m_VertexBufferAutoSizeReduction;
        int32_t m_firstVisibleCharacter;
        int32_t m_maxVisibleCharacters;
        int32_t m_maxVisibleWords;
        int32_t m_maxVisibleLines;
        bool m_useMaxVisibleDescender;
        int32_t m_pageToDisplay;
        bool m_isNewPage;
        struct Vector4 m_margin;
        float m_marginLeft;
        float m_marginRight;
        float m_marginWidth;
        float m_marginHeight;
        float m_width;
        struct TMP_TextInfo* m_textInfo;
        bool m_havePropertiesChanged;
        bool m_isUsingLegacyAnimationComponent;
        struct Transform* m_transform;
        struct RectTransform* m_rectTransform;
        struct Vector2 m_PreviousRectTransformSize;
        struct Vector2 m_PreviousPivotPosition;
        bool _autoSizeTextContainer_k__BackingField;
        bool m_autoSizeTextContainer;
        struct Mesh* m_mesh;
        bool m_isVolumetricText;
        struct Action_1_TMPro_TMP_TextInfo_* OnPreRenderText;
        struct TMP_SpriteAnimator* m_spriteAnimator;
        float m_flexibleHeight;
        float m_flexibleWidth;
        float m_minWidth;
        float m_minHeight;
        float m_maxWidth;
        float m_maxHeight;
        struct LayoutElement* m_LayoutElement;
        float m_preferredWidth;
        float m_renderedWidth;
        bool m_isPreferredWidthDirty;
        float m_preferredHeight;
        float m_renderedHeight;
        bool m_isPreferredHeightDirty;
        bool m_isCalculatingPreferredValues;
        int32_t m_layoutPriority;
        bool m_isLayoutDirty;
        bool m_isAwake;
        bool m_isWaitingOnResourceLoad;
        int32_t m_inputSource;
        float m_fontScaleMultiplier;
        float tag_LineIndent;
        float tag_Indent;
        struct TMP_TextProcessingStack_1_System_Single_ m_indentStack;
        bool tag_NoParsing;
        bool m_isParsingText;
        struct Matrix4x4 m_FXMatrix;
        bool m_isFXMatrixSet;
        struct TMP_Text_UnicodeChar__Array* m_TextProcessingArray;
        int32_t m_InternalTextProcessingArraySize;
        struct TMP_CharacterInfo__Array* m_internalCharacterInfo;
        int32_t m_totalCharacterCount;
        int32_t m_characterCount;
        int32_t m_firstCharacterOfLine;
        int32_t m_firstVisibleCharacterOfLine;
        int32_t m_lastCharacterOfLine;
        int32_t m_lastVisibleCharacterOfLine;
        int32_t m_lineNumber;
        int32_t m_lineVisibleCharacterCount;
        int32_t m_pageNumber;
        float m_PageAscender;
        float m_maxTextAscender;
        float m_maxCapHeight;
        float m_ElementAscender;
        float m_ElementDescender;
        float m_maxLineAscender;
        float m_maxLineDescender;
        float m_startOfLineAscender;
        float m_startOfLineDescender;
        float m_lineOffset;
        struct Extents m_meshExtents;
        struct Color32 m_htmlColor;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ m_colorStack;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ m_underlineColorStack;
        struct TMP_TextProcessingStack_1_UnityEngine_Color32_ m_strikethroughColorStack;
        struct TMP_TextProcessingStack_1_HighlightState_ m_HighlightStateStack;
        struct TMP_ColorGradient* m_colorGradientPreset;
        struct TMP_TextProcessingStack_1_TMP_ColorGradient_ m_colorGradientStack;
        bool m_colorGradientPresetIsTinted;
        float m_tabSpacing;
        float m_spacing;
        struct TMP_TextProcessingStack_1_System_Int32___Array* m_TextStyleStacks;
        int32_t m_TextStyleStackDepth;
        struct TMP_TextProcessingStack_1_System_Int32_ m_ItalicAngleStack;
        int32_t m_ItalicAngle;
        struct TMP_TextProcessingStack_1_System_Int32_ m_actionStack;
        float m_padding;
        float m_baselineOffset;
        struct TMP_TextProcessingStack_1_System_Single_ m_baselineOffsetStack;
        float m_xAdvance;
        int32_t m_textElementType;
        struct TMP_TextElement* m_cached_TextElement;
        struct TMP_Text_SpecialCharacter m_Ellipsis;
        struct TMP_Text_SpecialCharacter m_Underline;
        struct TMP_SpriteAsset* m_defaultSpriteAsset;
        struct TMP_SpriteAsset* m_currentSpriteAsset;
        int32_t m_spriteCount;
        int32_t m_spriteIndex;
        int32_t m_spriteAnimationID;
        bool m_ignoreActiveState;
        struct TMP_Text_TextBackingContainer m_TextBackingArray;
        struct Decimal__Array* k_Power;
    };

    struct TMP_Text {
        struct TMP_Text__Class* klass;
        MonitorData* monitor;
        struct TMP_Text__Fields fields;
    };

    struct TMP_Text__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData IsActive;
        VirtualInvokeData OnRectTransformDimensionsChange;
        VirtualInvokeData OnBeforeTransformParentChanged;
        VirtualInvokeData OnTransformParentChanged;
        VirtualInvokeData OnDidApplyAnimationProperties;
        VirtualInvokeData OnCanvasGroupChanged;
        VirtualInvokeData OnCanvasHierarchyChanged;
        VirtualInvokeData IsDestroyed;
        VirtualInvokeData Rebuild;
        VirtualInvokeData UnityEngine_UI_ICanvasElement_get_transform;
        VirtualInvokeData LayoutComplete;
        VirtualInvokeData GraphicUpdateComplete;
        VirtualInvokeData IsDestroyed_1;
        VirtualInvokeData get_color;
        VirtualInvokeData set_color;
        VirtualInvokeData get_raycastTarget;
        VirtualInvokeData set_raycastTarget;
        VirtualInvokeData SetAllDirty;
        VirtualInvokeData SetLayoutDirty;
        VirtualInvokeData SetVerticesDirty;
        VirtualInvokeData SetMaterialDirty;
        VirtualInvokeData get_rectTransform;
        VirtualInvokeData get_defaultMaterial;
        VirtualInvokeData get_material;
        VirtualInvokeData set_material;
        VirtualInvokeData get_materialForRendering;
        VirtualInvokeData get_mainTexture;
        VirtualInvokeData OnCullingChanged;
        VirtualInvokeData Rebuild_1;
        VirtualInvokeData LayoutComplete_1;
        VirtualInvokeData GraphicUpdateComplete_1;
        VirtualInvokeData UpdateMaterial;
        VirtualInvokeData UpdateGeometry;
        VirtualInvokeData OnFillVBO;
        VirtualInvokeData OnPopulateMesh;
        VirtualInvokeData OnPopulateMesh_1;
        VirtualInvokeData SetNativeSize;
        VirtualInvokeData Raycast;
        VirtualInvokeData CrossFadeColor;
        VirtualInvokeData CrossFadeColor_1;
        VirtualInvokeData CrossFadeAlpha;
        VirtualInvokeData UnityEngine_UI_IClippable_get_gameObject;
        VirtualInvokeData RecalculateClipping;
        VirtualInvokeData get_rectTransform_1;
        VirtualInvokeData Cull;
        VirtualInvokeData SetClipRect;
        VirtualInvokeData SetClipSoftness;
        VirtualInvokeData RecalculateMasking;
        VirtualInvokeData GetModifiedMaterial;
        VirtualInvokeData GetModifiedMaterial_1;
        VirtualInvokeData Cull_1;
        VirtualInvokeData SetClipRect_1;
        VirtualInvokeData SetClipSoftness_1;
        VirtualInvokeData ParentMaskStateChanged;
        VirtualInvokeData RecalculateClipping_1;
        VirtualInvokeData RecalculateMasking_1;
        VirtualInvokeData get_text;
        VirtualInvokeData set_text;
        VirtualInvokeData get_fontSharedMaterial;
        VirtualInvokeData set_fontSharedMaterial;
        VirtualInvokeData get_fontSharedMaterials;
        VirtualInvokeData set_fontSharedMaterials;
        VirtualInvokeData get_fontMaterials;
        VirtualInvokeData set_fontMaterials;
        VirtualInvokeData get_margin;
        VirtualInvokeData set_margin;
        VirtualInvokeData get_autoSizeTextContainer;
        VirtualInvokeData set_autoSizeTextContainer;
        VirtualInvokeData get_mesh;
        VirtualInvokeData add_OnPreRenderText;
        VirtualInvokeData remove_OnPreRenderText;
        VirtualInvokeData get_flexibleHeight;
        VirtualInvokeData get_flexibleWidth;
        VirtualInvokeData get_minWidth;
        VirtualInvokeData get_minHeight;
        VirtualInvokeData get_preferredWidth;
        VirtualInvokeData get_preferredHeight;
        VirtualInvokeData get_renderedWidth;
        VirtualInvokeData get_renderedHeight;
        VirtualInvokeData get_layoutPriority;
        VirtualInvokeData LoadFontAsset;
        VirtualInvokeData SetSharedMaterial;
        VirtualInvokeData GetMaterial;
        VirtualInvokeData SetFontBaseMaterial;
        VirtualInvokeData GetSharedMaterials;
        VirtualInvokeData SetSharedMaterials;
        VirtualInvokeData GetMaterials;
        VirtualInvokeData CreateMaterialInstance;
        VirtualInvokeData SetFaceColor;
        VirtualInvokeData SetOutlineColor;
        VirtualInvokeData SetOutlineThickness;
        VirtualInvokeData SetShaderDepth;
        VirtualInvokeData SetCulling;
        VirtualInvokeData UpdateCulling;
        VirtualInvokeData GetPaddingForMaterial;
        VirtualInvokeData GetPaddingForMaterial_1;
        VirtualInvokeData GetTextContainerLocalCorners;
        VirtualInvokeData ForceMeshUpdate;
        VirtualInvokeData UpdateGeometry_1;
        VirtualInvokeData UpdateVertexData;
        VirtualInvokeData UpdateVertexData_1;
        VirtualInvokeData SetVertices;
        VirtualInvokeData UpdateMeshPadding;
        VirtualInvokeData InternalCrossFadeColor;
        VirtualInvokeData InternalCrossFadeAlpha;
        VirtualInvokeData SetArraySizes;
        VirtualInvokeData CalculatePreferredValues;
        VirtualInvokeData GetCompoundBounds;
        VirtualInvokeData GetCanvasSpaceClippingRect;
        VirtualInvokeData GetTextInfo;
        VirtualInvokeData ComputeMarginSize;
        VirtualInvokeData SaveGlyphVertexInfo;
        VirtualInvokeData SaveSpriteVertexInfo;
        VirtualInvokeData FillCharacterVertexBuffers;
        VirtualInvokeData FillCharacterVertexBuffers_1;
        VirtualInvokeData FillSpriteVertexBuffers;
        VirtualInvokeData DrawUnderlineMesh;
        VirtualInvokeData DrawTextHighlight;
        VirtualInvokeData SetActiveSubMeshes;
        VirtualInvokeData DestroySubMeshObjects;
        VirtualInvokeData ClearMesh;
        VirtualInvokeData ClearMesh_1;
        VirtualInvokeData GetParsedText;
        VirtualInvokeData InternalUpdate;
    };

    struct TMP_Text__StaticFields {
        struct MaterialReference__Array* m_materialReferences;
        struct Dictionary_2_System_Int32_System_Int32_* m_materialReferenceIndexLookup;
        struct TMP_TextProcessingStack_1_MaterialReference_ m_materialReferenceStack;
        struct Color32 s_colorWhite;
        struct Func_3_Int32_String_TMPro_TMP_FontAsset_* OnFontAssetRequest;
        struct Func_3_Int32_String_TMPro_TMP_SpriteAsset_* OnSpriteAssetRequest;
        struct Char__Array* m_htmlTag;
        struct RichTextTagAttribute__Array* m_xmlAttribute;
        struct Single__Array* m_attributeParameterValues;
        struct WordWrapState m_SavedWordWrapState;
        struct WordWrapState m_SavedLineState;
        struct WordWrapState m_SavedEllipsisState;
        struct WordWrapState m_SavedLastValidState;
        struct WordWrapState m_SavedSoftLineBreakState;
        struct TMP_TextProcessingStack_1_WordWrapState_ m_EllipsisInsertionCandidateStack;
        void* k_ParseTextMarker;
        void* k_InsertNewLineMarker;
        struct Vector2 k_LargePositiveVector2;
        struct Vector2 k_LargeNegativeVector2;
        float k_LargePositiveFloat;
        float k_LargeNegativeFloat;
        int32_t k_LargePositiveInt;
        int32_t k_LargeNegativeInt;
    };

    struct TMP_Text__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TMP_Text__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TMP_Text__VTable vtable;
    };
#pragma endregion

#pragma region TextMeshPro
    struct TextMeshPro__Fields {
        struct TMP_Text__Fields _;
        bool m_hasFontAssetChanged;
        float m_previousLossyScaleY;
        struct Renderer* m_renderer;
        struct MeshFilter* m_meshFilter;
        bool m_isFirstAllocation;
        int32_t m_max_characters;
        int32_t m_max_numberOfLines;
        struct TMP_SubMesh__Array* m_subTextObjects;
        int32_t m_maskType;
        struct Matrix4x4 m_EnvMapMatrix;
        struct Vector3__Array* m_RectTransformCorners;
        bool m_isRegisteredForEvents;
        int32_t _SortingLayer;
        int32_t _SortingLayerID;
        int32_t _SortingOrder;
        struct Action_1_TMPro_TMP_TextInfo_* OnPreRenderText;
        bool m_currentAutoSizeMode;
    };

    struct TextMeshPro {
        struct TextMeshPro__Class* klass;
        void* monitor;
        struct TextMeshPro__Fields fields;
    };

    struct TextMeshPro__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData Start;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData IsActive;
        VirtualInvokeData OnRectTransformDimensionsChange;
        VirtualInvokeData OnBeforeTransformParentChanged;
        VirtualInvokeData OnTransformParentChanged;
        VirtualInvokeData OnDidApplyAnimationProperties;
        VirtualInvokeData OnCanvasGroupChanged;
        VirtualInvokeData OnCanvasHierarchyChanged;
        VirtualInvokeData IsDestroyed;
        VirtualInvokeData Rebuild;
        VirtualInvokeData UnityEngine_UI_ICanvasElement_get_transform;
        VirtualInvokeData LayoutComplete;
        VirtualInvokeData GraphicUpdateComplete;
        VirtualInvokeData IsDestroyed_1;
        VirtualInvokeData get_color;
        VirtualInvokeData set_color;
        VirtualInvokeData get_raycastTarget;
        VirtualInvokeData set_raycastTarget;
        VirtualInvokeData SetAllDirty;
        VirtualInvokeData SetLayoutDirty;
        VirtualInvokeData SetVerticesDirty;
        VirtualInvokeData SetMaterialDirty;
        VirtualInvokeData get_rectTransform;
        VirtualInvokeData get_defaultMaterial;
        VirtualInvokeData get_material;
        VirtualInvokeData set_material;
        VirtualInvokeData get_materialForRendering;
        VirtualInvokeData get_mainTexture;
        VirtualInvokeData OnCullingChanged;
        VirtualInvokeData Rebuild_1;
        VirtualInvokeData LayoutComplete_1;
        VirtualInvokeData GraphicUpdateComplete_1;
        VirtualInvokeData UpdateMaterial;
        VirtualInvokeData UpdateGeometry;
        VirtualInvokeData OnFillVBO;
        VirtualInvokeData OnPopulateMesh;
        VirtualInvokeData OnPopulateMesh_1;
        VirtualInvokeData SetNativeSize;
        VirtualInvokeData Raycast;
        VirtualInvokeData CrossFadeColor;
        VirtualInvokeData CrossFadeColor_1;
        VirtualInvokeData CrossFadeAlpha;
        VirtualInvokeData UnityEngine_UI_IClippable_get_gameObject;
        VirtualInvokeData RecalculateClipping;
        VirtualInvokeData get_rectTransform_1;
        VirtualInvokeData Cull;
        VirtualInvokeData SetClipRect;
        VirtualInvokeData SetClipSoftness;
        VirtualInvokeData RecalculateMasking;
        VirtualInvokeData GetModifiedMaterial;
        VirtualInvokeData GetModifiedMaterial_1;
        VirtualInvokeData Cull_1;
        VirtualInvokeData SetClipRect_1;
        VirtualInvokeData SetClipSoftness_1;
        VirtualInvokeData ParentMaskStateChanged;
        VirtualInvokeData RecalculateClipping_1;
        VirtualInvokeData RecalculateMasking_1;
        VirtualInvokeData get_text;
        VirtualInvokeData set_text;
        VirtualInvokeData get_fontSharedMaterial;
        VirtualInvokeData set_fontSharedMaterial;
        VirtualInvokeData get_fontSharedMaterials;
        VirtualInvokeData set_fontSharedMaterials;
        VirtualInvokeData get_fontMaterials;
        VirtualInvokeData set_fontMaterials;
        VirtualInvokeData get_margin;
        VirtualInvokeData set_margin;
        VirtualInvokeData get_autoSizeTextContainer;
        VirtualInvokeData set_autoSizeTextContainer;
        VirtualInvokeData get_mesh;
        VirtualInvokeData add_OnPreRenderText;
        VirtualInvokeData remove_OnPreRenderText;
        VirtualInvokeData get_flexibleHeight;
        VirtualInvokeData get_flexibleWidth;
        VirtualInvokeData get_minWidth;
        VirtualInvokeData get_minHeight;
        VirtualInvokeData get_preferredWidth;
        VirtualInvokeData get_preferredHeight;
        VirtualInvokeData get_renderedWidth;
        VirtualInvokeData get_renderedHeight;
        VirtualInvokeData get_layoutPriority;
        VirtualInvokeData LoadFontAsset;
        VirtualInvokeData SetSharedMaterial;
        VirtualInvokeData GetMaterial;
        VirtualInvokeData SetFontBaseMaterial;
        VirtualInvokeData GetSharedMaterials;
        VirtualInvokeData SetSharedMaterials;
        VirtualInvokeData GetMaterials;
        VirtualInvokeData CreateMaterialInstance;
        VirtualInvokeData SetFaceColor;
        VirtualInvokeData SetOutlineColor;
        VirtualInvokeData SetOutlineThickness;
        VirtualInvokeData SetShaderDepth;
        VirtualInvokeData SetCulling;
        VirtualInvokeData UpdateCulling;
        VirtualInvokeData GetPaddingForMaterial;
        VirtualInvokeData GetPaddingForMaterial_1;
        VirtualInvokeData GetTextContainerLocalCorners;
        VirtualInvokeData ForceMeshUpdate;
        VirtualInvokeData UpdateGeometry_1;
        VirtualInvokeData UpdateVertexData;
        VirtualInvokeData UpdateVertexData_1;
        VirtualInvokeData SetVertices;
        VirtualInvokeData UpdateMeshPadding;
        VirtualInvokeData InternalCrossFadeColor;
        VirtualInvokeData InternalCrossFadeAlpha;
        VirtualInvokeData SetArraySizes;
        VirtualInvokeData CalculatePreferredValues;
        VirtualInvokeData GetCompoundBounds;
        VirtualInvokeData GetCanvasSpaceClippingRect;
        VirtualInvokeData GetTextInfo;
        VirtualInvokeData ComputeMarginSize;
        VirtualInvokeData SaveGlyphVertexInfo;
        VirtualInvokeData SaveSpriteVertexInfo;
        VirtualInvokeData FillCharacterVertexBuffers;
        VirtualInvokeData FillCharacterVertexBuffers_1;
        VirtualInvokeData FillSpriteVertexBuffers;
        VirtualInvokeData DrawUnderlineMesh;
        VirtualInvokeData DrawTextHighlight;
        VirtualInvokeData SetActiveSubMeshes;
        VirtualInvokeData DestroySubMeshObjects;
        VirtualInvokeData ClearMesh;
        VirtualInvokeData ClearMesh_1;
        VirtualInvokeData GetParsedText;
        VirtualInvokeData InternalUpdate;
        VirtualInvokeData CalculateLayoutInputHorizontal;
        VirtualInvokeData CalculateLayoutInputVertical;
        VirtualInvokeData get_minWidth_1;
        VirtualInvokeData get_preferredWidth_1;
        VirtualInvokeData get_flexibleWidth_1;
        VirtualInvokeData get_minHeight_1;
        VirtualInvokeData get_preferredHeight_1;
        VirtualInvokeData get_flexibleHeight_1;
        VirtualInvokeData get_layoutPriority_1;
        VirtualInvokeData GenerateTextMesh;
    };

    struct TextMeshPro__StaticFields {
    };

    struct TextMeshPro__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextMeshPro__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextMeshPro__VTable vtable;
    };
#pragma endregion
#pragma endregion

#pragma region PlayerOutfitType__Enum
#if defined(_CPLUSPLUS_)
    enum class PlayerOutfitType__Enum : int32_t {
        Default = 0x00000000,
        Shapeshifted = 0x00000001,
        HorseWrangler = 0x00000002,
        MushroomMixup = 0x00000003,
    };

#else
    enum PlayerOutfitType__Enum {
        PlayerOutfitType__Enum_Default = 0x00000000,
        PlayerOutfitType__Enum_Shapeshifted = 0x00000001,
        PlayerOutfitType__Enum_HorseWrangler = 0x00000002,
        PlayerOutfitType__Enum_MushroomMixup = 0x00000003,
    };

#endif
#pragma endregion

#pragma region MurderResultFlags__Enum
#if defined(_CPLUSPLUS_)
    enum class MurderResultFlags__Enum : int32_t {
        NULL_1 = 0x00000000,
        Succeeded = 0x00000001,
        FailedError = 0x00000002,
        FailedProtected = 0x00000004,
        DecisionByHost = 0x00000008,
    };

#else
    enum MurderResultFlags__Enum {
        MurderResultFlags__Enum_NULL_1 = 0x00000000,
        MurderResultFlags__Enum_Succeeded = 0x00000001,
        MurderResultFlags__Enum_FailedError = 0x00000002,
        MurderResultFlags__Enum_FailedProtected = 0x00000004,
        MurderResultFlags__Enum_DecisionByHost = 0x00000008,
    };

#endif
#pragma endregion

#pragma region AccountTab
    struct AccountTab__Fields {
        struct MonoBehaviour__Fields _;
        struct TextMeshPro* userName;
        struct TextMeshPro* friendCode;
        struct TextMeshPro* friendCodeTitle;
        struct PoolablePlayer* playerImage;
        struct GameObject* friendCodeObject;
        struct SpriteRenderer* FriendCodeHiddenIcon;
        struct GameObject* offlineMode;
        struct GameObject* guestMode;
        struct FullAccount* loggedInMode;
        struct GameObject* waitingForGuardian;
        struct TextMeshPro* guardianEmailText;
        struct EditName* editNameScreen;
        struct GameObject* idCard;
        struct GameObject* resendEmailButton;
        struct TextMeshPro* levelText;
        struct ProgressBar* xpProgressBar;
        struct TextMeshPro* veryBadErrorText;
        struct Collider2D* clickToCloseCollider;
        struct TextMeshPro* accountIDDisplayText;
        struct GameObject* showAccountIDButton;
        struct SpriteRenderer* SpaceBean;
        struct SpriteRenderer* SpaceHorse;
        struct InfoTextBox* InfoTextBoxDisplay;
        struct SignInStatusComponent* signInStatusComponent;
        struct GameObject* accountCopyButton;
        bool showAccountID;
        struct String* friendCodeHiddenText;
        struct UiElement* BackButton;
        struct List_1_UiElement_* PotentialDefaultSelections;
        struct List_1_UiElement_* selectableObjects;
    };

    struct AccountTab {
        struct AccountTab__Class* klass;
        void* monitor;
        struct AccountTab__Fields fields;
    };

    struct AccountTab__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AccountTab__StaticFields {
    };

    struct AccountTab__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AccountTab__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AccountTab__VTable vtable;
    };
#pragma endregion

#pragma region EOSManager
    //sicko
    struct EOSManager__Fields {
        void* _;
        struct CallResult_1_EncryptedAppTicketResponse_t_* OnEncryptedAppTicketResponseCallResult;
        struct OnLoginCallback* successCallback;
        struct Action* onLoginFailedCallback;
        struct String* productName;
        struct String* productVersion;
        struct String* productId;
        struct String* sandboxId;
        struct String* deploymentId;
        struct String* clientId;
        struct String* clientSecret;
        struct String* friendCode;
        bool hasRunLoginFlow;
        float platformTickTimer;
        bool platformInitialized;
        bool loginFlowFinished;
        bool tryingToLogin;
        bool stopTimeOutCheck;
        struct GameObject* TimeOutPopup;
        float TimeOutTime;
        bool FinishedAssets;
        struct PlatformInterface* platformInterface;
        struct ProductUserId* userId;
        struct ProductUserId* deviceIDuserID;
        bool announcementsVisible;
        bool attemptAuthAgain;
        uint32_t numLinkedAccounts;
        struct List_1_Epic_OnlineServices_Connect_ExternalAccountInfo_* linkedExternalAccounts;
        struct EditAccountUsername* editAccountUsername;
        struct AskToMergeGuest* askToMergeAccount;
        struct String* freeChatKey;
        struct String* customNameKey;
        struct String* friendsListKey;
        struct String* accountLinkKey;
        struct List_1_TMPro_TextMeshProUGUI_* watermark;
        struct GameObject* watermarkCanvas;
        struct Logger_2* logger;
        int32_t ageOfConsent;
        struct String* kwsUserId;
        bool isKWSMinor;
        struct ContinuanceToken* continuanceToken;
        struct String* exchangeToken;
        struct String* platformAuthToken;
        void* serverTimeOnLaunch;
        bool authExpiredCallbackTriggered;
        bool silentLoginFailed;
        struct CompletionToken_1_PurchaseStates_* validateOldDLC;
        bool isRedeemingDLC;
        struct PlatformInterface* s_eosPlatformInterface;
    };

    struct EOSManager {
        struct EOSManager__Class* klass;
        void* monitor;
        struct EOSManager__Fields fields;
    };

    struct EOSManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct EOSManager__StaticFields {
    };

    struct EOSManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EOSManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EOSManager__VTable vtable;
    };
#pragma endregion

#pragma region FullAccount
    struct FullAccount__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* randomizeNameButton;
        struct GameObject* editNameButton;
        struct GameObject* manageAccount;
    };

    struct FullAccount {
        struct FullAccount__Class* klass;
        void* monitor;
        struct FullAccount__Fields fields;
    };

    struct FullAccount__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FullAccount__StaticFields {
    };

    struct FullAccount__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FullAccount__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FullAccount__VTable vtable;
    };
#pragma endregion

#pragma region InnerNetObject

#if defined(_CPLUSPLUS_)
    enum class SpawnFlags__Enum : uint8_t {
        None = 0x00,
        IsClientCharacter = 0x01,
    };

#else
    enum SpawnFlags__Enum {
        SpawnFlags__Enum_None = 0x00,
        SpawnFlags__Enum_IsClientCharacter = 0x01,
    };

#endif

    struct InnerNetObject__Fields {
        struct MonoBehaviour__Fields _;
        uint32_t SpawnId;
        uint32_t NetId;
        uint32_t DirtyBits;
#if defined(_CPLUSPLUS_)
        SpawnFlags__Enum SpawnFlags;
#else
        uint8_t SpawnFlags;
#endif
#if defined(_CPLUSPLUS_)
        SendOption__Enum sendMode;
#else
        uint8_t sendMode;
#endif
        int32_t OwnerId;
        bool DespawnOnDestroy;
    };

    struct InnerNetObject {
        struct InnerNetObject__Class* klass;
        void* monitor;
        struct InnerNetObject__Fields fields;
    };

    struct InnerNetObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct InnerNetObject__StaticFields {
    };

    struct InnerNetObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InnerNetObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InnerNetObject__VTable vtable;
    };
#pragma endregion

#pragma region OpenableDoor__Array
    WRAPPER_IL2CPP_ARRAY(OpenableDoor, struct OpenableDoor*);
#pragma endregion

#pragma region PlayerVoteArea
    struct PlayerVoteArea__Fields {
        struct MonoBehaviour__Fields _;
        struct MeetingHud* _Parent_k__BackingField;
        uint8_t TargetPlayerId;
        struct GameObject* Buttons;
        struct UiElement* ConfirmButton;
        struct UiElement* CancelButton;
        struct UiElement* PlayerButton;
        struct SpriteRenderer* Background;
        struct SpriteRenderer* MaskArea;
        struct SpriteRenderer* Flag;
        struct SpriteRenderer* Megaphone;
        struct SpriteRenderer* Overlay;
        struct SpriteRenderer* XMark;
        struct SpriteRenderer* GAIcon;
        struct SpriteRenderer* ThumbsDown;
        struct SpriteRenderer* HighlightedFX;
        struct TextMeshPro* NameText;
        struct TextMeshPro* LevelNumberText;
        struct TextMeshPro* ColorBlindName;
        bool AnimateButtonsFromLeft;
        bool AmDead;
        bool DidReport;
        uint8_t VotedFor;
        bool voteComplete;
        bool resultsShowing;
        struct PoolablePlayer* PlayerIcon;
        int32_t _MaskLayer_k__BackingField;
    };

    struct PlayerVoteArea {
        struct PlayerVoteArea__Class* klass;
        MonitorData* monitor;
        struct PlayerVoteArea__Fields fields;
    };

    struct PlayerVoteArea__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerVoteArea__StaticFields {
    };

    struct PlayerVoteArea__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerVoteArea__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerVoteArea__VTable vtable;
    };
#pragma endregion

#pragma region PlayerVoteArea__Array
    WRAPPER_IL2CPP_ARRAY(PlayerVoteArea, struct PlayerVoteArea*);
#pragma endregion

#pragma region SystemTypes__Enum
#if defined(_CPLUSPLUS_)
    enum class SystemTypes__Enum : uint8_t {
        Hallway = 0x00,
        Storage = 0x01,
        Cafeteria = 0x02,
        Reactor = 0x03,
        UpperEngine = 0x04,
        Nav = 0x05,
        Admin = 0x06,
        Electrical = 0x07,
        LifeSupp = 0x08,
        Shields = 0x09,
        MedBay = 0x0a,
        Security = 0x0b,
        Weapons = 0x0c,
        LowerEngine = 0x0d,
        Comms = 0x0e,
        ShipTasks = 0x0f,
        Doors = 0x10,
        Sabotage = 0x11,
        Decontamination = 0x12,
        Launchpad = 0x13,
        LockerRoom = 0x14,
        Laboratory = 0x15,
        Balcony = 0x16,
        Office = 0x17,
        Greenhouse = 0x18,
        Dropship = 0x19,
        Decontamination2 = 0x1a,
        Outside = 0x1b,
        Specimens = 0x1c,
        BoilerRoom = 0x1d,
        VaultRoom = 0x1e,
        Cockpit = 0x1f,
        Armory = 0x20,
        Kitchen = 0x21,
        ViewingDeck = 0x22,
        HallOfPortraits = 0x23,
        CargoBay = 0x24,
        Ventilation = 0x25,
        Showers = 0x26,
        Engine = 0x27,
        Brig = 0x28,
        MeetingRoom = 0x29,
        Records = 0x2a,
        Lounge = 0x2b,
        GapRoom = 0x2c,
        MainHall = 0x2d,
        Medical = 0x2e,
        Decontamination3 = 0x2f,
        Zipline = 0x30,
        MiningPit = 0x31,
        FishingDock = 0x32,
        RecRoom = 0x33,
        Lookout = 0x34,
        Beach = 0x35,
        Highlands = 0x36,
        Jungle = 0x37,
        SleepingQuarters = 0x38,
        MushroomMixupSabotage = 0x39,
        HeliSabotage = 0x3a,
    };

#else
    enum SystemTypes__Enum {
        SystemTypes__Enum_Hallway = 0x00,
        SystemTypes__Enum_Storage = 0x01,
        SystemTypes__Enum_Cafeteria = 0x02,
        SystemTypes__Enum_Reactor = 0x03,
        SystemTypes__Enum_UpperEngine = 0x04,
        SystemTypes__Enum_Nav = 0x05,
        SystemTypes__Enum_Admin = 0x06,
        SystemTypes__Enum_Electrical = 0x07,
        SystemTypes__Enum_LifeSupp = 0x08,
        SystemTypes__Enum_Shields = 0x09,
        SystemTypes__Enum_MedBay = 0x0a,
        SystemTypes__Enum_Security = 0x0b,
        SystemTypes__Enum_Weapons = 0x0c,
        SystemTypes__Enum_LowerEngine = 0x0d,
        SystemTypes__Enum_Comms = 0x0e,
        SystemTypes__Enum_ShipTasks = 0x0f,
        SystemTypes__Enum_Doors = 0x10,
        SystemTypes__Enum_Sabotage = 0x11,
        SystemTypes__Enum_Decontamination = 0x12,
        SystemTypes__Enum_Launchpad = 0x13,
        SystemTypes__Enum_LockerRoom = 0x14,
        SystemTypes__Enum_Laboratory = 0x15,
        SystemTypes__Enum_Balcony = 0x16,
        SystemTypes__Enum_Office = 0x17,
        SystemTypes__Enum_Greenhouse = 0x18,
        SystemTypes__Enum_Dropship = 0x19,
        SystemTypes__Enum_Decontamination2 = 0x1a,
        SystemTypes__Enum_Outside = 0x1b,
        SystemTypes__Enum_Specimens = 0x1c,
        SystemTypes__Enum_BoilerRoom = 0x1d,
        SystemTypes__Enum_VaultRoom = 0x1e,
        SystemTypes__Enum_Cockpit = 0x1f,
        SystemTypes__Enum_Armory = 0x20,
        SystemTypes__Enum_Kitchen = 0x21,
        SystemTypes__Enum_ViewingDeck = 0x22,
        SystemTypes__Enum_HallOfPortraits = 0x23,
        SystemTypes__Enum_CargoBay = 0x24,
        SystemTypes__Enum_Ventilation = 0x25,
        SystemTypes__Enum_Showers = 0x26,
        SystemTypes__Enum_Engine = 0x27,
        SystemTypes__Enum_Brig = 0x28,
        SystemTypes__Enum_MeetingRoom = 0x29,
        SystemTypes__Enum_Records = 0x2a,
        SystemTypes__Enum_Lounge = 0x2b,
        SystemTypes__Enum_GapRoom = 0x2c,
        SystemTypes__Enum_MainHall = 0x2d,
        SystemTypes__Enum_Medical = 0x2e,
        SystemTypes__Enum_Decontamination3 = 0x2f,
        SystemTypes__Enum_Zipline = 0x30,
        SystemTypes__Enum_MiningPit = 0x31,
        SystemTypes__Enum_FishingDock = 0x32,
        SystemTypes__Enum_RecRoom = 0x33,
        SystemTypes__Enum_Lookout = 0x34,
        SystemTypes__Enum_Beach = 0x35,
        SystemTypes__Enum_Highlands = 0x36,
        SystemTypes__Enum_Jungle = 0x37,
        SystemTypes__Enum_SleepingQuarters = 0x38,
        SystemTypes__Enum_MushroomMixupSabotage = 0x39,
        SystemTypes__Enum_HeliSabotage = 0x3a,
    };

#endif
#pragma endregion

#pragma region PlainShipRoom
    struct PlainShipRoom__Fields {
        struct MonoBehaviour__Fields _;
#if defined(_CPLUSPLUS_)
        SystemTypes__Enum RoomId;
#else
        uint8_t RoomId;
#endif
        void* survCamera;
        struct Collider2D* roomArea;
    };

    struct PlainShipRoom {
        struct PlainShipRoom__Class* klass;
        MonitorData* monitor;
        struct PlainShipRoom__Fields fields;
    };

    struct PlainShipRoom__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlainShipRoom__StaticFields {
    };

    struct PlainShipRoom__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlainShipRoom__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlainShipRoom__VTable vtable;
    };
#pragma endregion

#pragma region PlainShipRoom__Array
    WRAPPER_IL2CPP_ARRAY(PlainShipRoom, struct PlainShipRoom*);
#pragma endregion

#pragma region ShipStatus

#if defined(_CPLUSPLUS_)
    enum class ShipStatus_MapType__Enum : int32_t {
        Ship = 0x00000000,
        Hq = 0x00000001,
        Pb = 0x00000002,
        Fungle = 0x00000003,
    };

#else
    enum ShipStatus_MapType__Enum {
        ShipStatus_MapType__Enum_Ship = 0x00000000,
        ShipStatus_MapType__Enum_Hq = 0x00000001,
        ShipStatus_MapType__Enum_Pb = 0x00000002,
        ShipStatus_MapType__Enum_Fungle = 0x00000003,
    };

#endif

    struct ShipStatus__Fields {
        struct InnerNetObject__Fields _;
        struct Color CameraColor;
        float MaxLightRadius;
        float MinLightRadius;
        float MapScale;
        struct MapBehaviour* MapPrefab;
        void* ExileCutscenePrefab;
        struct MeetingCalledAnimation* EmergencyOverlay;
        struct MeetingCalledAnimation* ReportOverlay;
        struct Sprite* MeetingBackground;
        struct Sprite* BrokenEmergencyButton;
        struct SystemConsole* EmergencyButton;
        struct Vector2 InitialSpawnCenter;
        struct Vector2 MeetingSpawnCenter;
        struct Vector2 MeetingSpawnCenter2;
        float SpawnRadius;
        struct NormalPlayerTask__Array* CommonTasks;
        struct NormalPlayerTask__Array* LongTasks;
        struct NormalPlayerTask__Array* ShortTasks;
        struct PlayerTask__Array* SpecialTasks;
        struct Transform__Array* DummyLocations;
        struct SurvCamera__Array* AllCameras;
        struct OpenableDoor__Array* AllDoors;
        struct Console_1__Array* AllConsoles;
        struct Ladder__Array* Ladders;
        struct Dictionary_2_SystemTypes_ISystemType_* Systems;
        struct StringNames__Enum__Array* SystemNames;
        struct StringNames__Enum__Array* ExtraTaskNames;
        struct IStepWatcher__Array* _AllStepWatchers_k__BackingField;
        struct PlainShipRoom__Array* _AllRooms_k__BackingField;
        struct Dictionary_2_SystemTypes_PlainShipRoom_* _FastRooms_k__BackingField;
        struct Vent__Array* _AllVents_k__BackingField;
        void* SabotageSound;
        struct AnimationClip__Array* WeaponFires;
        struct SpriteAnim* WeaponsImage;
        struct AudioClip__Array* VentMoveSounds;
        void* VentEnterSound;
        void* VentExitSound;
        struct AnimationClip* HatchActive;
        struct SpriteAnim* Hatch;
        struct ParticleSystem* HatchParticles;
        struct AnimationClip* ShieldsActive;
        struct SpriteAnim__Array* ShieldsImages;
        struct SpriteRenderer* ShieldBorder;
        struct Sprite* ShieldBorderOn;
        struct MedScannerBehaviour* MedScanner;
        int32_t WeaponFireIdx;
        float Timer;
        float EmergencyCooldown;
#if defined(_CPLUSPLUS_)
        ShipStatus_MapType__Enum Type;
#else
        int32_t Type;
#endif
        float _HideCountdown_k__BackingField;
        struct CosmeticsCache* _CosmeticsCache_k__BackingField;
        struct Logger_2* logger;
        int32_t numScans;
    };

    struct ShipStatus {
        struct ShipStatus__Class* klass;
        MonitorData* monitor;
        struct ShipStatus__Fields fields;
    };

    struct ShipStatus__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData OnEnable;
        VirtualInvokeData RepairCriticalSabotages;
        VirtualInvokeData Start;
        VirtualInvokeData SpawnPlayer;
        VirtualInvokeData OnMeetingCalled;
        VirtualInvokeData StartSFX;
        VirtualInvokeData PrespawnStep;
        VirtualInvokeData CalculateLightRadius;
    };

    struct ShipStatus__StaticFields {
        struct ShipStatus* Instance;
    };

    struct ShipStatus__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShipStatus__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShipStatus__VTable vtable;
    };
#pragma endregion

#pragma region StringNames__Enum

    typedef int32_t StringNames__Enum;

    WRAPPER_IL2CPP_ARRAY(StringNames__Enum, StringNames__Enum);

#pragma endregion

#pragma region SwitchSystem
    struct __declspec(align(4)) SwitchSystem__Fields {
        float DetoriorationTime;
        uint8_t Value;
        float timer;
        uint8_t ExpectedSwitches;
        uint8_t ActualSwitches;
        bool _IsDirty_k__BackingField;
    };

    struct SwitchSystem {
        struct SwitchSystem__Class* klass;
        MonitorData* monitor;
        struct SwitchSystem__Fields fields;
    };

    struct SwitchSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData Deteriorate;
        VirtualInvokeData UpdateSystem;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData get_IsActive;
    };

    struct SwitchSystem__StaticFields {
    };

    struct SwitchSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwitchSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwitchSystem__VTable vtable;
    };
#pragma endregion

#pragma region ISystemType
    struct ISystemType {
        struct ISystemType__Class* klass;
        void* monitor;
    };

    struct ISystemType__VTable {
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData Deteriorate;
        VirtualInvokeData UpdateSystem;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct ISystemType__StaticFields {
    };

    struct ISystemType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISystemType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISystemType__VTable vtable;
    };
#pragma endregion

#pragma region Dictionary_2_SystemTypes_ISystemType_
    WRAPPER_IL2CPP_DICTIONARY(SystemTypes, ISystemType, SystemTypes__Enum, struct ISystemType*);
#pragma endregion

#pragma region Dictionary_RGCTXs
    struct System_Collections_Generic_Dictionary_TKey__TValue__RGCTXs {
        MethodInfo* _0_System_Collections_Generic_Dictionary_TKey__TValue___ctor;
        MethodInfo* _1_System_Collections_Generic_Dictionary_TKey__TValue__Initialize;
        MethodInfo* _2_System_Collections_Generic_EqualityComparer_TKey__get_Default;
        Il2CppClass* _3_System_Collections_Generic_EqualityComparer_TKey_;
        MethodInfo* _4_System_Collections_Generic_Dictionary_TKey__TValue___ctor;
        Il2CppClass* _5_System_Collections_Generic_ICollection_KeyValuePair_TKey__TValue__;
        Il2CppType* _6_System_Collections_Generic_Dictionary_TKey__TValue_;
        Il2CppClass* _7_System_Collections_Generic_Dictionary_TKey__TValue_;
        MethodInfo* _8_System_Collections_Generic_Dictionary_TKey__TValue__Add;
        Il2CppClass* _9_System_Collections_Generic_IEnumerable_KeyValuePair_TKey__TValue__;
        Il2CppClass* _10_System_Collections_Generic_IEnumerator_KeyValuePair_TKey__TValue__;
        MethodInfo* _11_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Key;
        MethodInfo* _12_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Value;
        Il2CppClass* _13_System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue_;
        MethodInfo* _14_System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue___ctor;
        Il2CppClass* _15_System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue_;
        MethodInfo* _16_System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue___ctor;
        MethodInfo* _17_System_Collections_Generic_Dictionary_TKey__TValue__FindEntry;
        MethodInfo* _18_System_Collections_Generic_Dictionary_TKey__TValue__TryInsert;
        MethodInfo* _19_System_Collections_Generic_EqualityComparer_TValue__get_Default;
        Il2CppClass* _20_System_Collections_Generic_EqualityComparer_TValue_;
        MethodInfo* _21_System_Collections_Generic_EqualityComparer_TValue__Equals;
        MethodInfo* _22_System_Collections_Generic_Dictionary_TKey__TValue__Remove;
        Il2CppClass* _23_TValue;
        MethodInfo* _24_System_Collections_Generic_Dictionary_TKey__TValue__get_Count;
        Il2CppClass* _25_System_Collections_Generic_KeyValuePair_TKey__TValue_;
        MethodInfo* _26_System_Collections_Generic_KeyValuePair_TKey__TValue___ctor;
        Il2CppClass* _27_System_Collections_Generic_Dictionary_Enumerator_TKey__TValue_;
        MethodInfo* _28_System_Collections_Generic_Dictionary_Enumerator_TKey__TValue___ctor;
        Il2CppType* _29_System_Collections_Generic_IEqualityComparer_TKey_;
        Il2CppClass* _30_System_Collections_Generic_KeyValuePair_TKey__TValue___;
        MethodInfo* _31_System_Collections_Generic_Dictionary_TKey__TValue__CopyTo;
        Il2CppType* _32_System_Collections_Generic_KeyValuePair_TKey__TValue___;
        Il2CppClass* _33_TKey;
        Il2CppClass* _34_System_Collections_Generic_IEqualityComparer_TKey_;
        Il2CppClass* _35_System_Collections_Generic_Dictionary_Entry_TKey__TValue___;
        MethodInfo* _36_System_Collections_Generic_Dictionary_TKey__TValue__Resize;
        MethodInfo* _37_System_Collections_Generic_Dictionary_TKey__TValue__Resize;
        Il2CppClass* _38_System_Collections_Generic_KeyValuePair_TKey__TValue___;
        MethodInfo* _39_System_Collections_Generic_Dictionary_TKey__TValue__get_Keys;
        MethodInfo* _40_System_Collections_Generic_Dictionary_TKey__TValue__get_Values;
        MethodInfo* _41_System_Collections_Generic_Dictionary_TKey__TValue__IsCompatibleKey;
        Il2CppClass* _42_System_Collections_Generic_Dictionary_TKey__TValue_;
        MethodInfo* _43_System_Collections_Generic_Dictionary_TKey__TValue__set_Item;
        Il2CppType* _44_TValue;
        Il2CppType* _45_TKey;
        MethodInfo* _46_System_Collections_Generic_Dictionary_TKey__TValue__ContainsKey;
    };
#pragma endregion

#pragma region AirshipStatus
    struct AirshipStatus__Fields {
        struct ShipStatus__Fields _;
        void* SpawnInGame;
        struct MovingPlatformBehaviour* GapPlatform;
        void* ShowerParticles;
        void* LightAffectors;
        struct GameObject* outOfOrderPlat;
    };

    struct AirshipStatus {
        struct AirshipStatus__Class* klass;
        MonitorData* monitor;
        struct AirshipStatus__Fields fields;
    };

    struct AirshipStatus__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData OnEnable;
        VirtualInvokeData RepairCriticalSabotages;
        VirtualInvokeData Start;
        VirtualInvokeData SpawnPlayer;
        VirtualInvokeData OnMeetingCalled;
        VirtualInvokeData StartSFX;
        VirtualInvokeData PrespawnStep;
        VirtualInvokeData CalculateLightRadius;
    };

    struct AirshipStatus__StaticFields {
    };

    struct AirshipStatus__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AirshipStatus__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AirshipStatus__VTable vtable;
    };
#pragma endregion

#pragma region NetworkedPlayerInfo_PlayerOutfit
    struct __declspec(align(4)) NetworkedPlayerInfo_PlayerOutfit__Fields {
        int32_t ColorId;
        struct String* HatId;
        struct String* PetId;
        struct String* SkinId;
        struct String* VisorId;
        struct String* NamePlateId;
        struct String* PlayerName;
        uint8_t HatSequenceId;
        uint8_t PetSequenceId;
        uint8_t SkinSequenceId;
        uint8_t VisorSequenceId;
        uint8_t NamePlateSequenceId;
    };

    struct NetworkedPlayerInfo_PlayerOutfit {
        void* klass;
        MonitorData* monitor;
        struct NetworkedPlayerInfo_PlayerOutfit__Fields fields;
    };
#pragma endregion

#pragma region Int32__Array
    WRAPPER_IL2CPP_ARRAY(Int32, int32_t);
#pragma endregion

#pragma region Dictionary_2_PlayerOutfitType_NetworkedPlayerInfo_PlayerOutfit_
    WRAPPER_IL2CPP_DICTIONARY(PlayerOutfitType, NetworkedPlayerInfo_PlayerOutfit, PlayerOutfitType__Enum, struct NetworkedPlayerInfo_PlayerOutfit*);
#pragma endregion

#pragma region RoleTypes__Enum
#if defined(_CPLUSPLUS_)
    enum class RoleTypes__Enum : uint16_t {
        Crewmate = 0x0000,
        Impostor = 0x0001,
        Scientist = 0x0002,
        Engineer = 0x0003,
        GuardianAngel = 0x0004,
        Shapeshifter = 0x0005,
        CrewmateGhost = 0x0006,
        ImpostorGhost = 0x0007,
        Noisemaker = 0x0008,
        Phantom = 0x0009,
        Tracker = 0x000a,
    };

#else
    enum RoleTypes__Enum {
        RoleTypes__Enum_Crewmate = 0x0000,
        RoleTypes__Enum_Impostor = 0x0001,
        RoleTypes__Enum_Scientist = 0x0002,
        RoleTypes__Enum_Engineer = 0x0003,
        RoleTypes__Enum_GuardianAngel = 0x0004,
        RoleTypes__Enum_Shapeshifter = 0x0005,
        RoleTypes__Enum_CrewmateGhost = 0x0006,
        RoleTypes__Enum_ImpostorGhost = 0x0007,
        RoleTypes__Enum_Noisemaker = 0x0008,
        RoleTypes__Enum_Phantom = 0x0009,
        RoleTypes__Enum_Tracker = 0x000a,
    };

#endif
#pragma endregion

#pragma region RoleTeamTypes__Enum
#if defined(_CPLUSPLUS_)
    enum class RoleTeamTypes__Enum : int32_t {
        Crewmate = 0x00000000,
        Impostor = 0x00000001,
    };

#else
    enum RoleTeamTypes__Enum {
        RoleTeamTypes__Enum_Crewmate = 0x00000000,
        RoleTeamTypes__Enum_Impostor = 0x00000001,
    };

#endif
#pragma endregion

#pragma region QuickChatModes__Enum
#if defined(_CPLUSPLUS_)
    enum class QuickChatModes__Enum : int32_t {
        FreeChatOrQuickChat = 0x00000001,
        QuickChatOnly = 0x00000002,
    };

#else
    enum QuickChatModes__Enum {
        QuickChatModes__Enum_FreeChatOrQuickChat = 0x00000001,
        QuickChatModes__Enum_QuickChatOnly = 0x00000002,
    };

#endif
#pragma endregion

    typedef Il2CppObject AudioClip;

#pragma region RoleBehaviour
    struct RoleBehaviour__Fields {
        struct MonoBehaviour__Fields _;
#if defined(_CPLUSPLUS_)
        RoleTypes__Enum Role;
#else
        uint16_t Role;
#endif
#if defined(_CPLUSPLUS_)
        StringNames__Enum StringName;
#else
        int32_t StringName;
#endif
#if defined(_CPLUSPLUS_)
        StringNames__Enum BlurbName;
#else
        int32_t BlurbName;
#endif
#if defined(_CPLUSPLUS_)
        StringNames__Enum BlurbNameMed;
#else
        int32_t BlurbNameMed;
#endif
#if defined(_CPLUSPLUS_)
        StringNames__Enum BlurbNameLong;
#else
        int32_t BlurbNameLong;
#endif
        struct Sprite* RoleIconSolid;
        struct Sprite* RoleIconWhite;
        struct Sprite* RoleScreenshot;
        struct Color NameColor;
        bool TasksCountTowardProgress;
        bool CanUseKillButton;
        bool CanBeKilled;
        bool CanVent;
        bool AffectedByLightAffectors;
        int32_t MaxCount;
#if defined(_CPLUSPLUS_)
        RoleTeamTypes__Enum TeamType;
#else
        int32_t TeamType;
#endif
        struct AbilityButtonSettings* Ability;
#if defined(_CPLUSPLUS_)
        RoleTypes__Enum DefaultGhostRole;
#else
        uint16_t DefaultGhostRole;
#endif
        struct AudioClip* UseSound;
        struct AudioClip* IntroSound;
        struct PlayerControl* Player;
        struct AbilityButton* buttonManager;
    };

    struct RoleBehaviour {
        struct RoleBehaviour__Class* klass;
        MonitorData* monitor;
        struct RoleBehaviour__Fields fields;
    };

    struct RoleBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData get_IsAffectedByComms;
        VirtualInvokeData CanUse;
        VirtualInvokeData DidWin;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData SpawnTaskHeader;
        VirtualInvokeData UseAbility;
        VirtualInvokeData OnMeetingStart;
        VirtualInvokeData OnVotingComplete;
        VirtualInvokeData OnDeath;
        VirtualInvokeData Initialize;
        VirtualInvokeData SetUsableTarget;
        VirtualInvokeData SetPlayerTarget;
        VirtualInvokeData SetCooldown;
        VirtualInvokeData IsValidTarget;
        VirtualInvokeData FindClosestTarget;
        VirtualInvokeData GetAbilityDistance;
        VirtualInvokeData AdjustTasks;
        VirtualInvokeData AppendTaskHint;
    };

    struct RoleBehaviour__StaticFields {
        struct List_1_PlayerControl_* tempPlayerList;
    };

    struct RoleBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RoleBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RoleBehaviour__VTable vtable;
    };
#pragma endregion

#pragma region Nullable_1_AmongUs_GameOptions_RoleTypes_
    struct Nullable_1_AmongUs_GameOptions_RoleTypes_ {
#if defined(_CPLUSPLUS_)
        RoleTypes__Enum value;
#else
        uint16_t value;
#endif
        bool has_value;
    };
#pragma endregion

#pragma region NetworkedPlayerInfo
    struct NetworkedPlayerInfo__Fields {
        struct InnerNetObject__Fields _;
        uint8_t PlayerId;
        int32_t ClientId;
        struct String* FriendCode;
        struct String* Puid;
#if defined(_CPLUSPLUS_)
        RoleTypes__Enum RoleType;
#else
        uint16_t RoleType;
#endif
        struct Nullable_1_AmongUs_GameOptions_RoleTypes_ RoleWhenAlive;
        struct Dictionary_2_PlayerOutfitType_NetworkedPlayerInfo_PlayerOutfit_* Outfits;
        uint32_t PlayerLevel;
        bool Disconnected;
        struct RoleBehaviour* Role;
        struct List_1_NetworkedPlayerInfo_TaskInfo_* Tasks;
        bool IsDead;
        struct PlayerControl* _object;
    };

    struct NetworkedPlayerInfo {
        void* klass;
        MonitorData* monitor;
        struct NetworkedPlayerInfo__Fields fields;
    };
#pragma endregion

#pragma region MovingPlatformBehaviour
    struct MovingPlatformBehaviour__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 LeftPosition;
        struct Vector3 RightPosition;
        struct Vector3 DisabledPosition;
        struct Vector3 LeftUsePosition;
        struct Vector3 RightUsePosition;
        struct AudioClip* MovingSound;
        bool IsLeft;
        struct PlayerControl* Target;
        uint8_t useId;
        bool _IsDirty_k__BackingField;
    };

    struct MovingPlatformBehaviour {
        struct MovingPlatformBehaviour__Class* klass;
        void* monitor;
        struct MovingPlatformBehaviour__Fields fields;
    };

    struct MovingPlatformBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData Deteriorate;
        VirtualInvokeData UpdateSystem;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct MovingPlatformBehaviour__StaticFields {
    };

    struct MovingPlatformBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MovingPlatformBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MovingPlatformBehaviour__VTable vtable;
    };
#pragma endregion

#pragma region Minigame

#if defined(_CPLUSPLUS_)
    enum class TransitionType__Enum : int32_t {
        SlideBottom = 0x00000000,
        Alpha = 0x00000001,
        None = 0x00000002,
    };

#else
    enum TransitionType__Enum {
        TransitionType__Enum_SlideBottom = 0x00000000,
        TransitionType__Enum_Alpha = 0x00000001,
        TransitionType__Enum_None = 0x00000002,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class Minigame_CloseState__Enum : int32_t {
        None = 0x00000000,
        Waiting = 0x00000001,
        Closing = 0x00000002,
    };

#else
    enum Minigame_CloseState__Enum {
        Minigame_CloseState__Enum_None = 0x00000000,
        Minigame_CloseState__Enum_Waiting = 0x00000001,
        Minigame_CloseState__Enum_Closing = 0x00000002,
    };

#endif

    struct Minigame__Fields {
        struct MonoBehaviour__Fields _;
#if defined(_CPLUSPLUS_)
        TransitionType__Enum TransType;
#else
        int32_t TransType;
#endif
        struct Vector2 TargetPosition;
        struct PlayerTask* MyTask;
        struct NormalPlayerTask* MyNormTask;
        struct Console_1* _Console_k__BackingField;
#if defined(_CPLUSPLUS_)
        Minigame_CloseState__Enum amClosing;
#else
        int32_t amClosing;
#endif
        bool amOpening;
        struct AudioClip* OpenSound;
        struct AudioClip* CloseSound;
        struct SpecialInputHandler* inputHandler;
        bool multistageMinigameChecked;
        struct MultistageMinigame* multistageMinigameParent;
        struct Logger_2* logger;
        float timeOpened;
    };

    struct Minigame {
        struct Minigame__Class* klass;
        void* monitor;
        struct Minigame__Fields fields;
    };

    struct Minigame__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SkipMultistageOverlayMenuSetup;
        VirtualInvokeData Begin;
        VirtualInvokeData Close;
        VirtualInvokeData CoAnimateOpen;
        VirtualInvokeData CoDestroySelf;
    };

    struct Minigame__StaticFields {
        struct Minigame* Instance;
    };

    struct Minigame__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Minigame__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Minigame__VTable vtable;
    };
#pragma endregion

#pragma region DoorCardSwipeGame

#if defined(_CPLUSPLUS_)
    enum class DoorCardSwipeGame_TaskStages__Enum : int32_t {
        Before = 0x00000000,
        Animating = 0x00000001,
        Inserted = 0x00000002,
        After = 0x00000003,
    };

#else
    enum DoorCardSwipeGame_TaskStages__Enum {
        DoorCardSwipeGame_TaskStages__Enum_Before = 0x00000000,
        DoorCardSwipeGame_TaskStages__Enum_Animating = 0x00000001,
        DoorCardSwipeGame_TaskStages__Enum_Inserted = 0x00000002,
        DoorCardSwipeGame_TaskStages__Enum_After = 0x00000003,
    };

#endif

    struct DoorCardSwipeGame__Fields {
        struct Minigame__Fields _;
        struct Color gray;
        struct Color green;
#if defined(_CPLUSPLUS_)
        DoorCardSwipeGame_TaskStages__Enum State;
#else
        int32_t State;
#endif
        struct Controller_1* myController;
        struct FloatRange* YRange;
        float minAcceptedTime;
        struct Collider2D* col;
        struct SpriteRenderer* confirmSymbol;
        struct Sprite* AcceptSymbol;
        struct Sprite* RejectSymbol;
        struct TextMeshPro* StatusText;
        struct AudioClip* AcceptSound;
        struct AudioClip* DenySound;
        struct AudioClip__Array* CardMove;
        struct AudioClip* WalletOut;
        float dragTime;
        bool moving;
        struct Vector2 prevStickInput;
        bool hadPrev;
        struct OpenableDoor* MyDoor;
    };

    struct DoorCardSwipeGame {
        struct DoorCardSwipeGame__Class* klass;
        MonitorData* monitor;
        struct DoorCardSwipeGame__Fields fields;
    };

    struct DoorCardSwipeGame__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SkipMultistageOverlayMenuSetup;
        VirtualInvokeData Begin;
        VirtualInvokeData Close;
        VirtualInvokeData CoAnimateOpen;
        VirtualInvokeData CoDestroySelf;
        VirtualInvokeData SetDoor;
    };

    struct DoorCardSwipeGame__StaticFields {
    };

    struct DoorCardSwipeGame__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DoorCardSwipeGame__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DoorCardSwipeGame__VTable vtable;
    };
#pragma endregion

#pragma region PlayerTask

#if defined(_CPLUSPLUS_)
    enum class TaskTypes__Enum : int32_t {
        SubmitScan = 0x00000000,
        PrimeShields = 0x00000001,
        FuelEngines = 0x00000002,
        ChartCourse = 0x00000003,
        StartReactor = 0x00000004,
        SwipeCard = 0x00000005,
        ClearAsteroids = 0x00000006,
        UploadData = 0x00000007,
        InspectSample = 0x00000008,
        EmptyChute = 0x00000009,
        EmptyGarbage = 0x0000000a,
        AlignEngineOutput = 0x0000000b,
        FixWiring = 0x0000000c,
        CalibrateDistributor = 0x0000000d,
        DivertPower = 0x0000000e,
        UnlockManifolds = 0x0000000f,
        ResetReactor = 0x00000010,
        FixLights = 0x00000011,
        CleanO2Filter = 0x00000012,
        FixComms = 0x00000013,
        RestoreOxy = 0x00000014,
        StabilizeSteering = 0x00000015,
        AssembleArtifact = 0x00000016,
        SortSamples = 0x00000017,
        MeasureWeather = 0x00000018,
        EnterIdCode = 0x00000019,
        BuyBeverage = 0x0000001a,
        ProcessData = 0x0000001b,
        RunDiagnostics = 0x0000001c,
        WaterPlants = 0x0000001d,
        MonitorOxygen = 0x0000001e,
        StoreArtifacts = 0x0000001f,
        FillCanisters = 0x00000020,
        FixWeatherNode = 0x00000021,
        InsertKeys = 0x00000022,
        ResetSeismic = 0x00000023,
        ScanBoardingPass = 0x00000024,
        OpenWaterways = 0x00000025,
        ReplaceWaterJug = 0x00000026,
        RepairDrill = 0x00000027,
        AlignTelescope = 0x00000028,
        RecordTemperature = 0x00000029,
        RebootWifi = 0x0000002a,
        PolishRuby = 0x0000002b,
        ResetBreakers = 0x0000002c,
        Decontaminate = 0x0000002d,
        MakeBurger = 0x0000002e,
        UnlockSafe = 0x0000002f,
        SortRecords = 0x00000030,
        PutAwayPistols = 0x00000031,
        FixShower = 0x00000032,
        CleanToilet = 0x00000033,
        DressMannequin = 0x00000034,
        PickUpTowels = 0x00000035,
        RewindTapes = 0x00000036,
        StartFans = 0x00000037,
        DevelopPhotos = 0x00000038,
        GetBiggolSword = 0x00000039,
        PutAwayRifles = 0x0000003a,
        StopCharles = 0x0000003b,
        VentCleaning = 0x0000003c,
        None = 0x0000003d,
        BuildSandcastle = 0x0000003e,
        CatchFish = 0x0000003f,
        CollectShells = 0x00000040,
        LiftWeights = 0x00000041,
        RoastMarshmallow = 0x00000042,
        TestFrisbee = 0x00000043,
        CollectSamples = 0x00000044,
        CollectVegetables = 0x00000045,
        HoistSupplies = 0x00000046,
        MineOres = 0x00000047,
        PolishGem = 0x00000048,
        ReplaceParts = 0x00000049,
        HelpCritter = 0x0000004a,
        CrankGenerator = 0x0000004b,
        FixAntenna = 0x0000004c,
        TuneRadio = 0x0000004d,
        MushroomMixupSabotage = 0x0000004e,
        ExtractFuel = 0x0000004f,
        MonitorMushroom = 0x00000050,
        PlayVideogame = 0x00000051,
    };

#else
    enum TaskTypes__Enum {
        TaskTypes__Enum_SubmitScan = 0x00000000,
        TaskTypes__Enum_PrimeShields = 0x00000001,
        TaskTypes__Enum_FuelEngines = 0x00000002,
        TaskTypes__Enum_ChartCourse = 0x00000003,
        TaskTypes__Enum_StartReactor = 0x00000004,
        TaskTypes__Enum_SwipeCard = 0x00000005,
        TaskTypes__Enum_ClearAsteroids = 0x00000006,
        TaskTypes__Enum_UploadData = 0x00000007,
        TaskTypes__Enum_InspectSample = 0x00000008,
        TaskTypes__Enum_EmptyChute = 0x00000009,
        TaskTypes__Enum_EmptyGarbage = 0x0000000a,
        TaskTypes__Enum_AlignEngineOutput = 0x0000000b,
        TaskTypes__Enum_FixWiring = 0x0000000c,
        TaskTypes__Enum_CalibrateDistributor = 0x0000000d,
        TaskTypes__Enum_DivertPower = 0x0000000e,
        TaskTypes__Enum_UnlockManifolds = 0x0000000f,
        TaskTypes__Enum_ResetReactor = 0x00000010,
        TaskTypes__Enum_FixLights = 0x00000011,
        TaskTypes__Enum_CleanO2Filter = 0x00000012,
        TaskTypes__Enum_FixComms = 0x00000013,
        TaskTypes__Enum_RestoreOxy = 0x00000014,
        TaskTypes__Enum_StabilizeSteering = 0x00000015,
        TaskTypes__Enum_AssembleArtifact = 0x00000016,
        TaskTypes__Enum_SortSamples = 0x00000017,
        TaskTypes__Enum_MeasureWeather = 0x00000018,
        TaskTypes__Enum_EnterIdCode = 0x00000019,
        TaskTypes__Enum_BuyBeverage = 0x0000001a,
        TaskTypes__Enum_ProcessData = 0x0000001b,
        TaskTypes__Enum_RunDiagnostics = 0x0000001c,
        TaskTypes__Enum_WaterPlants = 0x0000001d,
        TaskTypes__Enum_MonitorOxygen = 0x0000001e,
        TaskTypes__Enum_StoreArtifacts = 0x0000001f,
        TaskTypes__Enum_FillCanisters = 0x00000020,
        TaskTypes__Enum_FixWeatherNode = 0x00000021,
        TaskTypes__Enum_InsertKeys = 0x00000022,
        TaskTypes__Enum_ResetSeismic = 0x00000023,
        TaskTypes__Enum_ScanBoardingPass = 0x00000024,
        TaskTypes__Enum_OpenWaterways = 0x00000025,
        TaskTypes__Enum_ReplaceWaterJug = 0x00000026,
        TaskTypes__Enum_RepairDrill = 0x00000027,
        TaskTypes__Enum_AlignTelescope = 0x00000028,
        TaskTypes__Enum_RecordTemperature = 0x00000029,
        TaskTypes__Enum_RebootWifi = 0x0000002a,
        TaskTypes__Enum_PolishRuby = 0x0000002b,
        TaskTypes__Enum_ResetBreakers = 0x0000002c,
        TaskTypes__Enum_Decontaminate = 0x0000002d,
        TaskTypes__Enum_MakeBurger = 0x0000002e,
        TaskTypes__Enum_UnlockSafe = 0x0000002f,
        TaskTypes__Enum_SortRecords = 0x00000030,
        TaskTypes__Enum_PutAwayPistols = 0x00000031,
        TaskTypes__Enum_FixShower = 0x00000032,
        TaskTypes__Enum_CleanToilet = 0x00000033,
        TaskTypes__Enum_DressMannequin = 0x00000034,
        TaskTypes__Enum_PickUpTowels = 0x00000035,
        TaskTypes__Enum_RewindTapes = 0x00000036,
        TaskTypes__Enum_StartFans = 0x00000037,
        TaskTypes__Enum_DevelopPhotos = 0x00000038,
        TaskTypes__Enum_GetBiggolSword = 0x00000039,
        TaskTypes__Enum_PutAwayRifles = 0x0000003a,
        TaskTypes__Enum_StopCharles = 0x0000003b,
        TaskTypes__Enum_VentCleaning = 0x0000003c,
        TaskTypes__Enum_None = 0x0000003d,
        TaskTypes__Enum_BuildSandcastle = 0x0000003e,
        TaskTypes__Enum_CatchFish = 0x0000003f,
        TaskTypes__Enum_CollectShells = 0x00000040,
        TaskTypes__Enum_LiftWeights = 0x00000041,
        TaskTypes__Enum_RoastMarshmallow = 0x00000042,
        TaskTypes__Enum_TestFrisbee = 0x00000043,
        TaskTypes__Enum_CollectSamples = 0x00000044,
        TaskTypes__Enum_CollectVegetables = 0x00000045,
        TaskTypes__Enum_HoistSupplies = 0x00000046,
        TaskTypes__Enum_MineOres = 0x00000047,
        TaskTypes__Enum_PolishGem = 0x00000048,
        TaskTypes__Enum_ReplaceParts = 0x00000049,
        TaskTypes__Enum_HelpCritter = 0x0000004a,
        TaskTypes__Enum_CrankGenerator = 0x0000004b,
        TaskTypes__Enum_FixAntenna = 0x0000004c,
        TaskTypes__Enum_TuneRadio = 0x0000004d,
        TaskTypes__Enum_MushroomMixupSabotage = 0x0000004e,
        TaskTypes__Enum_ExtractFuel = 0x0000004f,
        TaskTypes__Enum_MonitorMushroom = 0x00000050,
        TaskTypes__Enum_PlayVideogame = 0x00000051,
    };

#endif

    struct PlayerTask__Fields {
        struct MonoBehaviour__Fields _;
        int32_t _Index_k__BackingField;
        uint32_t _Id_k__BackingField;
        struct PlayerControl* _Owner_k__BackingField;
#if defined(_CPLUSPLUS_)
        SystemTypes__Enum StartAt;
#else
        uint8_t StartAt;
#endif
#if defined(_CPLUSPLUS_)
        TaskTypes__Enum TaskType;
#else
        int32_t TaskType;
#endif
        struct Minigame* MinigamePrefab;
        bool HasLocation;
        bool LocationDirty;
    };

    struct PlayerTask {
        struct PlayerTask__Class* klass;
        void* monitor;
        struct PlayerTask__Fields fields;
    };

    struct PlayerTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData OnRemove;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData GetMinigamePrefab;
    };

    struct PlayerTask__StaticFields {
    };

    struct PlayerTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerTask__VTable vtable;
    };
#pragma endregion

#pragma region List_1_RoleEffectAnimation_
    WRAPPER_IL2CPP_LIST(RoleEffectAnimation, struct RoleEffectAnimation*);

#if defined(_CPLUSPLUS_)
    enum class RoleEffectAnimation_EffectType__Enum : int32_t {
        Default = 0x00000000,
        ProtectLoop = 0x00000001,
        Shapeshift = 0x00000002,
        Vanish_Charge = 0x00000003,
        Vanish_Poof = 0x00000004,
        Appear_Poof = 0x00000005,
    };

#else
    enum RoleEffectAnimation_EffectType__Enum {
        RoleEffectAnimation_EffectType__Enum_Default = 0x00000000,
        RoleEffectAnimation_EffectType__Enum_ProtectLoop = 0x00000001,
        RoleEffectAnimation_EffectType__Enum_Shapeshift = 0x00000002,
        RoleEffectAnimation_EffectType__Enum_Vanish_Charge = 0x00000003,
        RoleEffectAnimation_EffectType__Enum_Vanish_Poof = 0x00000004,
        RoleEffectAnimation_EffectType__Enum_Appear_Poof = 0x00000005,
    };

#endif
#pragma endregion

#pragma region RoleEffectAnimation
    struct RoleEffectAnimation__Fields {
        struct MonoBehaviour__Fields _;
#if defined(_CPLUSPLUS_)
        RoleEffectAnimation_EffectType__Enum effectType;
#else
        int32_t effectType;
#endif
        struct AnimationClip* Clip;
        struct SpriteAnim* Animator;
        struct Action* MidAnimCB;
        struct SpriteRenderer* Renderer;
        struct AudioClip* UseSound;
        struct AudioSource* AudioSource;
        struct PlayerControl* parent;
    };

    struct RoleEffectAnimation {
        void* klass;
        MonitorData* monitor;
        struct RoleEffectAnimation__Fields fields;
    };
#pragma endregion

#pragma region List_1_PlayerTask_
    WRAPPER_IL2CPP_LIST(PlayerTask, struct PlayerTask*);
#pragma endregion

#pragma region VersionShower
    struct VersionShower__Fields {
        struct MonoBehaviour__Fields _;
        struct TextMeshPro* text;
    };

    struct VersionShower {
        struct VersionShower__Class* klass;
        void* monitor;
        struct VersionShower__Fields fields;
    };

    struct VersionShower__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VersionShower__StaticFields {
    };

    struct VersionShower__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VersionShower__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VersionShower__VTable vtable;
    };
#pragma endregion

#pragma region FollowerCamera
    struct FollowerCamera__Fields {
        struct MonoBehaviour__Fields _;
        struct MonoBehaviour* Target;
        struct Vector2 Offset;
        bool Locked;
        float shakeAmount;
        float shakePeriod;
        bool OverrideScreenShakeEnabled;
        struct Vector2 centerPosition;
    };

    struct FollowerCamera {
        struct FollowerCamera__Class* klass;
        void* monitor;
        struct FollowerCamera__Fields fields;
    };

    struct FollowerCamera__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FollowerCamera__StaticFields {
    };

    struct FollowerCamera__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FollowerCamera__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FollowerCamera__VTable vtable;
    };
#pragma endregion

#pragma region GameData
    struct GameData__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_NetworkedPlayerInfo_* AllPlayers;
        struct List_1_NetworkedPlayerInfo_* PlayerQueue;
        int32_t TotalTasks;
        int32_t CompletedTasks;
        struct RoleBehaviour* DefaultRole;
        struct NetworkedPlayerInfo* PlayerInfoPrefab;
    };

    struct GameData {
        struct GameData__Class* klass;
        MonitorData* monitor;
        struct GameData__Fields fields;
    };

    struct GameData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsPersistent;
        VirtualInvokeData HandleDisconnect;
        VirtualInvokeData HandleDisconnect_1;
    };

    struct GameData__StaticFields {
        struct GameData* Instance;
        float TimeGameStarted;
        float TimeLastMeetingStarted;
        int32_t MeetingCount;
        int32_t RoundsPlayedInSession;
        int32_t LastDeathReason;// DeathReason__Enum
    };

    struct GameData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameData__VTable vtable;
    };
#pragma endregion

#pragma region ChatBubble
    struct PoolableBehavior__Fields {
        struct MonoBehaviour__Fields _;
        void* OwnerPool;
        int32_t PoolIndex;
    };

    struct ChatBubble__Fields {
        struct PoolableBehavior__Fields _;
        void* Player; //struct PoolablePlayer
        struct SpriteRenderer* Xmark;
        struct SpriteRenderer* votedMark;
        struct TextMeshPro* NameText;
        struct TextMeshPro* TextArea;
        struct SpriteRenderer* Background;
        struct SpriteRenderer* MaskArea;
        struct PlatformIdentifier* PlatformIcon;
        struct TextMeshPro* ColorBlindName;
        struct NetworkedPlayerInfo* playerInfo;
        int32_t maskLayer;
        float playerZ;
    };

    struct ChatBubble {
        struct ChatBubble__Class* klass;
        void* monitor;
        struct ChatBubble__Fields fields;
    };

    struct ChatBubble__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Reset;
    };

    struct ChatBubble__StaticFields {
        struct Vector3 PlayerMessageScale;
        struct Vector3 PlayerNotificationScale;
        struct Vector3 VotedAndDeadMarkerPosition;
        struct Vector3 VotedAndDeadMarkerPositionRight;
    };

    struct ChatBubble__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChatBubble__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChatBubble__VTable vtable;
    };
#pragma endregion

#pragma region ChatController

#if defined(_CPLUSPLUS_)
    enum class ChatControllerState__Enum : int32_t {
        Closed = 0x00000000,
        Closing = 0x00000001,
        Open = 0x00000002,
        Opening = 0x00000003,
    };

#else
    enum ChatControllerState__Enum {
        ChatControllerState__Enum_Closed = 0x00000000,
        ChatControllerState__Enum_Closing = 0x00000001,
        ChatControllerState__Enum_Open = 0x00000002,
        ChatControllerState__Enum_Opening = 0x00000003,
    };

#endif

    struct ChatController__Fields {
        struct MonoBehaviour__Fields _;
        struct PassiveButton* chatButton;
        struct AspectPosition* chatButtonAspectPosition;
        void* banButton;
        struct GameObject* openKeyboardButton;
        struct PassiveButton* quickChatButton;
        struct GameObject* chatScreen;
        struct ObjectPoolBehavior* chatBubblePool;
        struct Scroller* scroller;
        struct SpriteRenderer* backgroundImage;
        struct SpriteRenderer* chatNotifyDot;
        struct TextMeshPro* sendRateMessageText;
        struct AspectPosition* aspectPosition;
        struct FreeChatInputField* freeChatField;
        struct QuickChatMenu* quickChatMenu;
        struct QuickChatPreviewField* quickChatField;
        struct AudioClip* messageSound;
        struct AudioClip* warningSound;
        struct AnimationCurve* chatAnimationIn;
        struct AnimationCurve* chatAnimationOut;
        struct UiElement* backButton;
        struct UiElement* defaultButtonSelected;
        struct List_1_UiElement_* controllerSelectable;
        struct ChatNotification* chatNotification;
#if defined(_CPLUSPLUS_)
        ChatControllerState__Enum state;
#else
        int32_t state;
#endif
        struct Vector3 targetChatPosition;
        float timeSinceLastMessage;
        struct Coroutine* notificationRoutine;
        struct SpecialInputHandler* specialInputHandler;
        float targetScale;
    };

    struct ChatController {
        struct ChatController__Class* klass;
        MonitorData* monitor;
        struct ChatController__Fields fields;
    };

    struct AbstractChatInputField__Fields {
        struct MonoBehaviour__Fields _;
        struct SpriteRenderer* background;
        void* submitButton;
        bool visible;
        bool canSubmit;
        void* OnSubmitEvent;
    };

    struct FreeChatInputField__Fields {
        struct AbstractChatInputField__Fields _;
        struct TextBoxTMP* textArea;
        void* fieldButton;
        struct TextMeshPro* charCountText;
        void* OnChangedEvent;
    };

    struct AbstractChatInputField {
        struct AbstractChatInputField__Class* klass;
        MonitorData* monitor;
        struct AbstractChatInputField__Fields fields;
    };

    struct FreeChatInputField {
        void* klass;
        MonitorData* monitor;
        struct FreeChatInputField__Fields fields;
    };

    struct ChatController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChatController__StaticFields {
        void* Logger;
    };

    struct ChatController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChatController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChatController__VTable vtable;
    };
#pragma endregion

#pragma region PlayerMaterial
#if defined(_CPLUSPLUS_)
    enum class PlayerMaterial_MaskType__Enum : int32_t {
        None = 0x00000000,
        SimpleUI = 0x00000001,
        ComplexUI = 0x00000002,
        Exile = 0x00000003,
        ScrollingUI = 0x00000004,
    };

#else
    enum PlayerMaterial_MaskType__Enum {
        PlayerMaterial_MaskType__Enum_None = 0x00000000,
        PlayerMaterial_MaskType__Enum_SimpleUI = 0x00000001,
        PlayerMaterial_MaskType__Enum_ComplexUI = 0x00000002,
        PlayerMaterial_MaskType__Enum_Exile = 0x00000003,
        PlayerMaterial_MaskType__Enum_ScrollingUI = 0x00000004,
    };

#endif

    struct PlayerMaterial_Properties {
        bool IsLocalPlayer;
#if defined(_CPLUSPLUS_)
        PlayerMaterial_MaskType__Enum MaskType;
#else
        int32_t MaskType;
#endif
        int32_t MaskLayer;
        int32_t ColorId;
    };
#pragma endregion

#pragma region SkinLayer

    struct SkinLayer__Fields {
        struct MonoBehaviour__Fields _;
        int32_t JUMP_ZIPLINE_FRAME_STOP;
        struct SpriteRenderer* layer;
        void* animator;
        void* skin;
        void* data;
        struct PlayerMaterial_Properties matProperties;
    };

    struct SkinLayer {
        struct SkinLayer__Class* klass;
        MonitorData* monitor;
        struct SkinLayer__Fields fields;
    };

    struct SkinLayer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SkinLayer__StaticFields {
    };

    struct SkinLayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkinLayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkinLayer__VTable vtable;
    };

#pragma endregion

#pragma region PlayerBodyTypes__Enum
#if defined(_CPLUSPLUS_)
    enum class PlayerBodyTypes__Enum : int32_t {
        Normal = 0x00000000,
        Horse = 0x00000001,
        Seeker = 0x00000002,
        Long = 0x00000003,
        LongSeeker = 0x00000004,
    };

#else
    enum PlayerBodyTypes__Enum {
        PlayerBodyTypes__Enum_Normal = 0x00000000,
        PlayerBodyTypes__Enum_Horse = 0x00000001,
        PlayerBodyTypes__Enum_Seeker = 0x00000002,
        PlayerBodyTypes__Enum_Long = 0x00000003,
        PlayerBodyTypes__Enum_LongSeeker = 0x00000004,
    };

#endif
#pragma endregion

#pragma region PlayerPhysics
    struct PlayerPhysics__Fields {
        struct InnerNetObject__Fields _;
        uint8_t lastClimbLadderSid;
        struct AudioClip* ImpostorDiscoveredSound;
        struct PlayerAnimations* Animations;
        struct SpecialInputHandler* inputHandler;
        float Speed;
        float GhostSpeed;
        struct Logger_2* logger;
        struct Rigidbody2D* body;
        struct PlayerControl* myPlayer;
#if defined(_CPLUSPLUS_)
        PlayerBodyTypes__Enum bodyType;
#else
        int32_t bodyType;
#endif
        struct Coroutine* petCoroutine;
        bool _DoingCustomAnimation_k__BackingField;
    };

    struct PlayerPhysics {
        struct PlayerPhysics__Class* klass;
        MonitorData* monitor;
        struct PlayerPhysics__Fields fields;
    };

    struct PlayerPhysics__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct PlayerPhysics__StaticFields {
    };

    struct PlayerPhysics__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerPhysics__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerPhysics__VTable vtable;
    };
#pragma endregion

#pragma region CosmeticsLayer
    struct CosmeticsLayer__Fields {
        struct MonoBehaviour__Fields _;
        struct Action_1_Int32_* OnColorChange;
        struct Action* OnSetBodyAsGhost;
        struct Action_3_String_Int32_CosmeticsLayer_CosmeticKind_* OnCosmeticSet;
        bool alwaysDrawNormalPlayer;
        bool uiPet;
        float zIndexSpacing;
        bool showColorBlindText;
        struct List_1_PlayerBodySprite_* bodySprites;
        struct TextMeshPro* colorBlindText;
        struct HatParent* hat;
        struct TextMeshPro* nameText;
        struct GameObject* nameTextContainer;
        struct Transform* petParent;
        struct SkinLayer* skin;
        struct VisorLayer* visor;
        struct Vector3 defaultHatVisorPosition;
#if defined(_CPLUSPLUS_)
        PlayerBodyTypes__Enum bodyType;
#else
        int32_t bodyType;
#endif
        struct PlayerMaterial_Properties bodyMatProperties;
        struct PlayerBodySprite* currentBodySprite;
        struct PetBehaviour* currentPet;
        struct PlayerBodySprite* normalBodySprite;
        bool initialized;
        struct AddressableAsset_1_PetBehaviour_* petAsset;
        struct LongBoiPlayerBody* longboi;
        bool visible;
        bool isNameVisible;
        bool lockVisible;
        bool localPlayer;
    };

    struct CosmeticsLayer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CosmeticsLayer__StaticFields {
    };

    struct CosmeticsLayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CosmeticsLayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CosmeticsLayer__VTable vtable;
    };

    struct CosmeticsLayer {
        struct CosmeticsLayer__Class* klass;
        MonitorData* monitor;
        struct CosmeticsLayer__Fields fields;
    };
#pragma endregion

#pragma region PlayerControl
    struct PlayerControl__Fields {
        struct InnerNetObject__Fields _;
        int32_t LastStartCounter;
        uint8_t PlayerId;
        struct String* FriendCode;
        struct String* Puid;
        float MaxReportDistance;
        bool moveable;
        struct CosmeticsLayer* cosmetics;
        bool ForceKillTimerContinue;
#if defined(_CPLUSPLUS_)
        PlayerOutfitType__Enum _CurrentOutfitType_k__BackingField;
#else
        int32_t _CurrentOutfitType_k__BackingField;
#endif
        bool inVent;
        bool walkingToVent;
        bool petting;
        bool inMovingPlat;
        bool onLadder;
        bool protectedByGuardianThisRound;
        bool shapeshifting;
        bool waitingForShapeshiftResponse;
        bool isKilling;
        float invisibilityAlpha;
        struct NetworkedPlayerInfo* CachedPlayerData;
        int32_t protectedByGuardianId;
        float flashlightAngle;
        int32_t shapeshiftTargetPlayerId;
        bool shouldAppearInvisible;
        bool isTrackingPlayer;
        struct PlayerControl* trackedPlayer;
        int32_t trackedPlayerColorID;
        struct AudioSource* FootSteps;
        struct AudioClip* KillSfx;
        struct KillAnimation__Array* KillAnimations;
        float killTimer;
        int32_t RemainingEmergencies;
        struct LightSource* LightPrefab;
        struct LightSource* lightSource;
        struct Collider2D* Collider;
        struct PlayerPhysics* MyPhysics;
        struct CustomNetworkTransform* NetTransform;
        struct Collider2D* clickKillCollider;
        struct Vector3 defaultCosmeticsScale;
        struct List_1_PlayerTask_* myTasks;
        struct List_1_RoleEffectAnimation_* currentRoleAnimations;
        struct GameObject* TargetFlashlight;
        bool isDummy;
        bool notRealPlayer;
        struct Logger_2* logger;
        struct List_1_IPlayerVisibleItem_* visibilityItems;
        struct Collider2D__Array* hitBuffer;
        struct IUsable* closest;
        bool isNew;
        struct Rigidbody2D* rigidbody2D;
        struct Dictionary_2_UnityEngine_Collider2D_IUsable_* cache;
        struct List_1_IUsable_* itemsInRange;
        struct List_1_IUsable_* newItemsInRange;
        uint8_t scannerCount;
        bool roleAssigned;
    };

    struct PlayerControl {
        struct PlayerControl__Class* klass;
        MonitorData* monitor;
        struct PlayerControl__Fields fields;
    };

    struct PlayerControl__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct PlayerControl__StaticFields {
        struct PlayerControl* LocalPlayer;
        struct List_1_PlayerControl_* AllPlayerControls;
    };

    struct PlayerControl__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerControl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerControl__VTable vtable;
    };
#pragma endregion

#pragma region List_1_PlayerControl_
    WRAPPER_IL2CPP_LIST(PlayerControl, struct PlayerControl*);
#pragma endregion

#pragma region HudManager
    struct DestroyableSingleton_1_HudManager___Fields {
        struct MonoBehaviour__Fields _;
        bool DontDestroy;
    };

    struct HudManager__Fields {
        struct DestroyableSingleton_1_HudManager___Fields _;
        struct FollowerCamera* PlayerCam;
        struct Camera* UICamera;
        struct MeetingHud* MeetingPrefab;
        struct KillButton* KillButton;
        struct AdminButton* AdminButton;
        struct SabotageButton* SabotageButton;
        struct VentButton* ImpostorVentButton;
        struct UseButton* UseButton;
        struct PetButton* PetButton;
        struct AbilityButton* AbilityButton;
        struct ReportButton* ReportButton;
        struct GameObject* TaskStuff;
        struct TaskPanelBehaviour* TaskPanel;
        struct CrewmatesKilledTracker* CrewmatesKilled;
        struct ChatController* Chat;
        struct DialogueBox* Dialogue;
        struct Transform* TaskCompleteOverlay;
        float taskDirtyTimer;
        struct MeshRenderer* ShadowQuad;
        struct SpriteRenderer* FullScreen;
        struct Coroutine* _ReactorFlash_k__BackingField;
        struct Coroutine* _OxyFlash_k__BackingField;
        struct PassiveButton* MapButton;
        struct GameObject* MapButtonGlyph;
        void* KillOverlay;
        struct IVirtualJoystick* joystick;
        struct VirtualJoystick* joystickR;
        struct MonoBehaviour__Array* Joysticks;
        struct MonoBehaviour* RightVJoystick;
        struct Collider2D* LeftStickDeadZone;
        struct Collider2D* RightStickDeadZone;
        struct DiscussBehaviour* discussEmblem;
        struct ShhhBehaviour* shhhEmblem;
        void* IntroPrefab;
        struct OptionsMenuBehaviour* GameMenu;
        struct NotificationPopper* Notifier;
        struct RoomTracker* roomTracker;
        struct AudioClip* TaskCompleteSound;
        struct AudioClip* TaskUpdateSound;
        struct Transform* consoleUIRoot;
        struct GameObject__Array* consoleUIObjects;
        struct GameObject* menuNavigationPrompts;
        struct GameObject* GameLoadAnimation;
        struct LobbyTimerExtensionUI* LobbyTimerExtensionUI;
        float consoleUIHorizontalShift;
        struct GameObject* playerListPrompt;
        struct AlertFlash* AlertFlash;
        struct DangerMeter* DangerMeter;
        struct GameObject* SettingsButton;
        struct StringBuilder* tasksString;
        struct DualshockLightManager_LightOverlayHandle* lightFlashHandle;
        bool _IsIntroDisplayed_k__BackingField;
    };

    struct HudManager {
        struct HudManager__Class* klass;
        MonitorData* monitor;
        struct HudManager__Fields fields;
    };

    struct HudManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct HudManager__StaticFields {
    };

    struct HudManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HudManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HudManager__VTable vtable;
    };
#pragma endregion

#pragma region NotificationPopper
    struct NotificationPopper__Fields {
        typedef Il2CppObject NotificationPopper;
        struct MonoBehaviour__Fields _;
        struct LobbyNotificationMessage* notificationMessageOrigin;
        struct Sprite* playerDisconnectSprite;
        struct Sprite* settingsChangeSprite;
        struct AudioClip* playerDisconnectSound;
        struct AudioClip* settingsChangeSound;
        float spacingY;
        int32_t maxMessages;
        struct Color disconnectColor;
        struct Color settingsChangeColor;
        struct AspectPosition* aspectPosition;
        struct List_1_LobbyNotificationMessage_* activeMessages;
        int32_t lastMessageKey;
    };

    struct NotificationPopper {
        struct NotificationPopper__Class* klass;
        MonitorData* monitor;
        struct NotificationPopper__Fields fields;
    };
#pragma endregion

#pragma region Sprite
    struct Sprite__Fields {
        struct Object_1__Fields _;
    };

    struct Sprite {
        struct Sprite__Class* klass;
        MonitorData* monitor;
        struct Sprite__Fields fields;
    };

    struct Sprite__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Sprite__StaticFields {
    };

    struct Sprite__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Sprite__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Sprite__VTable vtable;
    };
#pragma endregion

#pragma region KeyboardJoystick
    struct KeyboardJoystick__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 del;
        void* myController;
        void* hitBuffer;
        int32_t touchId;
    };

    struct KeyboardJoystick {
        struct KeyboardJoystick__Class* klass;
        void* monitor;
        struct KeyboardJoystick__Fields fields;
    };

    struct KeyboardJoystick__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_DeltaL;
        VirtualInvokeData get_DeltaR;
        VirtualInvokeData ToggleVisuals;
    };

    struct KeyboardJoystick__StaticFields {
        void* player;
    };

    struct KeyboardJoystick__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyboardJoystick__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyboardJoystick__VTable vtable;
    };
#pragma endregion

#pragma region ScreenJoystick
    struct ScreenJoystick__Fields {
        struct MonoBehaviour__Fields _;
        void* hitBuffer;
        struct Vector2 _Delta_k__BackingField;
        void* myController;
        int32_t touchId;
    };

    struct ScreenJoystick {
        struct ScreenJoystick__Class* klass;
        void* monitor;
        struct ScreenJoystick__Fields fields;
    };

    struct ScreenJoystick__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_DeltaL;
        VirtualInvokeData get_DeltaR;
        VirtualInvokeData ToggleVisuals;
    };

    struct ScreenJoystick__StaticFields {
    };

    struct ScreenJoystick__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenJoystick__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenJoystick__VTable vtable;
    };
#pragma endregion

#pragma region List_1_UnityEngine_SpriteRenderer_
    WRAPPER_IL2CPP_LIST_2(UnityEngine_SpriteRenderer, SpriteRenderer, struct SpriteRenderer*);
#pragma endregion

#pragma region VoteSpreader
    struct VoteSpreader__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_UnityEngine_SpriteRenderer_* Votes;
        void* VoteRange;
        int32_t maxVotesBeforeSmoosh;
        float CounterY;
        float adjustRate;
    };

    struct VoteSpreader {
        struct VoteSpreader__Class* klass;
        MonitorData* monitor;
        struct VoteSpreader__Fields fields;
    };

    struct VoteSpreader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VoteSpreader__StaticFields {
    };

    struct VoteSpreader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VoteSpreader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VoteSpreader__VTable vtable;
    };
#pragma endregion

#pragma region MeetingHud

#if defined(_CPLUSPLUS_)
    enum class MeetingHud_VoteStates__Enum : int32_t {
        Animating = 0x00000000,
        Discussion = 0x00000001,
        NotVoted = 0x00000002,
        Voted = 0x00000003,
        Results = 0x00000004,
        Proceeding = 0x00000005,
    };

#else
    enum MeetingHud_VoteStates__Enum {
        MeetingHud_VoteStates__Enum_Animating = 0x00000000,
        MeetingHud_VoteStates__Enum_Discussion = 0x00000001,
        MeetingHud_VoteStates__Enum_NotVoted = 0x00000002,
        MeetingHud_VoteStates__Enum_Voted = 0x00000003,
        MeetingHud_VoteStates__Enum_Results = 0x00000004,
        MeetingHud_VoteStates__Enum_Proceeding = 0x00000005,
    };

#endif

    struct MeetingHud__Fields {
        struct InnerNetObject__Fields _;
        struct SpriteRenderer* BlackBackground;
        struct SpriteRenderer__Array* OuterMasks;
        struct SpriteRenderer__Array* PlayerColoredParts;
        struct MeetingIntroAnimation* MeetingIntro;
        struct Transform* ButtonParent;
        struct TextMeshPro* TitleText;
        struct Vector3 VoteOrigin;
        struct Vector3 VoteButtonOffsets;
        struct PlayerVoteArea* SkipVoteButton;
        struct PlayerVoteArea__Array* playerStates;
        struct PlayerVoteArea* PlayerButtonPrefab;
        struct SpriteRenderer* PlayerVotePrefab;
        struct Sprite* CrackedGlass;
        struct SpriteRenderer* Glass;
        struct PassiveButton* ProceedButton;
        struct AudioClip* VoteSound;
        struct AudioClip* VoteLockinSound;
        struct AudioClip* VoteEndingSound;
        struct Transform* meetingContents;
#if defined(_CPLUSPLUS_)
        MeetingHud_VoteStates__Enum state;
#else
        int32_t state;
#endif
        struct GameObject* SkippedVoting;
        struct SpriteRenderer* HostIcon;
        struct NetworkedPlayerInfo* exiledPlayer;
        bool wasTie;
        struct TextMeshPro* TimerText;
        float discussionTimer;
        uint8_t reporterId;
        bool amDead;
        float resultsStartedAt;
        int32_t lastSecond;
        struct Logger_2* logger;
        struct UiElement* DefaultButtonSelected;
        struct UiElement* ProceedButtonUi;
        struct List_1_UiElement_* ControllerSelectable;
    };

    struct MeetingHud {
        struct MeetingHud__Class* klass;
        MonitorData* monitor;
        struct MeetingHud__Fields fields;
    };

    struct MeetingHud__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData get_IsPersistent;
        VirtualInvokeData HandleDisconnect;
        VirtualInvokeData HandleDisconnect_1;
    };

    struct MeetingHud__StaticFields {
        struct MeetingHud* Instance;
    };

    struct MeetingHud__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeetingHud__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeetingHud__VTable vtable;
    };
#pragma endregion

#pragma region CustomNetworkTransform
    struct Nullable_1_UnityEngine_Vector2_ {
        struct Vector2 value;
        bool has_value;
    };

    struct CustomNetworkTransform__Fields {
        struct InnerNetObject__Fields _;
        struct PlayerControl* myPlayer;
        struct Rigidbody2D* body;
        struct Queue_1_UnityEngine_Vector2_* sendQueue;
        struct Queue_1_UnityEngine_Vector2_* incomingPosQueue;
        float rubberbandModifier;
        float idealSpeed;
        bool isPaused;
        uint16_t lastSequenceId;
        struct Vector2 lastPosition;
        struct Vector2 lastPosSent;
        struct Nullable_1_UnityEngine_Vector2_ tempSnapPosition;
        struct ITransformGhost* debugPopPositions;
        struct ITransformGhost* debugTargetPositions;
        struct ITransformGhost* debugTruePositions;
        struct INetTransformLogger* debugNetLogger;
    };

    struct CustomNetworkTransform {
        struct CustomNetworkTransform__Class* klass;
        MonitorData* monitor;
        struct CustomNetworkTransform__Fields fields;
    };

    struct CustomNetworkTransform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct CustomNetworkTransform__StaticFields {
    };

    struct CustomNetworkTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CustomNetworkTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CustomNetworkTransform__VTable vtable;
    };
#pragma endregion

#pragma region DisconnectReasons__Enum
#if defined(_CPLUSPLUS_)
    enum class DisconnectReasons__Enum : int32_t {
        ExitGame = 0x00000000,
        GameFull = 0x00000001,
        GameStarted = 0x00000002,
        GameNotFound = 0x00000003,
        IncorrectVersion = 0x00000005,
        Banned = 0x00000006,
        Kicked = 0x00000007,
        Custom = 0x00000008,
        InvalidName = 0x00000009,
        Hacking = 0x0000000a,
        NotAuthorized = 0x0000000b,
        ConnectionLimit = 0x0000000c,
        Destroy = 0x00000010,
        Error = 0x00000011,
        IncorrectGame = 0x00000012,
        ServerRequest = 0x00000013,
        ServerFull = 0x00000014,
        MismatchedVersion = 0x00000015,
        InternalPlayerMissing = 0x00000064,
        InternalNonceFailure = 0x00000065,
        InternalConnectionToken = 0x00000066,
        PlatformLock = 0x00000067,
        LobbyInactivity = 0x00000068,
        MatchmakerInactivity = 0x00000069,
        InvalidGameOptions = 0x0000006a,
        NoServersAvailable = 0x0000006b,
        QuickmatchDisabled = 0x0000006c,
        TooManyGames = 0x0000006d,
        QuickchatLock = 0x0000006e,
        MatchmakerFull = 0x0000006f,
        Sanctions = 0x00000070,
        ServerError = 0x00000071,
        SelfPlatformLock = 0x00000072,
        DuplicateConnectionDetected = 0x00000073,
        TooManyRequests = 0x00000074,
        IntentionalLeaving = 0x000000d0,
        FocusLostBackground = 0x000000cf,
        FocusLost = 0x000000d1,
        NewConnection = 0x000000d2,
        PlatformParentalControlsBlock = 0x000000d3,
        PlatformUserBlock = 0x000000d4,
        PlatformFailedToGetUserBlock = 0x000000d5,
        ServerNotFound = 0x000000d6,
        ClientTimeout = 0x000000d7,
        ErrorAuthNonceFailure = 0x000000d8,
        Unknown = 0x000000ff,
    };

#else
    enum DisconnectReasons__Enum {
        DisconnectReasons__Enum_ExitGame = 0x00000000,
        DisconnectReasons__Enum_GameFull = 0x00000001,
        DisconnectReasons__Enum_GameStarted = 0x00000002,
        DisconnectReasons__Enum_GameNotFound = 0x00000003,
        DisconnectReasons__Enum_IncorrectVersion = 0x00000005,
        DisconnectReasons__Enum_Banned = 0x00000006,
        DisconnectReasons__Enum_Kicked = 0x00000007,
        DisconnectReasons__Enum_Custom = 0x00000008,
        DisconnectReasons__Enum_InvalidName = 0x00000009,
        DisconnectReasons__Enum_Hacking = 0x0000000a,
        DisconnectReasons__Enum_NotAuthorized = 0x0000000b,
        DisconnectReasons__Enum_ConnectionLimit = 0x0000000c,
        DisconnectReasons__Enum_Destroy = 0x00000010,
        DisconnectReasons__Enum_Error = 0x00000011,
        DisconnectReasons__Enum_IncorrectGame = 0x00000012,
        DisconnectReasons__Enum_ServerRequest = 0x00000013,
        DisconnectReasons__Enum_ServerFull = 0x00000014,
        DisconnectReasons__Enum_MismatchedVersion = 0x00000015,
        DisconnectReasons__Enum_InternalPlayerMissing = 0x00000064,
        DisconnectReasons__Enum_InternalNonceFailure = 0x00000065,
        DisconnectReasons__Enum_InternalConnectionToken = 0x00000066,
        DisconnectReasons__Enum_PlatformLock = 0x00000067,
        DisconnectReasons__Enum_LobbyInactivity = 0x00000068,
        DisconnectReasons__Enum_MatchmakerInactivity = 0x00000069,
        DisconnectReasons__Enum_InvalidGameOptions = 0x0000006a,
        DisconnectReasons__Enum_NoServersAvailable = 0x0000006b,
        DisconnectReasons__Enum_QuickmatchDisabled = 0x0000006c,
        DisconnectReasons__Enum_TooManyGames = 0x0000006d,
        DisconnectReasons__Enum_QuickchatLock = 0x0000006e,
        DisconnectReasons__Enum_MatchmakerFull = 0x0000006f,
        DisconnectReasons__Enum_Sanctions = 0x00000070,
        DisconnectReasons__Enum_ServerError = 0x00000071,
        DisconnectReasons__Enum_SelfPlatformLock = 0x00000072,
        DisconnectReasons__Enum_DuplicateConnectionDetected = 0x00000073,
        DisconnectReasons__Enum_TooManyRequests = 0x00000074,
        DisconnectReasons__Enum_IntentionalLeaving = 0x000000d0,
        DisconnectReasons__Enum_FocusLostBackground = 0x000000cf,
        DisconnectReasons__Enum_FocusLost = 0x000000d1,
        DisconnectReasons__Enum_NewConnection = 0x000000d2,
        DisconnectReasons__Enum_PlatformParentalControlsBlock = 0x000000d3,
        DisconnectReasons__Enum_PlatformUserBlock = 0x000000d4,
        DisconnectReasons__Enum_PlatformFailedToGetUserBlock = 0x000000d5,
        DisconnectReasons__Enum_ServerNotFound = 0x000000d6,
        DisconnectReasons__Enum_ClientTimeout = 0x000000d7,
        DisconnectReasons__Enum_ErrorAuthNonceFailure = 0x000000d8,
        DisconnectReasons__Enum_Unknown = 0x000000ff,
    };

#endif
#pragma endregion

#pragma region InnerNetClient

#if defined(_CPLUSPLUS_)
    enum class MatchMakerModes__Enum : int32_t {
        None = 0x00000000,
        Client = 0x00000001,
        HostAndClient = 0x00000002,
    };

#else
    enum MatchMakerModes__Enum {
        MatchMakerModes__Enum_None = 0x00000000,
        MatchMakerModes__Enum_Client = 0x00000001,
        MatchMakerModes__Enum_HostAndClient = 0x00000002,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class GameModes__Enum : uint8_t {
        None = 0x00,
        Normal = 0x01,
        HideNSeek = 0x02,
        NormalFools = 0x03,
        SeekFools = 0x04,
    };

#else
    enum GameModes__Enum {
        GameModes__Enum_None = 0x00,
        GameModes__Enum_Normal = 0x01,
        GameModes__Enum_HideNSeek = 0x02,
        GameModes__Enum_NormalFools = 0x03,
        GameModes__Enum_SeekFools = 0x04,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class NetworkModes__Enum : int32_t {
        LocalGame = 0x00000000,
        OnlineGame = 0x00000001,
        FreePlay = 0x00000002,
    };

#else
    enum NetworkModes__Enum {
        NetworkModes__Enum_LocalGame = 0x00000000,
        NetworkModes__Enum_OnlineGame = 0x00000001,
        NetworkModes__Enum_FreePlay = 0x00000002,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class InnerNetClient_GameStates__Enum : int32_t {
        NotJoined = 0x00000000,
        Joined = 0x00000001,
        Started = 0x00000002,
        Ended = 0x00000003,
    };

#else
    enum InnerNetClient_GameStates__Enum {
        InnerNetClient_GameStates__Enum_NotJoined = 0x00000000,
        InnerNetClient_GameStates__Enum_Joined = 0x00000001,
        InnerNetClient_GameStates__Enum_Started = 0x00000002,
        InnerNetClient_GameStates__Enum_Ended = 0x00000003,
    };

#endif

    struct InnerNetClient__Fields {
        struct MonoBehaviour__Fields _;
        float MinSendInterval;
        uint32_t NetIdCnt;
        float timer;
        struct AssetReference__Array* SpawnableObjects;
        struct InnerNetObject__Array* NonAddressableSpawnableObjects;
        bool InOnlineScene;
        struct HashSet_1_System_UInt32_* DestroyedObjects;
        struct List_1_InnerNet_InnerNetObject_* allObjects;
        struct Dictionary_2_System_UInt32_InnerNet_InnerNetObject_* allObjectsFast;
        struct MessageWriter__Array* Streams;
        int32_t msgNum;
        struct Logger_2* serverLogger;
        struct String* networkAddress;
        int32_t networkPort;
        bool useDtls;
        struct UnityUdpClientConnection* connection;
#if defined(_CPLUSPLUS_)
        MatchMakerModes__Enum mode;
#else
        int32_t mode;
#endif
#if defined(_CPLUSPLUS_)
        NetworkModes__Enum NetworkMode;
#else
        int32_t NetworkMode;
#endif
        int32_t GameId;
        int32_t HostId;
        int32_t ClientId;
        struct List_1_InnerNet_ClientData_* allClients;
        struct CircleBuffer_1_InnerNet_ClientData_* recentClients;
#if defined(_CPLUSPLUS_)
        DisconnectReasons__Enum LastDisconnectReason;
#else
        int32_t LastDisconnectReason;
#endif
        struct String* LastCustomDisconnect;
        uint8_t LastServerChatMode;
        struct HttpMatchmakerManager_MatchmakerError* LastMatchmakerError;
        struct List_1_System_Action_* PreSpawnDispatcher;
        struct List_1_System_Action_* Dispatcher;
        struct GameOptionsFactory* gameOptionsFactory;
        bool _IsGamePublic_k__BackingField;
#if defined(_CPLUSPLUS_)
        InnerNetClient_GameStates__Enum GameState;
#else
        int32_t GameState;
#endif
        bool isConnecting;
        bool platformSpecificsChecked;
        struct List_1_System_Action_* TempQueue;
        bool appPaused;
    };

    struct InnerNetClient {
        struct InnerNetClient__Class* klass;
        MonitorData* monitor;
        struct InnerNetClient__Fields fields;
    };

    struct InnerNetClient__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData Update;
        VirtualInvokeData OnApplicationPause;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData __unknown_7;
        VirtualInvokeData __unknown_8;
        VirtualInvokeData __unknown_9;
        VirtualInvokeData __unknown_10;
        VirtualInvokeData __unknown_11;
        VirtualInvokeData __unknown_12;
    };

    struct InnerNetClient__StaticFields {
        struct HashSet_1_DisconnectReasons_* DontBotherLoggingTheseDisconnectReasons;
        int32_t SecondsSuspendedBeforeDisconnect;
    };

    struct InnerNetClient__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InnerNetClient__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InnerNetClient__VTable vtable;
    };
#pragma endregion

#pragma region AmongUsClient

#if defined(_CPLUSPLUS_)
    enum class DiscoveryState__Enum : int32_t {
        Off = 0x00000000,
        Broadcast = 0x00000001,
    };

#else
    enum DiscoveryState__Enum {
        DiscoveryState__Enum_Off = 0x00000000,
        DiscoveryState__Enum_Broadcast = 0x00000001,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class CrossplayPrivilegeErrorType__Enum : int32_t {
        None = 0x00000000,
        Crossplay = 0x00000001,
        CrossplayCommunication = 0x00000002,
    };

#else
    enum CrossplayPrivilegeErrorType__Enum {
        CrossplayPrivilegeErrorType__Enum_None = 0x00000000,
        CrossplayPrivilegeErrorType__Enum_Crossplay = 0x00000001,
        CrossplayPrivilegeErrorType__Enum_CrossplayCommunication = 0x00000002,
    };

#endif

    struct AsyncOperationHandle_1_UnityEngine_GameObject_ {
        struct AsyncOperationBase_1_UnityEngine_GameObject_* m_InternalOp;
        int32_t m_Version;
        struct String* m_LocationName;
        bool m_UnloadSceneOpExcludeReleaseCallback;
    };

    struct AmongUsClient__Fields {
        struct InnerNetClient__Fields _;
        struct String* OnlineScene;
        struct String* MainMenuScene;
        struct GameData* GameDataPrefab;
        struct VoteBanSystem* VoteBanPrefab;
        struct PlayerControl* PlayerPrefab;
        struct List_1_UnityEngine_AddressableAssets_AssetReference_* ShipPrefabs;
        int32_t TutorialMapId;
        float SpawnRadius;
#if defined(_CPLUSPLUS_)
        DiscoveryState__Enum discoverState;
#else
        int32_t discoverState;
#endif
        struct List_1_IDisconnectHandler_* DisconnectHandlers;
        struct List_1_IGameListHandler_* GameListHandlers;
#if defined(_CPLUSPLUS_)
        CrossplayPrivilegeErrorType__Enum CrossplayPrivilegeError;
#else
        int32_t CrossplayPrivilegeError;
#endif
        int32_t MenuTarget;
        struct Logger_2* logger;
        struct AsyncOperationHandle_1_UnityEngine_GameObject_ ShipLoadingAsyncHandle;
    };

    struct AmongUsClient {
        struct AmongUsClient__Class* klass;
        MonitorData* monitor;
        struct AmongUsClient__Fields fields;
    };

    struct AmongUsClient__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData Update;
        VirtualInvokeData OnApplicationPause;
        VirtualInvokeData OnGameCreated;
        VirtualInvokeData OnGameJoined;
        VirtualInvokeData OnWaitForHost;
        VirtualInvokeData CoStartGame;
        VirtualInvokeData OnGameEnd;
        VirtualInvokeData OnBecomeHost;
        VirtualInvokeData OnPlayerJoined;
        VirtualInvokeData CoOnPlayerChangedScene;
        VirtualInvokeData OnPlayerLeft;
        VirtualInvokeData OnReportedPlayer;
        VirtualInvokeData OnDisconnected;
        VirtualInvokeData PreDisconnectInternal;
        VirtualInvokeData OnGetGameList;
    };

    struct AmongUsClient__StaticFields {
        struct AmongUsClient* Instance;
    };

    struct AmongUsClient__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmongUsClient__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmongUsClient__VTable vtable;
    };
#pragma endregion

#pragma region ClientData
    struct __declspec(align(4)) ClientData__Fields {
        int32_t Id;
        bool InScene;
        bool IsReady;
        bool HasBeenReported;
        bool IsBeingCreated;
        struct PlayerControl* Character;
        uint32_t PlayerLevel;
        struct PlatformSpecificData* PlatformData;
        struct String* PlayerName;
        struct String* ProductUserId;
        struct String* FriendCode;
        int32_t ColorId;
    };

    struct ClientData {
        struct ClientData__Class* klass;
        void* monitor;
        struct ClientData__Fields fields;
    };

    struct ClientData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ClientData__StaticFields {
    };

    struct ClientData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClientData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClientData__VTable vtable;
    };
#pragma endregion

#pragma region List_1_InnerNet_ClientData_
    WRAPPER_IL2CPP_LIST_2(InnerNet_ClientData, ClientData, struct ClientData*);
#pragma endregion

#pragma region LobbyBehaviour
    struct LobbyBehaviour__Fields {
        struct InnerNetObject__Fields _;
        struct AudioClip* SpawnSound;
        struct AnimationClip* SpawnInClip;
        struct Vector2__Array* SpawnPositions;
        struct AudioClip* DropShipSound;
        struct AudioClip* MapTheme;
        struct SkeldShipRoom__Array* AllRooms;
        struct Logger_2* logger;
        float lastFriendsCheckTime;
        float optionsTimer;
        int32_t currentExtensionId;
    };

    struct LobbyBehaviour {
        struct LobbyBehaviour__Class* klass;
        MonitorData* monitor;
        struct LobbyBehaviour__Fields fields;
    };

    struct LobbyBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct LobbyBehaviour__StaticFields {
        struct LobbyBehaviour* Instance;
    };

    struct LobbyBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LobbyBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LobbyBehaviour__VTable vtable;
    };
#pragma endregion

#pragma region NoShadowBehaviour
    struct NoShadowBehaviour__Fields {
        struct MonoBehaviour__Fields _;
        struct Renderer* rend;
        bool didHit;
        struct Renderer* shadowChild;
        struct Collider2D* hitOverride;
        void* bc;
        bool isBox;
        bool verticalBox;
        void* boxCheckPoints;
    };

    struct NoShadowBehaviour {
        struct NoShadowBehaviour__Class* klass;
        MonitorData* monitor;
        struct NoShadowBehaviour__Fields fields;
    };

    struct NoShadowBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NoShadowBehaviour__StaticFields {
    };

    struct NoShadowBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NoShadowBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NoShadowBehaviour__VTable vtable;
    };
#pragma endregion

#pragma region PolusShipStatus
    struct PolusShipStatus__Fields {
        struct ShipStatus__Fields _;
    };

    struct PolusShipStatus {
        struct PolusShipStatus__Class* klass;
        MonitorData* monitor;
        struct PolusShipStatus__Fields fields;
    };

    struct PolusShipStatus__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData OnEnable;
        VirtualInvokeData RepairCriticalSabotages;
        VirtualInvokeData Start;
        VirtualInvokeData SpawnPlayer;
        VirtualInvokeData OnMeetingCalled;
        VirtualInvokeData StartSFX;
        VirtualInvokeData PrespawnStep;
        VirtualInvokeData CalculateLightRadius;
    };

    struct PolusShipStatus__StaticFields {
    };

    struct PolusShipStatus__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PolusShipStatus__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PolusShipStatus__VTable vtable;
    };
#pragma endregion

#pragma region FungleShipStatus
    struct FungleShipStatus__Fields {
        struct ShipStatus__Fields _;
        void* sporeMushrooms;
        void* specialSabotage;
        void* startAMBSounds;
        void* staticWavesAsset;
        void* animatedWavesAsset;
        void* _Zipline_k__BackingField;
        struct Vector2 _LastBinocularPos_k__BackingField;
    };

    struct FungleShipStatus {
        Il2CppClass* klass;
        MonitorData* monitor;
        struct FungleShipStatus__Fields fields;
    };
#pragma endregion

#pragma region DoorBreakerGame
    struct DoorBreakerGame__Fields {
        struct Minigame__Fields _;
        struct OpenableDoor* MyDoor;
        struct SpriteRenderer__Array* Buttons;
        void* FlipSound;
    };

    struct DoorBreakerGame {
        struct DoorBreakerGame__Class* klass;
        MonitorData* monitor;
        struct DoorBreakerGame__Fields fields;
    };

    struct DoorBreakerGame__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SkipMultistageOverlayMenuSetup;
        VirtualInvokeData Begin;
        VirtualInvokeData Close;
        VirtualInvokeData CoAnimateOpen;
        VirtualInvokeData CoDestroySelf;
        VirtualInvokeData SetDoor;
    };

    struct DoorBreakerGame__StaticFields {
    };

    struct DoorBreakerGame__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DoorBreakerGame__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DoorBreakerGame__VTable vtable;
    };
#pragma endregion

#pragma region MushroomDoorSabotageMinigame
    struct MushroomDoorSabotageMinigame__Fields {
        struct Minigame__Fields _;
        struct FloatRange* mushroomInvisibleSeconds;
        struct FloatRange* mushroomVisibleSeconds;
        struct TextMeshPro* counterText;
        struct Transform__Array* spawnPoints;
        struct MushroomDoorSabotageMinigameMushroom__Array* mushroomVariants;
        struct OpenableDoor* myDoor;
        int32_t mushroomWhackCount;
        struct List_1_UnityEngine_Transform_* spawnPointBag;
        struct List_1_MushroomDoorSabotageMinigameMushroom_* mushrooms;
    };

    struct MushroomDoorSabotageMinigame {
        Il2CppClass* klass;
        MonitorData* monitor;
        struct MushroomDoorSabotageMinigame__Fields fields;
    };
#pragma endregion

#pragma region SabotageTask
    struct SabotageTask__Fields {
        struct PlayerTask__Fields _;
        bool didContribute;
        void* Arrows;
    };

    struct SabotageTask {
        struct SabotageTask__Class* klass;
        void* monitor;
        struct SabotageTask__Fields fields;
    };

    struct SabotageTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData OnRemove;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData GetMinigamePrefab;
    };

    struct SabotageTask__StaticFields {
    };

    struct SabotageTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SabotageTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SabotageTask__VTable vtable;
    };
#pragma endregion

#pragma region ElectricTask
    struct ElectricTask__Fields {
        struct SabotageTask__Fields _;
        bool isComplete;
        struct SwitchSystem* system;
        bool even;
    };

    struct ElectricTask {
        struct ElectricTask__Class* klass;
        void* monitor;
        struct ElectricTask__Fields fields;
    };

    struct ElectricTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TaskStep;
        VirtualInvokeData get_IsComplete;
        VirtualInvokeData Initialize;
        VirtualInvokeData OnRemove;
        VirtualInvokeData ValidConsole;
        VirtualInvokeData Complete;
        VirtualInvokeData AppendTaskText;
        VirtualInvokeData GetMinigamePrefab;
    };

    struct ElectricTask__StaticFields {
    };

    struct ElectricTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElectricTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElectricTask__VTable vtable;
    };
#pragma endregion

#pragma region DeadBody
    struct DeadBody__Fields {
        struct MonoBehaviour__Fields _;
        bool Reported;
        uint8_t ParentId;
        struct Collider2D* myCollider;
        struct SpriteRenderer* bloodSplatter;
        struct SpriteRenderer__Array* bodyRenderers;
    };

    struct DeadBody {
        struct DeadBody__Class* klass;
        void* monitor;
        struct DeadBody__Fields fields;
    };

    struct DeadBody__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeadBody__StaticFields {
    };

    struct DeadBody__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadBody__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadBody__VTable vtable;
    };
#pragma endregion

#pragma region DeadBody__Array
    WRAPPER_IL2CPP_ARRAY(DeadBody, struct DeadBody*);
#pragma endregion

#pragma region IRoleOptionsCollection
    struct IRoleOptionsCollection {
        struct IRoleOptionsCollection__Class* klass;
        MonitorData* monitor;
    };

    struct IRoleOptionsCollection__VTable {
        VirtualInvokeData GetNumPerGame;
        VirtualInvokeData GetChancePerGame;
        VirtualInvokeData SetRoleRate;
        VirtualInvokeData SetRoleRecommended;
    };

    struct IRoleOptionsCollection__StaticFields {
    };

    struct IRoleOptionsCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IRoleOptionsCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IRoleOptionsCollection__VTable vtable;
    };
#pragma endregion

#pragma region LogicOptions
    struct __declspec(align(4)) GameLogicComponent__Fields {
        struct GameManager* Manager;
        bool _IsDirty_k__BackingField;
    };

    struct LogicOptions__Fields {
        struct GameLogicComponent__Fields _;
        struct GameOptionsFactory* gameOptionsFactory;
    };

    struct LogicOptions {
        struct LogicOptions__Class* klass;
        MonitorData* monitor;
        struct LogicOptions__Fields fields;
    };

    struct LogicOptions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData OnPlayerDisconnect;
        VirtualInvokeData HandleRPC;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData GetAdjustedNumImpostors;
        VirtualInvokeData SetRecommendations;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData GetGhostsDoTasks;
        VirtualInvokeData GetEngineerCooldown;
        VirtualInvokeData GetEngineerInVentTime;
        VirtualInvokeData GetGuardianAngelCooldown;
        VirtualInvokeData GetShapeshifterDuration;
        VirtualInvokeData GetShapeshifterCooldown;
        VirtualInvokeData GetShapeshifterLeaveSkin;
        VirtualInvokeData GetScientistCooldown;
        VirtualInvokeData GetScientistBatteryCharge;
        VirtualInvokeData GetPhantomCooldown;
        VirtualInvokeData GetPhantomDuration;
        VirtualInvokeData GetTrackerCooldown;
        VirtualInvokeData GetTrackerDuration;
        VirtualInvokeData GetTrackerDelay;
        VirtualInvokeData GetNoisemakerImpostorAlert;
        VirtualInvokeData GetNoisemakerAlertDuration;
        VirtualInvokeData GetKillCooldown;
        VirtualInvokeData GetKillDistance;
        VirtualInvokeData GetPlayerSpeedMod;
        VirtualInvokeData GetConfirmImpostor;
        VirtualInvokeData GetEmergencyCooldown;
        VirtualInvokeData GetNumEmergencyMeetings;
        VirtualInvokeData GetVisualTasks;
        VirtualInvokeData GetAnonymousVotes;
        VirtualInvokeData GetTaskBarMode;
        VirtualInvokeData GetShowCrewmateNames;
    };

    struct LogicOptions__StaticFields {
    };

    struct LogicOptions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LogicOptions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LogicOptions__VTable vtable;
    };
#pragma endregion

#pragma region IGameOptions

#if defined(_CPLUSPLUS_)
    enum class TaskBarMode__Enum : int32_t {
        Normal = 0x00000000,
        MeetingOnly = 0x00000001,
        Invisible = 0x00000002,
    };

#else
    enum TaskBarMode__Enum {
        TaskBarMode__Enum_Normal = 0x00000000,
        TaskBarMode__Enum_MeetingOnly = 0x00000001,
        TaskBarMode__Enum_Invisible = 0x00000002,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class ByteOptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        MapId = 0x00000001,
    };

#else
    enum ByteOptionNames__Enum {
        ByteOptionNames__Enum_Invalid = 0x00000000,
        ByteOptionNames__Enum_MapId = 0x00000001,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class FloatOptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        KillCooldown = 0x00000001,
        PlayerSpeedMod = 0x00000002,
        ImpostorLightMod = 0x00000003,
        CrewLightMod = 0x00000004,
        CrewmateTimeInVent = 0x00000064,
        FinalEscapeTime = 0x00000065,
        EscapeTime = 0x00000066,
        SeekerFinalSpeed = 0x00000067,
        MaxPingTime = 0x00000068,
        CrewmateFlashlightSize = 0x00000069,
        ImpostorFlashlightSize = 0x0000006a,
        ShapeshifterCooldown = 0x000003e8,
        ShapeshifterDuration = 0x000003e9,
        ProtectionDurationSeconds = 0x0000044c,
        GuardianAngelCooldown = 0x0000044d,
        ScientistCooldown = 0x000004b0,
        ScientistBatteryCharge = 0x000004b1,
        EngineerCooldown = 0x00000514,
        EngineerInVentMaxTime = 0x00000515,
        PhantomCooldown = 0x000005dc,
        PhantomDuration = 0x000005dd,
        TrackerCooldown = 0x0000060e,
        TrackerDuration = 0x0000060f,
        TrackerDelay = 0x00000610,
        NoisemakerAlertDuration = 0x00000640,
    };

#else
    enum FloatOptionNames__Enum {
        FloatOptionNames__Enum_Invalid = 0x00000000,
        FloatOptionNames__Enum_KillCooldown = 0x00000001,
        FloatOptionNames__Enum_PlayerSpeedMod = 0x00000002,
        FloatOptionNames__Enum_ImpostorLightMod = 0x00000003,
        FloatOptionNames__Enum_CrewLightMod = 0x00000004,
        FloatOptionNames__Enum_CrewmateTimeInVent = 0x00000064,
        FloatOptionNames__Enum_FinalEscapeTime = 0x00000065,
        FloatOptionNames__Enum_EscapeTime = 0x00000066,
        FloatOptionNames__Enum_SeekerFinalSpeed = 0x00000067,
        FloatOptionNames__Enum_MaxPingTime = 0x00000068,
        FloatOptionNames__Enum_CrewmateFlashlightSize = 0x00000069,
        FloatOptionNames__Enum_ImpostorFlashlightSize = 0x0000006a,
        FloatOptionNames__Enum_ShapeshifterCooldown = 0x000003e8,
        FloatOptionNames__Enum_ShapeshifterDuration = 0x000003e9,
        FloatOptionNames__Enum_ProtectionDurationSeconds = 0x0000044c,
        FloatOptionNames__Enum_GuardianAngelCooldown = 0x0000044d,
        FloatOptionNames__Enum_ScientistCooldown = 0x000004b0,
        FloatOptionNames__Enum_ScientistBatteryCharge = 0x000004b1,
        FloatOptionNames__Enum_EngineerCooldown = 0x00000514,
        FloatOptionNames__Enum_EngineerInVentMaxTime = 0x00000515,
        FloatOptionNames__Enum_PhantomCooldown = 0x000005dc,
        FloatOptionNames__Enum_PhantomDuration = 0x000005dd,
        FloatOptionNames__Enum_TrackerCooldown = 0x0000060e,
        FloatOptionNames__Enum_TrackerDuration = 0x0000060f,
        FloatOptionNames__Enum_TrackerDelay = 0x00000610,
        FloatOptionNames__Enum_NoisemakerAlertDuration = 0x00000640,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class BoolOptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        VisualTasks = 0x00000001,
        GhostsDoTasks = 0x00000002,
        ConfirmImpostor = 0x00000003,
        AnonymousVotes = 0x00000004,
        IsDefaults = 0x00000005,
        UseFlashlight = 0x00000006,
        SeekerFinalVents = 0x00000007,
        SeekerFinalMap = 0x00000008,
        SeekerPings = 0x00000009,
        ShowCrewmateNames = 0x0000000a,
        Roles = 0x0000000b,
        ShapeshifterLeaveSkin = 0x000003e8,
        ImpostorsCanSeeProtect = 0x0000044c,
        NoisemakerImpostorAlert = 0x00000514,
    };

#else
    enum BoolOptionNames__Enum {
        BoolOptionNames__Enum_Invalid = 0x00000000,
        BoolOptionNames__Enum_VisualTasks = 0x00000001,
        BoolOptionNames__Enum_GhostsDoTasks = 0x00000002,
        BoolOptionNames__Enum_ConfirmImpostor = 0x00000003,
        BoolOptionNames__Enum_AnonymousVotes = 0x00000004,
        BoolOptionNames__Enum_IsDefaults = 0x00000005,
        BoolOptionNames__Enum_UseFlashlight = 0x00000006,
        BoolOptionNames__Enum_SeekerFinalVents = 0x00000007,
        BoolOptionNames__Enum_SeekerFinalMap = 0x00000008,
        BoolOptionNames__Enum_SeekerPings = 0x00000009,
        BoolOptionNames__Enum_ShowCrewmateNames = 0x0000000a,
        BoolOptionNames__Enum_Roles = 0x0000000b,
        BoolOptionNames__Enum_ShapeshifterLeaveSkin = 0x000003e8,
        BoolOptionNames__Enum_ImpostorsCanSeeProtect = 0x0000044c,
        BoolOptionNames__Enum_NoisemakerImpostorAlert = 0x00000514,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class Int32OptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        NumImpostors = 0x00000001,
        KillDistance = 0x00000002,
        NumEmergencyMeetings = 0x00000003,
        EmergencyCooldown = 0x00000004,
        DiscussionTime = 0x00000005,
        VotingTime = 0x00000006,
        MaxImpostors = 0x00000007,
        MinPlayers = 0x00000008,
        MaxPlayers = 0x00000009,
        NumCommonTasks = 0x0000000a,
        NumShortTasks = 0x0000000b,
        NumLongTasks = 0x0000000c,
        TaskBarMode = 0x0000000d,
        Tag = 0x0000000e,
        CrewmatesRemainingForVitals = 0x00000064,
        CrewmateVentUses = 0x00000065,
        ImpostorPlayerID = 0x00000066,
        RulePreset = 0x000000c8,
    };

#else
    enum Int32OptionNames__Enum {
        Int32OptionNames__Enum_Invalid = 0x00000000,
        Int32OptionNames__Enum_NumImpostors = 0x00000001,
        Int32OptionNames__Enum_KillDistance = 0x00000002,
        Int32OptionNames__Enum_NumEmergencyMeetings = 0x00000003,
        Int32OptionNames__Enum_EmergencyCooldown = 0x00000004,
        Int32OptionNames__Enum_DiscussionTime = 0x00000005,
        Int32OptionNames__Enum_VotingTime = 0x00000006,
        Int32OptionNames__Enum_MaxImpostors = 0x00000007,
        Int32OptionNames__Enum_MinPlayers = 0x00000008,
        Int32OptionNames__Enum_MaxPlayers = 0x00000009,
        Int32OptionNames__Enum_NumCommonTasks = 0x0000000a,
        Int32OptionNames__Enum_NumShortTasks = 0x0000000b,
        Int32OptionNames__Enum_NumLongTasks = 0x0000000c,
        Int32OptionNames__Enum_TaskBarMode = 0x0000000d,
        Int32OptionNames__Enum_Tag = 0x0000000e,
        Int32OptionNames__Enum_CrewmatesRemainingForVitals = 0x00000064,
        Int32OptionNames__Enum_CrewmateVentUses = 0x00000065,
        Int32OptionNames__Enum_ImpostorPlayerID = 0x00000066,
        Int32OptionNames__Enum_RulePreset = 0x000000c8,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class UInt32OptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        Keywords = 0x00000001,
    };

#else
    enum UInt32OptionNames__Enum {
        UInt32OptionNames__Enum_Invalid = 0x00000000,
        UInt32OptionNames__Enum_Keywords = 0x00000001,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class Int32ArrayOptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        MaxImpostors = 0x00000001,
        MinPlayers = 0x00000002,
    };

#else
    enum Int32ArrayOptionNames__Enum {
        Int32ArrayOptionNames__Enum_Invalid = 0x00000000,
        Int32ArrayOptionNames__Enum_MaxImpostors = 0x00000001,
        Int32ArrayOptionNames__Enum_MinPlayers = 0x00000002,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class FloatArrayOptionNames__Enum : int32_t {
        Invalid = 0x00000000,
        KillDistances = 0x00000001,
    };

#else
    enum FloatArrayOptionNames__Enum {
        FloatArrayOptionNames__Enum_Invalid = 0x00000000,
        FloatArrayOptionNames__Enum_KillDistances = 0x00000001,
    };

#endif

    struct IGameOptions {
        struct IGameOptions__Class* klass;
        MonitorData* monitor;
    };

    struct IGameOptions__VTable {
        VirtualInvokeData get_Version;
        VirtualInvokeData get_GameMode;
        VirtualInvokeData get_SpecialMode;
        VirtualInvokeData get_AprilFoolsOnMode;
        VirtualInvokeData get_AprilFoolsOffMode;
        VirtualInvokeData get_RulesPreset;
        VirtualInvokeData get_MaxPlayers;
        VirtualInvokeData get_Keywords;
        VirtualInvokeData get_MapId;
        VirtualInvokeData get_NumImpostors;
        VirtualInvokeData get_TotalTaskCount;
        VirtualInvokeData get_IsDefaults;
        VirtualInvokeData get_RoleOptions;
        VirtualInvokeData AreInvalid;
        VirtualInvokeData SetRecommendations;
        VirtualInvokeData SetRecommendations_1;
        VirtualInvokeData SetByte;
        VirtualInvokeData SetFloat;
        VirtualInvokeData SetBool;
        VirtualInvokeData SetInt;
        VirtualInvokeData SetUInt;
        VirtualInvokeData TryClearAprilFoolsMode;
        VirtualInvokeData GetByte;
        VirtualInvokeData GetFloat;
        VirtualInvokeData GetBool;
        VirtualInvokeData GetInt;
        VirtualInvokeData GetIntArray;
        VirtualInvokeData GetFloatArray;
        VirtualInvokeData TryGetByte;
        VirtualInvokeData TryGetFloat;
        VirtualInvokeData TryGetBool;
        VirtualInvokeData TryGetInt;
        VirtualInvokeData TryGetIntArray;
        VirtualInvokeData TryGetFloatArray;
    };

    struct IGameOptions__StaticFields {
    };

    struct IGameOptions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IGameOptions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IGameOptions__VTable vtable;
    };

#pragma endregion

#pragma region List_1_NetworkedPlayerInfo_
    WRAPPER_IL2CPP_LIST(NetworkedPlayerInfo, struct NetworkedPlayerInfo*);
#pragma endregion

#pragma region List_1_RoleTypes_
    WRAPPER_IL2CPP_LIST_2(AmongUs_GameOptions_RoleTypes, RoleTypes__Enum, RoleTypes__Enum);
#pragma endregion

#pragma region BinaryReader
    struct __declspec(align(4)) BinaryReader__Fields {
        void* m_stream;
        struct Byte__Array* m_buffer;
        void* m_decoder;
        void* m_charBytes;
        void* m_singleChar;
        void* m_charBuffer;
        int32_t m_maxCharsSize;
        bool m_2BytesPerChar;
        bool m_isMemoryStream;
        bool m_leaveOpen;
    };

    struct BinaryReader {
        struct BinaryReader__Class* klass;
        void* monitor;
        struct BinaryReader__Fields fields;
    };

    struct BinaryReader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_BaseStream;
        VirtualInvokeData Close;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData Read;
        VirtualInvokeData ReadBoolean;
        VirtualInvokeData ReadByte;
        VirtualInvokeData ReadSByte;
        VirtualInvokeData ReadChar;
        VirtualInvokeData ReadInt16;
        VirtualInvokeData ReadUInt16;
        VirtualInvokeData ReadInt32;
        VirtualInvokeData ReadUInt32;
        VirtualInvokeData ReadInt64;
        VirtualInvokeData ReadUInt64;
        VirtualInvokeData ReadSingle;
        VirtualInvokeData ReadDouble;
        VirtualInvokeData ReadDecimal;
        VirtualInvokeData ReadString;
        VirtualInvokeData ReadChars;
        VirtualInvokeData Read_1;
        VirtualInvokeData ReadBytes;
        VirtualInvokeData FillBuffer;
    };

    struct BinaryReader__StaticFields {
    };

    struct BinaryReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BinaryReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BinaryReader__VTable vtable;
    };
#pragma endregion

#pragma region PlainDoor

    struct SomeKindaDoor__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct OpenableDoor__Fields {
        struct SomeKindaDoor__Fields _;
        int32_t Id;
#if defined(_CPLUSPLUS_)
        SystemTypes__Enum Room;
#else
        uint8_t Room;
#endif
    };

    struct OpenableDoor {
        Il2CppClass* klass;
        MonitorData* monitor;
        struct OpenableDoor__Fields fields;
    };

    struct PlainDoor__Fields {
        struct OpenableDoor__Fields _;
        bool Open;
        void* myCollider;
        struct Collider2D* shadowCollider;
        void* animator;
        void* OpenDoorAnim;
        void* CloseDoorAnim;
        void* OpenSound;
        void* CloseSound;
        float size;
    };

    struct PlainDoor {
        Il2CppClass* klass;
        MonitorData* monitor;
        struct PlainDoor__Fields fields;
    };

    struct MushroomWallDoor__Fields {
        struct OpenableDoor__Fields _;
        void* wallCollider;
        struct Collider2D* shadowColl;
        struct Collider2D* bottomColl;
        void* mushrooms;
        void* openSound;
        void* closeSound;
        bool open;
        bool allowAudio;
    };

    struct MushroomWallDoor {
        Il2CppClass* klass;
        MonitorData* monitor;
        struct MushroomWallDoor__Fields fields;
    };
#pragma endregion

#pragma region AutoOpenDoor
    struct AutoOpenDoor__Fields {
        struct PlainDoor__Fields _;
        float ClosedTimer;
        float CooldownTimer;
    };

    struct AutoOpenDoor {
        struct AutoOpenDoor__Class* klass;
        void* monitor;
        struct AutoOpenDoor__Fields fields;
    };

    struct AutoOpenDoor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetDoorway;
        VirtualInvokeData get_IsOpen;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData DoUpdate;
        VirtualInvokeData Start;
    };

    struct AutoOpenDoor__StaticFields {
    };

    struct AutoOpenDoor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AutoOpenDoor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AutoOpenDoor__VTable vtable;
    };
#pragma endregion

#pragma region Vent
    struct Vent__Fields {
        struct MonoBehaviour__Fields _;
        int32_t Id;
        struct Vent* Left;
        struct Vent* Right;
        struct Vent* Center;
        struct ButtonBehavior__Array* Buttons;
        struct GameObject__Array* CleaningIndicators;
        struct AnimationClip* EnterVentAnim;
        struct AnimationClip* ExitVentAnim;
        struct Vector3 Offset;
        float spreadAmount;
        float spreadShift;
        struct SpriteRenderer* myRend;
        struct SpriteAnim* myAnim;
        int32_t numFramesUntilPlayerDisappearsOnEnter;
        int32_t numFramesUntilPlayerReappearsOnExit;
        struct GameObject* additionalExitAnimation;
    };

    struct Vent {
        struct Vent__Class* klass;
        void* monitor;
        struct Vent__Fields fields;
    };

    struct Vent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UsableDistance;
        VirtualInvokeData get_PercentCool;
        VirtualInvokeData get_UseIcon;
        VirtualInvokeData SetOutline;
        VirtualInvokeData CanUse;
        VirtualInvokeData Use;
    };

    struct Vent__StaticFields {
        struct Vent* currentVent;
    };

    struct Vent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Vent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Vent__VTable vtable;
    };
#pragma endregion

#pragma region NormalPlayerTask

#if defined(_CPLUSPLUS_)
    enum class NormalPlayerTask_TaskLength__Enum : int32_t {
        None = 0x00000000,
        Common = 0x00000001,
        Short = 0x00000002,
        Long = 0x00000003,
    };

#else
    enum NormalPlayerTask_TaskLength__Enum {
        NormalPlayerTask_TaskLength__Enum_None = 0x00000000,
        NormalPlayerTask_TaskLength__Enum_Common = 0x00000001,
        NormalPlayerTask_TaskLength__Enum_Short = 0x00000002,
        NormalPlayerTask_TaskLength__Enum_Long = 0x00000003,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class NormalPlayerTask_TimerState__Enum : int32_t {
        NotStarted = 0x00000000,
        Started = 0x00000001,
        Finished = 0x00000002,
    };

#else
    enum NormalPlayerTask_TimerState__Enum {
        NormalPlayerTask_TimerState__Enum_NotStarted = 0x00000000,
        NormalPlayerTask_TimerState__Enum_Started = 0x00000001,
        NormalPlayerTask_TimerState__Enum_Finished = 0x00000002,
    };

#endif

    struct NormalPlayerTask__Fields {
        struct PlayerTask__Fields _;
#if defined(_CPLUSPLUS_)
        NormalPlayerTask_TaskLength__Enum Length;
#else
        int32_t Length;
#endif
        int32_t taskStep;
        int32_t MaxStep;
        bool ShowTaskStep;
        bool ShowTaskTimer;
#if defined(_CPLUSPLUS_)
        NormalPlayerTask_TimerState__Enum TimerStarted;
#else
        int32_t TimerStarted;
#endif
        float TaskTimer;
        struct Byte__Array* Data;
        struct ArrowBehaviour* Arrow;
        bool useMultipleText;
        int32_t maxNumStepsStage1;
#if defined(_CPLUSPLUS_)
        StringNames__Enum textStage1;
#else
        int32_t textStage1;
#endif
#if defined(_CPLUSPLUS_)
        StringNames__Enum textStage2;
#else
        int32_t textStage2;
#endif
        bool arrowSuspended;
    };

    struct NormalPlayerTask {
        struct NormalPlayerTask__Class* klass;
        void* monitor;
        struct NormalPlayerTask__Fields fields;
    };

    struct NormalPlayerTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TaskStep;
        VirtualInvokeData get_IsComplete;
        VirtualInvokeData Initialize;
        VirtualInvokeData OnRemove;
        VirtualInvokeData ValidConsole;
        VirtualInvokeData Complete;
        VirtualInvokeData AppendTaskText;
        VirtualInvokeData GetMinigamePrefab;
        VirtualInvokeData UpdateArrowAndLocation;
        VirtualInvokeData FixedUpdate;
    };

    struct NormalPlayerTask__StaticFields {
    };

    struct NormalPlayerTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NormalPlayerTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NormalPlayerTask__VTable vtable;
    };
#pragma endregion

#pragma region Palette
    struct Palette {
        struct Palette__Class* klass;
        MonitorData* monitor;
    };

    struct Palette__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Palette__StaticFields {
        struct Color AcceptedGreen;
        struct Color DisabledGrey;
        struct Color DisabledClear;
        struct Color EnabledColor;
        struct Color Black;
        struct Color ClearWhite;
        struct Color HalfWhite;
        struct Color White_75Alpha;
        struct Color White;
        struct Color LightBlue;
        struct Color Blue;
        struct Color Orange;
        struct Color Purple;
        struct Color Brown;
        struct Color CrewmateBlue;
        struct Color ImpostorRed;
        struct Color CrewmateRoleBlue;
        struct Color CrewmateRoleHeaderBlue;
        struct Color CrewmateRoleHeaderTextBlue;
        struct Color CrewmateRoleHeaderDarkBlue;
        struct Color CrewmateRoleHeaderVeryDarkBlue;
        struct Color CrewmateSettingChangeText;
        struct Color ImpostorRoleRed;
        struct Color ImpostorRoleHeaderRed;
        struct Color ImpostorRoleHeaderTextRed;
        struct Color ImpostorRoleHeaderDarkRed;
        struct Color ImpostorRoleHeaderVeryDarkRed;
        struct Color CosmicubeCellUnlockedColor;
        struct Color CosmicubeCellLockedColor;
        struct Color CosmicubeQuality_NamePlate;
        struct Color CosmicubeQuality_Hat;
        struct Color CosmicubeQuality_Visor;
        struct Color CosmicubeQuality_Skin;
        struct Color CosmicubeQuality_Pet;
        struct Color CosmicubeQuality_Kill;
        struct Color InventorySelectedTextColor;
        struct Color InventoryTextColor;
        struct Color LogSuccessColor;
        struct Color LogWarningColor;
        struct Color LogErrorColor;
        struct StringNames__Enum__Array* ColorNames;
        struct Color32__Array* PlayerColors;
        struct Color32__Array* ShadowColors;
        struct Color32__Array* TextColors;
        struct Color32__Array* TextOutlineColors;
        struct Color32 VisorColor;
    };

    struct Palette__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Palette__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Palette__VTable vtable;
    };
#pragma endregion

#pragma region SaveManager

#if defined(_CPLUSPLUS_)
    enum class ControlTypes__Enum : int32_t {
        VirtualJoystick = 0x00000000,
        ScreenJoystick = 0x00000001,
        Keyboard = 0x00000002,
        Controller = 0x00000003,
    };

#else
    enum ControlTypes__Enum {
        ControlTypes__Enum_VirtualJoystick = 0x00000000,
        ControlTypes__Enum_ScreenJoystick = 0x00000001,
        ControlTypes__Enum_Keyboard = 0x00000002,
        ControlTypes__Enum_Controller = 0x00000003,
    };

#endif

    struct SaveManager {
        Il2CppClass* klass;
        MonitorData* monitor;
    };
#pragma endregion

#pragma region DestroyableSingleton_1_RoleManager_
    struct DestroyableSingleton_1_RoleManager___Fields {
        struct MonoBehaviour__Fields _;
        bool DontDestroy;
    };

    struct DestroyableSingleton_1_RoleManager_ {
        struct DestroyableSingleton_1_RoleManager___Class* klass;
        void* monitor;
        struct DestroyableSingleton_1_RoleManager___Fields fields;
    };

    struct DestroyableSingleton_1_RoleManager___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct DestroyableSingleton_1_RoleManager___StaticFields {
        struct RoleManager* _instance;
    };

    struct DestroyableSingleton_1_RoleManager___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyableSingleton_1_RoleManager___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyableSingleton_1_RoleManager___VTable vtable;
    };
#pragma endregion

#pragma region EngineerRole
    struct EngineerRole__Fields {
        struct RoleBehaviour__Fields _;
        struct Vent* currentTarget;
        float cooldownSecondsRemaining;
        float inVentTimeRemaining;
        int32_t usesRemaining;
        bool isExitVentQueued;
    };

    struct EngineerRole {
        struct EngineerRole__Class* klass;
        void* monitor;
        struct EngineerRole__Fields fields;
    };

    struct EngineerRole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDead;
        VirtualInvokeData get_IsAffectedByComms;
        VirtualInvokeData CanUse;
        VirtualInvokeData DidWin;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData SpawnTaskHeader;
        VirtualInvokeData UseAbility;
        VirtualInvokeData OnMeetingStart;
        VirtualInvokeData OnVotingComplete;
        VirtualInvokeData OnDeath;
        VirtualInvokeData Initialize;
        VirtualInvokeData SetUsableTarget;
        VirtualInvokeData SetPlayerTarget;
        VirtualInvokeData SetCooldown;
        VirtualInvokeData IsValidTarget;
        VirtualInvokeData FindClosestTarget;
        VirtualInvokeData GetAbilityDistance;
        VirtualInvokeData AdjustTasks;
        VirtualInvokeData AppendTaskHint;
    };

    struct EngineerRole__StaticFields {
    };

    struct EngineerRole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EngineerRole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EngineerRole__VTable vtable;
    };
#pragma endregion

#pragma region RoleManager
    struct RoleManager__Fields {
        struct DestroyableSingleton_1_RoleManager___Fields _;
        void* AllRoles;
        struct RoleEffectAnimation* shapeshiftAnim;
        struct RoleEffectAnimation* protectAnim;
        struct RoleEffectAnimation* protectLoopAnim;
        struct RoleEffectAnimation* vanish_ChargeAnim;
        struct RoleEffectAnimation* vanish_PoofAnim;
        struct RoleEffectAnimation* appear_PoofAnim;
    };

    struct RoleManager {
        struct RoleManager__Class* klass;
        void* monitor;
        struct RoleManager__Fields fields;
    };

    struct RoleManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct RoleManager__StaticFields {
        void* GhostRoles;
    };

    struct RoleManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RoleManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RoleManager__VTable vtable;
    };

#pragma endregion

#pragma region AccountManager
#if defined(_CPLUSPLUS_)
    enum class KWSPermissionStatus__Enum : int32_t {
        Granted = 0x00000000,
        Rejected = 0x00000001,
        Pending = 0x00000002,
    };

#else
    enum KWSPermissionStatus__Enum {
        KWSPermissionStatus__Enum_Granted = 0x00000000,
        KWSPermissionStatus__Enum_Rejected = 0x00000001,
        KWSPermissionStatus__Enum_Pending = 0x00000002,
    };

#endif

#if defined(_CPLUSPLUS_)
    enum class EOSManager_AccountLoginStatus__Enum : int32_t {
        Offline = 0x00000000,
        LoggedIn = 0x00000001,
        WaitingForParent = 0x00000002,
        TempAccount = 0x00000003,
    };

#else
    enum EOSManager_AccountLoginStatus__Enum {
        EOSManager_AccountLoginStatus__Enum_Offline = 0x00000000,
        EOSManager_AccountLoginStatus__Enum_LoggedIn = 0x00000001,
        EOSManager_AccountLoginStatus__Enum_WaitingForParent = 0x00000002,
        EOSManager_AccountLoginStatus__Enum_TempAccount = 0x00000003,
    };

#endif

    struct DestroyableSingleton_1_AccountManager___Fields {
        struct MonoBehaviour__Fields _;
        bool DontDestroy;
    };

    struct AccountManager__Fields {
        struct DestroyableSingleton_1_AccountManager___Fields _;
        struct AccountTab* accountTab;
        struct GameObject* accountWindow;
        struct PermissionsRequest* enterGuardianEmailWindow;
        struct UpdateGuardianEmail* updateGuardianEmailWindow;
        struct InfoTextBox* guardianEmailConfirmWindow;
        struct InfoTextBox* genericInfoDisplayBox;
        struct AgeGateScreen* enterDateOfBirthScreen;
        struct GameObject* waitingText;
        struct GameObject* postLoadWaiting;
        struct GameObject* privacyPolicyBg;
        struct SignInScreen* signInScreen;
        struct PrivacyPolicyScreen* PrivacyPolicy;
        struct IChatModeDisplay* chatModeMenuScreen;
#if defined(_CPLUSPLUS_)
        KWSPermissionStatus__Enum freeChatAllowed;
#else
        int32_t freeChatAllowed;
#endif
#if defined(_CPLUSPLUS_)
        KWSPermissionStatus__Enum customDisplayName;
#else
        int32_t customDisplayName;
#endif
#if defined(_CPLUSPLUS_)
        KWSPermissionStatus__Enum friendsListAllowed;
#else
        int32_t friendsListAllowed;
#endif
#if defined(_CPLUSPLUS_)
        KWSPermissionStatus__Enum accountLinkingAllowed;
#else
        int32_t accountLinkingAllowed;
#endif
        struct Action* OnLoggedInStatusChange;
#if defined(_CPLUSPLUS_)
        EOSManager_AccountLoginStatus__Enum prevLoggedInStatus;
#else
        int32_t prevLoggedInStatus;
#endif
        struct TextMeshPro* accountDeletionText;
        bool isAccountWaitingForDeletion;
    };

    struct AccountManager {
        void* klass;
        MonitorData* monitor;
        struct AccountManager__Fields fields;
    };

    //sicko
    struct AccountManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct AccountManager__StaticFields {
        struct AccountManager* Instance;
    };

    struct AccountManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AccountManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AccountManager__VTable vtable;
    };
#pragma endregion

#pragma region PlayerStorageManager
    struct DestroyableSingleton_1_PlayerStorageManager___Fields {
        struct MonoBehaviour__Fields _;
        bool DontDestroy;
    };

    struct PlayerStorageManager_CloudPlayerPrefs {
        struct String* ActivePodType;
        struct String* receiptRedemptionAccounts;
        uint32_t PlatformsLimitedItemsValidated;
        uint32_t IsAdult;
    };

#if defined(_CPLUSPLUS_)
    enum class UpdateState__Enum : int32_t {
        Connecting = 0x00000000,
        Failed = 0x00000001,
        Success = 0x00000002,
        PartialSuccess = 0x00000003,
    };

#else
    enum UpdateState__Enum {
        UpdateState__Enum_Connecting = 0x00000000,
        UpdateState__Enum_Failed = 0x00000001,
        UpdateState__Enum_Success = 0x00000002,
        UpdateState__Enum_PartialSuccess = 0x00000003,
    };

#endif

    struct PlayerStorageManager__Fields {
        struct DestroyableSingleton_1_PlayerStorageManager___Fields _;
        struct PlayerStorageManager_CloudPlayerPrefs _PlayerPrefs_k__BackingField;
#if defined(_CPLUSPLUS_)
        UpdateState__Enum _PlayerStorageLoadState_k__BackingField;
#else
        int32_t _PlayerStorageLoadState_k__BackingField;
#endif
        void* playerStorage;
        void* saveRoutine;
    };

    struct PlayerStorageManager {
        void* klass;
        MonitorData* monitor;
        struct PlayerStorageManager__Fields fields;
    };
#pragma endregion

#pragma region AchievementManager
    WRAPPER_IL2CPP_LIST_2(AmongUs_GameOptions_GameModes, GameModes__Enum, GameModes__Enum);

    WRAPPER_IL2CPP_DICTIONARY(System_String, List_1_AmongUs_GameOptions_GameModes, \
        struct String*, struct List_1_AmongUs_GameOptions_GameModes_*);

    struct AchievementManager_1__Fields {
        void* _;
        struct Logger_2* logger;
        bool gameStarted;
#if defined(_CPLUSPLUS_)
        RoleTypes__Enum myRole;
#else
        uint16_t myRole;
#endif
        int32_t cardSwipesThisMatch;
        int32_t ventsUsedThisMatch;
        bool meetingCalledThisMatch;
        int32_t killsThisMatch;
        bool sabotageCalledLocally;
        int32_t timesVoted;
        int32_t timesVotedForImp;
        int32_t winMap;
        struct Dictionary_2_System_String_List_1_AchievementManager_AchievementProgressValue_* statName2AchievementProgressValues;
    };

    struct AchievementManager_1 {
        struct AchievementManager_1__Class* klass;
        MonitorData* monitor;
        struct AchievementManager_1__Fields fields;
    };

    struct AchievementManager_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct AchievementManager_1__StaticFields {
        struct Dictionary_2_System_String_List_1_AmongUs_GameOptions_GameModes_* AchievementGameModeKey;
        struct Dictionary_2_System_String_List_1_AmongUs_GameOptions_GameModes_* StatsGameModeKey;
    };

    struct AchievementManager_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AchievementManager_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AchievementManager_1__VTable vtable;
    };
#pragma endregion

    //sicko
#pragma region VoteBanSystem
    struct VoteBanSystem__Fields {
        struct InnerNetObject__Fields _;
        struct Dictionary_2_System_Int32_System_Int32__1* Votes;
    };

    struct VoteBanSystem {
        struct VoteBanSystem__Class* klass;
        MonitorData* monitor;
        struct VoteBanSystem__Fields fields;
    };

    struct VoteBanSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
    };

    struct VoteBanSystem__StaticFields {
        struct VoteBanSystem* Instance;
    };

    struct VoteBanSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VoteBanSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VoteBanSystem__VTable vtable;
    };
#pragma endregion

#pragma region KillButton
    struct KillButton__Fields {
        void* _;
        struct PlayerControl* currentTarget;
    };

    struct KillButton {
        struct KillButton__Class* klass;
        MonitorData* monitor;
        struct KillButton__Fields fields;
    };

    struct KillButton__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData DoClick;
    };

    struct KillButton__StaticFields {
    };

    struct KillButton__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KillButton__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KillButton__VTable vtable;
    };
#pragma endregion

#pragma region DestroyableSingleton_1_GameStartManager_
    struct DestroyableSingleton_1_GameStartManager___Fields {
        struct MonoBehaviour__Fields _;
        bool DontDestroy;
    };

    struct DestroyableSingleton_1_GameStartManager_ {
        struct DestroyableSingleton_1_GameStartManager___Class* klass;
        MonitorData* monitor;
        struct DestroyableSingleton_1_GameStartManager___Fields fields;
    };

#if defined(_CPLUSPLUS_)
    enum class GameStartManager_StartingStates__Enum : int32_t {
        NotStarting = 0x00000000,
        Countdown = 0x00000001,
        Starting = 0x00000002,
    };

#else
    enum GameStartManager_StartingStates__Enum {
        GameStartManager_StartingStates__Enum_NotStarting = 0x00000000,
        GameStartManager_StartingStates__Enum_Countdown = 0x00000001,
        GameStartManager_StartingStates__Enum_Starting = 0x00000002,
    };

#endif
#pragma endregion

#pragma region GameManager
    struct GameManager__Fields {
        struct InnerNetObject__Fields _;
        struct GameSettingsCategoryList* gameSettingsList;
        struct Dictionary_2_StringNames_BaseGameSetting_* AllGameSettingData;
        bool _ShouldCheckForGameEnd_k__BackingField;
        bool _GameHasStarted_k__BackingField;
        struct LogicGameFlow* _LogicFlow_k__BackingField;
        struct LogicMinigame* _LogicMinigame_k__BackingField;
        struct LogicRoleSelection* _LogicRoleSelection_k__BackingField;
        struct LogicUsables* _LogicUsables_k__BackingField;
        struct LogicOptions* _LogicOptions_k__BackingField;
        struct DeadBody* deadBodyPrefab;
        struct Logger_2* logger;
        struct List_1_GameLogicComponent_* LogicComponents;
    };

    struct GameManager {
        struct GameManager__Class* klass;
        MonitorData* monitor;
        struct GameManager__Fields fields;
    };

    struct GameManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_IsDirty;
        VirtualInvokeData get_Chunked;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleRpc;
        VirtualInvokeData Serialize;
        VirtualInvokeData Deserialize;
        VirtualInvokeData get_IsPersistent;
        VirtualInvokeData HandleDisconnect;
        VirtualInvokeData HandleDisconnect_1;
        VirtualInvokeData get_DeadBodyPrefab;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData StartGame;
        VirtualInvokeData EndGame;
        VirtualInvokeData OnPlayerDeath;
        VirtualInvokeData FinishTask;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData OnPlayerDisconnect;
        VirtualInvokeData DidHumansWin;
        VirtualInvokeData DidImpostorsWin;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData CanReportBodies;
        VirtualInvokeData SabotagesEnabled;
        VirtualInvokeData ShowCrewmatesKilled;
        VirtualInvokeData get_RevealTeams;
        VirtualInvokeData IsNormal;
        VirtualInvokeData IsHideAndSeek;
        VirtualInvokeData SetSpecialCosmetics;
    };

    struct GameManager__StaticFields {
        struct GameManager* _Instance_k__BackingField;
    };

    struct GameManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameManager__VTable vtable;
    };
#pragma endregion

#pragma region VentilationSystem_Operation__Enum
#if defined(_CPLUSPLUS_)
    enum class VentilationSystem_Operation__Enum : int32_t {
        StartCleaning = 0x00000000,
        StopCleaning = 0x00000001,
        Enter = 0x00000002,
        Exit = 0x00000003,
        Move = 0x00000004,
        BootImpostors = 0x00000005,
    };

#else
    enum VentilationSystem_Operation__Enum {
        VentilationSystem_Operation__Enum_StartCleaning = 0x00000000,
        VentilationSystem_Operation__Enum_StopCleaning = 0x00000001,
        VentilationSystem_Operation__Enum_Enter = 0x00000002,
        VentilationSystem_Operation__Enum_Exit = 0x00000003,
        VentilationSystem_Operation__Enum_Move = 0x00000004,
        VentilationSystem_Operation__Enum_BootImpostors = 0x00000005,
    };
#endif
#pragma endregion

#pragma region Platforms__Enum
#if defined(_CPLUSPLUS_)
    enum class Platforms__Enum : int32_t {
        Unknown = 0x00000000,
        StandaloneEpicPC = 0x00000001,
        StandaloneSteamPC = 0x00000002,
        StandaloneMac = 0x00000003,
        StandaloneWin10 = 0x00000004,
        StandaloneItch = 0x00000005,
        IPhone = 0x00000006,
        Android = 0x00000007,
        Switch = 0x00000008,
        Xbox = 0x00000009,
        Playstation = 0x0000000a,
    };

#else
    enum Platforms__Enum {
        Platforms__Enum_Unknown = 0x00000000,
        Platforms__Enum_StandaloneEpicPC = 0x00000001,
        Platforms__Enum_StandaloneSteamPC = 0x00000002,
        Platforms__Enum_StandaloneMac = 0x00000003,
        Platforms__Enum_StandaloneWin10 = 0x00000004,
        Platforms__Enum_StandaloneItch = 0x00000005,
        Platforms__Enum_IPhone = 0x00000006,
        Platforms__Enum_Android = 0x00000007,
        Platforms__Enum_Switch = 0x00000008,
        Platforms__Enum_Xbox = 0x00000009,
        Platforms__Enum_Playstation = 0x0000000a,
    };

#endif
#pragma endregion

#pragma region PlatformSpecificData
    struct __declspec(align(4)) PlatformSpecificData__Fields {
#if defined(_CPLUSPLUS_)
        Platforms__Enum Platform;
#else
        int32_t Platform;
#endif
        struct String* PlatformName;
        uint64_t XboxPlatformId;
        uint64_t PsnPlatformId;
    };

    struct PlatformSpecificData {
        struct PlatformSpecificData__Class* klass;
        MonitorData* monitor;
        struct PlatformSpecificData__Fields fields;
    };

    struct PlatformSpecificData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlatformSpecificData__StaticFields {
    };

    struct PlatformSpecificData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlatformSpecificData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlatformSpecificData__VTable vtable;
    };
#pragma endregion

#pragma region GameStartManager
    struct GameStartManager__Fields {
        struct DestroyableSingleton_1_GameStartManager___Fields _;
        struct List_1_MapIconByName_* AllMapIcons;
        struct IGameOptions* cachedData;
        int32_t MinPlayers;
        struct TextMeshPro* PlayerCounter;
        int32_t LastPlayerCount;
        struct GameObject* GameSizePopup;
        struct GameObject* GameRoomButton;
        struct GameObject* RoomCodeHeader;
        struct GameObject* LocalLabel;
        struct TextMeshPro* GameRoomNameCode;
        struct SpriteRenderer* MapImage;
        struct LobbyBehaviour* LobbyPrefab;
        struct GameObject* GameStartTextParent;
        struct TextMeshPro* GameStartText;
        struct SpriteRenderer* StartButtonClient;
        struct TextMeshPro* GameStartTextClient;
        struct ActionMapGlyphDisplay* StartButtonGlyph;
        struct GameObject* StartButtonGlyphContainer;
        struct TextMeshPro* RulesPresetText;
        struct GameObject* HostInfoPanelButtons;
        struct GameObject* ClientInfoPanelButtons;
        struct TextMeshPro* privatePublicPanelText;
        struct SpriteRenderer* ShareOnDiscordButton;
        struct GameObject* InviteFriendsButton;
#if defined(_CPLUSPLUS_)
        GameStartManager_StartingStates__Enum startState;
#else
        int32_t startState;
#endif
        float countDownTimer;
        struct PassiveButton* StartButton;
        struct GameObject* RulesViewPanel;
        struct GameObject* RulesEditPanel;
        struct HostInfoPanel* HostInfoPanel;
        struct PassiveButton* EditButton;
        struct Vector3 GameOptionsPosition;
        struct GameObject* PlayerOptionsMenu;
        struct GameObject* HostPrivacyButtons;
        struct PassiveButton* HostPublicButton;
        struct PassiveButton* HostPrivateButton;
        struct GameObject* ClientPrivacyValue;
        struct LobbyInfoPane* LobbyInfoPane;
        struct AudioClip* lobbyViewPanelOpenSound;
        struct AudioClip* lobbyViewPanelCloseSound;
        struct AudioClip* gameStartSound;
        struct PassiveButton* HostViewButton;
        struct PassiveButton* ClientViewButton;
    };

    struct GameStartManager {
        struct GameStartManager__Class* klass;
        MonitorData* monitor;
        struct GameStartManager__Fields fields;
    };
#pragma endregion

#pragma region GameOverReason__Enum
#if defined(_CPLUSPLUS_)
    enum class GameOverReason__Enum : int32_t {
        CrewmatesByVote = 0x00000000,
        CrewmatesByTask = 0x00000001,
        ImpostorsByVote = 0x00000002,
        ImpostorsByKill = 0x00000003,
        ImpostorsBySabotage = 0x00000004,
        ImpostorDisconnect = 0x00000005,
        CrewmateDisconnect = 0x00000006,
        HideAndSeek_CrewmatesByTimer = 0x00000007,
        HideAndSeek_ImpostorsByKills = 0x00000008,
    };

#else
    enum GameOverReason__Enum {
        GameOverReason__Enum_CrewmatesByVote = 0x00000000,
        GameOverReason__Enum_CrewmatesByTask = 0x00000001,
        GameOverReason__Enum_ImpostorsByVote = 0x00000002,
        GameOverReason__Enum_ImpostorsByKill = 0x00000003,
        GameOverReason__Enum_ImpostorsBySabotage = 0x00000004,
        GameOverReason__Enum_ImpostorDisconnect = 0x00000005,
        GameOverReason__Enum_CrewmateDisconnect = 0x00000006,
        GameOverReason__Enum_HideAndSeek_CrewmatesByTimer = 0x00000007,
        GameOverReason__Enum_HideAndSeek_ImpostorsByKills = 0x00000008,
    };

#endif
#pragma endregion

#pragma region ScientistRole
    struct ScientistRole__Fields {
        struct RoleBehaviour__Fields _;
        struct VitalsMinigame* VitalsPrefab;
        struct VitalsMinigame* minigame;
        float currentCharge;
        float currentCooldown;
    };

    struct ScientistRole {
        struct ScientistRole__Class* klass;
        MonitorData* monitor;
        struct ScientistRole__Fields fields;
    };

    struct ScientistRole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDead;
        VirtualInvokeData get_IsAffectedByComms;
        VirtualInvokeData CanUse;
        VirtualInvokeData DidWin;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData SpawnTaskHeader;
        VirtualInvokeData UseAbility;
        VirtualInvokeData OnVotingComplete;
        VirtualInvokeData Initialize;
        VirtualInvokeData SetUsableTarget;
        VirtualInvokeData SetPlayerTarget;
        VirtualInvokeData SetCooldown;
        VirtualInvokeData IsValidTarget;
        VirtualInvokeData FindClosestTarget;
        VirtualInvokeData GetAbilityDistance;
        VirtualInvokeData AdjustTasks;
        VirtualInvokeData AppendTaskHint;
    };

    struct ScientistRole__StaticFields {
    };

    struct ScientistRole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScientistRole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScientistRole__VTable vtable;
    };
#pragma endregion

#pragma region ShapeshifterRole
    typedef Il2CppObject ImpostorRole;

    struct ShapeshifterRole__Fields {
        void* _;
        struct ShapeshifterEvidence* EvidencePrefab;
        struct Vector3 EvidenceOffset;
        struct ShapeshifterMinigame* ShapeshifterMenu;
        float cooldownSecondsRemaining;
        float durationSecondsRemaining;
    };

    struct ShapeshifterRole {
        struct ShapeshifterRole__Class* klass;
        MonitorData* monitor;
        struct ShapeshifterRole__Fields fields;
    };
#pragma endregion

#pragma region GuardianAngelRole
    struct CrewmateGhostRole__Fields {
        struct RoleBehaviour__Fields _;
        struct Minigame* HauntMenu;
    };

    struct GuardianAngelRole__Fields {
        struct CrewmateGhostRole__Fields _;
        struct PlayerControl* currentTarget;
        float cooldownSecondsRemaining;
    };

    struct GuardianAngelRole {
        struct GuardianAngelRole__Class* klass;
        MonitorData* monitor;
        struct GuardianAngelRole__Fields fields;
    };

    struct GuardianAngelRole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDead;
        VirtualInvokeData get_IsAffectedByComms;
        VirtualInvokeData CanUse;
        VirtualInvokeData DidWin;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData SpawnTaskHeader;
        VirtualInvokeData UseAbility;
        VirtualInvokeData OnMeetingStart;
        VirtualInvokeData OnVotingComplete;
        VirtualInvokeData OnDeath;
        VirtualInvokeData Initialize;
        VirtualInvokeData SetUsableTarget;
        VirtualInvokeData SetPlayerTarget;
        VirtualInvokeData SetCooldown;
        VirtualInvokeData IsValidTarget;
        VirtualInvokeData FindClosestTarget;
        VirtualInvokeData GetAbilityDistance;
        VirtualInvokeData AdjustTasks;
        VirtualInvokeData AppendTaskHint;
    };

    struct GuardianAngelRole__StaticFields {
    };

    struct GuardianAngelRole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GuardianAngelRole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GuardianAngelRole__VTable vtable;
    };
#pragma endregion

#pragma region Ladder
    struct Ladder__Fields {
        struct MonoBehaviour__Fields _;
        uint8_t Id;
        struct SpriteRenderer* SpotArea;
        bool IsTop;
        struct Ladder* Destination;
        struct AudioClip* UseSound;
        struct SpriteRenderer* Image;
        float _CoolDown_k__BackingField;
    };

    struct Ladder {
        struct Ladder__Class* klass;
        MonitorData* monitor;
        struct Ladder__Fields fields;
    };

    struct Ladder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_CoolDown;
        VirtualInvokeData set_CoolDown;
        VirtualInvokeData get_MaxCoolDown;
        VirtualInvokeData IsCoolingDown;
        VirtualInvokeData get_UsableDistance;
        VirtualInvokeData get_PercentCool;
        VirtualInvokeData get_UseIcon;
        VirtualInvokeData SetOutline;
        VirtualInvokeData CanUse;
        VirtualInvokeData Use;
    };

    struct Ladder__StaticFields {
    };

    struct Ladder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Ladder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Ladder__VTable vtable;
    };
#pragma endregion

#pragma region ZiplineConsole
    struct ZiplineConsole__Fields {
        struct MonoBehaviour__Fields _;
        float usableDistance;
        struct SpriteRenderer* image;
        struct ZiplineBehaviour* zipline;
        bool atTop;
        struct ZiplineConsole* destination;
        float _CoolDown_k__BackingField;
    };

    struct ZiplineConsole {
        struct ZiplineConsole__Class* klass;
        MonitorData* monitor;
        struct ZiplineConsole__Fields fields;
    };

    struct ZiplineConsole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_CoolDown;
        VirtualInvokeData set_CoolDown;
        VirtualInvokeData get_MaxCoolDown;
        VirtualInvokeData IsCoolingDown;
        VirtualInvokeData get_UsableDistance;
        VirtualInvokeData get_PercentCool;
        VirtualInvokeData get_UseIcon;
        VirtualInvokeData SetOutline;
        VirtualInvokeData CanUse;
        VirtualInvokeData Use;
    };

    struct ZiplineConsole__StaticFields {
    };

    struct ZiplineConsole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZiplineConsole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ZiplineConsole__VTable vtable;
    };
#pragma endregion

#pragma region Console_1
    struct Console_1__Fields {
        struct MonoBehaviour__Fields _;
        float usableDistance;
        int32_t ConsoleId;
        bool onlyFromBelow;
        bool onlySameRoom;
        bool checkWalls;
        bool GhostsIgnored;
        bool AllowImpostor;
#if defined(_CPLUSPLUS_)
        SystemTypes__Enum Room;
#else
        uint8_t Room;
#endif
        struct TaskTypes__Enum__Array* TaskTypes;
        struct TaskSet__Array* ValidTasks;
        struct SpriteRenderer* Image;
    };

    struct Console_1 {
        struct Console_1__Class* klass;
        MonitorData* monitor;
        struct Console_1__Fields fields;
    };

    struct Console_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UsableDistance;
        VirtualInvokeData get_PercentCool;
        VirtualInvokeData get_UseIcon;
        VirtualInvokeData SetOutline;
        VirtualInvokeData CanUse;
        VirtualInvokeData Use;
        VirtualInvokeData Use_1;
    };

    struct Console_1__StaticFields {
    };

    struct Console_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Console_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Console_1__VTable vtable;
    };
#pragma endregion

#pragma region RpcCalls__Enum
#if defined(_CPLUSPLUS_)
    enum class RpcCalls__Enum : uint8_t {
        PlayAnimation = 0x00,
        CompleteTask = 0x01,
        SyncSettings = 0x02,
        SetInfected = 0x03,
        Exiled = 0x04,
        CheckName = 0x05,
        SetName = 0x06,
        CheckColor = 0x07,
        SetColor = 0x08,
        SetHat_Deprecated = 0x09,
        SetSkin_Deprecated = 0x0a,
        ReportDeadBody = 0x0b,
        MurderPlayer = 0x0c,
        SendChat = 0x0d,
        StartMeeting = 0x0e,
        SetScanner = 0x0f,
        SendChatNote = 0x10,
        SetPet_Deprecated = 0x11,
        SetStartCounter = 0x12,
        EnterVent = 0x13,
        ExitVent = 0x14,
        SnapTo = 0x15,
        CloseMeeting = 0x16,
        VotingComplete = 0x17,
        CastVote = 0x18,
        ClearVote = 0x19,
        AddVote = 0x1a,
        CloseDoorsOfType = 0x1b,
        SetTasks = 0x1d,
        ClimbLadder = 0x1f,
        UsePlatform = 0x20,
        SendQuickChat = 0x21,
        BootFromVent = 0x22,
        UpdateSystem = 0x23,
        SetVisor_Deprecated = 0x24,
        SetNamePlate_Deprecated = 0x25,
        SetLevel = 0x26,
        SetHatStr = 0x27,
        SetSkinStr = 0x28,
        SetPetStr = 0x29,
        SetVisorStr = 0x2a,
        SetNamePlateStr = 0x2b,
        SetRole = 0x2c,
        ProtectPlayer = 0x2d,
        Shapeshift = 0x2e,
        CheckMurder = 0x2f,
        CheckProtect = 0x30,
        Pet = 0x31,
        CancelPet = 0x32,
        CheckZipline = 0x33,
        UseZipline = 0x34,
        TriggerSpores = 0x35,
        CheckSpore = 0x36,
        CheckShapeshift = 0x37,
        RejectShapeshift = 0x38,
        LobbyTimeExpiring = 0x3c,
        ExtendLobbyTimer = 0x3d,
        CheckVanish = 0x3e,
        StartVanish = 0x3f,
        CheckAppear = 0x40,
        StartAppear = 0x41,
    };

#else
    enum RpcCalls__Enum {
        RpcCalls__Enum_PlayAnimation = 0x00,
        RpcCalls__Enum_CompleteTask = 0x01,
        RpcCalls__Enum_SyncSettings = 0x02,
        RpcCalls__Enum_SetInfected = 0x03,
        RpcCalls__Enum_Exiled = 0x04,
        RpcCalls__Enum_CheckName = 0x05,
        RpcCalls__Enum_SetName = 0x06,
        RpcCalls__Enum_CheckColor = 0x07,
        RpcCalls__Enum_SetColor = 0x08,
        RpcCalls__Enum_SetHat_Deprecated = 0x09,
        RpcCalls__Enum_SetSkin_Deprecated = 0x0a,
        RpcCalls__Enum_ReportDeadBody = 0x0b,
        RpcCalls__Enum_MurderPlayer = 0x0c,
        RpcCalls__Enum_SendChat = 0x0d,
        RpcCalls__Enum_StartMeeting = 0x0e,
        RpcCalls__Enum_SetScanner = 0x0f,
        RpcCalls__Enum_SendChatNote = 0x10,
        RpcCalls__Enum_SetPet_Deprecated = 0x11,
        RpcCalls__Enum_SetStartCounter = 0x12,
        RpcCalls__Enum_EnterVent = 0x13,
        RpcCalls__Enum_ExitVent = 0x14,
        RpcCalls__Enum_SnapTo = 0x15,
        RpcCalls__Enum_CloseMeeting = 0x16,
        RpcCalls__Enum_VotingComplete = 0x17,
        RpcCalls__Enum_CastVote = 0x18,
        RpcCalls__Enum_ClearVote = 0x19,
        RpcCalls__Enum_AddVote = 0x1a,
        RpcCalls__Enum_CloseDoorsOfType = 0x1b,
        RpcCalls__Enum_SetTasks = 0x1d,
        RpcCalls__Enum_ClimbLadder = 0x1f,
        RpcCalls__Enum_UsePlatform = 0x20,
        RpcCalls__Enum_SendQuickChat = 0x21,
        RpcCalls__Enum_BootFromVent = 0x22,
        RpcCalls__Enum_UpdateSystem = 0x23,
        RpcCalls__Enum_SetVisor_Deprecated = 0x24,
        RpcCalls__Enum_SetNamePlate_Deprecated = 0x25,
        RpcCalls__Enum_SetLevel = 0x26,
        RpcCalls__Enum_SetHatStr = 0x27,
        RpcCalls__Enum_SetSkinStr = 0x28,
        RpcCalls__Enum_SetPetStr = 0x29,
        RpcCalls__Enum_SetVisorStr = 0x2a,
        RpcCalls__Enum_SetNamePlateStr = 0x2b,
        RpcCalls__Enum_SetRole = 0x2c,
        RpcCalls__Enum_ProtectPlayer = 0x2d,
        RpcCalls__Enum_Shapeshift = 0x2e,
        RpcCalls__Enum_CheckMurder = 0x2f,
        RpcCalls__Enum_CheckProtect = 0x30,
        RpcCalls__Enum_Pet = 0x31,
        RpcCalls__Enum_CancelPet = 0x32,
        RpcCalls__Enum_CheckZipline = 0x33,
        RpcCalls__Enum_UseZipline = 0x34,
        RpcCalls__Enum_TriggerSpores = 0x35,
        RpcCalls__Enum_CheckSpore = 0x36,
        RpcCalls__Enum_CheckShapeshift = 0x37,
        RpcCalls__Enum_RejectShapeshift = 0x38,
        RpcCalls__Enum_LobbyTimeExpiring = 0x3c,
        RpcCalls__Enum_ExtendLobbyTimer = 0x3d,
        RpcCalls__Enum_CheckVanish = 0x3e,
        RpcCalls__Enum_StartVanish = 0x3f,
        RpcCalls__Enum_CheckAppear = 0x40,
        RpcCalls__Enum_StartAppear = 0x41,
    };

#endif
#pragma endregion

#pragma region TrackerRole
    struct TrackerRole__Fields {
        void* _;
        struct PlayerControl* currentTarget;
        float cooldownSecondsRemaining;
        float durationSecondsRemaining;
        float delaySecondsRemaining;
        bool pauseTrackingTime;
        struct AudioClip* cancelSound;
        bool isTrackingActive;
    };

    struct TrackerRole {
        struct TrackerRole__Class* klass;
        MonitorData* monitor;
        struct TrackerRole__Fields fields;
    };

    struct TrackerRole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDead;
        VirtualInvokeData get_IsAffectedByComms;
        VirtualInvokeData CanUse;
        VirtualInvokeData DidWin;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData SpawnTaskHeader;
        VirtualInvokeData UseAbility;
        VirtualInvokeData OnMeetingStart;
        VirtualInvokeData OnVotingComplete;
        VirtualInvokeData OnDeath;
        VirtualInvokeData Initialize;
        VirtualInvokeData SetUsableTarget;
        VirtualInvokeData SetPlayerTarget;
        VirtualInvokeData SetCooldown;
        VirtualInvokeData IsValidTarget;
        VirtualInvokeData FindClosestTarget;
        VirtualInvokeData GetAbilityDistance;
        VirtualInvokeData AdjustTasks;
        VirtualInvokeData AppendTaskHint;
    };

    struct TrackerRole__StaticFields {
    };

    struct TrackerRole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrackerRole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrackerRole__VTable vtable;
    };
#pragma endregion

#pragma region PhantomRole
    struct PhantomRole__Fields {
        void* _;
        struct AudioClip* appearSound;
        float cooldownSecondsRemaining;
        float durationSecondsRemaining;
        bool isInvisible;
        bool fading;
        bool serverApproved;
    };

    struct PhantomRole {
        struct PhantomRole__Class* klass;
        MonitorData* monitor;
        struct PhantomRole__Fields fields;
    };

    struct PhantomRole__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsDead;
        VirtualInvokeData get_IsAffectedByComms;
        VirtualInvokeData CanUse;
        VirtualInvokeData DidWin;
        VirtualInvokeData Deinitialize;
        VirtualInvokeData SpawnTaskHeader;
        VirtualInvokeData UseAbility;
        VirtualInvokeData OnMeetingStart;
        VirtualInvokeData OnVotingComplete;
        VirtualInvokeData OnDeath;
        VirtualInvokeData Initialize;
        VirtualInvokeData SetUsableTarget;
        VirtualInvokeData SetPlayerTarget;
        VirtualInvokeData SetCooldown;
        VirtualInvokeData IsValidTarget;
        VirtualInvokeData FindClosestTarget;
        VirtualInvokeData GetAbilityDistance;
        VirtualInvokeData AdjustTasks;
        VirtualInvokeData AppendTaskHint;
    };

    struct PhantomRole__StaticFields {
    };

    struct PhantomRole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhantomRole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhantomRole__VTable vtable;
    };
#pragma endregion

#pragma region PingTracker
    struct AspectPosition__Fields {
        struct MonoBehaviour__Fields _;
        struct Camera* parentCam;
        bool updateAlways;
        struct Vector2 anchorPoint;
        struct Vector3 DistanceFromEdge;
        int32_t Alignment;
    };

    struct AspectPosition {
        struct AspectPosition__Class* klass;
        MonitorData* monitor;
        struct AspectPosition__Fields fields;
    };

    struct PingTracker__Fields {
        struct MonoBehaviour__Fields _;
        struct TextMeshPro* text;
        struct AspectPosition* aspectPosition;
        struct Vector3 lobbyPos;
        struct Vector3 gamePos;
    };

    struct PingTracker {
        struct PingTracker__Class* klass;
        MonitorData* monitor;
        struct PingTracker__Fields fields;
    };

    struct PingTracker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PingTracker__StaticFields {
    };

    struct PingTracker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PingTracker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PingTracker__VTable vtable;
    };
#pragma endregion

#pragma region Vent__Array
    struct Vent__Array {
        struct Vent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Vent* vector[32];
    };

    struct Vent__Array__VTable {
    };

    struct Vent__Array__StaticFields {
    };

    struct Vent__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Vent__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Vent__Array__VTable vtable;
    };
#pragma endregion

#pragma region MeetingHud_VoterState
    struct MeetingHud_VoterState {
        uint8_t VoterId;
        uint8_t VotedForId;
    };
#pragma endregion

#pragma region MeetingHud_VoterState__Array
    struct MeetingHud_VoterState__Array {
        struct MeetingHud_VoterState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MeetingHud_VoterState vector[32];
    };

    struct MeetingHud_VoterState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MeetingHud_VoterState__StaticFields {
    };

    struct MeetingHud_VoterState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeetingHud_VoterState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeetingHud_VoterState__VTable vtable;
    };
#pragma endregion

#pragma region EditAccountUsername
    struct EditAccountUsername__Fields {
        struct MonoBehaviour__Fields _;
        struct TextMeshPro* UsernameText;
        struct TextMeshPro* SuccessText;
        struct GameObject* SuccessMessage;
        struct GameObject* PopUp;
        struct UiElement* DefaultButtonSelected;
        struct List_1_UiElement_* ControllerSelectable;
    };

    struct EditAccountUsername {
        struct EditAccountUsername__Class* klass;
        MonitorData* monitor;
        struct EditAccountUsername__Fields fields;
    };

    struct EditAccountUsername__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnDisable;
    };

    struct EditAccountUsername__StaticFields {
    };

    struct EditAccountUsername__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EditAccountUsername__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EditAccountUsername__VTable vtable;
    };
#pragma endregion

#pragma region GameOptionsFactory
    struct __declspec(align(4)) GameOptionsFactory__Fields {
        struct ILogger_1* logger;
        struct Dictionary_2_System_Byte_AmongUs_GameOptions_IGameOptionsMigrator_* migrators;
    };

    struct GameOptionsFactory {
        struct GameOptionsFactory__Class* klass;
        MonitorData* monitor;
        struct GameOptionsFactory__Fields fields;
    };
#pragma endregion

#pragma region DisconnectPopup

    struct DestroyableSingleton_1_DisconnectPopup___Fields {
        struct MonoBehaviour__Fields _;
        bool DontDestroy;
    };

    struct DestroyableSingleton_1_DisconnectPopup_ {
        struct DestroyableSingleton_1_DisconnectPopup___Class* klass;
        MonitorData* monitor;
        struct DestroyableSingleton_1_DisconnectPopup___Fields fields;
    };

    struct DestroyableSingleton_1_DisconnectPopup___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct DestroyableSingleton_1_DisconnectPopup___StaticFields {
        struct DisconnectPopup* _instance;
    };

    struct DestroyableSingleton_1_DisconnectPopup___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyableSingleton_1_DisconnectPopup___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyableSingleton_1_DisconnectPopup___VTable vtable;
    };

    struct DisconnectPopup__Fields {
        struct DestroyableSingleton_1_DisconnectPopup___Fields _;
        struct TextMeshPro* _textArea;
        struct TransitionOpen* transitionOpen;
        struct StringNames__Enum__Array* QuickChatNames;
        struct UiElement* BackButton;
        struct List_1_SelectableHyperLink_* selectableHyperLinks;
    };

    struct DisconnectPopup {
        struct DisconnectPopup__Class* klass;
        MonitorData* monitor;
        struct DisconnectPopup__Fields fields;
    };

    struct DisconnectPopup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct DisconnectPopup__StaticFields {
        struct Dictionary_2_DisconnectReasons_StringNames_* ErrorMessages;
        struct Dictionary_2_SanctionReasons_StringNames_* SanctionMessages;
    };

    struct DisconnectPopup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisconnectPopup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisconnectPopup__VTable vtable;
    };
#pragma endregion

#pragma region PlayerStatsData
    struct __declspec(align(4)) PlayerStatsData__Fields {
        uint32_t level;
        uint32_t xp;
        uint32_t xpForNextLevel;
        struct Dictionary_2_StatID_System_UInt32_* statsCache;
        struct Dictionary_2_StatID_System_UInt32_* statsToIngest;
        bool isTrackingStats;
    };

    struct PlayerStatsData {
        struct PlayerStatsData__Class* klass;
        MonitorData* monitor;
        struct PlayerStatsData__Fields fields;
    };

    struct PlayerStatsData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerStatsData__StaticFields {
        struct Logger_2* Logger;
    };

    struct PlayerStatsData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerStatsData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerStatsData__VTable vtable;
    };
#pragma endregion

#pragma region QuickChatPreviewField
    struct QuickChatPreviewField__Fields {
        struct AbstractChatInputField__Fields _;
        struct ChatInputFieldButton* clearButton;
        struct ChatInputFieldButton* undoButton;
        struct TextMeshPro* warningText;
        struct TextMeshPro* text;
        struct TextMeshPro* placeholderText;
        struct Action* OnClearPressedEvent;
        struct Action* OnUndoPressedEvent;
    };

    struct QuickChatPreviewField {
        struct QuickChatPreviewField__Class* klass;
        MonitorData* monitor;
        struct QuickChatPreviewField__Fields fields;
    };

    struct QuickChatPreviewField__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData Start;
        VirtualInvokeData OnTextFieldTransformChanged;
        VirtualInvokeData SetVisible;
        VirtualInvokeData SetButtonsEnabled;
        VirtualInvokeData Clear;
        VirtualInvokeData Submit;
    };

    struct QuickChatPreviewField__StaticFields {
    };

    struct QuickChatPreviewField__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QuickChatPreviewField__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QuickChatPreviewField__VTable vtable;
    };
#pragma endregion

#pragma region Mushroom
    struct Mushroom__Fields {
        struct MonoBehaviour__Fields _;
        struct Collider2D* mushroomCollider;
        struct SpriteRenderer* mushroom;
        struct SpriteRenderer* spores;
        struct GameObject* sporeMask;
        int32_t id;
        struct SpriteAnim* mushroomAnimator;
        struct AnimationClip* mushroomIdle;
        struct AnimationClip* mushroomAppear;
        struct AnimationClip* mushroomSteppedOn;
        struct SpriteAnim* sporeCloudAnimator;
        struct SpriteAnim* sporeCloudMaskAnimator;
        struct AnimationClip* sporeCloudIdle;
        struct AnimationClip* sporeCloudAppear;
        struct AnimationClip* sporeCloudDisappear;
        float secondsBetweenSporeReleases;
        float secondsSporeIsActive;
        float secondsSporeReappearsFor;
        float secondsSporeFade;
        struct AudioClip* spawnSound;
        struct AudioClip* activateSporeSound;
        void* filter;
        struct Vector3 origPosition;
    };

    struct Mushroom {
        struct Mushroom__Class* klass;
        MonitorData* monitor;
        struct Mushroom__Fields fields;
    };

    struct Mushroom__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Mushroom__StaticFields {
        struct Collider2D__Array* Hits;
    };

    struct Mushroom__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Mushroom__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Mushroom__VTable vtable;
    };
#pragma endregion

#pragma region ChatNoteTypes__Enum
#if defined(_CPLUSPLUS_)
    enum class ChatNoteTypes__Enum : int32_t {
        DidVote = 0x00000000,
    };

#else
    enum ChatNoteTypes__Enum {
        ChatNoteTypes__Enum_DidVote = 0x00000000,
    };

#endif
#pragma endregion

#pragma region SoundManager
    struct SoundManager__Fields {
        struct MonoBehaviour__Fields _;
        struct AudioMixer* mixer;
        struct AudioMixerGroup* musicMixer;
        struct AudioMixerGroup* ambienceMixer;
        struct AudioMixerGroup* ambienceHighPassMixer;
        struct AudioMixerGroup* sfxMixer;
        struct Dictionary_2_UnityEngine_AudioClip_UnityEngine_AudioSource_* allSources;
        struct List_1_ISoundPlayer_* soundPlayers;
    };

    struct SoundManager {
        struct SoundManager__Class* klass;
        MonitorData* monitor;
        struct SoundManager__Fields fields;
    };

    struct SoundManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SoundManager__StaticFields {
        struct SoundManager* instance;
        float musicVolume;
        float sfxVolume;
        float ambienceVolume;
    };

    struct SoundManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundManager__VTable vtable;
    };
#pragma endregion

#pragma region AssetReference
    struct __declspec(align(4)) AssetReference__Fields {
        struct String* m_AssetGUID;
        struct String* m_SubObjectName;
        struct String* m_SubObjectType;
        void* m_Operation;
    };

    struct AssetReference {
        struct AssetReference__Class* klass;
        MonitorData* monitor;
        struct AssetReference__Fields fields;
    };

    struct AssetReference__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_RuntimeKey;
        VirtualInvokeData RuntimeKeyIsValid;
        VirtualInvokeData get_RuntimeKey_1;
        VirtualInvokeData get_AssetGUID;
        VirtualInvokeData get_SubObjectName;
        VirtualInvokeData set_SubObjectName;
        VirtualInvokeData get_SubOjbectType;
        VirtualInvokeData get_Asset;
        VirtualInvokeData LoadAssetAsync;
        VirtualInvokeData LoadSceneAsync;
        VirtualInvokeData UnLoadScene;
        VirtualInvokeData InstantiateAsync;
        VirtualInvokeData InstantiateAsync_1;
        VirtualInvokeData RuntimeKeyIsValid_1;
        VirtualInvokeData ReleaseAsset;
        VirtualInvokeData ReleaseInstance;
        VirtualInvokeData ValidateAsset;
        VirtualInvokeData ValidateAsset_1;
    };

    struct AssetReference__StaticFields {
    };

    struct AssetReference__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AssetReference__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AssetReference__VTable vtable;
    };
#pragma endregion

#pragma region AssetReference__Array
    struct AssetReference__Array {
        struct AssetReference__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AssetReference* vector[32];
    };

    struct AssetReference__Array__VTable {
    };

    struct AssetReference__Array__StaticFields {
    };

    struct AssetReference__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AssetReference__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AssetReference__Array__VTable vtable;
    };
#pragma endregion

#pragma region List_1_UnityEngine_AddressableAssets_AssetReference_
    struct __declspec(align(4)) List_1_UnityEngine_AddressableAssets_AssetReference___Fields {
        struct AssetReference__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_AddressableAssets_AssetReference_ {
        struct List_1_UnityEngine_AddressableAssets_AssetReference___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_AddressableAssets_AssetReference___Fields fields;
    };

    struct List_1_UnityEngine_AddressableAssets_AssetReference___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_UnityEngine_AddressableAssets_AssetReference___StaticFields {
        struct AssetReference__Array* _emptyArray;
    };

    struct List_1_UnityEngine_AddressableAssets_AssetReference___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_AddressableAssets_AssetReference___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_AddressableAssets_AssetReference___VTable vtable;
    };
#pragma endregion

#pragma region GameListing
    struct GameListing {
        uint32_t IP;
        uint16_t Port;
        int32_t GameId;
        uint8_t PlayerCount;
        struct String* HostName;
        struct String* TrueHostName;
        struct String* HostPlatformName;
#if defined(_CPLUSPLUS_)
        QuickChatModes__Enum QuickChat;
#else
        int32_t QuickChat;
#endif
#if defined(_CPLUSPLUS_)
        Platforms__Enum Platform;
#else
        int32_t Platform;
#endif
        int32_t Age;
        int32_t MaxPlayers;
        int32_t NumImpostors;
        uint8_t MapId;
        uint32_t Language;
        struct IGameOptions* Options;
    };
#pragma endregion

#pragma region ModManager
    struct ModManager__Fields {
        void* _;
        struct SpriteRenderer* ModStamp;
        struct Camera* localCamera;
    };

    struct ModManager {
        struct ModManager__Class* klass;
        MonitorData* monitor;
        struct ModManager__Fields fields;
    };

    struct ModManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
    };

    struct ModManager__StaticFields {
    };

    struct ModManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ModManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ModManager__VTable vtable;
    };
#pragma endregion

#pragma region ReportReasons__Enum
#if defined(_CPLUSPLUS_)
    enum class ReportReasons__Enum : int32_t {
        None = -1,
        InappropriateName = 0x00000000,
        InappropriateChat = 0x00000001,
        Cheating_Hacking = 0x00000002,
        Harassment_Misconduct = 0x00000003,
    };

#else
    enum ReportReasons__Enum {
        ReportReasons__Enum_None = -1,
        ReportReasons__Enum_InappropriateName = 0x00000000,
        ReportReasons__Enum_InappropriateChat = 0x00000001,
        ReportReasons__Enum_Cheating_Hacking = 0x00000002,
        ReportReasons__Enum_Harassment_Misconduct = 0x00000003,
    };

#endif
#pragma endregion

#pragma region FriendsListUI
    struct FriendsListUI__Fields {
        struct MonoBehaviour__Fields _;
        struct TextMeshPro* FriendCodeText;
        struct SpriteRenderer* FriendCodeHiddenIcon;
        struct GameObject* FriendCodeHideToggleObject;
        struct FriendsListUI_FriendsListTabButton__Array* Tabs;
        struct GameObject* NotifArea;
        struct GameObject* BlockedArea;
        struct GameObject* FriendArea;
        struct GameObject* PlatformFriendArea;
        struct GameObject* LobbyPlayerArea;
        struct GameObject* RecentlyPlayedArea;
        struct GameObject* LobbyPlayersTab;
        struct GameObject* LobbyPlayersInactiveTab;
        struct GameObject* PlatformFriendsButton;
        struct FriendRequestBar* FriendRequestBar;
        struct BlockedPlayerBar* BlockedPlayerBar;
        struct OnlineFriendBar* OnlineFriendBar;
        struct OnlineFriendBar* PlatformFriendBar;
        struct LobbyPlayerBar* LobbyPlayerBar;
        struct LobbyInviteBar* LobbyInviteBar;
        struct Scroller* FriendsScroller;
        struct Scroller* PlatformFriendsScroller;
        struct Scroller* BlockedScroller;
        struct Scroller* NotifScroller;
        struct Scroller* LobbyScroller;
        struct Scroller* RecentlyPlayedScroller;
        struct SpriteRenderer* InactiveAllFriends;
        struct SpriteRenderer* InactivePlatformFriends;
        struct TextBoxTMP* AddFriendArea;
        struct List_1_FriendsListGuestWarning_* guestAccountWarnings;
        float YStart;
        float YOffset;
        struct SpriteRenderer* ViewRequestsButton;
        struct TextMeshPro* ViewRequestsText;
        struct Color NewRequestColor;
        struct Color NoRequestsColor;
        struct GameObject* AddFriendObjects;
        struct UiElement* BackButton;
        struct UiElement* DefaultButtonSelected;
        struct List_1_UiElement_* ControllerSelectable;
        struct GameObject* glyphL;
        struct GameObject* glyphR;
        int32_t selectedTab;
        struct List_1_FriendsListBar_* lobbyBars;
        struct List_1_FriendsListBar_* friendBars;
        struct List_1_FriendsListBar_* platformFriendBars;
        struct List_1_FriendsListBar_* notifBars;
        struct String* friendCodeHiddenText;
        bool viewingAllFriends;
        struct String* currentSceneName;
        float addFriendCooldown;
    };

    struct FriendsListUI {
        struct FriendsListUI__Class* klass;
        MonitorData* monitor;
        struct FriendsListUI__Fields fields;
    };

    struct FriendsListUI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnDisable;
    };

    struct FriendsListUI__StaticFields {
        struct FriendsListUI* Instance;
    };

    struct FriendsListUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FriendsListUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FriendsListUI__VTable vtable;
    };
#pragma endregion

#pragma region PlayerBanData
    struct PlayerBanData__Fields {
        void* _;
        float banPoints;
        int64_t previousGameStartDate;
        struct Action* OnBanPointsChanged;
        struct Action* OnPreviousGameStartedDateChanged;
    };

    struct PlayerBanData {
        struct PlayerBanData__Class* klass;
        MonitorData* monitor;
        struct PlayerBanData__Fields fields;
    };

    struct PlayerBanData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData AmongUs_Data_ISaveDataGroupControl_SaveStart;
        VirtualInvokeData AmongUs_Data_ISaveDataGroupControl_SaveComplete;
        VirtualInvokeData AmongUs_Data_ISaveDataGroupControl_LoadStart;
        VirtualInvokeData AmongUs_Data_ISaveDataGroupControl_LoadComplete;
        VirtualInvokeData SetValue;
        VirtualInvokeData HandleChange;
        VirtualInvokeData OnSaveStart;
        VirtualInvokeData OnSaveComplete;
        VirtualInvokeData OnLoadStart;
        VirtualInvokeData OnLoadComplete;
    };

    struct PlayerBanData__StaticFields {
    };

    struct PlayerBanData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerBanData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerBanData__VTable vtable;
    };
#pragma endregion

#pragma region GameContainer
    struct GameContainer__Fields {
        struct MonoBehaviour__Fields _;
        struct TextMeshPro* tag1;
        struct TextMeshPro* tag2;
        struct SpriteRenderer* mapBackground;
        struct SpriteRenderer* mapLogo;
        struct Sprite__Array* mapBackgroundSprites;
        struct Sprite__Array* mapLogoSprites;
        struct TextMeshPro* capacity;
        struct Action_1_InnerNet_GameListing_* OnMoreAction;
        struct GameListing gameListing;
    };

    struct GameContainer {
        struct GameContainer__Class* klass;
        MonitorData* monitor;
        struct GameContainer__Fields fields;
    };

    struct GameContainer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData StartIcon;
        VirtualInvokeData StopIcon;
    };

    struct GameContainer__StaticFields {
    };

    struct GameContainer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameContainer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameContainer__VTable vtable;
    };
#pragma endregion

#pragma region EndGameResult
    struct __declspec(align(4)) EndGameResult__Fields {
#if defined(_CPLUSPLUS_)
        GameOverReason__Enum GameOverReason;
#else
        int32_t GameOverReason;
#endif
        bool ShowAd;
        struct ProgressionManager_XpGrantResult* XpGrantResult;
        struct ProgressionManager_CurrencyGrantResult* PodsGrantResult;
        struct ProgressionManager_CurrencyGrantResult* BeansGrantResult;
    };

    struct EndGameResult {
        struct EndGameResult__Class* klass;
        MonitorData* monitor;
        struct EndGameResult__Fields fields;
    };
    
    struct EndGameResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EndGameResult__StaticFields {
        struct List_1_CachedPlayerData_* CachedWinners;
        struct CachedPlayerData* CachedLocalPlayer;
#if defined(_CPLUSPLUS_)
        GameOverReason__Enum CachedGameOverReason;
#else
        int32_t CachedGameOverReason;
#endif
        bool CachedShowAd;
        struct ProgressionManager_XpGrantResult* CachedXpGrantResult;
        struct ProgressionManager_CurrencyGrantResult* CachedBeansGrantResult;
        struct ProgressionManager_CurrencyGrantResult* CachedPodsGrantResult;
    };

    struct EndGameResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EndGameResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EndGameResult__VTable vtable;
    };
#pragma endregion

#pragma region ChatNotification
    struct ChatNotification__Fields {
        struct MonoBehaviour__Fields _;
        struct PoolablePlayer* player;
        struct TextMeshPro* chatText;
        struct TextMeshPro* playerNameText;
        struct TextMeshPro* playerColorText;
        struct SpriteRenderer* background;
        struct SpriteRenderer* maskArea;
        float timeOnScreen;
    };

    struct ChatNotification {
        struct ChatNotification__Class* klass;
        MonitorData* monitor;
        struct ChatNotification__Fields fields;
    };

    struct ChatNotification__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChatNotification__StaticFields {
    };

    struct ChatNotification__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChatNotification__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChatNotification__VTable vtable;
    };
#pragma endregion

#pragma region FindAGameManager
    struct FindAGameManager__Fields {
        void* _;
        struct FilterPopUp* filterPopUp;
        struct ServerDropdown* serverDropdown;
        struct PassiveButton* serverButton;
        struct TextMeshPro__Array* serverTexts;
        struct GameContainer__Array* gameContainers;
        struct PassiveButton* refreshButton;
        struct GameObject* animLoad;
        struct FindGameMoreInfoPopup* findGameMoreInfoPopUp;
        struct GameObject* clearFilterPop;
        struct TextMeshPro__Array* filtersFoundNums;
        struct TextMeshPro* matchesFoundText;
        struct AudioClip* findGameSFX;
        struct AudioClip* foundGameSFX;
        struct Transform* container;
        struct TextMeshPro* modeText;
        struct PassiveButton* clearFilterButton;
        struct TextMeshPro* TotalText;
        float timer;
        struct Coroutine* refreshFilterCoroutine;
        bool animating;
        struct GameFilterSet* classicFilterSet;
        struct GameFilterSet* hnsFilterSet;
        struct UiElement* BackButton;
        struct UiElement* DefaultButtonSelected;
        struct List_1_UiElement_* ControllerSelectable;
        struct Logger_2* logger;
    };

    struct FindAGameManager {
        struct FindAGameManager__Class* klass;
        MonitorData* monitor;
        struct FindAGameManager__Fields fields;
    };

    struct FindAGameManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData HandleList;
        VirtualInvokeData StartIcon;
        VirtualInvokeData StopIcon;
    };

    struct FindAGameManager__StaticFields {
    };

    struct FindAGameManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FindAGameManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FindAGameManager__VTable vtable;
    };

    struct GameContainer__Array {
        struct GameContainer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GameContainer* vector[32];
    };

    struct GameContainer__Array__VTable {
    };

    struct GameContainer__Array__StaticFields {
    };

    struct GameContainer__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameContainer__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameContainer__Array__VTable vtable;
    };
#pragma endregion

    typedef Il2CppReflectionMethod MonoMethod;

    typedef Il2CppObject ImpostorRole;
    typedef Il2CppObject LogicGameFlowNormal;
    typedef Il2CppObject LogicGameFlowHnS;
    typedef Il2CppObject PlayerData;
    typedef Il2CppObject PlayerAccountData;
    typedef Il2CppObject MultiplayerSettingsData;
    typedef Il2CppObject PlayerCustomizationData;
    typedef Il2CppObject PlayerPurchasesData;
    typedef Il2CppObject ExileController;
    typedef Il2CppObject SabotageSystemType;
    typedef Il2CppObject GameOptionsManager;
    typedef Il2CppObject SettingsData;
    typedef Il2CppObject GameplaySettingsData;
    typedef Il2CppObject AccessibilitySettingsData;
    typedef Il2CppObject OverlayAnimation;
    typedef Il2CppObject OverlayKillAnimation;
    typedef Il2CppObject KillOverlay;
    typedef Il2CppObject AbstractSaveData;
    typedef Il2CppObject ResolutionManager_ResolutionChangedHandler;
    typedef Il2CppObject MatchMakerGameButton;
    typedef Il2CppObject EndGameNavigation;
    typedef Il2CppObject HideAndSeekManager;
    typedef Il2CppObject NormalGameManager;
    typedef Il2CppObject QuickChatPhraseBuilderResult;
    typedef Il2CppObject MapCountOverlay;
    typedef Il2CppObject BanMenu;
    typedef Il2CppObject IntroCutscene;
    typedef Il2CppObject LogicOptionsHnS;
}
