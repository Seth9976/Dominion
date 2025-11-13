// 函数: _Z17GetTableAbilitiesv
// 地址: 0xba312c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GameMainUI()

if (data_182ac88 == "tbl_abilityTriggers" && data_182a9f8 == x0 && zx.d(data_182a718) != 0
        && (UI2Exists(zx.q(data_182aa00)) & 1) != 0)
    return zx.q(data_182aa00)

uint64_t result = UI2GetHandle(zx.q(x0), "tbl_abilityTriggers")
data_182aa00 = result.d

if (result.d == 0)
    return result

data_182ac88 = "tbl_abilityTriggers"
data_182a9f8 = x0
data_182a718 = 1
return result
