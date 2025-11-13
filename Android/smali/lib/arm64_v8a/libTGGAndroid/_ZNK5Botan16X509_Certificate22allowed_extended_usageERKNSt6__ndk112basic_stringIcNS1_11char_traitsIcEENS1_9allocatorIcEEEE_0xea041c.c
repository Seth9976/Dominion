// 函数: _ZNK5Botan16X509_Certificate22allowed_extended_usageERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xea041c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::OID::from_string(entry_x1)
void* x0_1 = Botan::X509_Certificate::data()
void* x9 = *(x0_1 + 0x250)
void* x8 = *(x0_1 + 0x258)
int32_t* x0_2
int32_t __saved_x0
int32_t* var_28

if (x9 == x8)
    x0_2 = var_28
    __saved_x0 = 1
else
    x0_2 = var_28
    
    while (true)
        int32_t* x12_1 = *(x9 + 8)
        int64_t x11_1 = *(x9 + 0x10)
        int64_t var_20
        
        if (x11_1 - x12_1 == var_20 - x0_2)
            if (x12_1 != x11_1)
                int32_t* x13_2 = x0_2
                
                do
                    if (*x12_1 != *x13_2)
                        goto label_ea0458
                    
                    x12_1 = &x12_1[1]
                    x13_2 = &x13_2[1]
                while (x11_1 != x12_1)
            
            break
        
    label_ea0458:
        x9 += 0x20
        
        if (x9 == x8)
            x9 = x8
            break
    
    __saved_x0 = x9 != x8 ? 1 : 0
void* __offset(vtable_for_Botan::OID, 0x10) var_30 = _vtable_for_Botan::OID + 0x10

if (x0_2 != 0)
    int32_t* var_20_1 = x0_2
    operator delete(x0_2)

return zx.q(__saved_x0)
