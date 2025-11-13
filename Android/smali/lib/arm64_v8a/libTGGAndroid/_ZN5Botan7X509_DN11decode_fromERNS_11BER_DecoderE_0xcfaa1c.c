// 函数: _ZN5Botan7X509_DN11decode_fromERNS_11BER_DecoderE
// 地址: 0xcfaa1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_148
Botan::BER_Decoder::raw_bytes<std::__ndk1::allocator<uint8_t> >(&var_148)
Botan::BER_Decoder::end_cons()
void* var_118_1 = nullptr
int64_t* var_118

if (var_118 != 0)
    (*(*var_118 + 0x38))()

void* var_138
int64_t var_128

if (var_138 != 0)
    void* var_130_1 = var_138
    Botan::deallocate_memory(var_138, var_128 - var_138, 1)

void var_b0
Botan::BER_Decoder::BER_Decoder(&var_b0)
char v0 = (data_71c510).b
int32_t var_a8
int64_t* var_88

while (((*(*var_88 + 0x18))() & (var_a8 == 0xff00 ? 1 : 0) & 1) == 0)
    Botan::BER_Decoder::start_cons(&var_b0, 0x11)
    int32_t var_e0
    int64_t* var_c0
    
    while (((*(*var_c0 + 0x18))() & (var_e0 == 0xff00 ? 1 : 0) & 1) == 0)
        void* __offset(vtable_for_Botan::OID, 0x10) var_108 = _vtable_for_Botan::OID + 0x10
        void* var_100
        __builtin_memset(&var_100, 0, 0x18)
        int16_t var_180 = 0
        var_148 = _vtable_for_Botan::ASN1_String + 0x10
        void* var_140
        __builtin_memset(&var_140, 0, 0x18)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_128)
        uint64_t x8_14 = zx.q(var_128.b)
        
        if ((x8_14.d & 1) != 0)
            int64_t var_120
            int64_t x8_16 = var_120
            void* x9_2 = var_118_1
            uint64_t x10_3
            
            do
                if (x8_16 == 0)
                    goto label_cfabdc
                
                x10_3 = zx.q(*x9_2)
                x9_2 += 1
                x8_16 -= 1
            while (zx.d(*(&data_84a2f8 + x10_3)) != 0)
        else
            uint64_t x8_15 = x8_14 u>> 1
            void* x9_1 = &var_128:1
            uint64_t x10_1
            
            do
                if (x8_15 == 0)
                label_cfabdc:
                    int32_t var_110_2 = 0x13
                    
                    if ((zx.d(var_180.b) & 1) == 0)
                        goto label_cfabfc
                    
                    goto label_cfabe8
                
                x10_1 = zx.q(*x9_1)
                x9_1 += 1
                x8_15 -= 1
            while (zx.d(*(&data_84a2f8 + x10_1)) != 0)
        
        int32_t var_110_1 = 0xc
        void* var_170
        
        if ((zx.d(var_180.b) & 1) != 0)
        label_cfabe8:
            operator delete(var_170)
        
    label_cfabfc:
        void var_e8
        Botan::BER_Decoder::start_cons(&var_e8, 0x10)
        (*(var_108 + 8))(&var_108, &var_180)
        (*(var_148 + 8))(&var_148, &var_180)
        void* x0_15 = Botan::BER_Decoder::end_cons()
        void* x0_16 = operator new(0x30)
        __builtin_strncpy(x0_16, "Invalid X509_DN, data follows RDN", 0x22)
        
        if (((*(**(x0_15 + 0x28) + 0x18))() & 1) == 0 || *(x0_15 + 8) != 0xff00)
            void** x0_31 = __cxa_allocate_exception(0x20)
            *x0_31 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_31[1])
            *x0_31 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_31, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if ((zx.d(v0) & 1) != 0)
            operator delete(x0_16)
        
        int64_t* var_150
        int64_t* x0_20 = var_150
        var_150 = nullptr
        
        if (x0_20 != 0)
            (*(*x0_20 + 0x38))()
        
        if (var_170 != 0)
            void* var_168_1 = var_170
            int64_t var_160
            Botan::deallocate_memory(var_170, var_160 - var_170, 1)
        
        Botan::X509_DN::add_attribute(arg1, &var_108)
        uint32_t x8_28 = zx.d(var_128.b)
        var_148 = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_28 & 1) != 0)
            operator delete(var_118_1)
        
        void* x0_24 = var_140
        
        if (x0_24 != 0)
            void* var_138_1 = x0_24
            operator delete(x0_24)
        
        void* x0_25 = var_100
        var_108 = _vtable_for_Botan::OID + 0x10
        
        if (x0_25 != 0)
            void* var_f8_1 = x0_25
            operator delete(x0_25)
    
    int64_t* var_b8
    int64_t* x0_26 = var_b8
    var_b8 = nullptr
    
    if (x0_26 != 0)
        (*(*x0_26 + 0x38))()
    
    void* var_d8
    
    if (var_d8 != 0)
        void* var_d0_1 = var_d8
        int64_t var_c8
        Botan::deallocate_memory(var_d8, var_c8 - var_d8, 1)

if (arg1 + 0x20 != &result_1)
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 0x20, 
        result_1)

int64_t var_80_1 = 0
int64_t* var_80

if (var_80 != 0)
    (*(*var_80 + 0x38))()

void* var_a0

if (var_a0 != 0)
    void* var_98_1 = var_a0
    int64_t var_90
    Botan::deallocate_memory(var_a0, var_90 - var_a0, 1)

uint8_t* result = result_1

if (result == 0)
    return result

uint8_t* result_2 = result
return operator delete(result)
