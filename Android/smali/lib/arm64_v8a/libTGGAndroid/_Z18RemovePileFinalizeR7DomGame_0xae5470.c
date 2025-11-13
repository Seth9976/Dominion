// 函数: _Z18RemovePileFinalizeR7DomGame
// 地址: 0xae5470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1528)

if (x8 s< 2)
    return 

int64_t x22_1 = 0x1adc
int64_t i = 1

do
    if (*(arg1 + x22_1) == 6)
        int32_t var_40_1 = 0
        int64_t var_48_1 = 0
        int32_t var_50_1 = 0
        int32_t var_58_1 = 1
        int32_t var_60_1 = 0
        MoveCardToSafe(arg1, 0xffffffff, zx.q(i.d), 0xb, 6, 0, 0, 0)
        x8 = *(arg1 + 0x1528)
    
    i += 1
    x22_1 += 0x68
while (i s< sx.q(x8))
