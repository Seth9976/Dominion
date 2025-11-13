// 函数: _Z21DeclareExpansionOwned9UI2Handle12DomExpansion20ExpansionButtonStyle
// 地址: 0xb408bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14

if (arg2 != 0x13)
    if ((ProfileHasEntitlementForExpansion(zx.q(arg2), &var_14) & 1) != 0)
        if (var_14 != 0x63)
            goto label_b4091c
        
        UI2SetState(zx.q(arg1), &data_18314b8, 0xffffffff, 0)
        return 1
else if ((ProfileHasAnyPromos() & 1) != 0)
label_b4091c:
    UI2SetState(zx.q(arg1), &data_18314a0, 0xffffffff, 0)
    return 1
return 0
