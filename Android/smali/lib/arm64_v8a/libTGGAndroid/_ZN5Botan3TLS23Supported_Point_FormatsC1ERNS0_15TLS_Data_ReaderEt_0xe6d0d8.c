// 函数: _ZN5Botan3TLS23Supported_Point_FormatsC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6d0d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = arg2
*(arg1 + 8) = 0
*arg1 = _vtable_for_Botan::TLS::Supported_Point_Formats + 0x10
int64_t x0_1 = Botan::TLS::TLS_Data_Reader::assert_at_least(x19)
int64_t x9 = *(x19 + 0x10)
uint64_t x8_3 = zx.q(*(**(x19 + 8) + x9))
*(x19 + 0x10) = x9 + 1
int16_t entry_x2

if (x8_3.d + 1 != zx.d(entry_x2))
    void** x0_5 = __cxa_allocate_exception(0x20)
    int64_t x0_6
    int128_t v2
    x0_6, v2 = operator new(0x40)
    (*"int formats list")[0].o
    int64_t var_30 = x0_6
    v2 = data_71b210
    __builtin_strncpy(x0_6, "Inconsistent length field in supported point formats list", 0x3a)
    int128_t var_40 = v2
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x8_3.d != 0)
    int64_t i = 1 - x8_3
    
    do
        x0_1 = Botan::TLS::TLS_Data_Reader::assert_at_least(x19)
        int64_t x9_2 = *(x19 + 0x10)
        uint32_t x8_6 = zx.d(*(**(x19 + 8) + x9_2))
        *(x19 + 0x10) = x9_2 + 1
        
        if (x8_6 == 1)
            *(arg1 + 8) = x8_6.b
        label_e6d198:
            int64_t x0_4 = Botan::TLS::TLS_Data_Reader::assert_at_least(x19)
            *(x19 + 0x10) -= i
            return x0_4
        
        if (x8_6 == 0)
            *(arg1 + 8) = 0
            goto label_e6d198
        
        i += 1
    while (i != 1)

return x0_1
