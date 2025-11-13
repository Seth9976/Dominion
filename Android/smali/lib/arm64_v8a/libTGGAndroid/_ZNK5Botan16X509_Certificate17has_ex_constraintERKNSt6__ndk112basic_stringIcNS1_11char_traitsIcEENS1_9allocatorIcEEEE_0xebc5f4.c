// 函数: _ZNK5Botan16X509_Certificate17has_ex_constraintERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xebc5f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::OID::from_string(entry_x1)
void* x0_1 = Botan::X509_Certificate::data()
void* __saved_x0_1 = *(x0_1 + 0x250)
void* __saved_x0 = *(x0_1 + 0x258)
int32_t* x0_2
int32_t* var_38

if (__saved_x0_1 == __saved_x0)
    x0_2 = var_38
else
    x0_2 = var_38
    
    while (true)
        int32_t* x9_1 = *(__saved_x0_1 + 8)
        int64_t x11_1 = *(__saved_x0_1 + 0x10)
        void* x10_1 = x11_1 - x9_1
        int64_t var_30
        
        if (x10_1 == var_30 - x0_2)
            if (x9_1 == x11_1)
                break
            
            int64_t x11_2 = 0
            
            while (*(x9_1 + x11_2) == *(x0_2 + x11_2))
                x11_2 += 4
                
                if (x10_1 == x11_2)
                    goto label_ebc68c
        
        __saved_x0_1 += 0x20
        
        if (__saved_x0_1 == __saved_x0)
            __saved_x0_1 = __saved_x0
            break
label_ebc68c:
void* __offset(vtable_for_Botan::OID, 0x10) var_40 = _vtable_for_Botan::OID + 0x10

if (x0_2 != 0)
    int32_t* var_30_1 = x0_2
    operator delete(x0_2)

return zx.q(__saved_x0_1 != __saved_x0 ? 1 : 0)
