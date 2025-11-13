// 函数: _ZN5Botan3TLS22TLS_CBC_HMAC_AEAD_Mode12key_scheduleEPKhm
// 地址: 0xe85788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x21
int64_t var_18 = entry_x21
char var_38
int64_t entry_x2

if (*(arg1 + 0x40) + *(arg1 + 0x38) != entry_x2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_3 = __cxa_allocate_exception(0x20)
    Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::name()
    Botan::Invalid_Key_Length::Invalid_Key_Length(x0_3, &var_38)
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Key_Length, Botan::Exception::~Exception)
    noreturn

void* x8_1 = *(arg1 + 0x70)

if (x8_1 != 0)
    Botan::SymmetricAlgorithm::set_key(x8_1 + 8, arg2)
    *(arg1 + 0x38)
    return Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x68), arg2 + *(arg1 + 0x40)) __tailcall

int64_t* x0_7 = Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)

if ((zx.d(var_38) & 1) != 0)
    void* var_28
    operator delete(var_28)
    
    if ((entry_x21.d & 1) == 0)
        sub_1101e04(x0_7)
        noreturn
else if (entry_x21.d == 0)
    sub_1101e04(x0_7)
    noreturn

__cxa_free_exception(arg1)
sub_1101e04(x0_7)
noreturn
