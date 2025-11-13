// 函数: sub_f294e8
// 地址: 0xf294e8
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

std::__ndk1::__shared_weak_count::~__shared_weak_count()
operator delete(arg7)
int64_t x8_4
int32_t i_1

do
    x8_4 = __ldaxr(arg6)
    i_1 = __stlxr(x8_4 - 1, arg6)
while (i_1 != 0)

if (x8_4 == 0)
    (*(*arg5 + 0x10))(arg5)
    std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x20 = arg2[0x26]

if (x20 != 0)
    int64_t x9_3
    int32_t i_2
    
    do
        x9_3 = __ldaxr(&x20[1])
        i_2 = __stlxr(x9_3 - 1, &x20[1])
    while (i_2 != 0)
    
    if (x9_3 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_8 = arg2[0x1f]

if (x0_8 != 0)
    int64_t x8_10 = arg2[0x21]
    arg2[0x20] = x0_8
    Botan::deallocate_memory(x0_8, (x8_10 - x0_8) s>> 2, 4)

void* x0_9 = *arg8

if (x0_9 != 0)
    int64_t x8_13 = arg2[0x1c]
    arg2[0x1b] = x0_9
    Botan::deallocate_memory(x0_9, (x8_13 - x0_9) s>> 2, 4)

void* x0_10 = arg2[0x14]

if (x0_10 != 0)
    int64_t x8_15 = arg2[0x16]
    arg2[0x15] = x0_10
    Botan::deallocate_memory(x0_10, (x8_15 - x0_10) s>> 2, 4)

void* x0_11 = *arg4

if (x0_11 != 0)
    int64_t x8_17 = arg2[0x11]
    arg2[0x10] = x0_11
    Botan::deallocate_memory(x0_11, (x8_17 - x0_11) s>> 2, 4)

void* x0_12 = *arg3

if (x0_12 != 0)
    int64_t x8_19 = arg2[0xc]
    arg2[0xb] = x0_12
    Botan::deallocate_memory(x0_12, (x8_19 - x0_12) s>> 2, 4)

void* x0_13 = *arg9

if (x0_13 != 0)
    int64_t x8_22 = arg2[7]
    arg2[6] = x0_13
    Botan::deallocate_memory(x0_13, (x8_22 - x0_13) s>> 2, 4)

void* x0_14 = *arg2

if (x0_14 != 0)
    int64_t x8_24 = arg2[2]
    arg2[1] = x0_14
    Botan::deallocate_memory(x0_14, (x8_24 - x0_14) s>> 2, 4)

sub_1101e04(arg1)
noreturn
