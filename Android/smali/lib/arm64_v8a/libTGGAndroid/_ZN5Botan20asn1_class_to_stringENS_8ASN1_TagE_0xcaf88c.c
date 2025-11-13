// 函数: _ZN5Botan20asn1_class_to_stringENS_8ASN1_TagE
// 地址: 0xcaf88c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
int64_t x9_2
char x10_2

if (arg1.d s> 0x7f)
    if (arg1.d == 0x80)
        __builtin_strncpy(entry_x8, " CONTEXT_SPECIFIC", 0x12)
        return 
    
    if (arg1.d == 0xa0)
        *entry_x8 = 0xe
        __builtin_strncpy(&entry_x8[1], "PRIVATE", 8)
        return 
    
    if (arg1.d == 0xff00)
        x9_2 = 0x43454a424f5f4f4e
        x10_2 = 0x54
        goto label_caf918
    
label_caf964:
    std::__ndk1::to_string(zx.q(arg1.d))
    char var_48
    int128_t* x0_2
    int128_t v0_1
    x0_2, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_48, nullptr)
    void* x8 = x0_2[1].q
    int128_t var_30 = *x0_2
    __builtin_memset(x0_2, 0, 0x18)
    int128_t v0_2
    arg1, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_30)
    v0_2 = *arg1
    *(entry_x8 + 0x10) = *(arg1 + 0x10)
    *entry_x8 = v0_2
    __builtin_memset(arg1, 0, 0x18)
    void* var_38
    
    if ((zx.d(var_30.b) & 1) != 0)
        operator delete(x8)
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
    else if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)
else
    if (arg1.d != 0)
        int64_t x9_1
        int32_t x10_1
        
        if (arg1.d != 0x20)
            if (arg1.d == 0x40)
                x9_1 = 0x544143494c505041
                x10_1 = 0x4e4f4954
                goto label_caf9e8
            
            goto label_caf964
        
        x9_1 = 0x43555254534e4f43
        x10_1 = 0x44455443
    label_caf9e8:
        *entry_x8 = 0x16
        *(entry_x8 + 8) = x10_1
        *(entry_x8 + 1) = x9_1
        entry_x8[0xc] = 0
        return 
    
    x9_2 = 0x4153524556494e55
    x10_2 = 0x4c
label_caf918:
    *entry_x8 = 0x12
    entry_x8[9] = x10_2
    *(entry_x8 + 1) = x9_2
    entry_x8[0xa] = 0
