// 函数: sub_f2952c
// 地址: 0xf2952c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1
int32_t i

do
    x8_1 = __ldaxr(arg6)
    i = __stlxr(x8_1 - 1, arg6)
while (i != 0)

if (x8_1 == 0)
    (*(*arg5 + 0x10))(arg5)
    std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x20 = arg2[0x26]

if (x20 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x20[1])
        i_1 = __stlxr(x9_2 - 1, &x20[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_4 = arg2[0x1f]

if (x0_4 != 0)
    int64_t x8_7 = arg2[0x21]
    arg2[0x20] = x0_4
    Botan::deallocate_memory(x0_4, (x8_7 - x0_4) s>> 2, 4)

void* x0_5 = *arg7

if (x0_5 != 0)
    int64_t x8_10 = arg2[0x1c]
    arg2[0x1b] = x0_5
    Botan::deallocate_memory(x0_5, (x8_10 - x0_5) s>> 2, 4)

void* x0_6 = arg2[0x14]

if (x0_6 != 0)
    int64_t x8_12 = arg2[0x16]
    arg2[0x15] = x0_6
    Botan::deallocate_memory(x0_6, (x8_12 - x0_6) s>> 2, 4)

void* x0_7 = *arg4

if (x0_7 != 0)
    int64_t x8_14 = arg2[0x11]
    arg2[0x10] = x0_7
    Botan::deallocate_memory(x0_7, (x8_14 - x0_7) s>> 2, 4)

void* x0_8 = *arg3

if (x0_8 != 0)
    int64_t x8_16 = arg2[0xc]
    arg2[0xb] = x0_8
    Botan::deallocate_memory(x0_8, (x8_16 - x0_8) s>> 2, 4)

void* x0_9 = *arg8

if (x0_9 != 0)
    int64_t x8_19 = arg2[7]
    arg2[6] = x0_9
    Botan::deallocate_memory(x0_9, (x8_19 - x0_9) s>> 2, 4)

void* x0_10 = *arg2

if (x0_10 != 0)
    int64_t x8_21 = arg2[2]
    arg2[1] = x0_10
    Botan::deallocate_memory(x0_10, (x8_21 - x0_10) s>> 2, 4)

sub_1101e04(arg1)
noreturn
