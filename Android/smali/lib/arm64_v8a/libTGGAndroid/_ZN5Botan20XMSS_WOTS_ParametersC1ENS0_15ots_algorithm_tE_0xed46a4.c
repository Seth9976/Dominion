// 函数: _ZN5Botan20XMSS_WOTS_ParametersC1ENS0_15ots_algorithm_tE
// 地址: 0xed46a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
int32_t entry_x1
uint64_t x8 = zx.q(entry_x1 - 1)
void* x19 = arg1
*arg1 = entry_x1
*(arg1 + 8) = zx.o(0)
__builtin_memset(arg1 + 0x18, 0, 0x20)

if (x8.d u<= 3)
    int64_t x8_1
    
    switch (x8)
        case 0
            v0 = data_71b990
            *(x19 + 0x58) = 0x43
            *(x19 + 0x38) = v0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 0x20)
            x8_1 = 0x100
        case 1
            v0 = data_71adc0
            *(x19 + 0x58) = 0x83
            *(x19 + 0x38) = v0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 0x20)
            x8_1 = 0x200
        case 2
            v0 = data_71b990
            *(x19 + 0x58) = 0x43
            *(x19 + 0x38) = v0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 0x20)
            x8_1 = 0x100
        case 3
            v0 = data_71adc0
            *(x19 + 0x58) = 0x83
            *(x19 + 0x38) = v0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 8)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                arg1 + 0x20)
            x8_1 = 0x200
    
    *(x19 + 0x60) = x8_1
    int64_t x8_2 = *(x19 + 0x40)
    int32_t x22_1
    
    x22_1 = x8_2 == 0x10 ? 4 : 2
    
    int64_t x10_2
    
    x10_2 = x8_2 == 0x10 ? 4 : 2
    
    uint64_t x23_1 = vcvtd_u64_f64(float.d((*(x19 + 0x38) << 3) u/ x10_2))
    *(x19 + 0x68) = x22_1.b
    *(x19 + 0x48) = x23_1
    int64_t result
    double v0_2
    v0_2, result = log2(float.d((x8_2 - 1) * x23_1))
    double temp0_1 = vrndm_f64(v0_2 / float.d(zx.q(x22_1)))
    int64_t x8_5 = *(x19 + 0x58)
    uint64_t x9_4 = vcvtd_u64_f64(temp0_1 + fconvert.d(1.0))
    *(x19 + 0x50) = x9_4
    
    if (x8_5 == x9_4 + x23_1)
        return result
    
    Botan::assertion_failure("m_len == m_len_1 + m_len_2", 
        "Invalid XMSS WOTS parameter "len" detedted.", "XMSS_WOTS_Parameters", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x18bde)

void** x0_8 = __cxa_allocate_exception(0x20)
int64_t x0_9
int128_t v0_3
x0_9, v0_3 = operator new(0x40)
int64_t var_50 = x0_9
int128_t var_60 = data_71a790
__builtin_strncpy(x0_9, "Algorithm id does not match any known XMSS WOTS algorithm id.", 0x3e)
Botan::Exception::Exception(x0_8, "Not implemented")
*x0_8 = _vtable_for_Botan::Not_Implemented + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Not_Implemented, Botan::Exception::~Exception)
noreturn
