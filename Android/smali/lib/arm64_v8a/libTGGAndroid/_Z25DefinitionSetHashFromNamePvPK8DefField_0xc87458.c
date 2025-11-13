// 函数: _Z25DefinitionSetHashFromNamePvPK8DefField
// 地址: 0xc87458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(*(arg2 + 0x20))
int64_t result = strcrc32(*(arg1 + zx.q(*arg2)), 0)
*(arg1 + x20) = result.d
return result
