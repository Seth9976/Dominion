// 函数: _Z15PileResetCurved9PlayerWho
// 地址: 0xaec9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg1 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg1, 0x4d48)

*(x8_1 + 0x4d24) = 0
int64_t result = GameMainUI()

if (result.d == 0)
    return result

int32_t x0 = GameMainUI()
int32_t x0_2

if (data_182ab38 == "tbl_player_hand" && data_182a758 == x0 && zx.d(data_182a618) != 0)
    x0_2 = UI2Exists(zx.q(data_182a760))

uint64_t x0_3

if (data_182ab38 != "tbl_player_hand" || data_182a758 != x0 || zx.d(data_182a618) == 0
        || (x0_2 & 1) == 0)
    x0_3 = UI2GetHandle(zx.q(x0), "tbl_player_hand")
    data_182a760 = x0_3.d
    
    if (x0_3.d != 0)
        data_182ab38 = "tbl_player_hand"
        data_182a758 = x0
        data_182a618 = 1
else
    x0_3 = zx.q(data_182a760)

return UI2SetScrollPos(x0_3, V20) __tailcall
