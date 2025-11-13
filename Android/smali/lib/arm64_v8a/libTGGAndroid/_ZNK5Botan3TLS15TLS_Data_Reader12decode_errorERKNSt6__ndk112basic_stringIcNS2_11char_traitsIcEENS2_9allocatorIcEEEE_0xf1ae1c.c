// 函数: _ZNK5Botan3TLS15TLS_Data_Reader12decode_errorERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xf1ae1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x22 = *arg1
size_t x0_1 = strlen(x22)
int64_t var_b8
void* var_a8
char var_a0[0x10]
char var_80[0x10]
char var_60

if (x0_1 u>= -0x10)
    int64_t* x0_16 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::exception::~exception()
    
    if ((zx.d(var_60) & 1) == 0)
        if ((zx.d(var_80[0]) & 1) != 0)
            goto label_f1b034
        
        goto label_f1affc
    
    void* var_50
    operator delete(var_50)
    
    if ((zx.d(var_80[0]) & 1) != 0)
    label_f1b034:
        void* var_70
        operator delete(var_70)
        
        if ((zx.d(var_a0[0]) & 1) == 0)
            goto label_f1b004
        
        goto label_f1b054
    
label_f1affc:
    
    if ((zx.d(var_a0[0]) & 1) != 0)
    label_f1b054:
        void* var_90
        operator delete(var_90)
        
        if ((zx.d(var_b8.b) & 1) != 0)
        label_f1b074:
            operator delete(var_a8)
            sub_1101e04(x0_16)
            noreturn
    else
    label_f1b004:
        
        if ((zx.d(var_b8.b) & 1) != 0)
            goto label_f1b074
    
    sub_1101e04(x0_16)
    noreturn

void* x23

if (x0_1 u>= 0x17)
    uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x24_1)
    x23 = x0_3
    size_t var_b0_1 = x0_1
    var_a8 = x0_3
    var_b8 = x24_1 | 1
    memcpy(x23, x22, x0_1)
else
    x23 = &var_b8 | 1
    var_b8.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x23, x22, x0_1)

*(x23 + x0_1) = 0
int128_t* x0_6
int128_t v0
x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_b8, nullptr)
void* x8_3 = x0_6[1].q
var_a0 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
int128_t* x0_8
int128_t v0_1
x0_8, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_a0)
void* x8_4 = x0_8[1].q
var_80 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
char* entry_x1
*(entry_x1 + 8)
void* x1_2

if ((zx.d(*entry_x1) & 1) != 0)
    x1_2 = *(entry_x1 + 0x10)
else
    x1_2 = &entry_x1[1]

int128_t* x0_10
int128_t v0_2
x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80, x1_2)
void* x9_1 = x0_10[1].q
var_60.o = *x0_10
__builtin_memset(x0_10, 0, 0x18)
void** entry_x8
*entry_x8 = _vtable_for_Botan::Exception + 0x10
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &entry_x8[1])
*entry_x8 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_60) & 1) == 0)
    if ((zx.d(var_80[0]) & 1) != 0)
        goto label_f1afb4
    
    goto label_f1af74

result = operator delete(x9_1)

if ((zx.d(var_80[0]) & 1) != 0)
label_f1afb4:
    result = operator delete(x8_4)
    
    if ((zx.d(var_a0[0]) & 1) == 0)
        goto label_f1af7c
    
    goto label_f1afc4

label_f1af74:

if ((zx.d(var_a0[0]) & 1) != 0)
label_f1afc4:
    result = operator delete(x8_3)
    
    if ((zx.d(var_b8.b) & 1) == 0)
        return result
else
label_f1af7c:
    
    if ((zx.d(var_b8.b) & 1) == 0)
        return result

return operator delete(var_a8)
