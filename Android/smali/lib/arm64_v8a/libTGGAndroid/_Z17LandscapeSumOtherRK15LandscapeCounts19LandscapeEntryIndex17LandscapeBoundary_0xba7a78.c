// 函数: _Z17LandscapeSumOtherRK15LandscapeCounts19LandscapeEntryIndex17LandscapeBoundary
// 地址: 0xba7a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3

if (arg3 == 0)
    int32_t x8_1
    int32_t x8_4
    
    if (arg2 != 1)
        x8_1 = *(arg1 + 0x10)
        
        if (arg2 == 2)
            goto label_ba7acc
        
        x8_4 = *(arg1 + 0x20) + x8_1
        
        if (arg2 == 3)
            goto label_ba7ad4
        
        x8_3 = *(arg1 + 0x30) + x8_4
        
        if (arg2 == 4)
            x8_3 += *(arg1 + 0x50)
        else
            x8_3 += *(arg1 + 0x40)
            
            if (arg2 != 5)
                x8_3 += *(arg1 + 0x50)
    else
        x8_1 = *(arg1 + 0x20)
    label_ba7acc:
        x8_4 = *(arg1 + 0x30) + x8_1
    label_ba7ad4:
        x8_3 = *(arg1 + 0x50) + *(arg1 + 0x40) + x8_4
else
    int32_t x8
    int32_t x8_2
    
    if (arg2 != 1)
        x8 = *(arg1 + 0x18)
        
        if (arg2 == 2)
            goto label_ba7aa8
        
        x8_2 = *(arg1 + 0x28) + x8
        
        if (arg2 == 3)
            goto label_ba7ab0
        
        x8_3 = *(arg1 + 0x38) + x8_2
        
        if (arg2 == 4)
            x8_3 += *(arg1 + 0x58)
        else
            x8_3 += *(arg1 + 0x48)
            
            if (arg2 != 5)
                x8_3 += *(arg1 + 0x58)
    else
        x8 = *(arg1 + 0x28)
    label_ba7aa8:
        x8_2 = *(arg1 + 0x38) + x8
    label_ba7ab0:
        x8_3 = *(arg1 + 0x58) + *(arg1 + 0x48) + x8_2

return zx.q(x8_3)
