// 函数: _Z16AnimationStopAllP9Structure
// 地址: 0xc7af40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *(arg1 + 0x38)
void* result = *(x20 + 8)

if (result != 0)
    void* i
    
    do
        void** x8_7 = *result
        i = *(result + 8)
        void** x9_4 = *(*gpGameData + 8)
        
        if (x8_7[5].d == 2)
            *(x20 + (sx.q(x8_7[6].d) << 4) + 0x38) = 0
            int64_t x10_8 = sx.q(*(x20 + 0xc0))
            int32_t x11_2 = x8_7[6].d
            *(x20 + 0xc0) = x10_8.d + 1
            *(x20 + (x10_8 << 2) + 0xc4) = x11_2
        
        void* x11_1 = *x9_4
        *(x9_4 + 0x14) -= 1
        *x8_7 = x11_1
        *x9_4 = x8_7
        void* x8_1 = *(result + 0x10)
        int64_t* x8_2
        
        if (x8_1 == 0)
            x8_2 = x20 + 8
        else
            x8_2 = x8_1 + 8
        
        *x8_2 = *(result + 8)
        void* x8_3 = *(result + 8)
        void* x8_4
        
        if (x8_3 == 0)
            x8_4 = x20 + 0x10
        else
            x8_4 = x8_3 + 0x10
        
        *x8_4 = *(result + 0x10)
        *(x20 + 0x18) -= 1
        XPooledFree(result, 0x18)
        result = i
    while (i != 0)
    x20 = *(arg1 + 0x38)

*(x20 + 0x348) = 0
return result
