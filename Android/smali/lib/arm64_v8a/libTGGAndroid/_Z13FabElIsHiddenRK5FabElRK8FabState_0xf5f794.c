// 函数: _Z13FabElIsHiddenRK5FabElRK8FabState
// 地址: 0xf5f794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(FabState, 0x74) x8

if (*(arg2 + 0x70) s> *(arg2 + 0x60))
    x8 = arg2 + 0x74
else
    x8 = arg1 + 0x38

return zx.q(zx.d(*x8) != 0 ? 1 : 0)
