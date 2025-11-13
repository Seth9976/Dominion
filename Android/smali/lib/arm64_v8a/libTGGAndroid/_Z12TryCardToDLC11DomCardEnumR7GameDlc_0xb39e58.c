// 函数: _Z12TryCardToDLC11DomCardEnumR7GameDlc
// 地址: 0xb39e58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t* var_38
int32_t x0 = GameSpecific_GetDlcs(0, &var_38)
int32_t x8_5
int32_t x21_1
int32_t var_3c

if (x0 s< 1)
label_b39ed0:
    int32_t x0_5 = GameSpecific_GetDlcs(2, &var_38)
    
    if (x0_5 s<= 0)
        return 0
    
    int64_t x22_2 = 0
    
    while (true)
        x21_1 = *(var_38 + x22_2)
        var_3c = DomDLCGrantsEntitlement(zx.q(x21_1))
        
        if ((DomEntitlementsGrantsCard(zx.q(x20), &var_3c, 1, nullptr) & 1) != 0)
            break
        
        x22_2 += 0x80
        
        if (zx.q(x0_5) << 7 == x22_2)
            return 0
    
    x8_5 = 2
else
    int64_t x22_1 = 0
    
    while (true)
        x21_1 = *(var_38 + x22_1)
        var_3c = DomDLCGrantsEntitlement(zx.q(x21_1))
        
        if ((DomEntitlementsGrantsCard(zx.q(x20), &var_3c, 1, nullptr) & 1) != 0)
            x8_5 = 0
            break
        
        x22_1 += 0x80
        
        if (zx.q(x0) << 7 == x22_1)
            goto label_b39ed0
*arg2 = x8_5
*(arg2 + 4) = x21_1
return 1
