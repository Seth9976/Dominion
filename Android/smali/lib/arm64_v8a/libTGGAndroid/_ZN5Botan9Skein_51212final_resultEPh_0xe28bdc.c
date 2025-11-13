// 函数: _ZN5Botan9Skein_51212final_resultEPh
// 地址: 0xe28bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x30)
int64_t* entry_x1
int64_t* x20 = entry_x1
*(x8 + 8) |= 0x8000000000000000
char* x8_1 = *(arg1 + 0x48)
int64_t i = *(arg1 + 0x60)

if (i != *(arg1 + 0x50) - x8_1)
    do
        x8_1[i] = 0
        x8_1 = *(arg1 + 0x48)
        i += 1
    while (i != *(arg1 + 0x50) - x8_1)
    
    *(arg1 + 0x60)

Botan::Skein_512::ubi_512(arg1, x8_1)
int64_t var_18 = 0
**(arg1 + 0x30) = 0
*(*(arg1 + 0x30) + 8) = -0x100000000000000
int128_t v0
int128_t v1
v0, v1 = Botan::Skein_512::ubi_512(arg1, &var_18)
int64_t x9_6 = *(arg1 + 0x20)
int64_t* x10 = *(*(arg1 + 0x28) + 0x20)
uint64_t i_3 = x9_6 u>> 3
int64_t* x9_10

if (x9_6 u< 0x40)
    x9_10 = x10
    
    if (i_3 != 0)
    label_e28cf8:
        int64_t x10_2 = 0
        uint64_t i_1
        
        do
            int64_t x12_5 = x10_2 & 0x38
            i_1 = i_3
            i_3 -= 1
            x10_2 += 8
            *x20 = (*x9_10 u>> x12_5).b
            x20 += 1
        while (i_1 != 1)
else
    int64_t x9_8
    
    if (7 - i_3 != -8 && 7 - i_3 u>= -8)
        x9_8 = 7 - i_3
    else
        x9_8 = -8
    
    int64_t x9_9 = x9_8 + i_3
    int64_t x11_2
    
    if (x9_9 u>= 0x18)
        int64_t x11_1
        
        if (7 - i_3 != -8 && 7 - i_3 u>= -8)
            x11_1 = 7 - i_3
        else
            x11_1 = -8
        
        x11_2 = x11_1 + i_3
    
    if (x9_9 u>= 0x18 && ((x11_2 & 0xfffffffffffffff8) + x10 + 8 u<= x20
            || x20 + ((x11_2 + 8) & 0xfffffffffffffff8) u<= x10))
        int64_t i_5 = ((x9_9 u>> 3) + 1) & 0x3ffffffffffffffc
        void* x13_2 = &x20[2]
        x9_10 = &x10[i_5]
        i_3 -= i_5 << 3
        x20 = &x20[i_5]
        void* x10_4 = &x10[2]
        int64_t i_4 = i_5
        int64_t i_2
        
        do
            v0 = *(x10_4 - 0x10)
            v1 = *x10_4
            i_2 = i_4
            i_4 -= 4
            x10_4 += 0x20
            *(x13_2 - 0x10) = v0
            *x13_2 = v1
            x13_2 += 0x20
        while (i_2 != 4)
        
        if ((x9_9 u>> 3) + 1 != i_5)
            goto label_e28ce4
    else
        x9_10 = x10
    label_e28ce4:
        
        do
            int64_t x10_1 = *x9_10
            x9_10 = &x9_10[1]
            i_3 -= 8
            *x20 = x10_1
            x20 = &x20[1]
        while (i_3 u> 7)
    
    if (i_3 != 0)
        goto label_e28cf8
*(arg1 + 0x60) = 0
return Botan::Skein_512::initial_block() __tailcall
