// 函数: _ZN5Botan13hash_for_emsaERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xded9bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_98
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_98)
char var_80
int64_t result = Botan::SCAN_Name::SCAN_Name(&var_80)
void* var_88

if ((zx.d(var_98) & 1) != 0)
    result = operator delete(var_88)
void* var_50
char* var_48
void* var_38
void* x19_1

if (var_48 != var_50)
    result = Botan::SCAN_Name::arg(&var_80)
    x19_1 = var_38
    
    if (x19_1 != 0)
        goto label_deda6c
    
    goto label_deda18

char* entry_x8
*entry_x8 = 0xe
__builtin_strncpy(&entry_x8[1], "SHA-512", 8)
x19_1 = var_38
void* x19_2

if (x19_1 != 0)
label_deda6c:
    char* var_30
    char* x8_5 = var_30
    void* x0_5
    
    if (x8_5 == x19_1)
        x0_5 = x19_1
    else
        char* x20_1 = x8_5
        
        do
            x20_1 = &x20_1[-0x18]
            
            if ((zx.d(*x20_1) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x20_1
        while (x19_1 != x20_1)
        
        x0_5 = var_38
    
    void* var_30_1 = x19_1
    result = operator delete(x0_5)
    x19_2 = var_50
    
    if (x19_2 == 0)
        goto label_deda24
    
    goto label_dedabc

label_deda18:
x19_2 = var_50
char var_68

if (x19_2 == 0)
label_deda24:
    void* var_70
    
    if ((zx.d(var_68) & 1) != 0)
    label_dedb10:
        void* var_58
        result = operator delete(var_58)
        
        if ((zx.d(var_80) & 1) != 0)
            return operator delete(var_70)
    else
    label_deda2c:
        
        if ((zx.d(var_80) & 1) != 0)
            return operator delete(var_70)
    return result

label_dedabc:
char* x8_6 = var_48
void* x0_7

if (x8_6 == x19_2)
    x0_7 = x19_2
else
    char* x20_2 = x8_6
    
    do
        x20_2 = &x20_2[-0x18]
        
        if ((zx.d(*x20_2) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x20_2
    while (x19_2 != x20_2)
    
    x0_7 = var_50

void* var_48_1 = x19_2
result = operator delete(x0_7)

if ((zx.d(var_68) & 1) == 0)
    goto label_deda2c

goto label_dedb10
