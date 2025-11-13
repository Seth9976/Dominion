// 函数: _ZN5Botan5SHA_36expandEmRNSt6__ndk16vectorImNS_16secure_allocatorImEEEEPhm
// 地址: 0xe21c2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 & 0x3f) != 0)
    return Botan::SHA_3::SHA_3(Botan::throw_invalid_argument(
        "SHA-3 bitrate must be multiple of 64", "expand", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")) __tailcall

uint64_t i_6 = arg4

if (arg4 == 0)
    return 

uint8_t* x20_1 = arg3
uint64_t i_7 = arg1 u>> 3

while (true)
    int64_t* x12_2 = *arg2
    uint64_t i_3
    
    i_3 = i_6 u< i_7 ? i_6 : i_7
    
    uint64_t i_1
    uint8_t* x10_1
    int64_t* x11_2
    int128_t v0
    int128_t v1
    
    if (i_3 u< 8)
        x10_1 = x20_1
        i_1 = i_3
        x11_2 = x12_2
    else if (i_3 - 8 u>= 0x18)
        int64_t x9_1 = (i_3 - 8) & 0xfffffffffffffff8
        
        if (x20_1 u< x12_2 + x9_1 + 8)
            i_1 = i_3
            x10_1 = x20_1
        
        if (x20_1 u< x12_2 + x9_1 + 8 && &x20_1[x9_1 + 8] u> x12_2)
            goto label_e21d04
        
        int64_t i_5 = (((i_3 - 8) u>> 3) + 1) & 0x3ffffffffffffffc
        int64_t x10_4 = i_5 << 3
        void* x15_1 = &x20_1[0x10]
        x11_2 = &x12_2[i_5]
        i_1 = i_3 - x10_4
        x10_1 = &x20_1[x10_4]
        void* x12_1 = &x12_2[2]
        int64_t i_4 = i_5
        int64_t i
        
        do
            v0 = *(x12_1 - 0x10)
            v1 = *x12_1
            i = i_4
            i_4 -= 4
            x12_1 += 0x20
            *(x15_1 - 0x10) = v0
            *x15_1 = v1
            x15_1 += 0x20
        while (i != 4)
        x12_2 = x11_2
        
        if (((i_3 - 8) u>> 3) + 1 != i_5)
            goto label_e21d04
    else
        i_1 = i_3
        x10_1 = x20_1
    label_e21d04:
        x11_2 = x12_2
        
        do
            int64_t x12_3 = *x11_2
            x11_2 = &x11_2[1]
            i_1 -= 8
            *x10_1 = x12_3
            x10_1 = &x10_1[8]
        while (i_1 u> 7)
    
    if (i_1 != 0)
        int64_t x12_4 = 0
        uint64_t i_2
        
        do
            int64_t x14_1 = x12_4 & 0x38
            i_2 = i_1
            i_1 -= 1
            x12_4 += 8
            *x10_1 = (*x11_2 u>> x14_1).b
            x10_1 = &x10_1[1]
        while (i_2 != 1)
    
    uint64_t i_8 = i_6
    i_6 -= i_3
    
    if (i_8 == i_3)
        break
    
    x20_1 = &x20_1[i_3]
    arg1, v0, v1 = Botan::SHA_3::permute(*arg2)
