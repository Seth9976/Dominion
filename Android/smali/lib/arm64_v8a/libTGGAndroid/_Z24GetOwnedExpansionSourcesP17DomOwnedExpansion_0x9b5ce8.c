// 函数: _Z24GetOwnedExpansionSourcesP17DomOwnedExpansion
// 地址: 0x9b5ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* var_28
int32_t x0_1 = DomGetExpansions(&var_28)
int32_t x20

if (x0_1 s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        uint64_t x0_2 = zx.q(*(var_28 + i))
        int32_t var_34
        
        if (x0_2.d != 0x13 && (ProfileHasEntitlementForExpansion(x0_2, &var_34) & 1) != 0)
            void* x9_1 = arg1 + (sx.q(x20) << 3)
            x20 += 1
            int32_t x8_3 = var_34
            *x9_1 = *(var_28 + i)
            *(x9_1 + 4) = x8_3
        
        i += 0x28
    while (mulu.dp.d(x0_1, 0x28) != i)

return zx.q(x20)
