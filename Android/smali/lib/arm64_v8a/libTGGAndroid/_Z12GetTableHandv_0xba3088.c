// 函数: _Z12GetTableHandv
// 地址: 0xba3088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GameMainUI()

if (data_182ac80 == "tbl_player_hand" && data_182a9e8 == x0 && zx.d(data_182a710) != 0
        && (UI2Exists(zx.q(data_182a9f0)) & 1) != 0)
    return zx.q(data_182a9f0)

uint64_t result = UI2GetHandle(zx.q(x0), "tbl_player_hand")
data_182a9f0 = result.d

if (result.d == 0)
    return result

data_182ac80 = "tbl_player_hand"
data_182a9e8 = x0
data_182a710 = 1
return result
