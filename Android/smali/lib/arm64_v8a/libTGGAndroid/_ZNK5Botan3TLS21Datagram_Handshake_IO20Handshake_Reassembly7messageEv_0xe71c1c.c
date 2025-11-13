// 函数: _ZNK5Botan3TLS21Datagram_Handshake_IO20Handshake_Reassembly7messageEv
// 地址: 0xe71c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x0
uint32_t x9 = zx.d(*entry_x0)
int128_t var_60
char var_48
void* var_38

if (x9 != 0xff)
    int64_t x20_1 = *(entry_x0 + 0x30)
    size_t x21_1 = *(entry_x0 + 0x38) - x20_1
    
    if (x21_1 == *(entry_x0 + 8))
        uint32_t* entry_x8
        *entry_x8 = x9
        *(entry_x8 + 8) = 0
        *(entry_x8 + 0x10) = 0
        *(entry_x8 + 0x18) = 0
        
        if (x21_1 != 0)
            if ((x21_1 & 0xffffffff80000000) != 0)
                int64_t* x0_9 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                std::exception::~exception()
                
                if ((zx.d(var_48) & 1) != 0)
                    operator delete(var_38)
                
                void* var_50
                
                if ((zx.d(var_60.b) & 1) != 0)
                    operator delete(var_50)
                __cxa_free_exception(entry_x8)
                sub_1101e04(x0_9)
                noreturn
            
            int64_t x0_1 = operator new(x21_1)
            int64_t x22_2 = x0_1 + x21_1
            *(entry_x8 + 8) = x0_1
            *(entry_x8 + 0x10) = x0_1
            *(entry_x8 + 0x18) = x22_2
            memcpy(x0_1, x20_1, x21_1)
            *(entry_x8 + 0x10) = x22_2
        
        return 

void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0
x0_3, v0 = operator new(0x30)
int64_t var_50_1 = x0_3
var_60 = data_71abd0
__builtin_strncpy(x0_3, "Datagram_Handshake_IO - message not complete", 0x2d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_60)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

*x0_2 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
