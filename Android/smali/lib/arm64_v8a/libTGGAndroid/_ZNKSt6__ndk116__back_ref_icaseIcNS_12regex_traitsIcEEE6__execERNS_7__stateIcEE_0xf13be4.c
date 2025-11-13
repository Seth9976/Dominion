// 函数: _ZNKSt6__ndk116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf13be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
int64_t x8 = *(entry_x1 + 0x20)
uint64_t x9_1 = zx.q(*(arg1 + 0x28) - 1)
void* x8_1
void* x9_2
int64_t x10_2
void* x21_1
int64_t* x22_1

if (zx.d(*(x8 + mulu.dp.d(x9_1.d, 0x18) + 0x10)) != 0)
    x22_1 = x8 + x9_1 * 0x18
    x8_1 = *x22_1
    x10_2 = x22_1[1]
    x9_2 = *(entry_x1 + 0x10)
    x21_1 = x10_2 - x8_1

int64_t x8_3

if (zx.d(*(x8 + mulu.dp.d(x9_1.d, 0x18) + 0x10)) != 0 && *(entry_x1 + 0x18) - x9_2 s>= x21_1)
    if (x21_1 s>= 1)
        int64_t x23_1 = 0
        int64_t x24_1 = not.q(x8_1) + x10_2
        
        while (true)
            int64_t* x0 = *(arg1 + 0x18)
            char x0_1 = (*(*x0 + 0x28))(x0, zx.q(*(x8_1 + x23_1)))
            int64_t* x8_2 = *(arg1 + 0x18)
            
            if (zx.d(x0_1)
                    != zx.d(((*(*x8_2 + 0x28))(x8_2, zx.q(*(*(entry_x1 + 0x10) + x23_1))).d).b))
                goto label_f13c38
            
            if (x24_1 == x23_1)
                x9_2 = *(entry_x1 + 0x10)
                break
            
            x8_1 = *x22_1
            x23_1 += 1
    
    *entry_x1 = 0xfffffc1e
    *(entry_x1 + 0x10) = x9_2 + x21_1
    x8_3 = *(arg1 + 8)
else
label_f13c38:
    x8_3 = 0
    *entry_x1 = 0xfffffc1f

*(entry_x1 + 0x50) = x8_3
