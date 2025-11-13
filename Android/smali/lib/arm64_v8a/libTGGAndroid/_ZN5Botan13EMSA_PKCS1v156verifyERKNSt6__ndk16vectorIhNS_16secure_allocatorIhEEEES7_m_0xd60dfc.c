// 函数: _ZN5Botan13EMSA_PKCS1v156verifyERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_m
// 地址: 0xd60dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (*(arg3 + 8) - *arg3 != (***(arg1 + 8))())
    x19_1 = 0
else
    int64_t x3 = *(arg1 + 0x10)
    char* var_48
    int64_t entry_x3
    sub_d60ab8(&var_48, arg3, entry_x3, x3, *(arg1 + 0x18) - x3)
    char* x9_1 = *arg2
    int64_t x8_3 = *(arg2 + 8)
    char* x0_3 = var_48
    int64_t var_40
    int64_t var_38
    
    if (x8_3 - x9_1 != var_40 - x0_3)
        x19_1 = 0
    label_d60ea4:
        
        if (x0_3 != 0)
            Botan::deallocate_memory(x0_3, var_38 - x0_3, 1)
    else
        if (x9_1 != x8_3)
            char* x10_3 = x0_3
            
            do
                uint32_t x11_2 = zx.d(*x9_1)
                uint32_t x12_1 = zx.d(*x10_3)
                x19_1 = x11_2 == x12_1 ? 1 : 0
                
                if (x11_2 != x12_1)
                    break
                
                x9_1 = &x9_1[1]
                x10_3 = &x10_3[1]
            while (x8_3 != x9_1)
            
            goto label_d60ea4
        
        x19_1 = 1
        
        if (x0_3 != 0)
            Botan::deallocate_memory(x0_3, var_38 - x0_3, 1)

return zx.q(x19_1)
