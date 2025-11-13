// 函数: _ZNSt6__ndk115__get_classnameEPKcb
// 地址: 0x10dfa68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const (** const x21)[0x6] = &data_1184c98

for (uint64_t i = 0xf; i != 0; )
    uint64_t i_1 = i u>> 1
    void* x24_1 = &x21[i_1 * 2]
    int32_t x0_1 = strcmp(*x24_1, arg1)
    
    if (x0_1 s< 0)
        i += not.q(i_1)
    else
        i = i_1
    
    if (x0_1 s< 0)
        x21 = x24_1 + 0x10

if (x21 != &_typeinfo_for_std::__ndk1::regex_error && strcmp(arg1, *x21) == 0)
    uint32_t x8_3 = zx.d(x21[1].w)
    
    if (x8_3 == 0x8000)
        return 0x8078
    
    if (((((x8_3 & 0x18) == 0 ? 1 : 0) | not.d(arg2.d)) & 1) != 0)
        return zx.q(x8_3)
    
    return zx.q(x8_3) | 0x20

return 0
