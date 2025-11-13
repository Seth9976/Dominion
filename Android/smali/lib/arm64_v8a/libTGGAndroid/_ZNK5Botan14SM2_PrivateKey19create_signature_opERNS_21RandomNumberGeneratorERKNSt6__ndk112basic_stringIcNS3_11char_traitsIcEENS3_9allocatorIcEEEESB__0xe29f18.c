// 函数: _ZNK5Botan14SM2_PrivateKey19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xe29f18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_e29f88

char var_50

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_e29f88:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_16 = __cxa_allocate_exception(0x20)
        var_50 = 6
        int32_t var_4f = 0x324d53
        Botan::Provider_Not_Found::Provider_Not_Found(x0_16, &var_50)
        __cxa_throw(x0_16, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

int64_t var_80
__builtin_memset(&var_80, 0, 0x30)
int64_t var_68
sub_e29dcc(arg3, &var_68, &var_80)
struct Botan::PK_Ops::Signature::Botan::(anonymous namespace)::SM2_Signature_Operation::VTable** 
    x0_3 = operator new(0x78)
*x0_3 = &_vtable_for_Botan::(anonymous namespace)::SM2_Signature_Operation{for `Botan::PK_Ops::Signature'}
x0_3[1] = *(arg1 + 0x68)
int64_t x8_3 = *(arg1 + 0x70)
x0_3[2] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

int64_t x0_5 = Botan::EC_PrivateKey::private_value()
uint64_t x9_3 = zx.q(var_80.b)
*(x0_3 + 0x28) = zx.o(0)
x0_3[3] = x0_5
x0_3[4] = arg1 + 0x38
uint64_t x8_7
uint64_t var_78

if ((x9_3.d & 1) == 0)
    x8_7 = x9_3 u>> 1
else
    x8_7 = var_78
__builtin_memset(&x0_3[7], 0, 0x40)
int64_t result

if (x8_7 == 3)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_80, 0, -ffffffffffffffff, 0x75cb1e)

if (x8_7 != 3 || result.d != 0)
    var_50.w = 0
    Botan::HashFunction::create_or_throw(&var_80, &var_50)
    int64_t* x0_8 = x0_3[0xb]
    int64_t* var_38_1 = nullptr
    int64_t var_38
    x0_3[0xb] = var_38
    void* var_40
    
    if (x0_8 == 0)
        int64_t var_38_3 = 0
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(var_40)
    else
        (*(*x0_8 + 0x10))()
        int64_t var_38_2 = 0
        
        if (var_38_1 != 0)
            (*(*var_38_1 + 0x10))()
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(var_40)
    Botan::sm2_compute_za(x0_3[0xb], &var_68, &x0_3[1], arg1 + 0x78)
    void* x0_12 = x0_3[5]
    
    if (x0_12 != 0)
        x0_3[6] = x0_12
        operator delete(x0_12)
        __builtin_memset(&x0_3[5], 0, 0x18)
    
    int64_t x1_3 = var_50.q
    int64_t* x0_13 = x0_3[0xb]
    x0_3[5] = x1_3
    int128_t var_48
    *(x0_3 + 0x30) = var_48
    result = (*(*x0_13 + 0x18))(x0_13, x1_3, var_48.q - x1_3)

uint32_t x8_16 = zx.d(var_80.b)
void** entry_x8
*entry_x8 = x0_3
void* var_70

if ((x8_16 & 1) != 0)
    result = operator delete(var_70)

if ((zx.d(var_68.b) & 1) == 0)
    return result

void* var_58
return operator delete(var_58)
