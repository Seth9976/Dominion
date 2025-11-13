// 函数: _ZN8UIButton6UpdateEv
// 地址: 0x105e114
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint32_t x8 = zx.d(*(entry_x0 + 0xa4))
*(entry_x0 + 0xb1) = 0
*(entry_x0 + 0xd4) = 0

if (x8 != 0 || zx.d(*(entry_x0 + 0xa5)) != 0 || zx.d(*(entry_x0 + 0xa8)) != 0
        || zx.d(*(entry_x0 + 0xa7)) != 0)
    *(entry_x0 + 0xad) = 0
    *(entry_x0 + 0xaa) = 0
    return 

InputData* var_28 = nullptr

if ((InputQueueIterateNext(&var_28) & 1) != 0)
    int32_t x0_3
    
    do
        int32_t* x8_6 = var_28
        float v2_1 = x8_6[4]
        float v0_1 = x8_6[5]
        uint32_t x10_1 = zx.d(*(*gAppInterface + 0x45))
        float* x9_2 = *(entry_x0 + 0xb8)
        float v1_1
        
        if (x10_1 == 0)
            v1_1 = v2_1
        else
            v1_1 = float.s(0x44b40000) - v0_1
        
        if (x10_1 != 0)
            v0_1 = v2_1
        
        if (x9_2 != 0)
            v2_1 = v1_1 * *x9_2 + v0_1 * x9_2[1]
            v0_1 = x9_2[7] + x9_2[6] + v1_1 * x9_2[4] + v0_1 * x9_2[5]
            v1_1 = x9_2[3] + x9_2[2] + v2_1
        
        v2_1 = *(entry_x0 + 8)
        int32_t x9_3
        
        if (v1_1 < v2_1 || v1_1 >= v2_1 + *(entry_x0 + 0x10))
            x9_3 = 0
        else
            v1_1 = *(entry_x0 + 0xc)
            
            if (v0_1 < v1_1 || v0_1 >= v1_1 + *(entry_x0 + 0x14))
                x9_3 = 0
            else
                x9_3 = 1
        
        int32_t x8_7 = *x8_6
        
        if (x8_7 == 4)
            if (zx.d(*(entry_x0 + 0xa9)) == 0 && zx.d(*(entry_x0 + 0xae)) == 0
                    && zx.d(*(entry_x0 + 0xaa)) != 0)
                XAsset* x0_6 = *(entry_x0 + 0x80)
                *(entry_x0 + 0xb1) = 1
                
                if (x0_6 != 0)
                    SoundPlay(x0_6)
                
                int64_t x8_12 = *(entry_x0 + 0xc8)
                
                if (x8_12 != 0)
                    x8_12(*(entry_x0 + 0xc0), entry_x0)
                
                InputQueueMarkAllAsProcessed()
            
            *(entry_x0 + 0xae) = 0
            *(entry_x0 + 0xaa) = 0
        else if (x8_7 == 3)
            char x8_5
            
            if (x9_3 == 0)
                x8_5 = 0
                *(entry_x0 + 0xae) = 1
            else if (zx.d(*(entry_x0 + 0xa9)) == 0)
                *(entry_x0 + 0xae) = 0
                x8_5 = 1
            else
                XAsset* x0_4 = *(entry_x0 + 0x80)
                *(entry_x0 + 0xb1) = 1
                
                if (x0_4 != 0)
                    SoundPlay(x0_4)
                
                int64_t x8_9 = *(entry_x0 + 0xc8)
                
                if (x8_9 != 0)
                    x8_9(*(entry_x0 + 0xc0), entry_x0)
                
                InputQueueMarkAllAsProcessed()
                x8_5 = 1
            
            *(entry_x0 + 0xaa) = x8_5
        
        x0_3 = InputQueueIterateNext(&var_28)
    while ((x0_3 & 1) != 0)

char x8_16

if ((GetCursorPosition(&var_28) & 1) == 0)
    x8_16 = 0
else
    float v0_2 = var_28.d
    float v2_2 = var_28:4.d
    uint32_t x9_4 = zx.d(*(*gAppInterface + 0x45))
    float* x8_14 = *(entry_x0 + 0xb8)
    float v1_2
    
    if (x9_4 == 0)
        v1_2 = v0_2
    else
        v1_2 = float.s(0x44b40000) - v2_2
    
    if (x9_4 == 0)
        v0_2 = v2_2
    
    if (x8_14 != 0)
        v2_2 = v1_2 * *x8_14 + v0_2 * x8_14[1]
        v0_2 = x8_14[7] + x8_14[6] + v1_2 * x8_14[4] + v0_2 * x8_14[5]
        v1_2 = x8_14[3] + x8_14[2] + v2_2
    
    if (zx.d(*(entry_x0 + 0xae)) != 0)
        x8_16 = 0
    else
        v2_2 = *(entry_x0 + 8)
        float v3_2 = *(entry_x0 + 0x40)
        
        if (v1_2 < v2_2 - v3_2 || v1_2 >= v3_2 + v2_2 + *(entry_x0 + 0x10))
            x8_16 = 0
        else
            v1_2 = *(entry_x0 + 0xc)
            v2_2 = *(entry_x0 + 0x44)
            
            if (v0_2 < v1_2 - v2_2 || v0_2 >= v2_2 + v1_2 + *(entry_x0 + 0x14))
                x8_16 = 0
            else
                x8_16 = 1

*(entry_x0 + 0xab) = x8_16

if ((InputIsButtonDown(0).d & 1) != 0)
    return 

if (zx.d(*(entry_x0 + 0xaa)) != 0)
    XTrace("dropped mouse up")
    *(entry_x0 + 0xaa) = 0

if (zx.d(*(entry_x0 + 0xae)) != 0)
    *(entry_x0 + 0xae) = 0
