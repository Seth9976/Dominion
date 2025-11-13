// 函数: _ZNK5Botan3TLS39Application_Layer_Protocol_Notification9serializeENS0_15Connection_SideE
// 地址: 0xe6c884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg1
int16_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int16_t* result = operator new(2)
void* x8 = &result[1]
*result = 0
entry_x8[1] = x8
entry_x8[2] = x8
*entry_x8 = result
char* x20 = *(x21 + 8)
int64_t x22 = *(x21 + 0x10)

if (x20 != x22)
    do
        uint64_t x9_1 = *(x20 + 8)
        uint64_t x8_1 = zx.q(*x20)
        
        if (x9_1 u>= 0x100 && (x8_1.d & 1) != 0)
            void** x0_3 = __cxa_allocate_exception(0x28)
            char var_48
            __builtin_strncpy(&var_48, "$ALPN name too long", 0x14)
            *x0_3 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_3[1])
            x0_3[4].d = 0x50
            *x0_3 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_3, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
            noreturn
        
        uint64_t x9_2
        
        if ((x8_1.d & 1) == 0)
            x9_2 = x8_1 u>> 1
        else
            x9_2 = x9_1
        
        if (x9_2 == 0)
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    x20, 0, -ffffffffffffffff, &data_793a18) != 0)
                x8_1 = zx.q(*x20)
                
                if ((x8_1.d & 1) == 0)
                    goto label_e6c8d4
                
                goto label_e6c944
        else if ((x8_1.d & 1) == 0)
        label_e6c8d4:
            Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(
                entry_x8, &x20[1], zx.q(x8_1.d u>> 1), 1)
        else
        label_e6c944:
            Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(
                entry_x8, *(x20 + 0x10), *(x20 + 8), 1)
        
        x20 = &x20[0x18]
    while (x22 != x20)
    
    result = *entry_x8
    x8 = entry_x8[1]

*result = ((x8.d - result.d - 2) u>> 8).b
int16_t* x9_3 = *entry_x8
*(x9_3 + 1) = (entry_x8[1].d).b - x9_3.b - 2
return result
