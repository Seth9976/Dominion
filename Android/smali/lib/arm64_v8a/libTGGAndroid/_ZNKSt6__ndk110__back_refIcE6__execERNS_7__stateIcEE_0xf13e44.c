// 函数: _ZNKSt6__ndk110__back_refIcE6__execERNS_7__stateIcEE
// 地址: 0xf13e44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
int64_t x8 = *(entry_x1 + 0x20)
uint64_t x9 = zx.q(*(arg1 + 0x10))

if (((*(entry_x1 + 0x28) - x8) s>> 3) * -0x5555555555555555 u< x9)
    sub_f137c8()
    noreturn

uint64_t x9_1 = zx.q(x9.d - 1)

if (zx.d(*(x8 + mulu.dp.d(x9_1.d, 0x18) + 0x10)) != 0)
    int64_t* x9_2 = x8 + x9_1 * 0x18
    char* x10_6 = *x9_2
    int64_t x8_1 = x9_2[1]
    char* x9_3 = *(entry_x1 + 0x10)
    void* x11_1 = x8_1 - x10_6
    
    if (*(entry_x1 + 0x18) - x9_3 s>= x11_1)
        if (x10_6 != x8_1)
            char* x12_3 = x9_3
            
            do
                if (zx.d(*x10_6) != zx.d(*x12_3))
                    goto label_f13ea8
                
                x10_6 = &x10_6[1]
                x12_3 = &x12_3[1]
            while (x8_1 != x10_6)
        
        *entry_x1 = 0xfffffc1e
        *(entry_x1 + 0x10) = x9_3 + x11_1
        *(entry_x1 + 0x50) = *(arg1 + 8)
        return 

label_f13ea8:
*entry_x1 = 0xfffffc1f
*(entry_x1 + 0x50) = 0
