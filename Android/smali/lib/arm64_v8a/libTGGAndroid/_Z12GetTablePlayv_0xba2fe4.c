// 函数: _Z12GetTablePlayv
// 地址: 0xba2fe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GameMainUI()

if (data_182ac78 == "tbl_global_play" && data_182a9d8 == x0 && zx.d(data_182a708) != 0
        && (UI2Exists(zx.q(data_182a9e0)) & 1) != 0)
    return zx.q(data_182a9e0)

uint64_t result = UI2GetHandle(zx.q(x0), "tbl_global_play")
data_182a9e0 = result.d

if (result.d == 0)
    return result

data_182ac78 = "tbl_global_play"
data_182a9d8 = x0
data_182a708 = 1
return result
