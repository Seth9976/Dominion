// 函数: _Z29ProfileHasEntitlementForDailyR15DailyClientData
// 地址: 0xb3d010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(arg1 + 0x10)
DomSetupConfig var_19b8

if (x20 == 0)
    DomSetupConfigFromString(XString::operator char const*(), 0x18)
    int32_t x0_3 = DomSetupConfigToExpansionBitset(&var_19b8, arg1 + 0x14)
    x20 = x0_3
    *(arg1 + 0x10) = x0_3

int32_t var_24
return zx.q(((x20 & not.d(DomExpansionsBitsetFromExpansions(&var_19b8, 
    GetOwnedExpansionSetups(&var_19b8), &var_24))) | (*(arg1 + 0x14) & not.d(var_24))) == 0 ? 1 : 0)
