// 函数: _Z13GetBundleInfoRK14EntitlementDefR10BundleInfo
// 地址: 0x9ba75c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x30) = 0
*(arg2 + 0x10) = zx.o(0)
*(arg2 + 0x20) = zx.o(0)
*arg2 = zx.o(0)
int32_t x8 = *(arg1 + 4)
int32_t x23 = 3
int32_t var_38 = 3
int32_t var_34 = x8
DlcDef* x0_1 = GameSepcific_GetDlcDef(&var_38)
DLC* x0_3 = GameSepcific_TryGetDlcDef(&var_38)

if (x0_3 != 0)
    if (var_38 != 1)
        if ((GameCenterHasDLC(x0_3) & 1) != 0)
            x23 = 0
        else
            x23 = *(x0_3 + 4)
    else
        x23 = *(x0_3 + 4)

*(arg2 + 0xc) = x23
void var_48
int64_t result = GameCenterGetPriceInfo(x0_1, &var_48)

if ((result.d & 1) != 0)
    int64_t var_40
    *(arg2 + 0x18) = var_40
    result = strcpy(arg2 + 0x30, &var_48)
    *(arg2 + 0x10) = 1

int64_t x22_2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x28) = 0

while (*(arg1 + 0xc + x22_2) != 0)
    *(arg2 + 8) += 1
    void* x0_9 = EntitlementLookup(zx.q(*(arg1 + 0xc + x22_2)))
    void var_4c
    int32_t x0_11 = ProfileHasEntitlementForExpansion(zx.q(*(x0_9 + 0xc)), &var_4c)
    
    if ((x0_11 & 1) != 0)
        *(arg2 + 4) += 1
    
    int32_t x8_9 = *(x0_9 + 4)
    int32_t var_68 = 0
    int32_t var_64_1 = x8_9
    void var_60
    result = GameCenterGetPriceInfo(GameSepcific_GetDlcDef(&var_68), &var_60)
    
    if ((result.d & 1) != 0)
        int64_t var_58
        *(arg2 + 0x28) += var_58
        
        if ((x0_11 & 1) != 0)
            *(arg2 + 0x20) += var_58
    
    x22_2 += 4
    
    if (x22_2 == 0x100)
        break

if (*(arg2 + 0xc) == 0)
    int32_t x8_15 = *(arg2 + 8)
    *arg2 = 0
    *(arg2 + 4) = x8_15
else
    int32_t x8_13 = *(arg2 + 4)
    int32_t x8_14
    
    if (x8_13 == *(arg2 + 8))
        x8_14 = 1
    else if (x8_13 == 0)
        x8_14 = 2
    else if (zx.d(*(arg2 + 0x10)) == 0)
        x8_14 = 6
    else if (*(arg2 + 0x28) - *(arg2 + 0x20) s>= *(arg2 + 0x18))
        x8_14 = 3
    else
        x8_14 = 4
    
    *arg2 = x8_14

return result
