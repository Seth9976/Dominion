// 函数: sub_10ca9f8
// 地址: 0x10ca9f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* var_20 = arg3
*arg1 = &_vtable_for_std::__ndk1::locale::__imp{for `std::__ndk1::locale::facet'}
arg1[1] = -1
int64_t x9 = *(arg2 + 0x10)
int64_t x8 = *(arg2 + 0x18)
__builtin_memset(&arg1[2], 0, 0x18)
int64_t x8_2 = (x8 - x9) s>> 3
int64_t x23

x23 = x8_2 u> 0x1c ? x8_2 : 0x1c

arg1[0x22].b = 0

if (x23 u>> 0x3d != 0)
    int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    
    if ((zx.d(*arg3) & 1) != 0)
        operator delete(arg1[0x26])
    
    void* x0_7 = arg1[2]
    
    if (x0_7 != 0)
        arg1[3] = x0_7
        
        if (x0_7 == &arg1[6])
            arg1[0x22].b = 0
        else
            operator delete(x0_7)
    
    std::__ndk1::__shared_count::~__shared_count()
    sub_1101e04(x0_5)
    noreturn

void* x0
int64_t x22

if (x23 u> 0x1c)
    x22 = x23 << 3
    x0 = operator new(x22)
else
    x0 = &arg1[6]
    x22 = 0xe0
    arg1[0x22].b = 1

arg1[2] = x0
arg1[4] = x0 + (x23 << 3)
memset(x0, 0, x22)
arg1[3] = x22 + x0
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &arg1[0x24])

if (arg1 != arg2)
    result = sub_10dd1d8(&arg1[2], *(arg2 + 0x10), *(arg2 + 0x18))

int64_t x9_1 = arg1[2]
int64_t x8_5 = arg1[3]

if (x8_5 != x9_1)
    uint64_t i = 0
    int32_t i_1 = 1
    
    do
        result = *(x9_1 + (i << 3))
        
        if (result != 0)
            result = std::__ndk1::__shared_count::__add_shared()
            x9_1 = arg1[2]
            x8_5 = arg1[3]
        
        i = zx.q(i_1)
        i_1 += 1
    while (i u< (x8_5 - x9_1) s>> 3)

return result
