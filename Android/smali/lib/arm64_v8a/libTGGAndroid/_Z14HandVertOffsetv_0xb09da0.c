// 函数: _Z14HandVertOffsetv
// 地址: 0xb09da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = UI2GetSize(GameMainUI(), "tbl_player_hand", 0)
v0.q = *V2Y
v0.d = v0.d f* v1.d
v0:4.d = v0:4.d f* v1.d
v1.d = 0xbf333333
v1:4.d = 0xbf333333
v1.d = vmul_f32(v0, v1, 0):4.d
return result
