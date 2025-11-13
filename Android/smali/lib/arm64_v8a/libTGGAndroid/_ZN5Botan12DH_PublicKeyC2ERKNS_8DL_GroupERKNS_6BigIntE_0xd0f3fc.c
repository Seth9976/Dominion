// 函数: _ZN5Botan12DH_PublicKeyC2ERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd0f3fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x10)
int64_t* entry_x2
int64_t x10 = *entry_x2
int64_t x8_5 = entry_x2[1]
void* x9_3 = arg1 + *(*arg1 - 0x88)

if (x8_5 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i != 0)

int64_t* x21 = *(x9_3 + 0x38)
*(x9_3 + 0x30) = x10
*(x9_3 + 0x38) = x8_5

if (x21 != 0)
    int64_t x9_4
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&x21[1])
        i_1 = __stlxr(x9_4 - 1, &x21[1])
    while (i_1 != 0)
    
    if (x9_4 == 0)
        (*(*x21 + 0x10))(x21)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x20_1 = arg1 + *(*arg1 - 0x88) + 8
uint32_t** entry_x3

if (x20_1 != entry_x3)
    entry_x3[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(x20_1, 
        *entry_x3)

*(x20_1 + 0x18) = entry_x3[3]
*(x20_1 + 0x20) = entry_x3[4].d
