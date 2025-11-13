// 函数: _Z12MakeMaterialPK13MaterialFnDefP6XAssetRK11EmitResults
// 地址: 0xf8256c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
__builtin_memset(&var_50, 0, 0x20)
uint64_t x21 = zx.q(*(arg3 + 0x270))

if (x21.d s>= 1)
    memcpy(&var_50, arg3 + 0x250, x21 << 3)

return MaterialCreateMemory(arg2, &var_50, x21.d, arg3 + 0x334, *(arg3 + 0x3b4), arg3 + 0x3b8, 
    *(arg3 + 0x3c8), *(arg1 + 0xc))
