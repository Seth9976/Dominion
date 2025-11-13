// 函数: _Z7FabDimsRK5FabElR8FabState
// 地址: 0xf5b76c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg2 + 0x78)
int32_t x9 = *(arg2 + 0x60)
void* __offset(FabState, 0x7c) x8

if (x8_1 s> x9)
    x8 = arg2 + 0x7c
else
    x8 = arg1 + 0x94

void* __offset(FabState, 0x84) x9_1

if (x8_1 s> x9)
    x9_1 = arg2 + 0x84
else
    x9_1 = arg1 + 0x9c

*x9_1
return *x8
