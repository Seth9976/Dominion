// 函数: _Z23DefinitionLoadPackAssetP6XAsset
// 地址: 0xc8a614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc) u<= 1)
    XString::IsEmpty()
    DefLoadXbinPathFromAssetPath(XString::operator char const*())
    XString::operator=(arg1 + 0x10)
    XString::~XString()

DefAssetHeader* var_28
int32_t x0_5 = DefBinReadPackFileAsset(&var_28, arg1)

if ((x0_5 & 1) == 0)
    *(arg1 + 0xc) = 0
    XString::operator=(arg1 + 0x10)
else
    uint64_t x0_6 = zx.q(*(arg1 + 8))
    *(arg1 + 0xc) = 2
    int64_t x21_1 = *(AssetTypeGetInfo(x0_6) + 8)
    
    if (x21_1 != 0)
        x21_1(XString::operator char const*(), *var_28)
    
    *arg1 = var_28

return zx.q(x0_5) & 1
