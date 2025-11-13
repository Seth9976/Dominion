// 函数: _ZN5Botan14Cert_Extension28Authority_Information_Access12decode_innerERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xeb541c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_d0
Botan::BER_Decoder::BER_Decoder(&var_d0)
Botan::BER_Decoder::start_cons(&var_d0, 0x10)
int64_t* var_a0_1 = nullptr
int64_t* var_a0

if (var_a0 != 0)
    (*(*var_a0 + 0x38))()

void* var_c0
int64_t var_b0

if (var_c0 != 0)
    void* var_b8_1 = var_c0
    Botan::deallocate_memory(var_c0, var_b0 - var_c0, 1)

int128_t v0 = data_71bb40
char var_130
char* x20 = &var_130 | 1
int32_t var_90
int64_t* var_70

while (((*(*var_70 + 0x18))() & (var_90 == 0xff00 ? 1 : 0) & 1) == 0)
    void* __offset(vtable_for_Botan::OID, 0x10) var_f0 = _vtable_for_Botan::OID + 0x10
    int32_t* var_e8
    __builtin_memset(&var_e8, 0, 0x18)
    void var_98
    Botan::BER_Decoder::start_cons(&var_98, 0x10)
    (*(var_f0 + 8))(&var_f0, &var_d0)
    var_130 = 0x12
    __builtin_strncpy(x20, "PKIX.OCSP", 9)
    char var_126_1 = 0
    Botan::OID::from_string(&var_130)
    int32_t* x9_1 = var_e8
    void* __offset(vtable_for_Botan::OID, 0x10) var_110_1
    int32_t* var_108
    int32_t* var_100
    int64_t var_e0_1
    int32_t x21_1
    
    if (var_e0_1 - x9_1 != var_100 - var_108)
        x21_1 = 0
    label_eb55a8:
        var_110_1 = _vtable_for_Botan::OID + 0x10
        
        if (var_108 != 0)
            var_100 = var_108
            operator delete(var_108)
    else
        if (x9_1 != var_e0_1)
            int32_t* x10_3 = var_108
            
            do
                int32_t x11_2 = *x9_1
                int32_t x12_1 = *x10_3
                x21_1 = x11_2 == x12_1 ? 1 : 0
                
                if (x11_2 != x12_1)
                    break
                
                x9_1 = &x9_1[1]
                x10_3 = &x10_3[1]
            while (var_e0_1 != x9_1)
            
            goto label_eb55a8
        
        x21_1 = 1
        var_110_1 = _vtable_for_Botan::OID + 0x10
        
        if (var_108 != 0)
            var_100 = var_108
            operator delete(var_108)
    
    void* var_120
    
    if ((zx.d(var_130) & 1) != 0)
        operator delete(var_120)
    
    if (x21_1 == 0)
        goto label_eb5668
    
    Botan::BER_Decoder::get_next_object()
    
    if (var_110_1.d != 6 || var_110_1:4.d != 0x80)
    label_eb564c:
        
        if (var_108 == 0)
            goto label_eb5668
        
        var_100 = var_108
        int64_t var_f8
        Botan::deallocate_memory(var_108, var_f8 - var_108, 1)
    label_eb5668:
        void* x0_13
        int128_t v2_1
        x0_13, v2_1 = operator new(0x30)
        var_120 = x0_13
        __builtin_strncpy(x0_13, "PKIX.CertificateAuthorityIssuers", 0x21)
        var_130.o = v0
        Botan::OID::from_string(&var_130)
        int32_t* x9_2 = var_e8
        void* __offset(vtable_for_Botan::OID, 0x10) var_110_2
        int32_t x21_3
        
        if (var_e0_1 - x9_2 != var_100 - var_108)
            x21_3 = 0
        label_eb56e4:
            var_110_2 = _vtable_for_Botan::OID + 0x10
            
            if (var_108 != 0)
                var_100 = var_108
                operator delete(var_108)
        else
            if (x9_2 != var_e0_1)
                int32_t* x10_6 = var_108
                
                do
                    int32_t x11_4 = *x9_2
                    int32_t x12_2 = *x10_6
                    x21_3 = x11_4 == x12_2 ? 1 : 0
                    
                    if (x11_4 != x12_2)
                        break
                    
                    x9_2 = &x9_2[1]
                    x10_6 = &x10_6[1]
                while (var_e0_1 != x9_2)
                
                goto label_eb56e4
            
            x21_3 = 1
            var_110_2 = _vtable_for_Botan::OID + 0x10
            
            if (var_108 != 0)
                var_100 = var_108
                operator delete(var_108)
        
        if ((zx.d(var_130) & 1) != 0)
            operator delete(var_120)
        
        if (x21_3 == 0)
            goto label_eb5880
        
        Botan::BER_Decoder::get_next_object()
        
        if (var_110_2.d != 6 || var_110_2:4.d != 0x80)
        label_eb5868:
            
            if (var_108 == 0)
                goto label_eb5880
            
            var_100 = var_108
            Botan::deallocate_memory(var_108, var_f8 - var_108, 1)
        label_eb5880:
            int64_t* x0_26 = var_a0_1
            var_a0_1 = nullptr
            
            if (x0_26 != 0)
                (*(*x0_26 + 0x38))()
            
            if (var_c0 != 0)
                void* var_b8_2 = var_c0
                Botan::deallocate_memory(var_c0, var_b0 - var_c0, 1)
            
            int32_t* x0_28 = var_e8
            var_f0 = _vtable_for_Botan::OID + 0x10
            
            if (x0_28 == 0)
                continue
            else
                int32_t* var_e0_2 = x0_28
                operator delete(x0_28)
                continue
        else
            void* x21_4 = var_100 - var_108
            
            if (x21_4 u< -0x10)
                int128_t* x8_28
                char* x23_2
                
                if (x21_4 u< 0x17)
                    x23_2 = x20
                    var_130 = (x21_4.d << 1).b
                    
                    if (x21_4 != 0)
                        goto label_eb5828
                    
                    *(x23_2 + x21_4) = 0
                    x8_28 = *(arg1 + 0x28)
                    
                    if (x8_28 u>= *(arg1 + 0x30))
                        goto label_eb5844
                    
                    goto label_eb5768
                
                uint64_t x24_2 = (x21_4 + 0x10) & 0xfffffffffffffff0
                void* x0_21 = operator new(x24_2)
                x23_2 = x0_21
                void* var_128_2 = x21_4
                var_120 = x0_21
                var_130.q = x24_2 | 1
            label_eb5828:
                memcpy(x23_2, var_108, x21_4)
                *(x23_2 + x21_4) = 0
                x8_28 = *(arg1 + 0x28)
                
                if (x8_28 u< *(arg1 + 0x30))
                label_eb5768:
                    x8_28[1].q = var_120
                    *x8_28 = var_130.o
                    *(arg1 + 0x28) = x8_28 + 0x18
                else
                label_eb5844:
                    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                        arg1 + 0x20)
                    
                    if ((zx.d(var_130) & 1) != 0)
                        operator delete(var_120)
                
                goto label_eb5868
            
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        size_t x22_1 = var_100 - var_108
        
        if (x22_1 u< -0x10)
            char* x23_1
            
            if (x22_1 u>= 0x17)
                uint64_t x24_1 = (x22_1 + 0x10) & 0xfffffffffffffff0
                void* x0_18 = operator new(x24_1)
                x23_1 = x0_18
                size_t var_128_1 = x22_1
                var_120 = x0_18
                var_130.q = x24_1 | 1
            label_eb57e4:
                memcpy(x23_1, var_108, x22_1)
                x23_1[x22_1] = 0
                
                if ((zx.d(*(arg1 + 8)) & 1) != 0)
                    operator delete(*(arg1 + 0x18))
            else
                x23_1 = x20
                var_130 = (x22_1.d << 1).b
                
                if (x22_1 != 0)
                    goto label_eb57e4
                
                x23_1[x22_1] = 0
                
                if ((zx.d(*(arg1 + 8)) & 1) != 0)
                    operator delete(*(arg1 + 0x18))
            int128_t v0_1 = var_130.o
            *(arg1 + 0x18) = var_120
            *(arg1 + 8) = v0_1
            goto label_eb564c
    
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

int64_t var_68_1 = 0
int64_t* var_68

if (var_68 != 0)
    (*(*var_68 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_78
return Botan::deallocate_memory(result, var_78 - result, 1)
