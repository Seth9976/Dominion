// 函数: _ZNSt6__ndk14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_EC2IRA8_KcRS7_Lb0EEEOT_OT0_
// 地址: 0xec94f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0_1 = strlen(arg2)

if (x0_1 u>= -0x10)
    int64_t* x0_8 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(*arg1) & 1) != 0)
        operator delete(arg1[2])
    
    sub_1101e04(x0_8)
    noreturn

void* x23_1

if (x0_1 u>= 0x17)
    uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x24_1)
    x23_1 = x0_3
    arg1[1] = x0_1
    arg1[2] = x0_3
    *arg1 = x24_1 | 1
    memcpy(x23_1, arg2, x0_1)
else
    *arg1 = (x0_1.d << 1).b
    x23_1 = arg1 + 1
    
    if (x0_1 != 0)
        memcpy(x23_1, arg2, x0_1)

*(x23_1 + x0_1) = 0
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &arg1[3])
