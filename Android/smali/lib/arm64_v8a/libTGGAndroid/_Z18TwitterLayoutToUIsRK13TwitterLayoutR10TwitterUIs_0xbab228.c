// 函数: _Z18TwitterLayoutToUIsRK13TwitterLayoutR10TwitterUIs
// 地址: 0xbab228
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_d0
int32_t v0
int32_t v1
v0, v1 = CalcTwitterSizingInfo(arg1, &var_d0)
*(arg2 + 0xb0) = v0
*(arg2 + 0xb4) = v1
*(arg2 + 0xac) = 0
int128_t v0_1
int32_t v1_1
int32_t v2
int32_t v3
v0_1, v1_1, v2, v3 = UI2Boundary(*UI2_TWITTER_CARD)
int32_t var_e0 = v0_1.d
int32_t var_dc = v1_1
int32_t var_d8 = v2
int32_t var_d4 = v3
int32_t var_c8
int64_t v11
v11.d = var_c8
int64_t v14
v14.d = *(TI + 4)
int128_t v12
v12.d = *(TI + 8)
int128_t var_f0 = var_e0.o
int64_t x9 = sx.q(*(arg2 + 0xac))
int64_t v13
v13.d = *(TI + 0xc)
int64_t v15
v15.d = *(TI + 0x10)
int128_t v8
v8.d = *(TI + 0x14)
int64_t v9
v9.d = *(TI + 0x18)
int128_t v10
v10.d = *(TI + 0x1c)
*(arg2 + 0xac) = x9.d + 1
void* x21 = arg2 + (x9 << 2)
UI2Begin("twitter-player", x21, *UI2_TWITTER_NAME_BAR, &var_f0, &var_f0, 0, 0, false)
UI2GetTransform(zx.q(*x21))
float var_110
float v0_2 = var_110
float var_100
float v6 = var_100 * var_100
float var_10c
float v7 = var_10c * var_10c
float var_108
float v16 = var_10c * var_108
float var_104
float v17 = var_100 * var_104
float v18 = var_100 * var_108
float v19 = var_10c * var_104
float v20 = var_108 * var_104
float v21 = var_100 * var_10c
float v25 = v16 - v17
v16 = v16 + v17
v17 = v6 + v7
v6 = v6 - v7
v7 = v18 + v19
v18 = v19 - v18
float v26 = v10.d f+ v10.d
v7 = v26 * v7
v19 = v26 * (v20 - v21)
v26 = v8.d f+ v8.d
float v24 = v9.d f+ v9.d
v16 = v26 * v16
v18 = v26 * v18
v26 = var_108 * var_108
float v2_1 = var_104 * var_104
float var_108_1 = v14.d f* var_104 + v12.d f* var_100 + v15.d f* var_108 - v13.d f* var_10c
float var_104_1 = v12.d f* var_10c + v13.d f* var_100 + v15.d f* var_104 - v14.d f* var_108
var_110 = v11.d f* v0_2
float var_10c_1 = v14.d f* var_100 + v15.d f* var_10c + v13.d f* var_108 - v12.d f* var_104
float var_100_1 = v15.d f* var_100 - v14.d f* var_10c - v12.d f* var_108 - v13.d f* var_104
float var_fc
float var_fc_1 = var_fc + v0_2 * (v7 + v8.d f* (v17 - v26 - v2_1) + v24 * v25)
float var_f8
float var_f8_1 = var_f8 + v0_2 * (v19 + v16 + v9.d f* (v6 + v26 - v2_1))
float var_f4
float var_f4_1 = var_f4 + v0_2 * (v10.d f* (v6 - v26 + v2_1) + v18 + v24 * (v21 + v20))
UI2SetTransform(zx.q(*x21), &var_110)
UI2SetInt(zx.q(*x21), &data_1833228, *(arg1 + 0x90), 0xffffffff)
UI2UpdateRoot(zx.q(*x21), false, 0f)
UI2Begin("twitter-player", x21, *UI2_TWITTER_NAME_BAR, &var_f0, &var_f0, 0, 0, false)
UI2SetTransform(zx.q(*x21), &var_110)
UI2SetInt(zx.q(*x21), &data_1833228, *(arg1 + 0x90), 0xffffffff)

if (*(arg1 + 0x90) s>= 1)
    int64_t i = 0
    TwitterLayout const& x24_1 = arg1
    
    do
        DeclareTwitterPlayer(UI2GetHandle(zx.q(*x21), "tbl_players", i.d), x24_1, zx.q(i.d))
        i += 1
        x24_1 += 0x18
    while (i s< sx.q(*(arg1 + 0x90)))

int64_t result = UI2UpdateRoot(zx.q(*x21), false, 0f)

if (*(arg1 + 0x109c) s>= 1)
    int64_t var_c4
    v8.q = var_c4
    int32_t var_b4
    v9.d = var_b4
    int64_t var_bc
    v10.q = var_bc
    int32_t var_a8
    v11.d = var_a8
    int64_t var_b0
    v12.q = var_b0
    int64_t i_1 = 0
    void* __offset(TwitterLayout, 0x9c) x22_1 = arg1 + 0x9c
    
    do
        int64_t x23_2 = sx.q(*(arg2 + 0xac))
        *(arg2 + 0xac) = x23_2.d + 1
        int32_t x24_3 = *(x22_1 + 8)
        uint64_t x1_6
        
        if (*(GetClient() + 0x5068) != 0)
            x1_6 = zx.q(*(ActiveGame() + 0x30))
        else
            x1_6 = 0x18
        
        void* x23_1 = arg2 + (x23_2 << 2)
        int32_t x0_12
        int128_t v0_5
        int128_t v1_3
        int128_t v2_2
        x0_12, v0_5, v1_3, v2_2 = IsLandscape(zx.q(x24_3), x1_6)
        int32_t temp0_1 = x0_12 & 1
        int32_t x8_4
        
        x8_4 = temp0_1 != 0 ? -1 : 0
        
        v2_2.d = x8_4
        v2_2:4.d = x8_4
        v0_5.q = *x22_1
        
        if (temp0_1 != 0)
            v1_3.d = v11.d
        else
            v1_3.d = v9.d
        
        var_110 = v1_3.d
        v1_3 = *QI
        uint64_t* const x8_5
        
        x8_5 = temp0_1 != 0 ? UI2_TWITTER_LANDSCAPE : UI2_TWITTER_CARD
        
        XAsset* x24_2 = *x8_5
        int128_t v0_6 = vrev64_s32(v0_5)
        double v0_9 = vadd_f32(v8, vmul_f32(vbsl_s8(v2_2, v12, v10), vcvt_f32_s32(v0_6), 0))
        *(&var_110 | 4) = v1_3
        var_fc_1.q = v0_9
        int32_t var_f4_2 = 0
        UI2Begin("twitter-card", x23_1, x24_2, &var_e0, &var_e0, 0, 0, false)
        UI2SetTransform(zx.q(*x23_1), &var_110)
        DeclareTwitterCard(zx.q(*x23_1), x22_1, *(arg1 + 0x90))
        UI2UpdateRoot(zx.q(*x23_1), false, 0f)
        UI2Begin("twitter-card", x23_1, x24_2, &var_e0, &var_e0, 0, 0, false)
        UI2SetTransform(zx.q(*x23_1), &var_110)
        DeclareTwitterCard(zx.q(*x23_1), x22_1, *(arg1 + 0x90))
        result = UI2UpdateRoot(zx.q(*x23_1), false, 0f)
        i_1 += 1
        x22_1 += 0x40
    while (i_1 s< sx.q(*(arg1 + 0x109c)))

return result
