// 函数: _ZN5Botan17EMSA_PKCS1v15_Raw6verifyERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_m
// 地址: 0xd6218c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)

if (x8 != 0 && *(arg3 + 8) - *arg3 != x8)
    return 0

int64_t x8_1 = *(arg1 + 0x28)
char* var_28
int64_t entry_x3
sub_d60ab8(&var_28, arg3, entry_x3, x8_1, *(arg1 + 0x30) - x8_1)
char* x9_4 = *arg2
int64_t x8_2 = *(arg2 + 8)
char* x0_1 = var_28
int64_t var_20
int32_t x19_1
int64_t var_18

if (x8_2 - x9_4 != var_20 - x0_1)
    x19_1 = 0
label_d6221c:
    
    if (x0_1 != 0)
        Botan::deallocate_memory(x0_1, var_18 - x0_1, 1)
else
    if (x9_4 != x8_2)
        char* x10_4 = x0_1
        
        do
            uint32_t x11_1 = zx.d(*x9_4)
            uint32_t x12_1 = zx.d(*x10_4)
            x19_1 = x11_1 == x12_1 ? 1 : 0
            
            if (x11_1 != x12_1)
                break
            
            x9_4 = &x9_4[1]
            x10_4 = &x10_4[1]
        while (x8_2 != x9_4)
        
        goto label_d6221c
    
    x19_1 = 1
    
    if (x0_1 != 0)
        Botan::deallocate_memory(x0_1, var_18 - x0_1, 1)
return zx.q(x19_1)
