// 函数: _Z32PregameHasProjectAfterDivineWind11DomCardEnum
// 地址: 0xac3618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x8 = *(PregameContextGet() + 0x20)
int32_t x9 = *(x8 + 0x28)

if (x9 == 0)
label_ac3668:
    int32_t x9_4 = *(x8 + 0x15c)
    
    if (x9_4 == 0)
        return 0
    
    if (x9_4 != x19)
        int32_t x9_5 = *(x8 + 0x160)
        
        if (x9_5 == 0)
            return 0
        
        if (x9_5 != x19)
            int32_t x9_6 = *(x8 + 0x164)
            
            if (x9_6 == 0)
                return 0
            
            if (x9_6 != x19)
                int32_t x9_7 = *(x8 + 0x168)
                
                if (x9_7 == 0)
                    return 0
                
                if (x9_7 != x19)
                    int32_t x8_1 = *(x8 + 0x16c)
                    
                    if (x8_1 != 0)
                        return zx.q(x8_1 == x19 ? 1 : 0)
                    
                    return 0
else if (x9 != x19)
    int32_t x9_1 = *(x8 + 0x64)
    
    if (x9_1 == 0)
        goto label_ac3668
    
    if (x9_1 != x19)
        int32_t x9_2 = *(x8 + 0xa0)
        
        if (x9_2 == 0)
            goto label_ac3668
        
        if (x9_2 != x19)
            int32_t x9_3 = *(x8 + 0xdc)
            
            if (x9_3 == 0 || x9_3 != x19)
                goto label_ac3668

return 1
