// 函数: _Z15ProfileDLCStateRK3DLC
// 地址: 0x9e167c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = LocalDLCState(arg1)

if (result.d u<= 5 && (1 << result.d & 0x31) != 0)
    return result

TGGEntitlementSource* var_20
TGGEntitlement* var_18
int32_t x0_1 = ProfileGetEntitlements(&var_18, &var_20)
int32_t var_24
int32_t x0_3 = DomEntitlementsGrantsDLC(zx.q(*arg1), var_18, x0_1, &var_24)
int32_t x8_4
int32_t x9_3

if ((x0_3 & 1) == 0)
    x8_4 = *(arg1 + 4)
    x9_3 = 6
else
    int64_t x8_3 = sx.q(var_24)
    
    if (x8_3.d == 0xffffffff)
        x8_4 = *(arg1 + 4)
        x9_3 = 0
    else
        x8_4 = *(arg1 + 4)
        
        if (*(var_20 + (x8_3 << 2)) == 0x63)
            x9_3 = 6
        else
            x9_3 = 0

if ((x0_3 & 1) != 0)
    return zx.q(x9_3)

return zx.q(x8_4)
