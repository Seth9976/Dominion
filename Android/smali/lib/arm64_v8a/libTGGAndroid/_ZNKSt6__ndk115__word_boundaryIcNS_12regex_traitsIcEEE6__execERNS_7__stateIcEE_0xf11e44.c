// 函数: _ZNKSt6__ndk115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf11e44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
char* x8_8 = *(entry_x1 + 8)
void* x10 = *(entry_x1 + 0x18)

if (x8_8 == x10)
label_f11f04:
    
    if (zx.d(*(arg1 + 0x28)) == 0)
    label_f11f10:
        *entry_x1 = 0xfffffc1f
        *(entry_x1 + 0x50) = 0
        return 
else
    char* x9_1 = *(entry_x1 + 0x10)
    uint64_t x8
    
    if (x9_1 == x10)
        if ((zx.d(entry_x1[0x16].b) & 8) != 0)
            goto label_f11f04
        
        x8 = zx.q(*(x10 - 1))
        
        if (x8 != 0x5f
                && ((x8.d & 0x80) != 0 || (*(*(*(arg1 + 0x18) + 0x10) + (x8 << 3)) & 0x60) == 0))
            goto label_f11f04
        
    label_f11ef0:
        
        if (zx.d(*(arg1 + 0x28)) == 1)
            goto label_f11f10
    else
        int32_t x10_1
        
        if (x9_1 == x8_8)
            x10_1 = entry_x1[0x16]
        
        if (x9_1 == x8_8 && (x10_1 & 0x80) == 0)
            if ((x10_1 & 4) != 0)
                goto label_f11f04
            
            x8 = zx.q(*x8_8)
            
            if (x8 == 0x5f ||
                    ((x8.d & 0x80) == 0 && (*(*(*(arg1 + 0x18) + 0x10) + (x8 << 3)) & 0x60) != 0))
                goto label_f11ef0
            
            goto label_f11f04
        
        uint64_t x10_2 = zx.q(x9_1[-1])
        uint64_t x8_1 = zx.q(*x9_1)
        int32_t x8_5
        int32_t x9_9
        
        if (x10_2 == 0x5f ||
                ((x10_2.d & 0x80) == 0 && (*(*(*(arg1 + 0x18) + 0x10) + (x10_2 << 3)) & 0x60) != 0))
            x9_9 = 1
            
            if (x8_1.d == 0x5f || ((x8_1.d & 0x80) == 0
                    && (*(*(*(arg1 + 0x18) + 0x10) + (x8_1 << 3)) & 0x60) != 0))
                x8_5 = 1
            else
                x8_5 = 0
        else
            x9_9 = 0
            
            if (x8_1.d == 0x5f || ((x8_1.d & 0x80) == 0
                    && (*(*(*(arg1 + 0x18) + 0x10) + (x8_1 << 3)) & 0x60) != 0))
                x8_5 = 1
            else
                x8_5 = 0
        
        if (zx.d(*(arg1 + 0x28)) == (x9_9 != x8_5 ? 1 : 0))
            goto label_f11f10

*entry_x1 = 0xfffffc1e
*(entry_x1 + 0x50) = *(arg1 + 8)
