// 函数: sub_d2f878
// 地址: 0xd2f878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_5 = *arg4

if (x8_5 != 0)
    int64_t x9_1 = *(arg2 + 0x48)
    *(arg2 + 0x40) = x8_5
    Botan::deallocate_memory(x8_5, (x9_1 - x8_5) s>> 2, 4)

void* x0_1 = *arg3

if (x0_1 != 0)
    int64_t x8 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0_1
    Botan::deallocate_memory(x0_1, (x8 - x0_1) s>> 2, 4)

int64_t* x19 = *(arg2 + 8)

if (x19 != 0)
    int64_t x9_3
    int32_t i
    
    do
        x9_3 = __ldaxr(&x19[1])
        i = __stlxr(x9_3 - 1, &x19[1])
    while (i != 0)
    
    if (x9_3 == 0)
        (*(*x19 + 0x10))(x19)
        std::__ndk1::__shared_weak_count::__release_weak()

sub_1101e04(arg1)
noreturn
