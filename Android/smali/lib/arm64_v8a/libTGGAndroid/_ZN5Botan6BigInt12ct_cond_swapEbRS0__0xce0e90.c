// 函数: _ZN5Botan6BigInt12ct_cond_swapEbRS0_
// 地址: 0xce0e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x9_2 = (*(arg1 + 8) - x8) s>> 2
int64_t* entry_x2
int64_t x10_2 = (entry_x2[1] - *entry_x2) s>> 2
uint64_t x21 = arg1
int64_t x22

x22 = x9_2 u< x10_2 ? x10_2 : x9_2

int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (x9_2 u< x10_2)
    if (x22 u<= (*(x21 + 0x10) - x8) s>> 2 || (x22 & 0xfffffffffffffff8) + 8 u> x9_2)
        arg1, v0, v1, v2, v3 =
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x21)
    else if ((x22 & 0xfffffffffffffff8) + 8 u< x9_2)
        *(x21 + 8) = x8 + (((x22 & 0xfffffffffffffff8) + 8) << 2)

int64_t x8_2 = *entry_x2
int64_t x9_5 = (entry_x2[1] - x8_2) s>> 2

if (x22 u> x9_5)
    if (x22 u<= (entry_x2[2] - x8_2) s>> 2 || (x22 & 0xfffffffffffffff8) + 8 u> x9_5)
        arg1, v0, v1, v2, v3 =
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x2)
    else if ((x22 & 0xfffffffffffffff8) + 8 u< x9_5)
        entry_x2[1] = x8_2 + (((x22 & 0xfffffffffffffff8) + 8) << 2)

void* x8_3 = *x21
*(x21 + 0x18) = -1
entry_x2[3] = -1

if (x22 == 0)
    return 

if ((arg2.d & 1) != 0)
    void* x9_6 = *entry_x2
    int64_t x10_11
    
    if (x22 u>= 8)
        x10_11 = x22 << 2
    
    int64_t i_9
    
    if (x22 u>= 8 && (x8_3 u>= x9_6 + x10_11 || x9_6 u>= x8_3 + x10_11))
        i_9 = x22 & 0xfffffffffffffff8
        void* x11_2 = x8_3 + 0x10
        void* x12_2 = x9_6 + 0x10
        int64_t i_7 = i_9
        int64_t i
        
        do
            v0 = *(x11_2 - 0x10)
            v3 = *x11_2
            v2 = *x12_2
            i = i_7
            i_7 -= 8
            *(x11_2 - 0x10) = *(x12_2 - 0x10)
            *x11_2 = v2
            *(x12_2 - 0x10) = v0
            *x12_2 = v3
            x11_2 += 0x20
            x12_2 += 0x20
        while (i != 8)
        
        if (x22 != i_9)
            goto label_ce0f88
    else
        i_9 = 0
    label_ce0f88:
        int64_t i_6 = x22 - i_9
        int64_t x10_13 = i_9 << 2
        int32_t* x9_7 = x9_6 + x10_13
        int32_t* x8_4 = x8_3 + x10_13
        int64_t i_1
        
        do
            int32_t x12_1 = *x8_4
            i_1 = i_6
            i_6 -= 1
            *x8_4 = *x9_7
            x8_4 = &x8_4[1]
            *x9_7 = x12_1
            x9_7 = &x9_7[1]
        while (i_1 != 1)
else
    int64_t i_8
    
    if (x22 u>= 2)
        i_8 = x22 & 0xfffffffffffffffe
        int64_t i_5 = i_8
        int64_t i_2
        
        do
            i_2 = i_5
            i_5 -= 2
        while (i_2 != 2)
        
        if (x22 != i_8)
            goto label_ce0fdc
    else
        i_8 = 0
    label_ce0fdc:
        int64_t i_4 = x22 - i_8
        int64_t i_3
        
        do
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
