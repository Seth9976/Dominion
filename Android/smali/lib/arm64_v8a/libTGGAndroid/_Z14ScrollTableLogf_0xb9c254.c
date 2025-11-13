// 函数: _Z14ScrollTableLogf
// 地址: 0xb9c254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = UI2GetHandle(GameDlgMangerGetUI(0x28, 5, false), "tbl_logEntries")
int32_t x19 = x0_1.d
UI2GetTransform(x0_1)
float var_30
float v0 = var_30
int128_t v0_1
int32_t v1
int128_t v2
int128_t v3
int128_t v4
v0_1, v1, v2, v3, v4 = UI2GetScrollPos(zx.q(x19))
v3.d = 0x43160000
v3:4.d = 0x43160000
v2.q = *V2Y
v4.d = 0x3c088889
v4:4.d = 0x3c088889
v2.d = v2.d f* arg1
v2:4.d = v2:4.d f* arg1
v0_1:4.d = v1
v2.d = v2.d f* v0
v2:4.d = v2:4.d f* v0
var_30.q = vadd_f32(v0_1, vmul_f32(vmul_f32(v2, v3, 0), v4, 0))
return UI2SetScrollPos(zx.q(x19), &var_30)
