// 函数: _ZN5Botan25MessageAuthenticationCode10verify_macEPKhm
// 地址: 0xd980c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_i
int64_t i_1 = entry_i
uint64_t x20 = arg2
Botan::Buffered_Computation::final()
char* var_38
int64_t var_30
int32_t x19
char* var_30_1
int64_t var_28

if (var_30 - var_38 != i_1)
    x19 = 0
    
    if (var_38 != 0)
        var_30_1 = var_38
        Botan::deallocate_memory(var_38, var_28 - var_38, 1)
else
    char var_14_1 = 0
    
    if (i_1 != 0)
        char* x8_2 = var_38
        int64_t i
        
        do
            char x9_1 = *x8_2
            x8_2 = &x8_2[1]
            char x10_1 = *x20
            x20 += 1
            i = i_1
            i_1 -= 1
            var_14_1 |= x10_1 ^ x9_1
        while (i != 1)
    
    uint32_t x8_3 = zx.d(var_14_1)
    x19 = sx.d((x8_3.b - 1) & (not.d(x8_3)).b) s< 0 ? 1 : 0
    
    if (var_38 != 0)
        var_30_1 = var_38
        Botan::deallocate_memory(var_38, var_28 - var_38, 1)
return zx.q(x19)
