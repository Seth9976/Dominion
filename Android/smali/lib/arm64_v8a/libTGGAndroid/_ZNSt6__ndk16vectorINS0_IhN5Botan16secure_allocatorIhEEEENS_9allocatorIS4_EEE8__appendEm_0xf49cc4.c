// 函数: _ZNSt6__ndk16vectorINS0_IhN5Botan16secure_allocatorIhEEEENS_9allocatorIS4_EEE8__appendEm
// 地址: 0xf49cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)
int64_t entry_x1

if (((x8 - x19) s>> 3) * -0x5555555555555555 u>= entry_x1)
    if (entry_x1 != 0)
        memset(x19, 0, 0x18 + (entry_x1 * 0x18 - 0x18) u/ 0x18 * 0x18)
        x19 += 0x18 + (entry_x1 * 0x18 - 0x18) u/ 0x18 * 0x18
    
    *(arg1 + 8) = x19
    return 

int64_t x23_1 = *arg1
int64_t x22_1 = ((x19 - x23_1) s>> 3) * -0x5555555555555555
int64_t x10_1 = x22_1 + entry_x1

if (x10_1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    sub_ef2a0c()
    noreturn

int64_t x8_3 = ((x8 - x23_1) s>> 3) * -0x5555555555555555
int64_t x12_1 = x8_3 << 1
int64_t x10_2

x10_2 = x12_1 u< x10_1 ? x10_1 : x12_1

int64_t x24_1

x24_1 = x8_3 u< 0x555555555555555 ? x10_2 : 0xaaaaaaaaaaaaaaa

int64_t x0_1

if (x24_1 == 0)
    x0_1 = 0
else
    if (x24_1 u> 0xaaaaaaaaaaaaaaa)
        sub_ef2a0c()
        noreturn
    
    x0_1 = operator new(x24_1 * 0x18)

int64_t* x22_2 = x0_1 + x22_1 * 0x18
int64_t x24_2 = x0_1 + x24_1 * 0x18
memset(x22_2, 0, 0x18 + (entry_x1 * 0x18 - 0x18) u/ 0x18 * 0x18)
void* x8_5 = x22_2 + 0x18 + (entry_x1 * 0x18 - 0x18) u/ 0x18 * 0x18

if (x19 == x23_1)
    *arg1 = x22_2
    *(arg1 + 8) = x8_5
    *(arg1 + 0x10) = x24_2
else
    do
        x22_2 = &x22_2[-3]
        __builtin_memset(x22_2, 0, 0x18)
        x19 = &x19[-3]
        *x22_2 = *x19
        x22_2[1] = x19[1]
        x22_2[2] = x19[2]
        __builtin_memset(x19, 0, 0x18)
    while (x23_1 != x19)
    
    x19 = *arg1
    uint64_t* x9_12 = *(arg1 + 8)
    *arg1 = x22_2
    *(arg1 + 8) = x8_5
    *(arg1 + 0x10) = x24_2
    
    if (x9_12 != x19)
        uint64_t* x20_1 = x9_12
        
        do
            x20_1 = &x20_1[-3]
            arg1 = *x20_1
            
            if (arg1 != 0)
                int64_t x8_6 = x9_12[-1]
                x9_12[-2] = arg1
                Botan::deallocate_memory(arg1, x8_6 - arg1, 1)
            
            x9_12 = x20_1
        while (x19 != x20_1)

if (x19 != 0)
    return operator delete(x19) __tailcall
