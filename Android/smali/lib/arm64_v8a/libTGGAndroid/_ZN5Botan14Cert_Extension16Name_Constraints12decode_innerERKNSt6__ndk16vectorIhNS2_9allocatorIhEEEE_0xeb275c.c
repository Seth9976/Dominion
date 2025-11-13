// 函数: _ZN5Botan14Cert_Extension16Name_Constraints12decode_innerERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xeb275c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_70
__builtin_memset(&var_70, 0, 0x30)
void var_a8
Botan::BER_Decoder::BER_Decoder(&var_a8)
Botan::BER_Decoder::start_cons(&var_a8, 0x10)
Botan::BER_Decoder::get_next_object()
void var_e0
Botan::BER_Decoder::push_back(&var_e0)
char var_170
void* var_160
int32_t var_100
int32_t var_fc
void* var_58
void** var_50

if (var_100 == 0 && var_fc == 0xa0)
    Botan::BER_Decoder::decode_list<Botan::GeneralSubtree>(&var_e0, &var_58, 0)
    
    if (var_58 == var_50)
        void** x0_32 = __cxa_allocate_exception(0x20)
        int64_t x0_33
        int128_t v0_2
        x0_33, v0_2 = operator new(0x20)
        int64_t var_110_2 = x0_33
        int128_t var_120 = data_71aa40
        __builtin_strncpy(x0_33, "Empty Name Contraint list", 0x1a)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Encoding error: ", &var_120)
        *x0_32 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_32[1])
        *x0_32 = _vtable_for_Botan::Invalid_Argument + 0x10
        
        if ((zx.d(var_170) & 1) != 0)
            operator delete(var_160)
        
        *x0_32 = _vtable_for_Botan::Encoding_Error + 0x10
        __cxa_throw(x0_32, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
        noreturn

Botan::BER_Decoder::get_next_object()
Botan::BER_Decoder::push_back(&var_e0)
int128_t var_140
void** var_68

if (var_100 == 1 && var_fc == 0xa0)
    Botan::BER_Decoder::decode_list<Botan::GeneralSubtree>(&var_e0, &var_70, 1)
    
    if (var_70 == var_68)
        void** x0_26 = __cxa_allocate_exception(0x20)
        int64_t x0_27
        int128_t v0_1
        x0_27, v0_1 = operator new(0x20)
        int64_t var_130_1 = x0_27
        var_140 = data_71aa40
        __builtin_strncpy(x0_27, "Empty Name Contraint list", 0x1a)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Encoding error: ", &var_140)
        *x0_26 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_26[1])
        *x0_26 = _vtable_for_Botan::Invalid_Argument + 0x10
        
        if ((zx.d(var_170) & 1) != 0)
            operator delete(var_160)
        
        *x0_26 = _vtable_for_Botan::Encoding_Error + 0x10
        __cxa_throw(x0_26, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
        noreturn

Botan::BER_Decoder::end_cons()

if (var_58 == var_50 && var_70 == var_68)
    void** x0_20 = __cxa_allocate_exception(0x20)
    int64_t x0_21
    int128_t v0
    x0_21, v0 = operator new(0x20)
    int64_t var_130 = x0_21
    var_140 = data_71c370
    __builtin_strncpy(x0_21, "Empty Name Contraint extension", 0x1f)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_140)
    *x0_20 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_20[1])
    *x0_20 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_170) & 1) != 0)
        operator delete(var_160)
    
    *x0_20 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_20, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

std::__ndk1::vector<Botan::GeneralSubtree, std::__ndk1::allocator<Botan::GeneralSubtree> >::vector(
    &var_170)
void var_158
std::__ndk1::vector<Botan::GeneralSubtree, std::__ndk1::allocator<Botan::GeneralSubtree> >::vector(
    &var_158)
Botan::NameConstraints::operator=(arg1 + 8)
Botan::NameConstraints::~NameConstraints()
void* var_118

if (var_118 != 0)
    void* var_110_1 = var_118
    int64_t var_108
    Botan::deallocate_memory(var_118, var_108 - var_118, 1)

void* var_f8

if (var_f8 != 0)
    void* var_f0_1 = var_f8
    int64_t var_e8
    Botan::deallocate_memory(var_f8, var_e8 - var_f8, 1)

int64_t var_b0_1 = 0
int64_t* var_b0

if (var_b0 != 0)
    (*(*var_b0 + 0x38))()

void* var_d0

if (var_d0 != 0)
    void* var_c8_1 = var_d0
    int64_t var_c0
    Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)

int64_t var_78_1 = 0
int64_t* var_78

if (var_78 != 0)
    (*(*var_78 + 0x38))()

void* result_1
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_88
    result = Botan::deallocate_memory(result, var_88 - result, 1)

void* x19_1 = var_70

if (x19_1 != 0)
    void** x22_1 = var_68
    void* x0_16
    
    if (x22_1 == x19_1)
        x0_16 = x19_1
    else
        void** x23_1 = x22_1
        
        do
            x23_1 = &x23_1[-0xa]
            *x23_1 = _vtable_for_Botan::GeneralSubtree + 0x10
            uint32_t x8_16 = zx.d(x23_1[5].b)
            x23_1[1] = _vtable_for_Botan::GeneralName + 0x10
            
            if ((x8_16 & 1) != 0)
                operator delete(x22_1[-3])
                
                if ((zx.d(x22_1[-8].b) & 1) != 0)
                    operator delete(x22_1[-6])
            else if ((zx.d(x22_1[-8].b) & 1) != 0)
                operator delete(x22_1[-6])
            
            x22_1 = x23_1
        while (x19_1 != x23_1)
        
        x0_16 = var_70
    
    void* var_68_1 = x19_1
    result = operator delete(x0_16)

void* x19_2 = var_58

if (x19_2 == 0)
    return result

void** x22_2 = var_50
void* x0_19

if (x22_2 == x19_2)
    x0_19 = x19_2
else
    void** x23_2 = x22_2
    
    do
        x23_2 = &x23_2[-0xa]
        *x23_2 = _vtable_for_Botan::GeneralSubtree + 0x10
        uint32_t x8_19 = zx.d(x23_2[5].b)
        x23_2[1] = _vtable_for_Botan::GeneralName + 0x10
        
        if ((x8_19 & 1) != 0)
            operator delete(x22_2[-3])
            
            if ((zx.d(x22_2[-8].b) & 1) != 0)
                operator delete(x22_2[-6])
        else if ((zx.d(x22_2[-8].b) & 1) != 0)
            operator delete(x22_2[-6])
        
        x22_2 = x23_2
    while (x19_2 != x23_2)
    
    x0_19 = var_58

void* var_50_1 = x19_2
return operator delete(x0_19)
