// 函数: _ZNKSt6__ndk118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf13d74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
int64_t x8 = *(entry_x1 + 0x20)
uint64_t x9 = zx.q(*(arg1 + 0x28) - 1)

if (zx.d(*(x8 + mulu.dp.d(x9.d, 0x18) + 0x10)) != 0)
    int64_t* x8_1 = x8 + x9 * 0x18
    char* x9_1 = *x8_1
    char* x8_2 = *(entry_x1 + 0x10)
    void* i_2 = x8_1[1] - x9_1
    
    if (*(entry_x1 + 0x18) - x8_2 s>= i_2)
        if (i_2 s>= 1)
            char* x11_3 = x8_2
            void* i_1 = i_2
            void* i
            
            do
                if (zx.d(*x9_1) != zx.d(*x11_3))
                    goto label_f13db4
                
                i = i_1
                i_1 -= 1
                x11_3 = &x11_3[1]
                x9_1 = &x9_1[1]
            while (i != 1)
        
        *entry_x1 = 0xfffffc1e
        *(entry_x1 + 0x10) = x8_2 + i_2
        *(entry_x1 + 0x50) = *(arg1 + 8)
        return 

label_f13db4:
*entry_x1 = 0xfffffc1f
*(entry_x1 + 0x50) = 0
