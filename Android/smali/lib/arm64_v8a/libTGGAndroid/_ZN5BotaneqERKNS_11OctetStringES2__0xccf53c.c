// 函数: _ZN5BotaneqERKNS_11OctetStringES2_
// 地址: 0xccf53c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* var_28
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_28)
char* var_40
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_40)
char* x0_2 = var_28
char* x8 = var_40
int64_t var_38
int64_t var_20
int32_t __saved_x1_1

if (var_20 - x0_2 != var_38 - x8)
    __saved_x1_1 = 0
label_ccf5b4:
    
    if (x8 != 0)
    label_ccf5bc:
        char* var_38_1 = x8
        int64_t var_30
        Botan::deallocate_memory(x8, var_30 - x8, 1)
        x0_2 = var_28
else
    if (x0_2 != var_20)
        char* x10_2 = x0_2
        char* x11_1 = x8
        
        do
            uint32_t x12_1 = zx.d(*x10_2)
            uint32_t x13_1 = zx.d(*x11_1)
            __saved_x1_1 = x12_1 == x13_1 ? 1 : 0
            
            if (x12_1 != x13_1)
                break
            
            x10_2 = &x10_2[1]
            x11_1 = &x11_1[1]
        while (var_20 != x10_2)
        
        goto label_ccf5b4
    
    __saved_x1_1 = 1
    
    if (x8 != 0)
        goto label_ccf5bc

if (x0_2 != 0)
    char* var_20_1 = x0_2
    int64_t var_18
    Botan::deallocate_memory(x0_2, var_18 - x0_2, 1)

return zx.q(__saved_x1_1)
