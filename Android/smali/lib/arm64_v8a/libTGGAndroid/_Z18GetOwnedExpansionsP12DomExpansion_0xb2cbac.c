// 函数: _Z18GetOwnedExpansionsP12DomExpansion
// 地址: 0xb2cbac
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
        if ((ProfileHasEntitlementForExpansion(zx.q(*(var_28 + i)), nullptr) & 1) != 0)
            *(arg1 + (sx.q(x20) << 2)) = *(var_28 + i)
            x20 += 1
        
        i += 0x28
    while (mulu.dp.d(x0_1, 0x28) != i)

return zx.q(x20)
