// 函数: _Z22DLCMissingRequirements7DLCType
// 地址: 0x9ebc48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(ror.d(arg1 - 0x2000, 0xc))
int32_t var_4
int32_t x0_2

if (x8_1.d u<= 7)
    switch (x8_1)
        case 0
            x0_2 = ProfileHasEntitlementForExpansion(3, &var_4)
            return zx.q(var_4 != 0x63 ? 1 : 0) & (zx.q(x0_2) ^ 1)
        case 1
            x0_2 = ProfileHasEntitlementForExpansion(4, &var_4)
            return zx.q(var_4 != 0x63 ? 1 : 0) & (zx.q(x0_2) ^ 1)
        case 2
            x0_2 = ProfileHasEntitlementForExpansion(6, &var_4)
            return zx.q(var_4 != 0x63 ? 1 : 0) & (zx.q(x0_2) ^ 1)
        case 3
            x0_2 = ProfileHasEntitlementForExpansion(8, &var_4)
            return zx.q(var_4 != 0x63 ? 1 : 0) & (zx.q(x0_2) ^ 1)
        case 6
            x0_2 = ProfileHasEntitlementForExpansion(7, &var_4)
            return zx.q(var_4 != 0x63 ? 1 : 0) & (zx.q(x0_2) ^ 1)
        case 7
            x0_2 = ProfileHasEntitlementForExpansion(0xa, &var_4)
            return zx.q(var_4 != 0x63 ? 1 : 0) & (zx.q(x0_2) ^ 1)
return 0
