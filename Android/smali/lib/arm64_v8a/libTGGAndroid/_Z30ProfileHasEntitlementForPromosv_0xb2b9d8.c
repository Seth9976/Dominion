// 函数: _Z30ProfileHasEntitlementForPromosv
// 地址: 0xb2b9d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_38
int32_t x0 = DomExpGet(0x13, &var_38)
int32_t x19

if (x0 s< 1)
    x19 = 0
else
    int64_t i = 0
    x19 = 0
    int64_t x22_1 = 0xc0
    
    do
        int32_t x8_2 = 1 << i.d
        i += 1
        int32_t x8_3
        
        if ((ProfileHasEntitlementForCard(zx.q(*(var_38 + x22_1))) & 1) != 0)
            x8_3 = x8_2
        else
            x8_3 = 0
        
        x19 |= x8_3
        x22_1 += 0x780
    while (zx.q(x0) != i)

return PromoCardsToFlags(x19)
