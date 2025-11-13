// 函数: sub_f1bf1c
// 地址: 0xf1bf1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg7 + 8)

if (x20 == 0)
    Botan::assertion_failure("m_aead.get() is not null", &data_793a18, "aead", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x19a9)
else
    Botan::TLS::Connection_Cipher_State::aead_nonce(arg7, arg2, arg3)
    int64_t x28_1 = *(arg7 + 0x38)
    int64_t x1 = arg3 - x28_1
    
    if (x1 u>= (*(*x20 + 0x58))(x20))
        int64_t x0_4 = (*(*x20 + 0x48))(x20, x1)
        uint64_t* x0_5 = operator new(0xd)
        uint64_t x8_5 = _byteswap(arg4)
        x0_5[1].b = arg6
        *(x0_5 + 0xa) = (arg5.d).b
        *x0_5 = x8_5
        *(x0_5 + 9) = (arg5 u>> 8).b
        *(x0_5 + 0xb) = (x0_4 u>> 8).b
        *(x0_5 + 0xc) = (x0_4.d).b
        (*(*x20 + 0x90))(x20, x0_5, 0xd)
        operator delete(x0_5)
        void* result
        int64_t var_70
        (*(*x20 + 0x30))(x20, result, var_70 - result)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
            arg1, arg2 + x28_1)
        (*(*x20 + 0x40))(x20, arg1, 0)
        
        if (result == 0)
            return result
        
        void* result_1 = result
        return operator delete(result)

void** x0_12 = __cxa_allocate_exception(0x28)
int64_t x0_13
int128_t v2
x0_13, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_80 = x0_13
__builtin_strncpy(x0_13, "AEAD packet is shorter than the tag", 0x24)
int128_t var_90 = v2
*x0_12 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_12[1])
x0_12[4].d = 0x14
*x0_12 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_12, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
