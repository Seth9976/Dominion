// 函数: _ZN5Botan3TLS6Server23process_certificate_msgERNS0_22Server_Handshake_StateERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xe7d7ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0 = operator new(0x20)
*(arg1 + 0x28)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x22 = x0
Botan::TLS::Policy* entry_x2
Botan::TLS::Certificate::Certificate(x0, entry_x2)
void** x21_1 = *(arg2 + 0x138)
*(arg2 + 0x138) = x22

if (x21_1 != 0)
    void* x23_1 = x21_1[1]
    *x21_1 = _vtable_for_Botan::TLS::Certificate + 0x10
    
    if (x23_1 != 0)
        int64_t* x22_1 = x21_1[2]
        void* x0_2
        
        if (x22_1 == x23_1)
            x0_2 = x23_1
        else
            do
                x22_1 = &x22_1[-0x11]
                (*(*x22_1 + 0x10))(x22_1)
            while (x23_1 != x22_1)
            
            x0_2 = x21_1[1]
        
        x21_1[2] = x23_1
        operator delete(x0_2)
    
    operator delete(x21_1)
    x22 = *(arg2 + 0x138)

int64_t* x0_4 = *(arg2 + 8)
int64_t result = (*(*x0_4 + 0x70))(x0_4, x22)
void* x8_6 = *(arg2 + 0x138)

if (*(x8_6 + 8) == *(x8_6 + 0x10))
    result = (*(**(arg1 + 0x28) + 0x138))()
    
    if ((result.d & 1) != 0)
        void** x0_6 = __cxa_allocate_exception(0x28)
        int64_t x0_7
        int128_t v2
        x0_7, v2 = operator new(0x40)
        (*", but it did not")[0].o
        int64_t var_40 = x0_7
        v2 = data_71b210
        __builtin_strncpy(x0_7, "Policy requires client send a certificate, but it did not", 0x3a)
        int128_t var_50 = v2
        *x0_6 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_6[1])
        x0_6[4].d = 0x28
        *x0_6 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_6, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn

*(arg2 + 0x18) |= 0x800
return result
