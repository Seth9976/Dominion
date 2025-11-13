// 函数: _Z12GetPlayerPod9PlayerWhoi
// 地址: 0xaf7bc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t x0 = GameMainUI()
int32_t x8 = *(gDomClient + 0x38)
uint64_t x1

if (x8 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x8)

if (x1.d != x20)
    return UI2GetHandle(
        UI2GetHandle(zx.q(x0), "tbl_opponents", PlayerWhoToSeat(zx.q(x20), x1) - 1), 
        "tbl_opponent_pods", arg2) __tailcall

return UI2GetHandle(zx.q(x0), "tbl_player_pods", arg2) __tailcall
