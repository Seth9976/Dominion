// 函数: _Z17DefaultSmartplaysv
// 地址: 0x9adb1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
*(entry_x8 + 0x200) = 0
int32_t* var_18
int64_t result = GameSpecific_GetSmartplays(&var_18)

if (result.d s>= 1)
    int32_t* x8 = var_18
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int64_t x11_9
        
        if ((zx.d(x8[0x2a].b) & 2) != 0)
            x11_9 = 0
        label_9adbc4:
            int64_t x12_1 = sx.q(*(entry_x8 + 0x200))
            *(entry_x8 + 0x200) = x12_1.d + 1
            int32_t x11_11 = *(x8 + x11_9 * 0x18 + 0x98)
            void* x12_2 = entry_x8 + (x12_1 << 3)
            *x12_2 = *x8
            *(x12_2 + 4) = x11_11
        else
            if ((zx.d(x8[0x30].b) & 2) != 0)
                x11_9 = 1
                goto label_9adbc4
            
            if ((zx.d(x8[0x36].b) & 2) != 0)
                x11_9 = 2
                goto label_9adbc4
            
            if ((zx.d(x8[0x3c].b) & 2) != 0)
                x11_9 = 3
                goto label_9adbc4
            
            if ((zx.d(x8[0x42].b) & 2) != 0)
                x11_9 = 4
                goto label_9adbc4
            
            if ((zx.d(x8[0x48].b) & 2) != 0)
                x11_9 = 5
                goto label_9adbc4
            
            if ((zx.d(x8[0x4e].b) & 2) != 0)
                x11_9 = 6
                goto label_9adbc4
            
            if ((zx.d(x8[0x54].b) & 2) != 0)
                x11_9 = 7
                goto label_9adbc4
        i = i_1
        i_1 -= 1
        x8 = &x8[0x56]
    while (i != 1)

return result
