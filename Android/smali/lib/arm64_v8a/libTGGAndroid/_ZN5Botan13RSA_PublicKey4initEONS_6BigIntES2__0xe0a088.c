// 函数: _ZN5Botan13RSA_PublicKey4initEONS_6BigIntES2_
// 地址: 0xe0a088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x20) != 0)
    char* x8_1 = *arg2
    int64_t* entry_x2
    
    if (*(arg2 + 8) != x8_1 && (zx.d(*x8_1) & 1) != 0 && entry_x2[4].d != 0)
        char* x8_4 = *entry_x2
        
        if (entry_x2[1] != x8_4 && (zx.d(*x8_4) & 1) != 0)
            void** x0 = operator new(0x88)
            x0[2] = 0
            *x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Public_Data, std::__ndk1::allocator<Botan::RSA_Public_Data> >
                + 0x10
            x0[1] = 0
            int64_t result = Botan::RSA_Public_Data::RSA_Public_Data(&x0[3], arg2)
            int64_t* x20_2 = *(arg1 + 0x10)
            *(arg1 + 8) = &x0[3]
            *(arg1 + 0x10) = x0
            
            if (x20_2 != 0)
                int64_t x9_3
                int32_t i
                
                do
                    x9_3 = __ldaxr(&x20_2[1])
                    i = __stlxr(x9_3 - 1, &x20_2[1])
                while (i != 0)
                
                if (x9_3 == 0)
                    (*(*x20_2 + 0x10))(x20_2)
                    return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
            
            return result

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0_1
x0_6, v0_1 = operator new(0x30)
v0_1 = data_71c510
int64_t var_40 = x0_6
__builtin_strncpy(x0_6, "Invalid RSA public key parameters", 0x22)
int128_t var_50 = v0_1
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
