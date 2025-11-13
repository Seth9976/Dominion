// 函数: sub_da7704
// 地址: 0xda7704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg3 + 0x28)

if (x22 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x22[1])
        i = __stlxr(x9_1 - 1, &x22[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x22 + 0x10))(x22)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_2 = *(arg3 + 8)

if (x0_2 != 0)
    int64_t x8_4 = *(arg3 + 0x18)
    *(arg3 + 0x10) = x0_2
    Botan::deallocate_memory(x0_2, (x8_4 - x0_2) s>> 1, 2)

if (arg2 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&arg2[1])
        i_1 = __stlxr(x9_2 - 1, &arg2[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*arg2 + 0x10))(arg2)
        std::__ndk1::__shared_weak_count::__release_weak()

sub_1101e04(arg1)
noreturn
