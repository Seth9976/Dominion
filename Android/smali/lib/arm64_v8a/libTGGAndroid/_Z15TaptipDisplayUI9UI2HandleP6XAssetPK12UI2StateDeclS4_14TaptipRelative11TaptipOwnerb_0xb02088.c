// 函数: _Z15TaptipDisplayUI9UI2HandleP6XAssetPK12UI2StateDeclS4_14TaptipRelative11TaptipOwnerb
// 地址: 0xb02088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gDomClient + 0x84318) = arg2
int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

int32_t x8_2

x8_2 = arg6 == 1 ? x8_1 : -1

*(gDomClient + 0x84320) = x8_2
*(gDomClient + 0x84330) = 1
*(gDomClient + 0x84338) = arg1.d
*(gDomClient + 0x8433c) = arg5
int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = UI2GetRect(arg1)
XAsset* x1 = *(gDomClient + 0x84318)
uint64_t x2 = zx.q(*(gDomClient + 0x8433c))
int32_t var_70 = v0
int32_t var_6c = v1
int32_t var_68 = v2
int32_t var_64 = v3
int64_t result
int128_t v0_1
int128_t v1_1
result, v0_1, v1_1 = TaptipRelativeTransform(&var_70, x1, x2)
*(gDomClient + 0x84360) = arg3
*(gDomClient + 0x84368) = arg4
int128_t var_60
*(gDomClient + 0x84340) = var_60
int128_t var_50
*(gDomClient + 0x84350) = var_50
*(gDomClient + 0x84374) = arg7 & 1
return result
