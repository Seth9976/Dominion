// 函数: _ZNK5Botan24Certificate_Store_In_SQL12find_crl_forERKNS_16X509_CertificateE
// 地址: 0xcf8fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = Botan::Certificate_Store_In_SQL::generate_crls()
void* var_80
void* x21 = var_80
void** var_78
int64_t* entry_x8

if (x21 == var_78)
label_cf9150:
    *entry_x8 = 0
    entry_x8[1] = 0
else
    while (true)
        void* __offset(vtable_for_Botan::X509_CRL, 0x10) var_108
        Botan::X509_Object::X509_Object(&var_108)
        var_108 = _vtable_for_Botan::X509_CRL + 0x10
        int64_t x9_1 = *(x21 + 0x78)
        int64_t* x8 = *(x21 + 0x80)
        
        if (x8 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(&x8[1]) + 1, &x8[1])
            while (i != 0)
        
        void* x0_1 = Botan::X509_CRL::data()
        void* result_1
        void* var_d8
        void* var_c0
        void* var_a8
        
        if (*(x0_1 + 0x88) != *(x0_1 + 0x90) && (
                Botan::operator==(Botan::X509_CRL::data(), Botan::X509_Certificate::data() + 0x58)
                & 1) != 0)
            Botan::X509_Object* x0_14 = operator new(0x88)
            Botan::X509_Object::X509_Object(x0_14)
            *x0_14 = _vtable_for_Botan::X509_CRL + 0x10
            *(x0_14 + 0x78) = x9_1
            *(x0_14 + 0x80) = x8
            
            if (x8 != 0)
                int32_t i_1
                
                do
                    i_1 = __stxr(__ldxr(&x8[1]) + 1, &x8[1])
                while (i_1 != 0)
            
            Botan::X509_Object* var_68 = x0_14
            int64_t* x0_15 = operator new(0x20)
            x0_15[2] = 0
            x0_15[3] = x0_14
            *x0_15 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::X509_CRL*, std::__ndk1::default_delete<Botan::X509_CRL>, std::__ndk1::allocator<Botan::X509_CRL> >
                + 0x10
            x0_15[1] = 0
            var_68 = nullptr
            sub_f2884c(&var_68, 0)
            *entry_x8 = x0_14
            entry_x8[1] = x0_15
            var_108 = _vtable_for_Botan::X509_CRL + 0x10
            
            if (x8 != 0)
                int64_t x9_9
                int32_t i_2
                
                do
                    x9_9 = __ldaxr(&x8[1])
                    i_2 = __stlxr(x9_9 - 1, &x8[1])
                while (i_2 != 0)
                
                if (x9_9 == 0)
                    (*(*x8 + 0x10))(x8)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            var_108 = _vtable_for_Botan::X509_Object + 0x10
            
            if (var_a8 != 0)
                void* var_a0_2 = var_a8
                operator delete(var_a8)
            
            if (var_c0 != 0)
                void* var_b8_2 = var_c0
                operator delete(var_c0)
            
            void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_100_2 =
                _vtable_for_Botan::AlgorithmIdentifier + 0x10
            
            if (var_d8 != 0)
                void* var_d0_2 = var_d8
                operator delete(var_d8)
            
            result = result_1
            void* __offset(vtable_for_Botan::OID, 0x10) var_f8_2 = _vtable_for_Botan::OID + 0x10
            
            if (result != 0)
                void* result_3 = result
                result = operator delete(result)
            
            break
        
        var_108 = _vtable_for_Botan::X509_CRL + 0x10
        int64_t x9_5
        
        if (x8 != 0)
            int32_t i_3
            
            do
                x9_5 = __ldaxr(&x8[1])
                i_3 = __stlxr(x9_5 - 1, &x8[1])
            while (i_3 != 0)
        
        void* var_a0_1
        
        if (x8 != 0 && x9_5 == 0)
            (*(*x8 + 0x10))(x8)
            std::__ndk1::__shared_weak_count::__release_weak()
            var_108 = _vtable_for_Botan::X509_Object + 0x10
            
            if (var_a8 != 0)
                var_a0_1 = var_a8
                operator delete(var_a8)
        else
            var_108 = _vtable_for_Botan::X509_Object + 0x10
            
            if (var_a8 != 0)
                var_a0_1 = var_a8
                operator delete(var_a8)
        
        if (var_c0 != 0)
            void* var_b8_1 = var_c0
            operator delete(var_c0)
        
        void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_100_1 =
            _vtable_for_Botan::AlgorithmIdentifier + 0x10
        
        if (var_d8 != 0)
            void* var_d0_1 = var_d8
            operator delete(var_d8)
        
        result = result_1
        void* __offset(vtable_for_Botan::OID, 0x10) var_f8_1 = _vtable_for_Botan::OID + 0x10
        
        if (result != 0)
            void* result_2 = result
            result = operator delete(result)
        
        x21 += 0x88
        
        if (x21 == var_78)
            goto label_cf9150

if (var_80 == 0)
    return result

void** x19_1 = var_78
void* x0_13

if (x19_1 == var_80)
    x0_13 = var_80
else
    do
        x19_1 -= 0x88
        void var_70
        sub_f28658(&var_70, x19_1)
    while (var_80 != x19_1)
    
    x0_13 = var_80

void* var_78_1 = var_80
return operator delete(x0_13)
