// 函数: sub_10cc958
// 地址: 0x10cc958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_18 = arg5
*arg1 = &_vtable_for_std::__ndk1::locale::__imp{for `std::__ndk1::locale::facet'}
arg1[1] = -1
int64_t x9 = *(arg2 + 0x10)
int64_t x8 = *(arg2 + 0x18)
__builtin_memset(&arg1[2], 0, 0x18)
int64_t x8_2 = (x8 - x9) s>> 3
int64_t x25

if (x8_2 + 1 u<= 0x1c)
    x25 = 0x1c
else
    x25 = x8_2 + 1

arg1[0x22].b = 0

if (x25 u>> 0x3d != 0)
    int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    
    if (arg5 != 0)
        std::__ndk1::__shared_count::__release_shared()
        std::__ndk1::__shared_count::__release_shared()
    
    if ((zx.d(arg1[0x24].b) & 1) != 0)
        operator delete(arg1[0x26])
    
    void* x0_14 = arg1[2]
    
    if (x0_14 != 0)
        arg1[3] = x0_14
        
        if (x0_14 == &arg1[6])
            arg1[0x22].b = 0
        else
            operator delete(x0_14)
    
    std::__ndk1::__shared_count::~__shared_count()
    sub_1101e04(x0_10)
    noreturn

void* x0
size_t x24

if (x25 u> 0x1c)
    x24 = x25 << 3
    x0 = operator new(x24)
else
    x0 = &arg1[6]
    x24 = 0xe0
    arg1[0x22].b = 1

arg1[2] = x0
arg1[4] = x0 + (x25 << 3)
memset(x0, 0, x24)
arg1[3] = x24 + x0
arg1[0x24].w = 0x2a02
*(arg1 + 0x122) = 0
std::__ndk1::__shared_count::__add_shared()

if (arg1 != arg2)
    sub_10dd1d8(&arg1[2], *(arg2 + 0x10), *(arg2 + 0x18))

int64_t x9_2 = *(arg2 + 0x10)
int64_t x8_5 = *(arg2 + 0x18)

if (x8_5 != x9_2)
    uint64_t i = 0
    int32_t i_1 = 1
    
    do
        if (*(arg1[2] + (i << 3)) != 0)
            std::__ndk1::__shared_count::__add_shared()
            x9_2 = *(arg2 + 0x10)
            x8_5 = *(arg2 + 0x18)
        
        i = zx.q(i_1)
        i_1 += 1
    while (i u< (x8_5 - x9_2) s>> 3)

std::__ndk1::__shared_count::__add_shared()
int64_t x8_6 = arg1[2]
int64_t x10_1 = (arg1[3] - x8_6) s>> 3

if (x10_1 u<= arg4)
    if (arg4 + 1 u> x10_1)
        sub_10dd360(&arg1[2], arg4 + 1 - x10_1)
        x8_6 = arg1[2]
    else if (arg4 + 1 u< x10_1)
        arg1[3] = x8_6 + ((arg4 + 1) << 3)

int64_t result = *(x8_6 + (arg4 << 3))

if (result != 0)
    result = std::__ndk1::__shared_count::__release_shared()
    x8_6 = arg1[2]

*(x8_6 + (arg4 << 3)) = arg3

if (arg3 == 0)
    return result

return std::__ndk1::__shared_count::__release_shared() __tailcall
