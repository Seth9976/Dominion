// 函数: _ZN5Botan4OCSP8ResponseC1EPKhm
// 地址: 0xe9dd78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(&arg1[8], 0, 0x18)
uint64_t entry_x2

if (entry_x2 != 0)
    if ((entry_x2 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x0_1 = operator new(entry_x2)
    int64_t x23_1 = x0_1 + entry_x2
    *(arg1 + 8) = x0_1
    *(arg1 + 0x10) = x0_1
    *(arg1 + 0x18) = x23_1
    memcpy(x0_1, arg2, entry_x2)
    *(arg1 + 0x10) = x23_1

*(arg1 + 0x20) = _vtable_for_Botan::ASN1_Time + 0x10
*(arg1 + 0x40) = 0xff00
__builtin_memset(&arg1[0x28], 0, 0x18)
*(arg1 + 0x48) = _vtable_for_Botan::X509_DN + 0x10
*(arg1 + 0x50) = zx.o(0)
*(arg1 + 0x80) = zx.o(0)
void* var_280 = &arg1[0x50]
*(arg1 + 0xb0) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* var_260 = &arg1[0x98]
*(arg1 + 0xb8) = _vtable_for_Botan::OID + 0x10
__builtin_memset(&arg1[0x60], 0, 0x20)
__builtin_memset(&arg1[0x90], 0, 0x20)
*(arg1 + 0xf0) = zx.o(0)
__builtin_memset(&arg1[0xc0], 0, 0x30)
__builtin_memset(&arg1[0x100], 0, 0x38)
*(arg1 + 0x138) = 0x1198
void* __offset(vtable_for_Botan::OID, 0x10) var_120
Botan::BER_Decoder::BER_Decoder(&var_120)
Botan::BER_Decoder::start_cons(&var_120, 0x10)
int64_t* var_f0_1 = nullptr
int64_t* var_f0

if (var_f0 != 0)
    (*(*var_f0 + 0x38))()

void* var_110
void* var_108
void* var_100

if (var_110 != 0)
    var_108 = var_110
    Botan::deallocate_memory(var_110, var_100 - var_110, 1)

int64_t var_160 = 0
uint64_t var_158
Botan::BER_Decoder::decode(&var_158, &var_160, 0xa)
int32_t x8_8 = var_160.d
*arg1 = x8_8

if (x8_8 == 0)
    int32_t var_150
    int64_t* var_130
    
    if (((*(*var_130 + 0x18))() & 1) == 0 || var_150 != 0xff00)
        Botan::BER_Decoder::start_cons(&var_158, 0)
        Botan::BER_Decoder::start_cons(&var_120, 0x10)
        int64_t* var_f0_2 = nullptr
        
        if (var_f0_1 != 0)
            (*(*var_f0_1 + 0x38))()
        
        if (var_110 != 0)
            var_108 = var_110
            Botan::deallocate_memory(var_110, var_100 - var_110, 1)
        
        char var_98
        __builtin_strncpy(&var_98, "(1.3.6.1.5.5.7.48.1.1", 0x16)
        Botan::OID::OID(&var_120)
        void* x0_14
        int128_t v0_1
        x0_14, v0_1 = operator new(0x30)
        int128_t var_1d0 = data_71b5b0
        __builtin_strncpy(x0_14, "Unknown response type in OCSP response", 0x27)
        void var_198
        Botan::BER_Decoder::decode_and_check<Botan::OID>(&var_198, &var_120)
        
        if ((zx.d(var_1d0.b) & 1) != 0)
            operator delete(x0_14)
        
        var_120 = _vtable_for_Botan::OID + 0x10
        void* var_118
        
        if (var_118 != 0)
            var_110 = var_118
            operator delete(var_118)
        
        int128_t var_97
        
        if ((zx.d(var_98) & 1) != 0)
            operator delete(var_97:0xf.q)
        
        __builtin_memset(&var_98, 0, 0x18)
        Botan::BER_Decoder::decode(&var_198, &var_98, 4, 4)
        Botan::BER_Decoder::BER_Decoder(&var_120)
        Botan::BER_Decoder::start_cons(&var_120, 0x10)
        int64_t* var_f0_3 = nullptr
        
        if (var_f0_2 != 0)
            (*(*var_f0_2 + 0x38))()
        
        if (var_110 != 0)
            var_108 = var_110
            Botan::deallocate_memory(var_110, var_100 - var_110, 1)
        
        void* x0_24 = var_98.q
        
        if (x0_24 != 0)
            var_97:7.q = x0_24
            operator delete(x0_24)
        
        Botan::BER_Decoder::start_cons(&var_1d0, 0x10)
        Botan::BER_Decoder::raw_bytes<std::__ndk1::allocator<uint8_t> >(&var_120)
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_27 =
            Botan::BER_Decoder::end_cons()
        (*(*(arg1 + 0xb0) + 8))(&arg1[0xb0], x0_27)
        Botan::BER_Decoder::decode(x0_27, &arg1[0xf0], 3, 3)
        void* var_f0_4 = nullptr
        
        if (var_f0_3 != 0)
            (*(*var_f0_3 + 0x38))()
        
        if (var_110 != 0)
            var_108 = var_110
            Botan::deallocate_memory(var_110, var_100 - var_110, 1)
        
        Botan::BER_Decoder::get_next_object()
        int32_t var_218
        int32_t var_214
        uint64_t var_210
        int64_t var_78
        int64_t* var_68
        
        if (var_218 != 0 || var_214 != 0xa0)
            Botan::BER_Decoder::push_back(&var_1d0)
        else
            Botan::BER_Decoder::BER_Decoder(&var_98, var_210)
            int64_t* var_70
            
            while (((*(*var_70 + 0x18))() & (var_97:7.d == 0xff00 ? 1 : 0) & 1) == 0)
                Botan::BER_Decoder::get_next_object()
                uint64_t var_248
                Botan::X509_Certificate::X509_Certificate(&var_120, var_248)
                void** x28_2 = *(arg1 + 0x110)
                int64_t* var_a0
                
                if (x28_2 u>= *(arg1 + 0x118))
                    std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::__push_back_slow_path<Botan::X509_Certificate>(
                        &arg1[0x108])
                else
                    Botan::X509_Object::X509_Object(x28_2)
                    *x28_2 = _vtable_for_Botan::X509_Certificate + 0x10
                    int64_t var_a8
                    x28_2[0xf] = var_a8
                    x28_2[0x10] = var_a0
                    
                    if (var_a0 != 0)
                        int32_t i
                        
                        do
                            i = __stxr(__ldxr(&var_a0[1]) + 1, &var_a0[1])
                        while (i != 0)
                    
                    *(arg1 + 0x110) = &x28_2[0x11]
                
                var_120 = _vtable_for_Botan::X509_Certificate + 0x10
                
                if (var_a0 != 0)
                    int64_t x9_4
                    int32_t i_1
                    
                    do
                        x9_4 = __ldaxr(&var_a0[1])
                        i_1 = __stlxr(x9_4 - 1, &var_a0[1])
                    while (i_1 != 0)
                    
                    if (x9_4 == 0)
                        (*(*var_a0 + 0x10))(var_a0)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                var_120 = _vtable_for_Botan::X509_Object + 0x10
                void* var_c0
                
                if (var_c0 != 0)
                    void* var_b8_1 = var_c0
                    operator delete(var_c0)
                
                void* var_d8
                
                if (var_d8 != 0)
                    void* var_d0_1 = var_d8
                    operator delete(var_d8)
                
                void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_118_1 =
                    _vtable_for_Botan::AlgorithmIdentifier + 0x10
                
                if (var_f0_4 != 0)
                    void* var_e8_1 = var_f0_4
                    operator delete(var_f0_4)
                
                void* __offset(vtable_for_Botan::OID, 0x10) var_110_1 =
                    _vtable_for_Botan::OID + 0x10
                
                if (var_108 != 0)
                    var_100 = var_108
                    operator delete(var_108)
                
                if (var_248 != 0)
                    uint64_t var_240 = var_248
                    int64_t var_238
                    Botan::deallocate_memory(var_248, var_238 - var_248, 1)
            
            if (var_68 != 0)
                (*(*var_68 + 0x38))()
            
            void* x0_74 = var_97:0xf.q
            
            if (x0_74 != 0)
                Botan::deallocate_memory(x0_74, var_78 - x0_74, 1)
        
        uint64_t x0_46 = var_210
        uint64_t var_208
        
        if (x0_46 != 0)
            var_208 = x0_46
            int64_t var_200
            Botan::deallocate_memory(x0_46, var_200 - x0_46, 1)
        
        int64_t var_1d8 = 0
        int64_t var_f8 = 0
        int64_t var_f0_5 = 0
        var_120 = _vtable_for_Botan::Extensions + 0x10
        void* var_118_2
        __builtin_memset(&var_118_2, 0, 0x18)
        var_100 = &var_f8
        Botan::BER_Decoder::BER_Decoder(&var_98)
        int64_t var_1e0_1 = 0
        Botan::X509_DN* x0_49 =
            Botan::BER_Decoder::decode_optional<uint64_t>(&var_98, &var_1d8, 0, 0xa0)
        __builtin_memset(&var_210, 0, 0x30)
        var_218.q = _vtable_for_Botan::X509_DN + 0x10
        std::__ndk1::vector<Botan::OCSP::SingleResponse, std::__ndk1::allocator<Botan::OCSP::SingleResponse> >
            * x0_51 = Botan::BER_Decoder::decode_optional_string<std::__ndk1::allocator<uint8_t> >(
            Botan::BER_Decoder::decode_optional<Botan::X509_DN>(x0_49, &arg1[0x48], 1, 0xa0), 
            &arg1[0x80], 4, 2)
        (*(*(arg1 + 0x20) + 8))(&arg1[0x20], x0_51)
        Botan::Extensions* x0_54 =
            Botan::BER_Decoder::decode_list<Botan::OCSP::SingleResponse>(x0_51, &arg1[0x120], 0x10)
        int64_t var_238_1 = 0
        int64_t var_228 = 0
        int64_t var_220_1 = 0
        void* __offset(vtable_for_Botan::Extensions, 0x10) var_250_1 =
            _vtable_for_Botan::Extensions + 0x10
        int64_t* var_230 = &var_228
        Botan::BER_Decoder::decode_optional<Botan::Extensions>(x0_54, &var_120, 1, 0xa0)
        void* __offset(vtable_for_Botan::Extensions, 0x10) var_250_2 =
            _vtable_for_Botan::Extensions + 0x10
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
            &var_230)
        int128_t var_200_1
        void* x0_57 = var_200_1:8.q
        var_218.q = _vtable_for_Botan::X509_DN + 0x10
        
        if (x0_57 != 0)
            int128_t var_1f0
            var_1f0.q = x0_57
            operator delete(x0_57)
        
        uint64_t x21_4 = var_210
        
        if (x21_4 != 0)
            uint64_t x24_2 = var_208
            uint64_t x0_61
            
            if (x24_2 == x21_4)
                x0_61 = x21_4
            else
                bool cond:1_1
                
                do
                    uint32_t x8_51 = zx.d(*(x24_2 - 0x20))
                    *(x24_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                    
                    if ((x8_51 & 1) != 0)
                        operator delete(*(x24_2 - 0x10))
                    
                    void* x0_59 = *(x24_2 - 0x38)
                    
                    if (x0_59 != 0)
                        *(x24_2 - 0x30) = x0_59
                        operator delete(x0_59)
                    
                    void* x0_60 = *(x24_2 - 0x58)
                    *(x24_2 - 0x60) = _vtable_for_Botan::OID + 0x10
                    
                    if (x0_60 != 0)
                        *(x24_2 - 0x50) = x0_60
                        operator delete(x0_60)
                    
                    cond:1_1 = x21_4 == x24_2 - 0x60
                    x24_2 -= 0x60
                while (not(cond:1_1))
                x0_61 = var_210
            
            uint64_t var_208_1 = x21_4
            operator delete(x0_61)
        
        int64_t var_68_1 = 0
        
        if (var_68 != 0)
            (*(*var_68 + 0x38))()
        
        void* x0_63 = var_97:0xf.q
        
        if (x0_63 != 0)
            void* var_80_1 = x0_63
            Botan::deallocate_memory(x0_63, var_78 - x0_63, 1)
        
        var_120 = _vtable_for_Botan::Extensions + 0x10
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
            &var_100)
        void* x21_5 = var_118_2
        
        if (x21_5 != 0)
            void** var_110_2
            void** x8_56 = var_110_2
            void* x0_66
            
            if (x8_56 == x21_5)
                x0_66 = x21_5
            else
                void** x23_5 = x8_56
                
                do
                    x23_5 = &x23_5[-4]
                    *x23_5 = _vtable_for_Botan::OID + 0x10
                    void* x0_65 = x23_5[1]
                    
                    if (x0_65 != 0)
                        x8_56[-2] = x0_65
                        operator delete(x0_65)
                    
                    x8_56 = x23_5
                while (x21_5 != x23_5)
                
                x0_66 = var_118_2
            
            void* var_110_3 = x21_5
            operator delete(x0_66)
        
        int64_t var_1a0_1 = 0
        int64_t* var_1a0
        
        if (var_1a0 != 0)
            (*(*var_1a0 + 0x38))()
        
        if (x0_14 != 0)
            void* var_1b8_1 = x0_14
            int64_t var_1b0
            Botan::deallocate_memory(x0_14, var_1b0 - x0_14, 1)
        
        int64_t var_168_1 = 0
        int64_t* var_168
        
        if (var_168 != 0)
            (*(*var_168 + 0x38))()
        
        void* var_188
        
        if (var_188 != 0)
            void* var_180_1 = var_188
            int64_t var_178
            Botan::deallocate_memory(var_188, var_178 - var_188, 1)
    
    Botan::BER_Decoder::end_cons()

int64_t var_128_1 = 0
int64_t* var_128

if (var_128 != 0)
    (*(*var_128 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_138
return Botan::deallocate_memory(result, var_138 - result, 1)
