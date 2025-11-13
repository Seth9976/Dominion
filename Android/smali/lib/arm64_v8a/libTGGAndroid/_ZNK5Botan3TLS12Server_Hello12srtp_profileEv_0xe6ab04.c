// 函数: _ZNK5Botan3TLS12Server_Hello12srtp_profileEv
// 地址: 0xe6ab04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19
int64_t var_8 = x19
void* entry_x0
int64_t* i = *(entry_x0 + 0x50)
uint64_t x20

if (i == 0)
    x20 = 0
else
    int64_t* i_1 = entry_x0 + 0x50
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0xe)
            i_1 = i
        
        i = i[zx.q(x10_1 s< 0xe ? 1 : 0)]
    while (i != 0)
    
    if (i_1 == entry_x0 + 0x50 || i_1[4].d s> 0xe)
        x20 = 0
    else
        int64_t x0_1 = i_1[5]
        
        if (x0_1 == 0)
            x20 = 0
        else
            uint64_t x0_2 = __dynamic_cast(x0_1, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::SRTP_Protection_Profiles, 0)
            x20 = x0_2
            
            if (x0_2 != 0)
                int64_t var_30_1 = 0
                int64_t var_28_1 = 0
                int64_t x9_1 = *(x20 + 8)
                int64_t x8_1 = *(x20 + 0x10)
                uint64_t x21_1 = x8_1 - x9_1
                char var_50
                void* x8_5
                int16_t* x19_1
                
                if (x8_1 == x9_1)
                    x19_1 = nullptr
                    x8_5 = nullptr
                else
                    if ((x21_1 & 0xffffffff80000000) != 0)
                        int64_t* x0_13 =
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        void* var_40
                        
                        if ((zx.d(var_50) & 1) != 0)
                            operator delete(var_40)
                        sub_1101e04(x0_13)
                        noreturn
                    
                    int16_t* x0_4 = operator new(x21_1)
                    int16_t* var_38_1 = x0_4
                    int16_t* var_30_2 = x0_4
                    void* var_28_2 = &x0_4[x21_1 s>> 1]
                    int64_t x1_2 = *(x20 + 8)
                    x19_1 = x0_4
                    size_t x20_1 = *(x20 + 0x10) - x1_2
                    
                    if (x20_1 s< 1)
                        x8_5 = x19_1
                    else
                        memcpy(x19_1, x1_2, x20_1)
                        x8_5 = x19_1 + x20_1
                    
                    void* var_30_3 = x8_5
                
                if (x8_5 - x19_1 == 2)
                    x20 = zx.q(*x19_1)
                
                if (x8_5 - x19_1 != 2 || x20.d == 0)
                    void** x0_8 = __cxa_allocate_exception(0x20)
                    int64_t x0_9
                    int128_t v0
                    x0_9, v0 = operator new(0x30)
                    (*"S-SRTP extension")[0].o
                    int64_t var_40_1 = x0_9
                    v0 = data_71cbb0
                    __builtin_strncpy(x0_9, "Server sent malformed DTLS-SRTP extension", 0x2a)
                    var_50.o = v0
                    *x0_8 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_8[1])
                    *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
                    __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                operator delete(x19_1)

return zx.q(x20.d)
