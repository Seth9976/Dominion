// 函数: _Z27GetActiveStoreItemPageCards6DomDLCRPK13RuleCardEntry
// 地址: 0xba02f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = ror.d(arg1 - 0x1000, 0xc)

if (x8 u> 8 || (0x19f u>> x8 & 1) == 0)
    return 0

uint64_t result = zx.q(*(&data_801e20 + (sx.q(x8) << 2)))
*arg2 = (&data_1153f20)[sx.q(x8)]
return result
