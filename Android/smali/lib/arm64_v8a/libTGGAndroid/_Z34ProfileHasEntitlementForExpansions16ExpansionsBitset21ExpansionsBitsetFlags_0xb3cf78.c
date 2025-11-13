// 函数: _Z34ProfileHasEntitlementForExpansions16ExpansionsBitset21ExpansionsBitsetFlags
// 地址: 0xb3cf78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_2a4
void var_2a0
return zx.q(((arg1 &
    not.d(DomExpansionsBitsetFromExpansions(&var_2a0, GetOwnedExpansionSetups(&var_2a0), &var_2a4)))
    | (arg2 & not.d(var_2a4))) == 0 ? 1 : 0)
