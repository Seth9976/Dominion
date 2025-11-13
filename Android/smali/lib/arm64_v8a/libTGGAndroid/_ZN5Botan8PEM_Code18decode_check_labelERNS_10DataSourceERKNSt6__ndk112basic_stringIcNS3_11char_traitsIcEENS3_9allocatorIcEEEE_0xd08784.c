// 函数: _ZN5Botan8PEM_Code18decode_check_labelERNS_10DataSourceERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xd08784
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
Botan::PEM_Code::decode(arg1, &var_48)
uint64_t x9 = zx.q(var_48.b)
uint64_t x10 = zx.q(*arg2)
uint64_t x8_1 = x9 u>> 1
uint64_t x2
uint64_t var_40

if ((x9.d & 1) == 0)
    x2 = x8_1
else
    x2 = var_40
uint64_t x11_1

if ((x10.d & 1) == 0)
    x11_1 = x10 u>> 1
else
    x11_1 = *(arg2 + 8)

void* result_1

if (x2 == x11_1)
    int32_t x12_1 = x9.d & 1
    char* result_2 = &var_48 | 1
    char* result
    
    result = x12_1 == 0 ? result_2 : result_1
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x1_1
    
    if ((x10.d & 1) != 0)
        x1_1 = *(arg2 + 0x10)
    else
        x1_1 = arg2 + 1
    
    if (x12_1 != 0)
        int32_t x0
        
        if (x2 != 0)
            x0 = memcmp()
        
        if (x2 == 0 || x0 == 0)
            return operator delete(result_1)
    else
        if (x2 == 0)
            return result
        
        while (zx.d(*result_2) == zx.d(*x1_1))
            uint64_t temp1_1 = x8_1
            x8_1 -= 1
            result_2 = &result_2[1]
            x1_1 += 1
            
            if (temp1_1 == 1)
                return result

void** x0_2 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "PEM: Label mismatch, wanted ", arg2)
char var_98[0x18]
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_98)
int64_t var_70 = x0_4[1].q
int128_t var_80 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
void* result_3

if ((zx.d(var_48.b) & 1) == 0)
    result_3 = &var_48 | 1
else
    result_3 = result_1

int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80, result_3)
int64_t var_50 = x0_6[1].q
int128_t var_60 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
