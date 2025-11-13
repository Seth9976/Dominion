// 函数: _ZN5Botan27Certificate_Store_In_Memory7add_crlENSt6__ndk110shared_ptrIKNS_8X509_CRLEEE
// 地址: 0xe96bac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
*entry_x1
void* x20 = arg1
Botan::X509_CRL::data()
void* __offset(vtable_for_Botan::X509_DN, 0x10) var_78
Botan::X509_DN::X509_DN(&var_78)
int64_t* x22 = *(x20 + 0x20)
int64_t x23 = *(x20 + 0x28)

if (x22 == x23)
label_e96c1c:
    
    if (x22 == *(x20 + 0x30))
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_CRL const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_CRL const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_CRL const> const&>(
            x20 + 0x20)
    else
        *x22 = *entry_x1
        int64_t x8_3 = entry_x1[1]
        x22[1] = x8_3
        
        if (x8_3 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
            while (i != 0)
        
        *(x20 + 0x28) = &x22[2]
else
    while (true)
        *x22
        
        if ((Botan::operator==(Botan::X509_CRL::data(), &var_78) & 1) != 0)
            *x22
            void* x0_7 = Botan::X509_CRL::data()
            *entry_x1
            Botan::X509_CRL::data()
            
            if (Botan::ASN1_Time::cmp(x0_7 + 0x38) s<= 0)
                int64_t x9_3 = *entry_x1
                int64_t x8_7 = entry_x1[1]
                
                if (x8_7 != 0)
                    int32_t i_1
                    
                    do
                        i_1 = __stxr(__ldxr(x8_7 + 8) + 1, x8_7 + 8)
                    while (i_1 != 0)
                
                int64_t* x19_1 = x22[1]
                *x22 = x9_3
                x22[1] = x8_7
                
                if (x19_1 != 0)
                    int64_t x9_4
                    int32_t i_2
                    
                    do
                        x9_4 = __ldaxr(&x19_1[1])
                        i_2 = __stlxr(x9_4 - 1, &x19_1[1])
                    while (i_2 != 0)
                    
                    if (x9_4 == 0)
                        (*(*x19_1 + 0x10))(x19_1)
                        std::__ndk1::__shared_weak_count::__release_weak()
            
            break
        
        x22 = &x22[2]
        
        if (x23 == x22)
            x22 = *(x20 + 0x28)
            goto label_e96c1c

void* result_1
void* result = result_1
var_78 = _vtable_for_Botan::X509_DN + 0x10

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

void* var_70

if (var_70 == 0)
    return result

void* var_68
void* x22_1 = var_68
void* x0_18

if (x22_1 == var_70)
    x0_18 = var_70
else
    bool cond:0_1
    
    do
        uint32_t x8_12 = zx.d(*(x22_1 - 0x20))
        *(x22_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_12 & 1) != 0)
            operator delete(*(x22_1 - 0x10))
        
        void* x0_16 = *(x22_1 - 0x38)
        
        if (x0_16 != 0)
            *(x22_1 - 0x30) = x0_16
            operator delete(x0_16)
        
        void* x0_17 = *(x22_1 - 0x58)
        *(x22_1 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_17 != 0)
            *(x22_1 - 0x50) = x0_17
            operator delete(x0_17)
        
        cond:0_1 = var_70 == x22_1 - 0x60
        x22_1 -= 0x60
    while (not(cond:0_1))
    x0_18 = var_70

void* var_68_1 = var_70
return operator delete(x0_18)
