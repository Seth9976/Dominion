// 函数: _ZN5Botan4HMAC12key_scheduleEPKhm
// 地址: 0xd8a334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x10) + 0x38))()
int64_t x9 = *(arg1 + 0x18)
int64_t x8_2 = *(arg1 + 0x50)
int64_t x10_1 = *(arg1 + 0x20) - x9

if (x8_2 u> x10_1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x18])
    x8_2 = *(arg1 + 0x50)
else if (x8_2 u< x10_1)
    *(arg1 + 0x20) = x9 + x8_2

int64_t x9_2 = *(arg1 + 0x30)
int64_t x10_3 = *(arg1 + 0x38) - x9_2

if (x8_2 u> x10_3)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x30])
else if (x8_2 u< x10_3)
    *(arg1 + 0x38) = x9_2 + x8_2

int64_t x0_5 = *(arg1 + 0x18)
int64_t x8_4 = *(arg1 + 0x20)

if (x8_4 != x0_5)
    memset(x0_5, 0, x8_4 - x0_5)

int64_t x0_6 = *(arg1 + 0x30)
int64_t x8_5 = *(arg1 + 0x38)

if (x8_5 != x0_6)
    memset(x0_6, 0, x8_5 - x0_6)

int64_t i = *(arg1 + 0x50)
int64_t entry_x2

if (i u>= entry_x2)
    if (entry_x2 == 0)
        goto label_d8a484
    
    if (i != 0)
        i = 0
        int64_t x10_4 = 0
        
        do
            int64_t x10_5 =
                x10_4 & ((((x10_4 - entry_x2) ^ x10_4) | (x10_4 ^ entry_x2)) ^ x10_4) s>> 0x3f
            (*(arg1 + 0x18))[i] =
                *(arg2 + x10_5) & (((((neg.q(entry_x2) + i) ^ i) | (i ^ entry_x2)) ^ i) s>> 0x3f).b
            i += 1
            x10_4 = x10_5 + 1
        while (i != *(arg1 + 0x50))
        
        goto label_d8a484
else
    int64_t* x0_7 = *(arg1 + 0x10)
    (*(*x0_7 + 0x18))(x0_7, arg2, entry_x2)
    int64_t* x0_8 = *(arg1 + 0x10)
    (*(*x0_8 + 0x20))(x0_8, *(arg1 + 0x18))
    i = *(arg1 + 0x50)
label_d8a484:
    
    if (i != 0)
        int64_t i_1 = 0
        
        do
            char* x11_7 = *(arg1 + 0x18)
            x11_7[i_1] ^= 0x36
            (*(arg1 + 0x30))[i_1] = (*(arg1 + 0x18))[i_1] ^ 0x6a
            i_1 += 1
        while (i_1 != *(arg1 + 0x50))

*(arg1 + 0x18)
*(arg1 + 0x20)
jump(*(**(arg1 + 0x10) + 0x18))
