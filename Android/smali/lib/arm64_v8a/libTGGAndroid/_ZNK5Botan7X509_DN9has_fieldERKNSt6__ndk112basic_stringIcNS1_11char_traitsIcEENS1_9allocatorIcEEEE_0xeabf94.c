// 函数: _ZNK5Botan7X509_DN9has_fieldERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xeabf94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::X509_DN::deref_info_field(entry_x1)
char var_48
Botan::OIDS::str2oid_or_empty(&var_48)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
int32_t* var_28
int64_t var_20
void* x8_1
int64_t x9_1

if (var_28 != var_20)
    x8_1 = *(arg1 + 8)
    x9_1 = *(arg1 + 0x10)

int32_t x19_1

if (var_28 == var_20 || x8_1 == x9_1)
label_eac038:
    x19_1 = 0
else
    while (true)
        int32_t* x12_1 = *(x8_1 + 8)
        int64_t x11_1 = *(x8_1 + 0x10)
        
        if (x11_1 - x12_1 == var_20 - var_28)
            if (x12_1 != x11_1)
                int32_t* x13_2 = var_28
                
                do
                    if (*x12_1 != *x13_2)
                        goto label_eabfe8
                    
                    x12_1 = &x12_1[1]
                    x13_2 = &x13_2[1]
                while (x11_1 != x12_1)
            
            x19_1 = 1
            break
        
    label_eabfe8:
        x8_1 += 0x60
        
        if (x8_1 == x9_1)
            goto label_eac038

void* __offset(vtable_for_Botan::OID, 0x10) var_30 = _vtable_for_Botan::OID + 0x10

if (var_28 != 0)
    int32_t* var_20_1 = var_28
    operator delete(var_28)

return zx.q(x19_1)
