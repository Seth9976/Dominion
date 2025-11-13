// 函数: _ZN5Botan16SHAKE_128_Cipher12key_scheduleEPKhm
// 地址: 0xe248a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8

if (x10 s>> 3 u<= 0x18)
    std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(&arg1[8])
else if (x10 != 0xc8)
    *(arg1 + 0x10) = x8 + 0xc8

int64_t x8_2 = *(arg1 + 0x20)
int64_t x9_3 = *(arg1 + 0x28) - x8_2

if (x9_3 u<= 0xa7)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x20])
else if (x9_3 != 0xa8)
    *(arg1 + 0x28) = x8_2 + 0xa8

int64_t x0_3 = *(arg1 + 8)
int64_t x8_4 = *(arg1 + 0x10)

if (x8_4 != x0_3)
    memset(x0_3, 0, x8_4 - x0_3)

uint64_t entry_x2
int64_t x0_4 = Botan::SHA_3::absorb(0x540, &arg1[8], 0, arg2, entry_x2)
int64_t* x8_5 = *(arg1 + 8)
int64_t x10_1 = x0_4 & 0xfffffffffffffff8
*(x8_5 + x10_1) ^= 0x1f << (zx.q(x0_4.d << 3) & 0x38)
void* x8_6 = *(arg1 + 8)
*(x8_6 + 0xa0) ^= 0x8000000000000000
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = Botan::SHA_3::permute(*(arg1 + 8))
void* x11_1 = *(arg1 + 0x20)
int64_t* x12 = *(arg1 + 8)
void* i_1 = *(arg1 + 0x28) - x11_1
int64_t* x9_12
void* x10_8

if (i_1 u< 8)
    x10_8 = x11_1
    x9_12 = x12
    
    if (i_1 != 0)
    label_e24a5c:
        int64_t x11_4 = 0
        void* i
        
        do
            int64_t x13_2 = x11_4 & 0x38
            i = i_1
            i_1 -= 1
            x11_4 += 8
            *x10_8 = (*x9_12 u>> x13_2).b
            x10_8 += 1
        while (i != 1)
else
    if (i_1 - 8 u< 0x18 || (x11_1 u< ((i_1 - 8) & 0xfffffffffffffff8) + x12 + 8
        && x11_1 + (i_1 & 0xfffffffffffffff8) u> x12))
    label_e24a2c:
        x9_12 = x12
        x10_8 = x11_1
        
        do
            int64_t x11_3 = *x9_12
            x9_12 = &x9_12[1]
            i_1 -= 8
            *x10_8 = x11_3
            x10_8 += 8
        while (i_1 u> 7)
    else
        int64_t x13_1 = ((i_1 - 8) u>> 3) + 1
        int64_t i_4 = x13_1 & 0x3ffffffffffffffc
        int64_t x10_7 = i_4 << 3
        void* x15_1 = x11_1 + 0x10
        x9_12 = &x12[i_4]
        i_1 -= x10_7
        x10_8 = x11_1 + x10_7
        void* x11_2 = &x12[2]
        int64_t i_3 = i_4
        int64_t i_2
        
        do
            v0 = *(x11_2 - 0x10)
            v1 = *x11_2
            i_2 = i_3
            i_3 -= 4
            x11_2 += 0x20
            *(x15_1 - 0x10) = v0
            *x15_1 = v1
            x15_1 += 0x20
        while (i_2 != 4)
        x12 = x9_12
        x11_1 = x10_8
        
        if (x13_1 != i_4)
            goto label_e24a2c
    
    if (i_1 != 0)
        goto label_e24a5c
return result
