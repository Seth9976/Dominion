// 函数: _ZNK5Botan8DL_Group10DER_encodeENS0_6FormatE
// 地址: 0xd10cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void* x0 = Botan::DL_Group::data()
int64_t x8_1 = *(x0 + 0x40)
char var_d0
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const var_70
int32_t entry_x1

if (x8_1 == -1)
    int64_t x9_1 = *(x0 + 0x28)
    int64_t x11_1 = *(x0 + 0x30)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        x8_1 = 0
        *(x0 + 0x40) = 0
        
        if (entry_x1 u<= 1)
            goto label_d10d70
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        *(x0 + 0x40) = x8_1
        
        if (entry_x1 u<= 1)
            goto label_d10d70
else if (entry_x1 u<= 1)
label_d10d70:
    
    if (x8_1 == 0)
        void** x0_30 = __cxa_allocate_exception(0x20)
        int64_t x0_31
        int128_t v0
        x0_31, v0 = operator new(0x40)
        int64_t var_60 = x0_31
        var_70.o = data_71be50
        __builtin_strncpy(x0_31, "Cannot encode DL_Group in ANSI formats when q param is missing", 
            0x3f)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Encoding error: ", &var_70)
        *x0_30 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_30[1])
        *x0_30 = _vtable_for_Botan::Invalid_Argument + 0x10
        void* var_c0
        
        if ((zx.d(var_d0) & 1) != 0)
            operator delete(var_c0)
        *x0_30 = _vtable_for_Botan::Encoding_Error + 0x10
        __cxa_throw(x0_30, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
        noreturn

int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* result_1 = nullptr
int64_t var_a0 = (zx.o(0)).q
int128_t var_90
__builtin_memset(&var_90, 0, 0x20)
var_70 = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
int64_t var_68 = entry_x8
struct std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>::std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>::VTable
    * const* var_50 = &var_70
sub_f2410c(&var_70, &var_d0)

if (&var_70 == var_50)
    (*var_50)->vFunc_4()
else if (var_50 != 0)
    (*var_50)->j_operator delete()

if (entry_x1 == 0)
    Botan::DER_Encoder::start_cons(&var_d0, 0x10)
    Botan::DER_Encoder::encode(
        Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(&var_d0, Botan::DL_Group::data(), 2), 
            Botan::DL_Group::data() + 0x50, 2), 
        Botan::DL_Group::data() + 0x28, 2)
    Botan::DER_Encoder::end_cons()
else if (entry_x1 == 2)
    Botan::DER_Encoder::start_cons(&var_d0, 0x10)
    Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(&var_d0, Botan::DL_Group::data(), 2), 
        Botan::DL_Group::data() + 0x50, 2)
    Botan::DER_Encoder::end_cons()
else
    if (entry_x1 != 1)
        void** x0_36 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(entry_x1)
        void var_e8
        int128_t* x0_39
        int128_t v0_1
        x0_39, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_e8, nullptr)
        int64_t var_60_1 = x0_39[1].q
        var_70.o = *x0_39
        __builtin_memset(x0_39, 0, 0x18)
        *x0_36 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_36[1])
        *x0_36 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_36, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    Botan::DER_Encoder::start_cons(&var_d0, 0x10)
    Botan::DER_Encoder::encode(
        Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(&var_d0, Botan::DL_Group::data(), 2), 
            Botan::DL_Group::data() + 0x28, 2), 
        Botan::DL_Group::data() + 0x50, 2)
    Botan::DER_Encoder::end_cons()

void* x21_6 = var_90:8.q

if (x21_6 != 0)
    int128_t var_80
    void* x19_1 = var_80.q
    void* x0_28
    
    if (x19_1 == x21_6)
        x0_28 = x21_6
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_80:8, x19_1)
        while (x21_6 != x19_1)
        
        x0_28 = var_90:8.q
    
    var_80.q = x21_6
    operator delete(x0_28)

int64_t x0_29 = var_a0

if (x0_29 != 0)
    var_a0 = x0_29
    Botan::deallocate_memory(x0_29, var_90.q - x0_29, 1)

int64_t* result = result_1

if (&var_d0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
