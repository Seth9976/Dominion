// 函数: _ZN5Botan19sig_algo_and_pad_okENSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES6_
// 地址: 0xd60730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = arg2
char var_60
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_60)
Botan::get_sig_paddings(&var_60)
void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)
char* var_40
char* x22 = var_40
char* var_48
int32_t x19_1
char* var_40_1

if (var_48 == x22)
    x19_1 = 0
    
    if (var_48 != 0)
        var_40_1 = var_48
        operator delete(var_48)
else
    uint64_t x8_1 = zx.q(*x20)
    char* x23_1 = var_48
    int32_t temp0_1 = x8_1.d & 1
    uint64_t x19
    
    if (temp0_1 == 0)
        x19 = x8_1 u>> 1
    else
        x19 = *(x20 + 8)
    
    void* x20_1
    
    if (temp0_1 != 0)
        x20_1 = *(x20 + 0x10)
    else
        x20_1 = &x20[1]
    
    if (x19 != 0)
        do
            uint64_t x9_3 = zx.q(*x23_1)
            uint64_t x8_4 = x9_3 u>> 1
            uint64_t x10_4
            
            if ((x9_3.d & 1) == 0)
                x10_4 = x8_4
            else
                x10_4 = *(x23_1 + 8)
            
            if (x10_4 == x19)
                if ((x9_3.d & 1) == 0)
                    int64_t x9_4 = 0
                    
                    do
                        if (zx.d(x23_1[x9_4 + 1]) != zx.d(*(x20_1 + x9_4)))
                            goto label_d607d8
                        
                        x9_4 += 1
                    while (x8_4 != x9_4)
                    
                    goto label_d6082c
                
                if (memcmp(*(x23_1 + 0x10), x20_1, x19) == 0)
                    goto label_d6082c
            
        label_d607d8:
            x23_1 = &x23_1[0x18]
        while (x23_1 != x22)
    else
        do
            uint64_t x8_2 = zx.q(*x23_1)
            uint64_t x8_3
            
            if ((x8_2.d & 1) == 0)
                x8_3 = x8_2 u>> 1
            else
                x8_3 = *(x23_1 + 8)
            
            if (x8_3 == 0)
            label_d6082c:
                x19_1 = x23_1 != x22 ? 1 : 0
                
                if (var_48 != 0)
                    goto label_d60858
                
                goto label_d608a0
            
            x23_1 = &x23_1[0x18]
        while (x23_1 != x22)
    
    x19_1 = x22 != x22 ? 1 : 0
    
    if (var_48 != 0)
    label_d60858:
        char* x20_2 = x22
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x22 - 8))
            
            x22 = x20_2
        while (var_48 != x20_2)
        
        var_40_1 = var_48
        operator delete(var_48)
label_d608a0:
return zx.q(x19_1)
