// 函数: sub_e08748
// 地址: 0xe08748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = *(arg1 + 8)
void* x22 = arg2 + 0x78
void* x23_1

if (x22 == i)
    x23_1 = arg2
label_e0884c:
    bool cond:0_1
    
    do
        void* x0_3 = *(x22 - 0x58)
        *(x22 - 0x60) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        
        if (x0_3 != 0)
            *(x22 - 0x50) = x0_3
            operator delete(x0_3)
        
        void* x0_4 = *(x22 - 0x78)
        
        if (x0_4 != 0)
            *(x22 - 0x70) = x0_4
            operator delete(x0_4)
        
        cond:0_1 = x23_1 == x22 - 0x78
        x22 -= 0x78
    while (not(cond:0_1))
else
    int64_t* x22_1 = arg2
    
    do
        void* x0 = *x22_1
        int128_t v0
        int128_t v1
        int128_t v2
        
        if (x0 != 0)
            x22_1[1] = x0
            v0, v1, v2 = operator delete(x0)
            __builtin_memset(x22_1, 0, 0x18)
        
        v0 = *(x22_1 + 0x78)
        int64_t x8_3 = x22_1[0x11]
        void* x0_1 = x22_1[4]
        x22_1[0xf] = 0
        x22_1[0x10] = 0
        *x22_1 = v0
        x22_1[2] = x8_3
        x22_1[0x11] = 0
        
        if (x0_1 != 0)
            x22_1[5] = x0_1
            v0, v1, v2 = operator delete(x0_1)
            __builtin_memset(&x22_1[4], 0, 0x18)
        
        v1 = *(x22_1 + 0xb0)
        v2 = *(x22_1 + 0xc0)
        *(x22_1 + 0x20) = *(x22_1 + 0x98)
        *(x22_1 + 0x38) = v1
        v0 = *(x22_1 + 0xd0)
        v1 = *(x22_1 + 0xe0)
        int64_t x8_2 = x22_1[0x15]
        x23_1 = &x22_1[0xf]
        *(x22_1 + 0x48) = v2
        *(x22_1 + 0x58) = v0
        __builtin_memset(&x22_1[0x13], 0, 0x18)
        x22_1[6] = x8_2
        *(x22_1 + 0x68) = v1
        x22_1 = x23_1
    while (&x22_1[0x1e] != i)
    
    x22 = *(arg1 + 8)
    
    if (x22 != x23_1)
        goto label_e0884c

*(arg1 + 8) = x23_1
return arg2
