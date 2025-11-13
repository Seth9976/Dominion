// 函数: sub_ef46f0
// 地址: 0xef46f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::base64_encode(arg2, arg3)
uint64_t x8_5

while (true)
    x8_5 = zx.q(*arg1)
    std::__ndk1::allocator<char>* x3_1
    
    if ((x8_5.d & 1) != 0)
        int64_t x9_4 = *(arg1 + 8)
        
        if (x9_4 == 0)
            break
        
        x3_1 = x9_4 - 1
        
        if (zx.d(*(*(arg1 + 0x10) + x3_1)) != 0x3d)
            break
    else
        if (x8_5.d u< 2)
            break
        
        x3_1 = (x8_5 u>> 1) - 1
        
        if (zx.d(*(arg1 + x3_1 + 1)) != 0x3d)
            break
    
    int128_t var_38
    int128_t v0_1
    result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_38, arg1, 0, x3_1)
    
    if ((zx.d(*arg1) & 1) != 0)
        result, v0_1 = operator delete(*(arg1 + 0x10))
    
    v0_1 = var_38
    int64_t var_28
    *(arg1 + 0x10) = var_28
    *arg1 = v0_1

int64_t x9_6 = 0

while (true)
    void* x8_4
    
    if ((x8_5.d & 1) == 0)
        x8_4 = &arg1[1]
        
        if (x9_6 == (zx.q(x8_5.d u>> 1) & 0x7f))
            break
    else
        if (x9_6 == *(arg1 + 8))
            break
        
        x8_4 = *(arg1 + 0x10)
    
    *(x8_4 + x9_6) = data_84a449[0x18][zx.q(*(x8_4 + x9_6))]
    x8_5 = zx.q(*arg1)
    x9_6 += 1

return result
