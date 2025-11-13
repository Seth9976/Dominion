// 函数: _ZN5Botan13DSA_PublicKeyC1ERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd1e788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = -1
*(arg1 + 0x30) = 1
*arg1 = _vtable_for_Botan::DSA_PublicKey + 0x90
*(arg1 + 8) = _vtable_for_Botan::DSA_PublicKey + 0x1a0
int64_t x9_1 = *arg2
int64_t x8_1 = *(arg2 + 8)

if (x8_1 == 0)
    *(arg1 + 0x38) = x9_1
    *(arg1 + 0x40) = x8_1
else
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)
    int64_t* x21_1 = *(arg1 + 0x40)
    *(arg1 + 0x38) = x9_1
    *(arg1 + 0x40) = x8_1
    
    if (x21_1 != 0)
        int64_t x9_2
        int32_t i_1
        
        do
            x9_2 = __ldaxr(&x21_1[1])
            i_1 = __stlxr(x9_2 - 1, &x21_1[1])
        while (i_1 != 0)
        
        if (x9_2 == 0)
            (*(*x21_1 + 0x10))(x21_1)
            std::__ndk1::__shared_weak_count::__release_weak()

void* x21_2 = arg1 + *(*arg1 - 0x88) + 8
uint32_t** entry_x2

if (x21_2 != entry_x2)
    entry_x2[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(x21_2, 
        *entry_x2)

*(x21_2 + 0x18) = entry_x2[3]
*(x21_2 + 0x20) = entry_x2[4].d
