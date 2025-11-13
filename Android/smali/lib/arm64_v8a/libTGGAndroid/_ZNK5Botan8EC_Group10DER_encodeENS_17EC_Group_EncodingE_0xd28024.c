// 函数: _ZNK5Botan8EC_Group10DER_encodeENS_17EC_Group_EncodingE
// 地址: 0xd28024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t entry_x1
uint64_t x21 = zx.q(entry_x1)
int64_t* result_1 = nullptr
int64_t var_b0 = (zx.o(0)).q
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x20)
uint64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_60 = &var_80
void var_e0
sub_f2410c(&var_80, &var_e0)

if (&var_80 == var_60)
    (*var_60)->vFunc_4()
else if (var_60 != 0)
    (*var_60)->j_operator delete()

int128_t var_120
char var_100
void* var_f0
uint64_t var_70_3

if (x21.d == 2)
    void* x0_36 = Botan::EC_Group::data()
    var_80 = _vtable_for_Botan::OID + 0x10
    int64_t var_78_1
    __builtin_memset(&var_78_1, 0, 0x18)
    int64_t x9_1 = *(x0_36 + 0x1c8)
    int64_t x8_21 = *(x0_36 + 0x1d0)
    uint64_t x22_4 = x8_21 - x9_1
    
    if (x8_21 == x9_1)
        goto label_d28524
    
    if ((x22_4 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_d2851c:
        uint64_t var_70_4 = x21
    label_d28524:
        void** x0_51 = __cxa_allocate_exception(0x20)
        int64_t x0_52
        int128_t v0_1
        x0_52, v0_1 = operator new(0x40)
        int64_t var_110_1 = x0_52
        var_120 = data_71d0c0
        __builtin_strncpy(x0_52, "Cannot encode EC_Group as OID because OID not set", 0x32)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Encoding error: ", &var_120)
        *x0_51 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_51[1])
        *x0_51 = _vtable_for_Botan::Invalid_Argument + 0x10
        
        if ((zx.d(var_100) & 1) != 0)
            operator delete(var_f0)
        
        *x0_51 = _vtable_for_Botan::Encoding_Error + 0x10
        __cxa_throw(x0_51, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x0_38 = operator new(x22_4)
    uint64_t var_70_1 = x0_38
    int64_t var_68_1 = x0_38 + (x22_4 s>> 2 << 2)
    int64_t x1_11 = *(x0_36 + 0x1c8)
    x21 = x0_38
    size_t __saved_x0_2 = *(x0_36 + 0x1d0) - x1_11
    
    if (__saved_x0_2 s<= 0)
        goto label_d2851c
    
    memcpy(x21, x1_11, __saved_x0_2)
    int64_t var_70_2 = x21 + __saved_x0_2
    
    if (__saved_x0_2 == 0)
        goto label_d28524
    
    Botan::OID::encode_into(&var_80)
    var_80 = _vtable_for_Botan::OID + 0x10
    
    if (x0_38 != 0)
        var_70_3 = x0_38
        operator delete(x0_38)
else if (x21.d == 1)
    Botan::DER_Encoder::add_object(&var_e0, 5, nullptr, 0)
else
    if (x21.d != 0)
        void** x0_45 = __cxa_allocate_exception(0x20)
        int64_t x0_46
        int128_t v0
        x0_46, v0 = operator new(0x30)
        int64_t var_f0_1 = x0_46
        var_100.o = data_71b5b0
        __builtin_strncpy(x0_46, "EC_Group::DER_encode: Unknown encoding", 0x27)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_100)
        *x0_45 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_45[1])
        void* var_70
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(var_70)
        *x0_45 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_45, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    __builtin_strncpy(&var_100, "\"1.2.840.10045.1", 0x10)
    var_f0:1.w = 0x31
    Botan::OID::OID(&var_80)
    
    if ((zx.d(var_100) & 1) != 0)
        operator delete(var_f0)
    
    int64_t x22_1 = *(Botan::EC_Group::data() + 0x1e0)
    Botan::DER_Encoder::start_cons(&var_e0, 0x10)
    Botan::BigInt* x0_7 = Botan::DER_Encoder::encode(&var_e0)
    Botan::DER_Encoder::start_cons(x0_7, 0x10)
    var_80->vFunc_0(&var_80, x0_7)
    Botan::BigInt* x0_13 =
        Botan::DER_Encoder::encode(x0_7, (*(**Botan::EC_Group::data() + 0x10))(), 2)
    Botan::DER_Encoder::end_cons()
    Botan::DER_Encoder::start_cons(x0_13, 0x10)
    uint64_t x22_2 = (x22_1 + 7) u>> 3
    Botan::BigInt::encode_1363((*(**Botan::EC_Group::data() + 0x18))(), x22_2)
    Botan::DER_Encoder::add_object(x0_13, 4, nullptr, var_100.q)
    Botan::BigInt::encode_1363((*(**Botan::EC_Group::data() + 0x20))(), x22_2)
    Botan::DER_Encoder::add_object(x0_13, 4, nullptr, var_120.q)
    Botan::DER_Encoder::end_cons()
    Botan::PointGFp::encode(Botan::EC_Group::data() + 0x10)
    uint64_t var_138
    Botan::DER_Encoder::add_object(x0_13, 4, nullptr, var_138)
    Botan::DER_Encoder::encode(
        Botan::DER_Encoder::encode(x0_13, Botan::EC_Group::data() + 0xe8, 2), 
        Botan::EC_Group::data() + 0x110, 2)
    Botan::DER_Encoder::end_cons()
    
    if (var_138 != 0)
        operator delete(var_138)
    
    void* x0_33 = var_120.q
    
    if (x0_33 != 0)
        var_120:8.q = x0_33
        int64_t var_110
        Botan::deallocate_memory(x0_33, var_110 - x0_33, 1)
    
    void* x0_34 = var_100.q
    
    if (x0_34 != 0)
        int120_t var_ff
        var_ff:7.q = x0_34
        Botan::deallocate_memory(x0_34, var_f0 - x0_34, 1)
    
    var_80 = _vtable_for_Botan::OID + 0x10
    
    if (entry_x8 != 0)
        var_70_3 = entry_x8
        operator delete(entry_x8)
void* x21_4 = var_a0:8.q

if (x21_4 != 0)
    int128_t var_90
    void* x19_1 = var_90.q
    void* x0_43
    
    if (x19_1 == x21_4)
        x0_43 = x21_4
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_90:8, x19_1)
        while (x21_4 != x19_1)
        
        x0_43 = var_a0:8.q
    
    var_90.q = x21_4
    operator delete(x0_43)

int64_t x0_44 = var_b0

if (x0_44 != 0)
    var_b0 = x0_44
    Botan::deallocate_memory(x0_44, var_a0.q - x0_44, 1)

int64_t* result = result_1

if (&var_e0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
