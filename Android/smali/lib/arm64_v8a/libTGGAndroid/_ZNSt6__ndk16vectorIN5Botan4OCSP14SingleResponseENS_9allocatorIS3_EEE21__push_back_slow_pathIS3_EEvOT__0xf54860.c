// 函数: _ZNSt6__ndk16vectorIN5Botan4OCSP14SingleResponseENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_
// 地址: 0xf54860
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x12 = *arg1
int64_t x24 = *(arg1 + 8)
int64_t x20 = x24 - x12
int64_t x22 = x20 s>> 8

if ((x22 + 1) u>> 0x38 != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t var_68_1 = x12
    int64_t x9_2 = *(arg1 + 0x10) - x12
    int64_t x11_1 = x9_2 s>> 7
    int64_t x8_1
    
    if (x11_1 u< x22 + 1)
        x8_1 = x22 + 1
    else
        x8_1 = x11_1
    
    int64_t x28_1
    
    if (0x7fffffffffffff u> x9_2 s>> 8)
        x28_1 = x8_1
    else
        x28_1 = 0xffffffffffffff
    
    int64_t result
    int128_t v0
    int128_t v1
    
    if (x28_1 == 0)
        result = 0
    label_f54900:
        void** x26 = result + (x22 << 8)
        x26[5] = 0
        x26[6] = 0
        *x26 = _vtable_for_Botan::OCSP::SingleResponse + 0x10
        x26[1] = _vtable_for_Botan::OCSP::CertID + 0x10
        x26[2] = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        x26[3] = _vtable_for_Botan::OID + 0x10
        int64_t x28_2 = result + (x28_1 << 8)
        void* entry_x1
        *(x26 + 0x20) = *(entry_x1 + 0x20)
        x26[6] = *(entry_x1 + 0x30)
        __builtin_memset(entry_x1 + 0x20, 0, 0x68)
        x26[8] = 0
        x26[9] = 0
        *(x26 + 0x38) = *(entry_x1 + 0x38)
        x26[9] = *(entry_x1 + 0x48)
        x26[0xb] = 0
        x26[0xc] = 0
        *(x26 + 0x50) = *(entry_x1 + 0x50)
        x26[0xc] = *(entry_x1 + 0x60)
        x26[0xe] = 0
        x26[0xf] = 0
        *(x26 + 0x68) = *(entry_x1 + 0x68)
        x26[0xf] = *(entry_x1 + 0x78)
        x26[0x11] = 0
        x26[0x12] = 0
        v1 = *(x26 + 0x88)
        *(x26 + 0x80) = *(entry_x1 + 0x80)
        int64_t x11_2 = *(entry_x1 + 0x90)
        int64_t x8_8 = *(entry_x1 + 0x98)
        *(entry_x1 + 0x88) = v1
        x26[0x12] = x11_2
        x26[0x13] = x8_8
        int32_t x8_9 = *(entry_x1 + 0xa0)
        *(entry_x1 + 0x98) = -1
        x26[0x14].d = x8_9
        int64_t x8_10 = *(entry_x1 + 0xa8)
        *(entry_x1 + 0xa0) = 1
        x26[0x15] = x8_10
        x26[0x16] = _vtable_for_Botan::ASN1_Time + 0x10
        v0 = *(entry_x1 + 0xc4)
        v1 = *(entry_x1 + 0xb8)
        x26[0x1b] = _vtable_for_Botan::ASN1_Time + 0x10
        *(x26 + 0xc4) = v0
        *(x26 + 0xb8) = v1
        v1 = *(entry_x1 + 0xe0)
        *(x26 + 0xec) = *(entry_x1 + 0xec)
        *(x26 + 0xe0) = v1
        void* x21_2 = *arg1
        void* x23 = *(arg1 + 8)
        
        if (x23 == x21_2)
            *arg1 = x26
            *(arg1 + 8) = &x26[0x20]
            *(arg1 + 0x10) = x28_2
            
            if (x21_2 == 0)
                return result
        else
            int64_t i = 0
            int64_t var_78_1 = x20
            int64_t result_1 = result
            int64_t var_80_1 = x24
            
            do
                void* x24_1 = x26 + i
                void* x20_1 = x23 + i
                *(x24_1 - 0x100) = _vtable_for_Botan::OCSP::SingleResponse + 0x10
                int128_t v0_1
                int128_t v1_1
                result, v0_1, v1_1 = Botan::OCSP::CertID::CertID(x24_1 - 0xf8)
                i -= 0x100
                *(x24_1 - 0x58) = *(x20_1 - 0x58)
                *(x24_1 - 0x50) = _vtable_for_Botan::ASN1_Time + 0x10
                v0_1 = *(x20_1 - 0x3c)
                v1_1 = *(x20_1 - 0x48)
                *(x24_1 - 0x28) = _vtable_for_Botan::ASN1_Time + 0x10
                *(x24_1 - 0x3c) = v0_1
                *(x24_1 - 0x48) = v1_1
                v1_1 = *(x20_1 - 0x20)
                *(x24_1 - 0x14) = *(x20_1 - 0x14)
                *(x24_1 - 0x20) = v1_1
            while (x21_2 - x23 != i)
            
            x21_2 = *arg1
            void** x20_2 = *(arg1 + 8)
            *arg1 = x26 + i
            *(arg1 + 8) = &x26[0x20]
            *(arg1 + 0x10) = x28_2
            
            if (x20_2 != x21_2)
                do
                    x20_2 = &x20_2[-0x20]
                    *x20_2 = _vtable_for_Botan::OCSP::SingleResponse + 0x10
                    result = Botan::OCSP::CertID::~CertID()
                while (x21_2 != x20_2)
            
            if (x21_2 == 0)
                return result
        
        return operator delete(x21_2) __tailcall
    
    if (x28_1 u>> 0x38 == 0)
        result, v0, v1 = operator new(x28_1 << 8)
        goto label_f54900

sub_ef2a0c()
noreturn
