// 函数: sub_d2cb98
// 地址: 0xd2cb98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_3 = *arg3

if (x8_3 != 0)
    int64_t x9_1 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x8_3
    Botan::deallocate_memory(x8_3, (x9_1 - x8_3) s>> 2, 4)

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
