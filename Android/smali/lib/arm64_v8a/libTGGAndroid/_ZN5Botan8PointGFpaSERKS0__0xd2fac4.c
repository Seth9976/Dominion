// 函数: _ZN5Botan8PointGFpaSERKS0_
// 地址: 0xd2fac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]

if (x8 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8 + 8) + 1, x8 + 8)
    while (i != 0)

int64_t* x21 = *(arg1 + 8)
*arg1 = x9
*(arg1 + 8) = x8
int64_t x9_1

if (x21 != 0)
    int32_t i_1
    
    do
        x9_1 = __ldaxr(&x21[1])
        i_1 = __stlxr(x9_1 - 1, &x21[1])
    while (i_1 != 0)

if (x21 != 0 && x9_1 == 0)
    (*(*x21 + 0x10))(x21)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (arg1 != entry_x1)
        goto label_d2fb1c
    
    *(arg1 + 0x28) = entry_x1[5]
    *(arg1 + 0x30) = entry_x1[6].d
else if (arg1 == entry_x1)
    *(arg1 + 0x28) = entry_x1[5]
    *(arg1 + 0x30) = entry_x1[6].d
else
label_d2fb1c:
    entry_x1[3]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x10, entry_x1[2])
    *(arg1 + 0x28) = entry_x1[5]
    *(arg1 + 0x30) = entry_x1[6].d
    entry_x1[8]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x38, entry_x1[7])

*(arg1 + 0x50) = entry_x1[0xa]
*(arg1 + 0x58) = entry_x1[0xb].d

if (arg1 != entry_x1)
    entry_x1[0xd]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x60, entry_x1[0xc])

*(arg1 + 0x78) = entry_x1[0xf]
*(arg1 + 0x80) = entry_x1[0x10].d
return arg1
