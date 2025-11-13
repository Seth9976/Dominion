// 函数: sub_d2d07c
// 地址: 0xd2d07c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::exception::~exception()

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)

__cxa_free_exception()
void* x0_2 = *arg5

if (x0_2 != 0)
    int64_t x8_1 = *(arg2 + 0x70)
    *(arg2 + 0x68) = x0_2
    Botan::deallocate_memory(x0_2, (x8_1 - x0_2) s>> 2, 4)

void* x0_3 = *arg4

if (x0_3 != 0)
    int64_t x8_3 = *(arg2 + 0x48)
    *(arg2 + 0x40) = x0_3
    Botan::deallocate_memory(x0_3, (x8_3 - x0_3) s>> 2, 4)

void* x0_4 = *arg3

if (x0_4 != 0)
    int64_t x8_5 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0_4
    Botan::deallocate_memory(x0_4, (x8_5 - x0_4) s>> 2, 4)

int64_t* x19 = *(arg2 + 8)

if (x19 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19[1])
        i = __stlxr(x9_1 - 1, &x19[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19 + 0x10))(x19)
        std::__ndk1::__shared_weak_count::__release_weak()

sub_1101e04(arg1)
noreturn
