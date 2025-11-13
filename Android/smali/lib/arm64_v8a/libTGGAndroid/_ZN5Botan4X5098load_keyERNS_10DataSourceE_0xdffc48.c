// 函数: _ZN5Botan4X5098load_keyERNS_10DataSourceE
// 地址: 0xdffc48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_98
__builtin_memset(&var_98, 0, 0x18)
int64_t var_70 = (zx.o(0)).q
int128_t var_60
__builtin_memset(&var_60, 0, 0x20)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_80 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* __offset(vtable_for_Botan::OID, 0x10) var_78 = _vtable_for_Botan::OID + 0x10
int32_t x0 = Botan::ASN1::maybe_BER(arg1)
void* result_1
void* var_c0
int32_t x0_2

if ((x0 & 1) != 0)
    result_1.w = 0
    x0_2 = Botan::PEM_Code::matches(arg1, &result_1, 0x1000)
    
    if ((zx.d(result_1.b) & 1) != 0)
        operator delete(var_c0)

char var_108
int64_t var_b0
int64_t* var_a0

if ((x0 & 1) != 0 && (x0_2 & 1) == 0)
    var_108.q = 0
    int64_t var_fc_2
    __builtin_memset(&var_fc_2, 0, 0x1c)
    int64_t var_107
    var_107:7.d = 0xff00
    Botan::DataSource& var_e0_1 = arg1
    int64_t* var_d8_2 = nullptr
    Botan::BER_Decoder::start_cons(&var_108, 0x10)
    (*(var_80 + 8))(&var_80, &result_1)
    Botan::BER_Decoder::decode(&result_1, &var_98, 3, 3)
    Botan::BER_Decoder::end_cons()
    int64_t var_a0_2 = 0
    
    if (var_a0 != 0)
        (*(*var_a0 + 0x38))()
    
    if (var_c0 != 0)
        void* var_b8_2 = var_c0
        Botan::deallocate_memory(var_c0, var_b0 - var_c0, 1)
    
    int64_t var_d8_3 = 0
    
    if (var_d8_2 != 0)
        (*(*var_d8_2 + 0x38))()
    
    void* x0_24 = var_fc_2
    
    if (x0_24 != 0)
        int64_t var_f4_1 = x0_24
        int64_t var_ec_1
        Botan::deallocate_memory(x0_24, var_ec_1 - x0_24, 1)
else
    var_108 = 0x14
    int64_t var_107_1
    __builtin_strncpy(&var_107_1, "PUBLIC KEY", 0xb)
    Botan::PEM_Code::decode_check_label(arg1, &var_108)
    void* result_2 = result_1
    int64_t var_c8
    void* x21_1 = var_c8 - result_2
    void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_130 =
        _vtable_for_Botan::DataSource_Memory + 0x10
    void* var_128_1
    __builtin_memset(&var_128_1, 0, 0x18)
    void* var_118_1
    
    if (var_c8 != result_2)
        if ((x21_1 & 0xffffffff80000000) != 0)
            sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            noreturn
        
        void* x0_6 = Botan::allocate_memory(x21_1, 1)
        result_2 = result_1
        void* x20_2 = x0_6
        var_128_1 = x0_6
        void* var_120_1 = x0_6
        size_t x21_2 = var_c8 - result_2
        var_118_1 = x0_6 + x21_1
        
        if (x21_2 s>= 1)
            memcpy(x20_2, result_2, x21_2)
            x20_2 += x21_2
        
        void* var_120_2 = x20_2
    
    int64_t var_110_1 = 0
    
    if (result_2 != 0)
        void* result_3 = result_2
        Botan::deallocate_memory(result_2, var_c0 - result_2, 1)
    
    int64_t var_fc
    
    if ((zx.d(var_108) & 1) != 0)
        operator delete(var_fc)
    var_108.q = 0
    int64_t var_fc_1
    __builtin_memset(&var_fc_1, 0, 0x1c)
    var_107_1:7.d = 0xff00
    void* __offset(vtable_for_Botan::DataSource_Memory, 0x10)* var_e0 = &var_130
    int64_t* var_d8 = nullptr
    Botan::BER_Decoder::start_cons(&var_108, 0x10)
    (*(var_80 + 8))(&var_80, &result_1)
    Botan::BER_Decoder::decode(&result_1, &var_98, 3, 3)
    Botan::BER_Decoder::end_cons()
    int64_t var_a0_1 = 0
    
    if (var_a0 != 0)
        (*(*var_a0 + 0x38))()
    
    if (var_c0 != 0)
        void* var_b8_1 = var_c0
        Botan::deallocate_memory(var_c0, var_b0 - var_c0, 1)
    
    int64_t var_d8_1 = 0
    
    if (var_d8 != 0)
        (*(*var_d8 + 0x38))()
    
    void* x0_16 = var_fc_1
    
    if (x0_16 != 0)
        int64_t var_f4 = x0_16
        int64_t var_ec
        Botan::deallocate_memory(x0_16, var_ec - x0_16, 1)
    
    void* x0_17 = var_128_1
    var_130 = _vtable_for_Botan::DataSource_Memory + 0x10
    
    if (x0_17 != 0)
        void* var_120_3 = x0_17
        Botan::deallocate_memory(x0_17, var_118_1 - x0_17, 1)
int64_t var_90

if (var_98 == var_90)
    void** x0_30 = __cxa_allocate_exception(0x20)
    int64_t x0_31
    int128_t v0
    x0_31, v0 = operator new(0x20)
    int64_t var_c0_1 = x0_31
    result_1.o = data_71aa40
    __builtin_strncpy(x0_31, "X.509 public key decoding", 0x1a)
    *x0_30 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_30[1])
    *x0_30 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_30, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

Botan::load_public_key(&var_80, &var_98)
void* x0_26 = var_98
void* result = result_1

if (x0_26 != 0)
    void* var_90_1 = x0_26
    operator delete(x0_26)

void* x0_27 = var_60:8.q
var_80 = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_27 != 0)
    int128_t var_50
    var_50.q = x0_27
    operator delete(x0_27)

int64_t x0_28 = var_70
void* __offset(vtable_for_Botan::OID, 0x10) var_78_1 = _vtable_for_Botan::OID + 0x10

if (x0_28 != 0)
    var_70 = x0_28
    operator delete(x0_28)

return result
