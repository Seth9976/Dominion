// 函数: _ZN5Botan3TLS21Server_Name_IndicatorC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6b674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t entry_x2
uint32_t x23 = zx.d(entry_x2)
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Server_Name_Indicator + 0x10
void* __offset(Botan::TLS::TLS_Data_Reader, 0x8) x22_1 = arg1 + 8
*x22_1 = 0

if (x23 == 0)
    return 

uint64_t x20_1 = arg2
Botan::TLS::TLS_Data_Reader& x19_1 = arg1
Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
int64_t x9_1 = *(x20_1 + 0x10)
int32_t x21_1 = _byteswap(zx.d(*(**(x20_1 + 8) + x9_1)) << 0x10)
*(x20_1 + 0x10) = x9_1 + 2

if (x21_1 + 2 != x23)
    void** x0_5 = __cxa_allocate_exception(0x20)
    int64_t x0_6
    int128_t v0_2
    x0_6, v0_2 = operator new(0x20)
    int64_t var_40_1 = x0_6
    int128_t var_50_1 = data_71cd20
    __builtin_strncpy(x0_6, "Bad encoding of SNI extension", 0x1e)
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x21_1 == 0)
    return 

while (true)
    Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
    int64_t x9_3 = *(x20_1 + 0x10)
    uint32_t x8_10 = zx.d(*(**(x20_1 + 8) + x9_3))
    *(x20_1 + 0x10) = x9_3 + 1
    
    if (x8_10 != 0)
        Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
        *(x20_1 + 0x10) += zx.q(x21_1.w - 1)
        break
    
    int128_t v0_1
    arg1, v0_1 = Botan::TLS::TLS_Data_Reader::get_string(x20_1, 2, 1)
    
    if ((zx.d(*x22_1) & 1) != 0)
        arg1, v0_1 = operator delete(*(x19_1 + 0x18))
    
    int128_t var_50
    *x22_1 = var_50
    uint64_t x8_12 = zx.q(*x22_1)
    int64_t var_40
    *(x22_1 + 0x10) = var_40
    
    if ((x8_12.d & 1) == 0)
        x21_1 = x21_1 - (x8_12 u>> 1).d - 3
        
        if ((x21_1 & 0xffff) == 0)
            break
    else
        x21_1 = x21_1 - (*(x19_1 + 0x10)).d - 3
        
        if ((x21_1 & 0xffff) == 0)
            break
