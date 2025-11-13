// 函数: _ZN5Botan4UUIDC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe91cfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
char* entry_x1
uint32_t x8 = zx.d(*entry_x1)
int64_t var_70
int128_t var_50
void* x9_4

if ((x8 & 1) != 0)
    if (*(entry_x1 + 8) == 0x24)
        x9_4 = *(entry_x1 + 0x10)
        
        if (zx.d(*(x9_4 + 8)) == 0x2d && zx.d(*(x9_4 + 0xd)) == 0x2d
                && zx.d(*(x9_4 + 0x12)) == 0x2d)
            goto label_e91d94
else if ((x8 & 0xfe) == 0x48 && zx.d(entry_x1[9]) == 0x2d && zx.d(entry_x1[0xe]) == 0x2d
        && zx.d(entry_x1[0x13]) == 0x2d)
    x9_4 = &entry_x1[1]
label_e91d94:
    
    if (zx.d(*(x9_4 + 0x17)) == 0x2d)
        int64_t x21 = 0
        __builtin_memset(&var_50, 0, 0x18)
        
        while (true)
            if ((x8 & 1) != 0)
                if (x21 == *(entry_x1 + 8))
                    break
                
                if (zx.d(*(*(entry_x1 + 0x10) + x21)) != 0x2d)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        &var_50)
                    x8 = zx.d(*entry_x1)
            else
                if (x21 == (zx.q(x8 u>> 1) & 0x7f))
                    break
                
                if (zx.d(entry_x1[1 + x21]) != 0x2d)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        &var_50)
                    x8 = zx.d(*entry_x1)
            
            x21 += 1
        
        uint64_t x8_1 = zx.q(var_50.b)
        int32_t temp0 = x8_1.d & 1
        char* var_40
        char* x0_1
        
        if (temp0 == 0)
            x0_1 = &var_50 | 1
        else
            x0_1 = var_40
        
        uint64_t x1_2
        
        if (temp0 == 0)
            x1_2 = x8_1 u>> 1
        else
            x1_2 = var_50:8.q
        
        Botan::hex_decode(x0_1, x1_2, true)
        void* result = *arg1
        
        if (result != 0)
            *(arg1 + 8) = result
            int128_t v0
            result, v0 = operator delete(result)
            __builtin_memset(arg1, 0, 0x18)
        
        int64_t x8_2 = var_70
        *arg1 = x8_2
        int128_t var_68
        *(arg1 + 8) = var_68
        
        if (var_68.q - x8_2 == 0x10)
            if ((zx.d(var_50.b) & 1) == 0)
                return result
            
            return operator delete(var_40)
        
        void** x0_8 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Bad UUID '", entry_x1)
        char var_88[0x18]
        int128_t* x0_10
        int128_t v0_2
        x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_88)
        var_68:8.q = x0_10[1].q
        var_70.o = *x0_10
        __builtin_memset(x0_10, 0, 0x18)
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
void** x0_3 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Bad UUID '", entry_x1)
int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70)
int64_t var_40_1 = x0_5[1].q
var_50 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
