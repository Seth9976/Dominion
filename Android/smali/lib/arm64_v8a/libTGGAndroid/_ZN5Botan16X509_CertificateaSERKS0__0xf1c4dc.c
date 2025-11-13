// 函数: _ZN5Botan16X509_CertificateaSERKS0_
// 地址: 0xf1c4dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (arg1 != entry_x1)
    *(entry_x1 + 0x20)
    std::__ndk1::vector<uint32_t, std::__ndk1::allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x18, *(entry_x1 + 0x18))
    *(entry_x1 + 0x38)
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 0x30, 
        *(entry_x1 + 0x30))
    *(entry_x1 + 0x50)
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 0x48, 
        *(entry_x1 + 0x48))
    *(entry_x1 + 0x68)
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 0x60, 
        *(entry_x1 + 0x60))

int64_t x9 = *(entry_x1 + 0x78)
int64_t x8 = *(entry_x1 + 0x80)

if (x8 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8 + 8) + 1, x8 + 8)
    while (i != 0)

int64_t* x20_1 = *(arg1 + 0x80)
*(arg1 + 0x78) = x9
*(arg1 + 0x80) = x8

if (x20_1 != 0)
    int64_t x9_1
    int32_t i_1
    
    do
        x9_1 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_1 - 1, &x20_1[1])
    while (i_1 != 0)
    
    if (x9_1 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()

return arg1
