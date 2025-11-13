// 函数: _ZN5Botan14SP800_56A_HMACC1EPNS_25MessageAuthenticationCodeE
// 地址: 0xe3837c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::SP800_56A_HMAC + 0x10
void* entry_x1
*(arg1 + 8) = entry_x1
(*(*(entry_x1 + 8) + 0x20))(entry_x1 + 8)
char var_90
Botan::SCAN_Name::SCAN_Name(&var_90)
char var_a8
void* var_98

if ((zx.d(var_a8) & 1) != 0)
    operator delete(var_98)
char var_78
uint64_t x8_3 = zx.q(var_78)
uint64_t x8_4
uint64_t var_70

if ((x8_3.d & 1) == 0)
    x8_4 = x8_3 u>> 1
else
    x8_4 = var_70

if (x8_4 == 4)
    int32_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_78, 0, -ffffffffffffffff, "HMAC")
    
    if (result == 0)
        void* var_48
        
        if (var_48 != 0)
            char* var_40
            char* x8_5 = var_40
            void* x0_5
            
            if (x8_5 == var_48)
                x0_5 = var_48
            else
                char* x20_1 = x8_5
                
                do
                    x20_1 = &x20_1[-0x18]
                    
                    if ((zx.d(*x20_1) & 1) != 0)
                        operator delete(*(x8_5 - 8))
                    
                    x8_5 = x20_1
                while (var_48 != x20_1)
                
                x0_5 = var_48
            
            void* var_40_1 = var_48
            result = operator delete(x0_5)
        
        void* var_60
        
        if (var_60 != 0)
            char* var_58
            char* x8_6 = var_58
            void* x0_7
            
            if (x8_6 == var_60)
                x0_7 = var_60
            else
                char* x20_2 = x8_6
                
                do
                    x20_2 = &x20_2[-0x18]
                    
                    if ((zx.d(*x20_2) & 1) != 0)
                        operator delete(*(x8_6 - 8))
                    
                    x8_6 = x20_2
                while (var_60 != x20_2)
                
                x0_7 = var_60
            
            void* var_58_1 = var_60
            result = operator delete(x0_7)
        
        void* var_68
        
        if ((zx.d(var_78) & 1) != 0)
            result = operator delete(var_68)
        
        if ((zx.d(var_90) & 1) == 0)
            return result
        
        void* var_80
        return operator delete(var_80)

void* x0_10 = __cxa_allocate_exception(0x20)
int64_t x0_11
int128_t v0
x0_11, v0 = operator new(0x30)
int64_t var_b0 = x0_11
int128_t var_c0 = data_71aa70
__builtin_strncpy(x0_11, "Only HMAC can be used with KDF SP800-56A", 0x29)
Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_10)
__cxa_throw(x0_10, _typeinfo_for_Botan::Algorithm_Not_Found, Botan::Exception::~Exception)
noreturn
