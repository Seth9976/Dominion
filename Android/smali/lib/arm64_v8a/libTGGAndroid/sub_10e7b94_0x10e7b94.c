// 函数: sub_10e7b94
// 地址: 0x10e7b94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x1
uint64_t x20
size_t x21_1

if ((x8.d & 1) == 0)
    x20 = x8 u>> 1
    
    if (x20 u>= arg2)
        arg1[arg2 + 1] = 0
        *arg1 = (arg2.d << 1).b
    else
        x21_1 = arg2 - x20
        
        if (arg2 != x20)
            x1 = 0x16
            goto label_10e7bf8
    
    return 

x20 = *(arg1 + 8)

if (x20 u>= arg2)
    (*(arg1 + 0x10))[arg2] = 0
    *(arg1 + 8) = arg2
    return 

x21_1 = arg2 - x20

if (arg2 == x20)
    return 

x8 = *arg1
x1 = (x8 & 0xfffffffffffffffe) - 1
label_10e7bf8:

if (x1 - x20 u< x21_1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
        arg1, x1, x20 + x21_1 - x1, x20, x20, 0)
    x8 = zx.q(*arg1)

void* x22_1

if ((x8.d & 1) != 0)
    x22_1 = *(arg1 + 0x10)
else
    x22_1 = &arg1[1]

memset(x22_1 + x20, 0, x21_1)
int64_t x8_4 = x20 + x21_1

if ((zx.d(*arg1) & 1) != 0)
    *(arg1 + 8) = x8_4
else
    *arg1 = (x8_4.d << 1).b

*(x22_1 + x8_4) = 0
