// 函数: _Z21ScoresBreakdownUpdate9UI2Handle
// 地址: 0xb9e86c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
float v0
int32_t v1
float v2
int32_t v3
v0, v1, v2, v3 = UI2SubBoundary(*UI2_SCORE_BREAKDOWN_ITEM)
int64_t x1 = sx.q(*(gScoreDlg + 0x232fc))
int64_t v10
v10.d = v3 f- v1
int64_t v11
v11.d = v10.d f* fconvert.s(0.25f)
int32_t x0_2 = ScoresBreakdownRowsUpdate(zx.q(x19), x1, gScoreDlg + x1 * 0x5dd4)
int32_t x9 = *(gDomClient + 0x38)
int32_t x8_1 = *(gScoreDlg + 0x232fc)
int32_t x20 = x0_2
uint64_t x1_1

if (x9 == 0xffffffff)
    x1_1 = 0
else
    x1_1 = zx.q(x9)

uint64_t x0_6
int64_t v12

if (x8_1 != x1_1.d)
    int32_t x0_8 = PlayerWhoToSeat(zx.q(x8_1), x1_1)
    int32_t x0_9 = GameMainUI()
    
    if (data_182ac58 != "tbl_opponents" || data_182a9a0 != x0_9 || data_182a9a8 != x0_8 - 1
            || data_182ac60 != "grpOpponentScore")
        x0_6 = UI2GetHandle(zx.q(x0_9), "tbl_opponents", x0_8 - 1, "grpOpponentScore", 0)
        v12.d = 0f
        data_182a9b0 = x0_6.d
        
        if (x0_6.d != 0)
            data_182a9a0 = x0_9
            data_182ac58 = "tbl_opponents"
            data_182a9a8 = x0_8 - 1
            data_182ac60 = "grpOpponentScore"
    else
        x0_6 = zx.q(data_182a9b0)
        v12.d = 0f
else
    int32_t x0_3 = GameMainUI()
    int32_t x0_5
    
    if (data_182ac58 == "grpScore" && data_182a9a0 == x0_3 && data_182a9a8 == 0xffffffff)
        x0_5 = UI2Exists(zx.q(data_182a9b0))
    
    if (data_182ac58 != "grpScore" || data_182a9a0 != x0_3 || data_182a9a8 != 0xffffffff
            || (x0_5 & 1) == 0)
        x0_6 = UI2GetHandle(zx.q(x0_3), "grpScore")
        data_182a9b0 = x0_6.d
        
        if (x0_6.d != 0)
            data_182ac58 = "grpScore"
            data_182a9a0 = x0_3
            data_182a9a8 = 0xffffffff
    else
        x0_6 = zx.q(data_182a9b0)
    
    x20 += 1
    v12 = v11

int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = UI2GetRect(x0_6)
int32_t var_80 = v0_1
int32_t var_7c = v1_1
int32_t var_78 = v2_1
int32_t var_74 = v3_1
UI2GetTransform(GameMainUI())
uint64_t v3_2 = *V20
float v2_2 = fneg(v11.d)
float var_a8 = v2 - v0
float var_a4 = v10.d f* float.s(x20)
int32_t var_e0 = v11.d
int32_t var_dc = v12.d
uint64_t var_b0 = v3_2
float var_d8 = v2_2
float var_d4 = v2_2
float var_a0
ComputeTaptipTransform(&var_80, 0, &var_b0, &var_e0, var_a0, fconvert.s(1f))
void var_d0
return UI2SetTransform(zx.q(x19), &var_d0)
