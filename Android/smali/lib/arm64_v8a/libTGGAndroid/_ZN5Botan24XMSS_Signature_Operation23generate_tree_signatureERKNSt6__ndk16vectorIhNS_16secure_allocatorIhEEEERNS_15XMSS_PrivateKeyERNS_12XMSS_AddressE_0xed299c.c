// 函数: _ZN5Botan24XMSS_Signature_Operation23generate_tree_signatureERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERNS_15XMSS_PrivateKeyERNS_12XMSS_AddressE
// 地址: 0xed299c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::XMSS_Signature_Operation::build_auth_path(arg1, arg3)
int64_t* entry_x3
*(*entry_x3 + 0xf) = 0
void* x8_1 = *entry_x3
size_t x2_1 = entry_x3[1] - (x8_1 + 0x10)

if (x2_1 s>= 1)
    memset(x8_1 + 0x10, 0, x2_1)
    x8_1 = *entry_x3

void* var_60
int64_t* var_58
void* var_48
int64_t* var_40

if (zx.d(*(x8_1 + 0xf)) != 0)
    int64_t* x0_7 = Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
        "set_ots_address() requires XMSS_Address::Type::OTS_Hash_Address.", "set_ots_address", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1b94)
    void* x20_3 = var_60
    
    if (x20_3 != 0)
        int64_t* x8_7 = var_58
        void* x0_8 = x20_3
        
        if (x8_7 != x20_3)
            int64_t* x21_1 = x8_7
            
            do
                x21_1 = &x21_1[-3]
                void* x0_9 = *x21_1
                
                if (x0_9 != 0)
                    int64_t x9_5 = x8_7[-1]
                    x8_7[-2] = x0_9
                    Botan::deallocate_memory(x0_9, x9_5 - x0_9, 1)
                
                x8_7 = x21_1
            while (x20_3 != x21_1)
            
            x0_8 = var_60
        
        void* var_58_2 = x20_3
        operator delete(x0_8)
    
    if (var_48 != 0)
        int64_t* x8_8 = var_40
        void* x0_10 = var_48
        
        if (x8_8 != var_48)
            int64_t* x21_2 = x8_8
            
            do
                x21_2 = &x21_2[-3]
                void* x0_11 = *x21_2
                
                if (x0_11 != 0)
                    int64_t x9_6 = x8_8[-1]
                    x8_8[-2] = x0_11
                    Botan::deallocate_memory(x0_11, x9_6 - x0_11, 1)
                
                x8_8 = x21_2
            while (var_48 != x21_2)
            
            x0_10 = var_48
        
        void* var_40_2 = var_48
        operator delete(x0_10)
    
    sub_1101e04(x0_7)
    noreturn

int32_t x9_2 = *(arg1 + 0x368)
*(x8_1 + 0x10) = (x9_2 u>> 0x18).b
*(*entry_x3 + 0x11) = (x9_2 u>> 0x10).b
*(*entry_x3 + 0x12) = (x9_2 u>> 8).b
*(*entry_x3 + 0x13) = x9_2.b
Botan::XMSS_WOTS_PrivateKey::sign(arg3 + 8, arg2, entry_x3)
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >
    * entry_x8
int64_t result = Botan::XMSS_WOTS_PublicKey::TreeSignature::TreeSignature(entry_x8, &var_60)
void* x19_1 = var_60

if (x19_1 != 0)
    int64_t* x8_5 = var_58
    void* x0_4
    
    if (x8_5 == x19_1)
        x0_4 = x19_1
    else
        int64_t* x20_1 = x8_5
        
        do
            x20_1 = &x20_1[-3]
            void* x0_3 = *x20_1
            
            if (x0_3 != 0)
                int64_t x9_3 = x8_5[-1]
                x8_5[-2] = x0_3
                Botan::deallocate_memory(x0_3, x9_3 - x0_3, 1)
            
            x8_5 = x20_1
        while (x19_1 != x20_1)
        
        x0_4 = var_60
    
    void* var_58_1 = x19_1
    result = operator delete(x0_4)

if (var_48 == 0)
    return result

int64_t* x8_6 = var_40
void* x0_6

if (x8_6 == var_48)
    x0_6 = var_48
else
    int64_t* x20_2 = x8_6
    
    do
        x20_2 = &x20_2[-3]
        void* x0_5 = *x20_2
        
        if (x0_5 != 0)
            int64_t x9_4 = x8_6[-1]
            x8_6[-2] = x0_5
            Botan::deallocate_memory(x0_5, x9_4 - x0_5, 1)
        
        x8_6 = x20_2
    while (var_48 != x20_2)
    
    x0_6 = var_48

void* var_40_1 = var_48
return operator delete(x0_6)
