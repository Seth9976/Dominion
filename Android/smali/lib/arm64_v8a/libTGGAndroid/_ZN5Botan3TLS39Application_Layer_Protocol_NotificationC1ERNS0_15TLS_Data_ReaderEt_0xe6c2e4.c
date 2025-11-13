// 函数: _ZN5Botan3TLS39Application_Layer_Protocol_NotificationC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6c2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Application_Layer_Protocol_Notification + 0x10
void* __offset(Botan::TLS::TLS_Data_Reader, 0x8) x20_1 = arg1 + 8
*x20_1 = 0
int16_t entry_x2

if (zx.d(entry_x2) == 0)
    return 

uint64_t x21_1 = arg2
Botan::TLS::TLS_Data_Reader::assert_at_least(x21_1)
int64_t x9_1 = *(x21_1 + 0x10)
uint64_t x8_3 = zx.q(*(**(x21_1 + 8) + x9_1))
*(x21_1 + 0x10) = x9_1 + 2
uint64_t i = _byteswap(x8_3 << 0x30)

if (zx.q(entry_x2) - 2 != i)
    void** x0_14 = __cxa_allocate_exception(0x20)
    int64_t x0_15
    int128_t v0_2
    x0_15, v0_2 = operator new(0x40)
    (*"bad length field")[0].o
    int64_t var_50_1 = x0_15
    v0_2 = data_71b3f0
    __builtin_strncpy(x0_15, "Bad encoding of ALPN extension, bad length field", 0x31)
    int128_t var_60_1 = v0_2
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (i == 0)
    return 

do
    Botan::TLS::TLS_Data_Reader::get_string(x21_1, 1, 0)
    int128_t var_60
    uint64_t x8_6 = zx.q(var_60.b)
    uint64_t x24_1
    
    if ((x8_6.d & 1) != 0)
        x24_1 = var_60:8.q
        
        if (i u< x24_1 + 1)
        label_e6c424:
            void** x0_5 = __cxa_allocate_exception(0x20)
            int64_t x0_6
            int128_t v0
            x0_6, v0 = operator new(0x30)
            (*"h field too long")[0].o
            int64_t var_70 = x0_6
            v0 = data_71cfc0
            __builtin_strncpy(x0_6, "Bad encoding of ALPN, length field too long", 0x2c)
            int128_t var_80 = v0
            *x0_5 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_5[1])
            *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (x24_1 == 0)
        label_e6c4ac:
            void** x0_10 = __cxa_allocate_exception(0x20)
            int64_t x0_11
            int128_t v0_1
            x0_11, v0_1 = operator new(0x20)
            int64_t var_70_1 = x0_11
            int128_t var_80_1 = data_71b7d0
            __builtin_strncpy(x0_11, "Empty ALPN protocol not allowed", 0x20)
            *x0_10 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_10[1])
            *x0_10 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_10, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
    else
        uint64_t x9_3 = x8_6 u>> 1
        
        if (i u< x9_3 + 1)
            goto label_e6c424
        
        if (x8_6.d u< 2)
            goto label_e6c4ac
        
        x24_1 = zx.q(x9_3.d)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x22_2 = *(arg1 + 0x10)
    
    if (x22_2 == *(arg1 + 0x18))
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
            x20_1)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x22_2)
        *(arg1 + 0x10) = x22_2 + 0x18
    
    void* var_50
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    i += not.q(x24_1)
while (i != 0)
