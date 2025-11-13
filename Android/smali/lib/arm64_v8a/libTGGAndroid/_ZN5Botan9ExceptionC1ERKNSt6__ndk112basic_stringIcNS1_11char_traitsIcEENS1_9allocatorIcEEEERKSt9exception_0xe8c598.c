// 函数: _ZN5Botan9ExceptionC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKSt9exception
// 地址: 0xe8c598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Exception + 0x10
char var_58[0x10]
sub_cafe1c(arg2, " failed with ", &var_58)
int64_t* entry_x2
char* x0_2 = (*(*entry_x2 + 0x10))(entry_x2)
size_t x0_3 = strlen(x0_2)
char var_70
void* var_60
void* var_48

if (x0_3 u>= -0x10)
    int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    if ((zx.d(var_70) & 1) != 0)
        operator delete(var_60)
        
        if ((zx.d(var_58[0]) & 1) != 0)
        label_e8c730:
            operator delete(var_48)
            std::exception::~exception()
            sub_1101e04(x0_10)
            noreturn
    else if ((zx.d(var_58[0]) & 1) != 0)
        goto label_e8c730
    
    std::exception::~exception()
    sub_1101e04(x0_10)
    noreturn

void* x22

if (x0_3 u>= 0x17)
    uint64_t x23_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
    void* x0_5 = operator new(x23_1)
    x22 = x0_5
    uint64_t var_68 = x0_3
    var_60 = x0_5
    var_70.q = x23_1 | 1
    memcpy(x22, x0_2, x0_3)
else
    x22 = &var_70 | 1
    var_70 = (x0_3.d << 1).b
    
    if (x0_3 != 0)
        memcpy(x22, x0_2, x0_3)

*(x22 + x0_3) = 0
void* x1_1
void var_6f

if ((zx.d(var_70) & 1) != 0)
    x1_1 = var_60
else
    x1_1 = &var_6f
int128_t* result
int128_t v0
result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58, x1_1)
v0 = *result
*(arg1 + 0x18) = result[1].q
*(arg1 + 8) = v0
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_70) & 1) != 0)
    result = operator delete(var_60)

if ((zx.d(var_58[0]) & 1) == 0)
    return result

return operator delete(var_48)
