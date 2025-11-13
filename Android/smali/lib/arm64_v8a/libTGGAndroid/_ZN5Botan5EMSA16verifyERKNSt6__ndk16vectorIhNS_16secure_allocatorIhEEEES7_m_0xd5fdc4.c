// 函数: _ZN5Botan5EMSA16verifyERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_m
// 地址: 0xd5fdc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (*(arg3 + 8) - *arg3 != (***(arg1 + 8))())
    x19_1 = 0
else
    char* var_48
    int64_t entry_x3
    sub_d5fc0c(&var_48, arg3, entry_x3)
    char* x0_3 = var_48
    char* x8_2 = *arg2
    int64_t x10_1 = *(arg2 + 8)
    int64_t var_40
    void* x9_2 = var_40 - x0_3
    void* x11_1 = x10_1 - x8_2
    void* x12_1 = x9_2 - x11_1
    char* var_40_1
    int64_t var_38
    
    if (x9_2 u< x11_1)
        x19_1 = 0
        
        if (x0_3 != 0)
            var_40_1 = x0_3
            Botan::deallocate_memory(x0_3, var_38 - x0_3, 1)
    else if (x9_2 == x11_1)
    label_d5fe58:
        char var_24_1 = 0
        
        if (x11_1 != 0)
            void* i_1 = x8_2 - x10_1
            void* i
            
            do
                char x11_2 = *x8_2
                x8_2 = &x8_2[1]
                char x12_2 = *(x0_3 + x9_2 + i_1)
                i = i_1
                i_1 += 1
                var_24_1 |= x12_2 ^ x11_2
            while (i u< -1)
        
        uint32_t x8_3 = zx.d(var_24_1)
        x19_1 = sx.d((x8_3.b - 1) & (not.d(x8_3)).b) s< 0 ? 1 : 0
        
        if (x0_3 != 0)
            var_40_1 = x0_3
            Botan::deallocate_memory(x0_3, var_38 - x0_3, 1)
    else
        char* x13_1 = x0_3
        
        while (zx.d(*x13_1) == 0)
            void* temp1_1 = x12_1
            x12_1 -= 1
            x13_1 = &x13_1[1]
            
            if (temp1_1 == 1)
                goto label_d5fe58
        
        x19_1 = 0
        var_40_1 = x0_3
        Botan::deallocate_memory(x0_3, var_38 - x0_3, 1)

return zx.q(x19_1)
