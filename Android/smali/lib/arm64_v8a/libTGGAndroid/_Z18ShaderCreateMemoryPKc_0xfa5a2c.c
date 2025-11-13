// 函数: _Z18ShaderCreateMemoryPKc
// 地址: 0xfa5a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefAssetHeader* x0_1 = DefinitionNew(*macro_ptr_DefShader)
int64_t* result = AssetCatalogNewMemoryAsset(4, x0_1)
int64_t* result_1 = result

if (result == 0)
    result_1 = AssetPtrGetNull(4)
    
    if (*result_1 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
else if (*result_1 == 0)
    AssetCatalogLoadAsset(result_1, false, true)

*(result_1 + 0x24) += 1
char* x0_3 = XString::operator char const*()
char var_38
XString::XString(&var_38)
ShaderImport(x0_3, x0_1, &var_38, false)
XString::~XString()
*(result_1 + 0x24) -= 1
return result
