// 函数: _Z8IsWinnerR8GameSave9PlayerWhoRiS2_
// 地址: 0x9beff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x11b4))
int32_t i_1 = arg2

if (x8.d s< 1)
label_9bf040:
    
    if ((GameSpecific_IsGameOver(arg1) & 1) != 0)
        int32_t x8_1 = *(arg1 + 0x11b4)
        int32_t x24_1
        
        if (x8_1 s< 1)
            x24_1 = 0
        else
            x24_1 = 0
            int32_t i = 0
            
            do
                int32_t x9_4
                
                if (x8_1 s>= 1)
                    uint64_t x9_2 = zx.q(x8_1)
                    void* __offset(GameSave, 0x74) x10_2 = arg1 + 0x74
                    
                    while (*(x10_2 - 4) != i)
                        uint64_t temp1_1 = x9_2
                        x9_2 -= 1
                        x10_2 += 0x22c
                        
                        if (temp1_1 == 1)
                            goto label_9bf080
                    
                    x9_4 = *x10_2 - 0x3e9
                
                if (x8_1 s< 1 || x9_4 u> 4 || (1 << x9_4 & 0x19) == 0)
                label_9bf080:
                    int32_t x0_3 = GameSpecific_GetRank(arg1, zx.q(i), true, arg3, arg4)
                    x8_1 = *(arg1 + 0x11b4)
                    bool z_1
                    
                    if (x0_3 s>= x24_1)
                        z_1 = x24_1 == 0
                    else
                        z_1 = true
                    
                    if (z_1)
                        x24_1 = x0_3
                
                i += 1
            while (i s< x8_1)
        
        return zx.q(GameSpecific_GetRank(arg1, zx.q(i_1), true, arg3, arg4) == x24_1 ? 1 : 0)
else
    void* __offset(GameSave, 0x74) x9_1 = arg1 + 0x74
    
    while (*(x9_1 - 4) != i_1)
        uint64_t temp0_1 = x8
        x8 -= 1
        x9_1 += 0x22c
        
        if (temp0_1 == 1)
            goto label_9bf040
    
    int32_t x8_3 = *x9_1 - 0x3e9
    
    if (x8_3 u> 4 || (1 << x8_3 & 0x19) == 0)
        goto label_9bf040

return 0
