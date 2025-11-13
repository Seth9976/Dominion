// 函数: _ZN5Botan5SHA_312final_resultEPh
// 地址: 0xe221a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x10)

if ((x8 & 0x3f) != 0)
    uint8_t* x0_2
    uint8_t* x1_1
    uint64_t x2
    x0_2, x1_1, x2 = Botan::throw_invalid_argument("SHA-3 bitrate must be multiple of 64", 
        "finish", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::SHACAL2::encrypt_n(x0_2, x1_1, x2) __tailcall

int64_t x9 = *(arg1 + 0x30)
int64_t* x10 = *(arg1 + 0x18)
int64_t x9_1 = x9 & 0xfffffffffffffff8
*(x10 + x9_1) ^= 6 << (zx.q(x9.d << 3) & 0x38)
int64_t* entry_x1
int64_t* x20 = entry_x1
void* x8_3 = (x8 u>> 3 & 0x1ffffffffffffff8) + *(arg1 + 0x18)
*(x8_3 - 8) ^= 0x8000000000000000
int128_t v0
int128_t v1
v0, v1 = Botan::SHA_3::permute(*(arg1 + 0x18))
int64_t x8_4 = *(arg1 + 8)
int64_t* x10_1 = *(arg1 + 0x18)
uint64_t i_2 = x8_4 u>> 3
int64_t* x9_8

if (x8_4 u< 0x40)
    x9_8 = x10_1
    
    if (i_2 != 0)
    label_e222a0:
        int64_t x10_3 = 0
        uint64_t i
        
        do
            int64_t x12_5 = x10_3 & 0x38
            i = i_2
            i_2 -= 1
            x10_3 += 8
            *x20 = (*x9_8 u>> x12_5).b
            x20 += 1
        while (i != 1)
else
    int64_t x9_6
    
    if (7 - i_2 != -8 && 7 - i_2 u>= -8)
        x9_6 = 7 - i_2
    else
        x9_6 = -8
    
    int64_t x9_7 = x9_6 + i_2
    int64_t x11_5
    
    if (x9_7 u>= 0x18)
        int64_t x11_4
        
        if (7 - i_2 != -8 && 7 - i_2 u>= -8)
            x11_4 = 7 - i_2
        else
            x11_4 = -8
        
        x11_5 = x11_4 + i_2
    
    if (x9_7 u>= 0x18 && ((x11_5 & 0xfffffffffffffff8) + x10_1 + 8 u<= x20
            || x20 + ((x11_5 + 8) & 0xfffffffffffffff8) u<= x10_1))
        int64_t i_4 = ((x9_7 u>> 3) + 1) & 0x3ffffffffffffffc
        void* x13_1 = &x20[2]
        x9_8 = &x10_1[i_4]
        i_2 -= i_4 << 3
        x20 = &x20[i_4]
        void* x10_4 = &x10_1[2]
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            v0 = *(x10_4 - 0x10)
            v1 = *x10_4
            i_1 = i_3
            i_3 -= 4
            x10_4 += 0x20
            *(x13_1 - 0x10) = v0
            *x13_1 = v1
            x13_1 += 0x20
        while (i_1 != 4)
        
        if ((x9_7 u>> 3) + 1 != i_4)
            goto label_e2228c
    else
        x9_8 = x10_1
    label_e2228c:
        
        do
            int64_t x10_2 = *x9_8
            x9_8 = &x9_8[1]
            i_2 -= 8
            *x20 = x10_2
            x20 = &x20[1]
        while (i_2 u> 7)
    
    if (i_2 != 0)
        goto label_e222a0
jump(*(*arg1 + 0x38))
