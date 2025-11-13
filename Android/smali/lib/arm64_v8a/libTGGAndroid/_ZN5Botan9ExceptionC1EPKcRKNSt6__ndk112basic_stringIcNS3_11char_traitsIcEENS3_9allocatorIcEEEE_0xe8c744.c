// 函数: _ZN5Botan9ExceptionC1EPKcRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xe8c744
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Exception + 0x10
size_t x0_1 = strlen(arg2)
char var_78
void* var_68
char var_60[0x10]

if (x0_1 u>= -0x10)
    int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_60[0]) & 1) != 0)
        void* var_50
        operator delete(var_50)
        
        if ((zx.d(var_78) & 1) != 0)
        label_e8c8c8:
            operator delete(var_68)
            std::exception::~exception()
            sub_1101e04(x0_10)
            noreturn
    else if ((zx.d(var_78) & 1) != 0)
        goto label_e8c8c8
    
    std::exception::~exception()
    sub_1101e04(x0_10)
    noreturn

void* x23

if (x0_1 u>= 0x17)
    uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x24_1)
    x23 = x0_3
    size_t var_70_1 = x0_1
    var_68 = x0_3
    var_78.q = x24_1 | 1
    memcpy(x23, arg2, x0_1)
else
    x23 = &var_78 | 1
    var_78 = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x23, arg2, x0_1)

*(x23 + x0_1) = 0
int128_t* x0_6
int128_t v0
x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
void* x8_4 = x0_6[1].q
var_60 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
char* entry_x2
*(entry_x2 + 8)
void* x1_2

if ((zx.d(*entry_x2) & 1) != 0)
    x1_2 = *(entry_x2 + 0x10)
else
    x1_2 = &entry_x2[1]

int128_t* result
int128_t v0_1
result, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60, x1_2)
v0_1 = *result
*(arg1 + 0x18) = result[1].q
*(arg1 + 8) = v0_1
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_60[0]) & 1) != 0)
    result = operator delete(x8_4)

if ((zx.d(var_78) & 1) == 0)
    return result

return operator delete(var_68)
