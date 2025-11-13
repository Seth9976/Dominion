// 函数: _Z7AsColorPKcR10ColorRgbaI
// 地址: 0x1032c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((IsHexCode(arg1, arg2) & 1) == 0)
    int32_t var_28
    int32_t var_24
    int32_t var_18
    int32_t var_14
    int32_t x0_2 = sscanf(arg1, " %d %d %d %d", &var_14, &var_18, &var_24, &var_28)
    char x8_12
    
    if (x0_2 == 1)
        int32_t x9_1 = var_14
        x8_12 = -1
        int32_t x9_2
        
        x9_2 = x9_1 s< 0xff ? x9_1 : 0xff
        
        char x9_11 = x9_2.b & (not.d(x9_2 s>> 0x1f)).b
        *arg2 = x9_11
        *(arg2 + 1) = x9_11
        *(arg2 + 2) = x9_11
    else if (x0_2 == 3)
        int32_t x9_3 = var_14
        x8_12 = -1
        int32_t x9_4
        
        x9_4 = x9_3 s< 0xff ? x9_3 : 0xff
        
        *arg2 = x9_4.b & (not.d(x9_4 s>> 0x1f)).b
        int32_t x9_6 = var_18
        int32_t x9_7
        
        x9_7 = x9_6 s< 0xff ? x9_6 : 0xff
        
        *(arg2 + 1) = x9_7.b & (not.d(x9_7 s>> 0x1f)).b
        int32_t x9_9 = var_24
        int32_t x9_10
        
        x9_10 = x9_9 s< 0xff ? x9_9 : 0xff
        
        *(arg2 + 2) = x9_10.b & (not.d(x9_10 s>> 0x1f)).b
    else
        if (x0_2 != 4)
            return 0
        
        int32_t x8_1 = var_14
        int32_t x8_2
        
        x8_2 = x8_1 s< 0xff ? x8_1 : 0xff
        
        *arg2 = x8_2.b & (not.d(x8_2 s>> 0x1f)).b
        int32_t x8_4 = var_18
        int32_t x8_5
        
        x8_5 = x8_4 s< 0xff ? x8_4 : 0xff
        
        *(arg2 + 1) = x8_5.b & (not.d(x8_5 s>> 0x1f)).b
        int32_t x8_7 = var_24
        int32_t x8_8
        
        x8_8 = x8_7 s< 0xff ? x8_7 : 0xff
        
        *(arg2 + 2) = x8_8.b & (not.d(x8_8 s>> 0x1f)).b
        int32_t x8_10 = var_28
        int32_t x8_11
        
        x8_11 = x8_10 s< 0xff ? x8_10 : 0xff
        
        x8_12 = x8_11.b & (not.d(x8_11 s>> 0x1f)).b
    
    *(arg2 + 3) = x8_12

return 1
