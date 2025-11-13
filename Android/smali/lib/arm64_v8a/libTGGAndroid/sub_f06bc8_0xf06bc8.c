// 函数: sub_f06bc8
// 地址: 0xf06bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x24_1 = *(arg2 + 0xa0)

if (x24_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x24_1[1])
        i = __stlxr(x9_1 - 1, &x24_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x24_1 + 0x10))(x24_1)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x24 = *(arg2 + 0x90)

if (x24 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x24[1])
        i_1 = __stlxr(x9_2 - 1, &x24[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*x24 + 0x10))(x24)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_4 = *arg5

if (x0_4 != 0)
    int64_t x8_7 = *(arg2 + 0x68)
    *(arg2 + 0x60) = x0_4
    Botan::deallocate_memory(x0_4, (x8_7 - x0_4) s>> 2, 4)

void* x0_5 = *arg4

if (x0_5 != 0)
    int64_t x8_9 = *(arg2 + 0x40)
    *(arg2 + 0x38) = x0_5
    Botan::deallocate_memory(x0_5, (x8_9 - x0_5) s>> 2, 4)

void* x0_6 = *arg3

if (x0_6 != 0)
    int64_t x8_11 = *(arg2 + 0x18)
    *(arg2 + 0x10) = x0_6
    Botan::deallocate_memory(x0_6, (x8_11 - x0_6) s>> 2, 4)

operator delete(arg2)
sub_1101e04(arg1)
noreturn
