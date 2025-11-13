// 函数: _ZNK5Botan16X509_Certificate11is_criticalERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xeb400c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::X509_Certificate::data()
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::OID::from_string(entry_x1)
void** i = *(x0 + 0x240)
int32_t* var_38
int32_t x19_1

if (i == 0)
label_eb410c:
    x19_1 = 0
else
    int64_t var_30
    void* i_1
    
    if (var_38 == var_30)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = x0 + 0x240
        
        while (true)
        label_eb4070:
            int32_t* x13_1 = i[5]
            int32_t* x14_1 = var_38
            
            while (true)
                if (i[6] != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (var_30 == x14_1)
                            break
                        
                        continue
                
                i = i[1]
                
                if (i == 0)
                    goto label_eb40b4
                
                goto label_eb4070
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_eb40b4:
    
    if (i_1 == x0 + 0x240)
    label_eb410c_1:
        x19_1 = 0
    else
        int32_t* x10_1 = *(i_1 + 0x28)
        int64_t x11_2 = *(i_1 + 0x30)
        
        if (x10_1 != x11_2)
            int32_t* x12_2 = var_38
            
            do
                if (var_30 == x12_2)
                    goto label_eb410c_1
                
                int32_t x13_2 = *x12_2
                int32_t x14_2 = *x10_1
                
                if (x13_2 u< x14_2)
                    goto label_eb410c_1
                
                if (x14_2 u< x13_2)
                    break
                
                x10_1 = &x10_1[1]
                x12_2 = &x12_2[1]
            while (x11_2 != x10_1)
        
        x19_1 = zx.d(*(i_1 + 0x68)) != 0 ? 1 : 0

void* __offset(vtable_for_Botan::OID, 0x10) var_40 = _vtable_for_Botan::OID + 0x10

if (var_38 != 0)
    int32_t* var_30_1 = var_38
    operator delete(var_38)

return zx.q(x19_1)
