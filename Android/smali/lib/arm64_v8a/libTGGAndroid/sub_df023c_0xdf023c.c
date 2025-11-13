// 函数: sub_df023c
// 地址: 0xdf023c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__deque_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::clear()
int64_t* x21 = *(arg2 + 0x30)
int64_t x24 = *(arg2 + 0x38)

if (x21 != x24)
    do
        void* x0_1 = *x21
        x21 = &x21[1]
        operator delete(x0_1)
    while (x24 != x21)
    
    int64_t x9_1 = *(arg2 + 0x30)
    int64_t x8_1 = *(arg2 + 0x38)
    
    if (x8_1 != x9_1)
        *(arg2 + 0x38) = x8_1 + ((-1 ^ (x8_1 - x9_1 - 8) u>> 3) << 3)

void* x0_2 = *arg3

if (x0_2 != 0)
    operator delete(x0_2)

if ((zx.d(*arg4) & 1) != 0)
    operator delete(*arg5)

operator delete(arg2)
std::__ndk1::mutex::unlock()
sub_1101e04(arg1)
noreturn
