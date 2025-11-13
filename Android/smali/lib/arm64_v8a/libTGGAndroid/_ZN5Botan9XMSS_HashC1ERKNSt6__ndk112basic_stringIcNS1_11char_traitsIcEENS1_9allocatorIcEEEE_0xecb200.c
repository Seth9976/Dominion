// 函数: _ZN5Botan9XMSS_HashC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xecb200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x23
size_t var_28 = entry_x23
int16_t var_80 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::HashFunction::create(entry_x1, &var_80)
void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

__builtin_memset(arg1 + 8, 0, 0x20)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x30)
int64_t* x0_3 = *arg1
char var_98[0x10]

if (x0_3 == 0)
    void** x0_13 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "XMSS cannot use hash ", entry_x1)
    int128_t* x0_15
    int128_t v0
    x0_15, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_98)
    int64_t var_70_1 = x0_15[1].q
    var_80.o = *x0_15
    __builtin_memset(x0_15, 0, 0x18)
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Lookup_Error + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
    noreturn

int64_t x0_4 = (**x0_3)()
*(arg1 + 0x28) = x0_4

if (x0_4 == 0)
    Botan::assertion_failure("m_output_length > 0", "Hash output length of zero is invalid.", 
        "XMSS_Hash", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x186f1)
else
    void* x22_1 = *(arg1 + 0x10)
    int64_t x0_5 = *(arg1 + 0x18)
    entry_x23 = x0_5 - x22_1
    size_t x24_1 = x0_4 - 1 - entry_x23
    
    if (x0_4 - 1 u<= entry_x23)
        if (x0_4 - 1 u< entry_x23)
            *(arg1 + 0x18) = x22_1 + x0_4 - 1
        
        goto label_ecb36c
    
    int64_t x8_5 = *(arg1 + 0x20)
    
    if (x8_5 - x0_5 u>= x24_1)
        if (x24_1 != 0)
            memset(x0_5, 0, x24_1)
            x0_5 += x24_1
        
        *(arg1 + 0x18) = x0_5
    label_ecb36c:
        int64_t x0_12 = (*(**arg1 + 0x28))()
        int64_t* result = *(arg1 + 8)
        *(arg1 + 8) = x0_12
        
        if (result == 0)
            return result
        
        return (*(*result + 0x10))()
    
    if (((x0_4 - 1) & 0xffffffff80000000) == 0)
        void* x8_6 = x8_5 - x22_1
        int64_t x10_1 = x8_6 << 1
        int64_t x10_2
        
        if (x10_1 u< x0_4 - 1)
            x10_2 = x0_4 - 1
        else
            x10_2 = x10_1
        
        int64_t x26_1
        
        x26_1 = x8_6 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        int64_t x25_1
        
        if (x26_1 == 0)
            x25_1 = 0
        else
            x25_1 = operator new(x26_1)
        
        memset(x25_1 + entry_x23, 0, x24_1)
        
        if (entry_x23 s>= 1)
            memcpy(x25_1, x22_1, entry_x23)
        
        *(arg1 + 0x10) = x25_1
        *(arg1 + 0x18) = x25_1 + x0_4 - 1
        *(arg1 + 0x20) = x25_1 + x26_1
        
        if (x22_1 != 0)
            operator delete(x22_1)
        
        goto label_ecb36c

int64_t* x0_19 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

void* var_88

if ((zx.d(var_98[0]) & 1) != 0)
    operator delete(var_88)
void* x0_23

if ((zx.d(*(arg1 + 0x30)) & 1) == 0)
    x0_23 = *(arg1 + 0x10)
    
    if (x0_23 != 0)
        goto label_ecb554
    
    goto label_ecb518

operator delete(*(arg1 + 0x40))
x0_23 = *(arg1 + 0x10)
int64_t* x0_27

if (x0_23 != 0)
label_ecb554:
    *(arg1 + 0x18) = x0_23
    operator delete(x0_23)
    x0_27 = *(arg1 + 8)
    *(arg1 + 8) = 0
    
    if (x0_27 == 0)
        goto label_ecb524
    
    goto label_ecb570

label_ecb518:
x0_27 = *(arg1 + 8)
*(arg1 + 8) = 0
int64_t* x0_24

if (x0_27 != 0)
label_ecb570:
    (*(*x0_27 + 0x10))()
    x0_24 = *arg1
    *arg1 = 0
    
    if (x0_24 != 0)
        (*(*x0_24 + 0x10))()
else
label_ecb524:
    x0_24 = *arg1
    *arg1 = 0
    
    if (x0_24 != 0)
        (*(*x0_24 + 0x10))()
sub_1101e04(x0_19)
noreturn
