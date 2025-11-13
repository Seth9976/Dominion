// 函数: sub_fb4508
// 地址: 0xfb4508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

int64_t* x19_1 = arg1
uint64_t i_1 = zx.q(arg2)
uint64_t i

do
    void* x21_1 = *x19_1
    
    if (*(x21_1 + 0x80) != 0)
        if (*(x21_1 + 0x7c) != 0)
            sub_fb4508(*(x21_1 + 0x20), zx.q(*(x21_1 + 0x18)))
        
        *(x21_1 + 0x7c) = 0
    
    i = i_1
    i_1 -= 1
    x19_1 = &x19_1[1]
while (i != 1)
