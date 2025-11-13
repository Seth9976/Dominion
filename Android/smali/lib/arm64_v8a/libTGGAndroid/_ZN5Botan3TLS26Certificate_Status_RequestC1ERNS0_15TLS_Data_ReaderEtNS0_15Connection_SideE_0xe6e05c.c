// 函数: _ZN5Botan3TLS26Certificate_Status_RequestC1ERNS0_15TLS_Data_ReaderEtNS0_15Connection_SideE
// 地址: 0xe6e05c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t x21 = arg3
Botan::TLS::TLS_Data_Reader& x19 = arg1
*arg1 = _vtable_for_Botan::TLS::Certificate_Status_Request + 0x10
*(arg1 + 8) = zx.o(0)
void* __offset(Botan::TLS::TLS_Data_Reader, 0x38) x23_1 = arg1 + 0x38
*x23_1 = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x48) = 0
int32_t entry_x3

if (entry_x3 != 2)
    if (zx.d(x21) != 0)
        uint64_t x20_1 = arg2
        Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
        int64_t x9_1 = *(x20_1 + 0x10)
        uint32_t x8_5 = zx.d(*(**(x20_1 + 8) + x9_1))
        *(x20_1 + 0x10) = x9_1 + 1
        
        if (x8_5 != 1)
            Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
            *(x20_1 + 0x10) += zx.q(zx.d(x21) - 1)
        else
            Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
            int64_t x9_3 = *(x20_1 + 0x10)
            uint64_t x8_8 = zx.q(*(**(x20_1 + 8) + x9_3))
            *(x20_1 + 0x10) = x9_3 + 2
            _byteswap(x8_8 << 0x30)
            Botan::TLS::TLS_Data_Reader::get_fixed<uint8_t>(x20_1)
            void* x0_8 = *(arg1 + 8)
            
            if (x0_8 != 0)
                *(x19 + 0x10) = x0_8
                operator delete(x0_8)
                __builtin_memset(arg1 + 8, 0, 0x18)
            
            int128_t var_60
            *(x19 + 8) = var_60
            int64_t var_50
            *(x19 + 0x18) = var_50
            Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
            int64_t x9_5 = *(x20_1 + 0x10)
            uint64_t x8_13 = zx.q(*(**(x20_1 + 8) + x9_5))
            *(x20_1 + 0x10) = x9_5 + 2
            _byteswap(x8_13 << 0x30)
            Botan::TLS::TLS_Data_Reader::get_fixed<uint8_t>(x20_1)
            arg1 = *x23_1
            
            if (arg1 != 0)
                *(x19 + 0x40) = arg1
                int128_t v0_2
                arg1, v0_2 = operator delete(arg1)
                __builtin_memset(x23_1, 0, 0x18)
            
            *(x19 + 0x38) = var_60
            *(x19 + 0x48) = var_50
else if (zx.d(x21) != 0)
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v2
    x0_1, v2 = operator new(0x40)
    (*"equest extension")[0].o
    int64_t var_50_1 = x0_1
    v2 = data_71a7b0
    __builtin_strncpy(x0_1, "Server sent non-empty Certificate_Status_Request extension", 0x3b)
    int128_t var_60_1 = v2
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn
