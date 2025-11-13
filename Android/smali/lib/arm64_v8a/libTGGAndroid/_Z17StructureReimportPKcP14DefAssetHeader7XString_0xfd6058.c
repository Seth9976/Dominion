// 函数: _Z17StructureReimportPKcP14DefAssetHeader7XString
// 地址: 0xfd6058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = XMalloc(0x70)
DefinitionFillBlockWithDefaults(x0, *macro_ptr_DefStructureImportData)
char* s1 = strrchr(XString::operator char const*(), 0x2e)
int32_t x0_3

if (s1 != 0)
    x0_3 = strcasecmp(s1, ".fbx")

char const* const x21

if (s1 != 0 && x0_3 == 0)
    XString::operator char const*()
    x21 = "structure reimport failed to read '%s'"
else
    x21 = "unknown structure type '%s'"

XString::operator char const*()
XTrace(x21)
XFree(x0)
return 0
