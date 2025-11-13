// 函数: _Z20GameCreatePlayerIconRK9GameSetup
// 地址: 0xb340b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_8 = *(arg1 + 0x11ac)
int32_t x8

if (x8_8 == 0)
    int32_t x8_1 = *(arg1 + 0x28c)
    int32_t x10_1
    
    x10_1 = x8_1 != 0 ? 2 : 1
    
    int32_t x8_3
    
    if (*(arg1 + 0x60) == 0)
        x8_3 = x8_1 != 0 ? 1 : 0
    else
        x8_3 = x10_1
    
    int32_t x8_4
    
    if (*(arg1 + 0x4b8) != 0)
        x8_4 = x8_3 + 1
    else
        x8_4 = x8_3
    
    int32_t x8_5
    
    if (*(arg1 + 0x6e4) != 0)
        x8_5 = x8_4 + 1
    else
        x8_5 = x8_4
    
    int32_t x8_6
    
    if (*(arg1 + 0x910) != 0)
        x8_6 = x8_5 + 1
    else
        x8_6 = x8_5
    
    int32_t x8_7
    
    if (*(arg1 + 0xb3c) != 0)
        x8_7 = x8_6 + 1
    else
        x8_7 = x8_6
    
    x8 = x8_7 - 3
    
    if (x8 u<= 3)
        return (&data_1153ca0)[sx.q(x8)]
else
    x8 = x8_8 - 3
    
    if (x8 u<= 3)
        return (&data_1153ca0)[sx.q(x8)]
return &data_182e980
