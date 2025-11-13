// 函数: _ZNK5Botan13SM2_PublicKey22create_verification_opERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xe29984
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x2
uint64_t x11 = zx.q(*entry_x2)
uint64_t x9 = *(entry_x2 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_e299f8

int16_t var_60

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x2, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x2)
    x9 = *(entry_x2 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_e299f8:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_17 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_17, &var_60)
        __cxa_throw(x0_17, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

int64_t var_90
__builtin_memset(&var_90, 0, 0x30)
int64_t var_78
sub_e29dcc(arg2, &var_78, &var_90)
struct Botan::PK_Ops::Verification::Botan::(anonymous namespace)::SM2_Verification_Operation::VTable
    ** x0_3 = operator new(0x70)
*x0_3 = &_vtable_for_Botan::(anonymous namespace)::SM2_Verification_Operation{for `Botan::PK_Ops::Verification'}
void* x8_4 = arg1 + *(*arg1 - 0x88)
int64_t x8_5 = *(x8_4 + 0x10)
x0_3[1] = *(x8_4 + 8)
x0_3[2] = x8_5

if (x8_5 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i != 0)

void* x0_5 = Botan::EC_Group::data()
*(*arg1 - 0x88)
Botan::PointGFp_Multi_Point_Precompute::PointGFp_Multi_Point_Precompute(&x0_3[3], x0_5 + 0x10)
uint64_t x8_10 = zx.q(var_90.b)
uint64_t x8_11
uint64_t var_88

if ((x8_10.d & 1) == 0)
    x8_11 = x8_10 u>> 1
else
    x8_11 = var_88
__builtin_memset(&x0_3[7], 0, 0x38)
int64_t result

if (x8_11 == 3)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_90, 0, -ffffffffffffffff, 0x75cb1e)

if (x8_11 != 3 || result.d != 0)
    var_60 = 0
    Botan::HashFunction::create_or_throw(&var_90, &var_60)
    int64_t* x0_9 = x0_3[0xd]
    int64_t* var_48_1 = nullptr
    int64_t var_48
    x0_3[0xd] = var_48
    void* var_50
    
    if (x0_9 == 0)
        int64_t var_48_3 = 0
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
    else
        (*(*x0_9 + 0x10))()
        int64_t var_48_2 = 0
        
        if (var_48_1 != 0)
            (*(*var_48_1 + 0x10))()
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
    Botan::sm2_compute_za(x0_3[0xd], &var_78, &x0_3[1], arg1 + *(*arg1 - 0x88) + 0x18)
    void* x0_13 = x0_3[0xa]
    
    if (x0_13 != 0)
        x0_3[0xb] = x0_13
        operator delete(x0_13)
        __builtin_memset(&x0_3[0xa], 0, 0x18)
    
    int64_t x1_4 = var_60.q
    int64_t* x0_14 = x0_3[0xd]
    x0_3[0xa] = x1_4
    int128_t var_58
    *(x0_3 + 0x58) = var_58
    result = (*(*x0_14 + 0x18))(x0_14, x1_4, var_58.q - x1_4)

uint32_t x8_23 = zx.d(var_90.b)
void** entry_x8
*entry_x8 = x0_3
void* var_80

if ((x8_23 & 1) != 0)
    result = operator delete(var_80)

if ((zx.d(var_78.b) & 1) == 0)
    return result

void* var_68
return operator delete(var_68)
