// 函数: _ZN5Botan20XMSS_WOTS_Parameters15append_checksumERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xed4c30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x9 = *entry_x1
int64_t x8 = entry_x1[1]
void* x10 = x8 - x9

if (x8 != x9)
    int64_t x8_1 = *(arg1 + 0x40)
    void* x10_1
    
    x10_1 = x10 u> 1 ? x10 : 1
    
    int64_t x1
    void* i_4
    
    if (x10_1 u>= 2)
        i_4 = x10_1 & 0xfffffffffffffffe
        int64_t x14_1 = 0
        int64_t x13_1 = 0
        void* x12_1 = x9 + 1
        void* i_3 = i_4
        void* i
        
        do
            uint64_t x16_1 = zx.q(*(x12_1 - 1))
            uint64_t x17_1 = zx.q(*x12_1)
            x12_1 += 2
            i = i_3
            i_3 -= 2
            x14_1 = x8_1 + x14_1 + not.q(x16_1)
            x13_1 = x8_1 + x13_1 + not.q(x17_1)
        while (i != 2)
        x1 = x13_1 + x14_1
        
        if (x10_1 != i_4)
            goto label_ed4cbc
    else
        x1 = 0
        i_4 = nullptr
    label_ed4cbc:
        void* i_2 = x10_1 - i_4
        char* x9_1 = x9 + i_4
        void* i_1
        
        do
            uint64_t x11_1 = zx.q(*x9_1)
            x9_1 = &x9_1[1]
            i_1 = i_2
            i_2 -= 1
            x1 = x8_1 + x1 + not.q(x11_1)
        while (i_1 != 1)

int64_t** result = Botan::XMSS_WOTS_Parameters::base_w(arg1)
char* var_40
char* x20 = var_40
int64_t* var_28 = entry_x1
int64_t var_38

if (x20 != var_38)
    do
        result = &var_28
        sub_f5acec(result, x20)
        x20 = &x20[1]
    while (var_38 != x20)
    
    x20 = var_40

if (x20 == 0)
    return result

char* var_38_1 = x20
int64_t var_30
return Botan::deallocate_memory(x20, var_30 - x20, 1)
