// 函数: _Z34AssetUtilsMakeDatalessFailureAssetP6XAsset
// 地址: 0xc7f194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = DefMapFromAssetType(zx.q(*(arg1 + 8)))
char* x0_2 = DefParseTreeAlloc()
*(x0_2 + 0x20) = x0_1
*x0_1
XString::operator=(x0_2)
DefAssetHeader* x0_3 = XCalloc(0x20)
*(x0_3 + 0x18) = x0_1
*(x0_3 + 8) = x0_2
int64_t result = DefParseTreeMakeDefinition(x0_2, x0_1)
*x0_3 = result
int32_t x8 = *(arg1 + 8)
*arg1 = x0_3

if (x8 == 0x19)
    return ParticleMakeDatalessFailureAsset(x0_3) __tailcall

if (x8 == 5)
    return MaterialMakeDatalessFailureAsset(x0_3) __tailcall

if (x8 != 3)
    return result

return TextureMakeDatalessFailureAsset(x0_3) __tailcall
