// 函数: _Z23CalcPlayerHandTransform9UI2HandleR6DomLoc
// 地址: 0xaf6ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
uint64_t x0 = zx.q(*(arg2 + 8))
int32_t x10 = *(gDomClient + 0x38)
uint64_t x1

if (x10 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x10)

if (x0.d != x1.d)
    return UI2GetTableTransform(
        UI2GetHandle(zx.q(x21), "tbl_opponents", PlayerWhoToSeat(x0, x1) - 1), "tbl_hand", 0, 
        nullptr) __tailcall

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i_1
int64_t x9_1
void* i

if (x9.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    x9_1 = i_1 + x9 * 0x21d8
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x9_1)
            goto label_af7090

int32_t x23_1

if (x9.d == 0 || i == 0xffffffff)
label_af7090:
    x23_1 = 0
else
    do
        if (*(i + 0x2c) == 3 && *(i + 0x58) == x0.d && *(i + 0x5c) == 0x3ea && *(i + 0x60) == 0)
            if (i == 0)
                goto label_af7090
            
            int32_t j = *(i + 0x70)
            
            if (j == 0)
                goto label_af7090
            
            x23_1 = 0
            
            do
                void* x10_3 = i_1 + mulu.dp.d(j & 0xffff, 0x21d8)
                j = *(x10_3 + 0x213c)
                
                if (*(x10_3 + 0xc0) != 0)
                    x23_1 += 1
            while (j != 0)
            
            break
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x9_1)
            goto label_af7090
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x9_1)
                goto label_af7090
        
        x23_1 = 0
    while (i != 0xffffffff)

if ((PileIsCurved(x0, 0x3ea) & 1) == 0)
    int32_t x22 = *(arg2 + 0xc)
    int32_t x0_10
    
    if (*(arg2 + 0x40) == "tbl_player_hand" && *(arg2 + 0x38) == x21 && *(arg2 + 0x48) == x22
            && *(arg2 + 0x50) == 0)
        x0_10 = UI2Exists(zx.q(*(arg2 + 0x70)))
    
    uint64_t x0_11
    
    if (*(arg2 + 0x40) != "tbl_player_hand" || *(arg2 + 0x38) != x21 || *(arg2 + 0x48) != x22
            || *(arg2 + 0x50) != 0 || (x0_10 & 1) == 0)
        x0_11 = UI2GetHandle(zx.q(x21), "tbl_player_hand", x22)
        *(arg2 + 0x70) = x0_11.d
        
        if (x0_11.d != 0)
            *(arg2 + 0x40) = "tbl_player_hand"
            *(arg2 + 0x38) = x21
            *(arg2 + 0x48) = x22
            *(arg2 + 0x50) = 0
    else
        x0_11 = zx.q(*(arg2 + 0x70))
    
    return UI2GetTransform(x0_11) __tailcall

int32_t x0_7

if (*(arg2 + 0x40) == "tbl_player_hand" && *(arg2 + 0x38) == x21 && *(arg2 + 0x48) == 0
        && *(arg2 + 0x50) == 0)
    x0_7 = UI2Exists(zx.q(*(arg2 + 0x70)))

uint64_t x0_8

if (*(arg2 + 0x40) != "tbl_player_hand" || *(arg2 + 0x38) != x21 || *(arg2 + 0x48) != 0
        || *(arg2 + 0x50) != 0 || (x0_7 & 1) == 0)
    x0_8 = UI2GetHandle(zx.q(x21), "tbl_player_hand", 0)
    *(arg2 + 0x70) = x0_8.d
    
    if (x0_8.d != 0)
        *(arg2 + 0x40) = "tbl_player_hand"
        *(arg2 + 0x38) = x21
        *(arg2 + 0x48) = 0
        *(arg2 + 0x50) = 0
else
    x0_8 = zx.q(*(arg2 + 0x70))

UI2GetTransform(x0_8)
int32_t x0_13 = NearestAspectRatio()
float v0_1 = *QUARTER_PI
int64_t v8
float v1_2
float v2_2
float v3_2

if (x0_13 == 0)
    if (x23_1 s>= 2)
        v3_2 = float.s(x23_1)
        v0_1 = v0_1 * fconvert.s(0.25f)
        v2_2 = v0_1 * fconvert.s(5f)
        
        if (not(v0_1 * v3_2 > v2_2))
            v2_2 = v0_1 * float.s(x23_1 - 1)
        
        v1_2 = float.s(*(arg2 + 0xc)) / (v3_2 + fconvert.s(-1f))
        v0_1 = v2_2 * fconvert.s(-0.5f)
        
        if (v1_2 <= 0f)
            v8.d = float.s(0x44fa0000)
        else
            v2_2 = v2_2 * fconvert.s(0.5f)
            
            if (v1_2 >= fconvert.s(1f))
                v8.d = float.s(0x44fa0000)
                v0_1 = v2_2
            else
                v0_1 = v0_1 + (v2_2 - v0_1) * v1_2
                v8.d = float.s(0x44fa0000)
    else
        v0_1 = 0f
        v8.d = float.s(0x44fa0000)
else if (x23_1 s>= 2)
    v3_2 = float.s(x23_1)
    v0_1 = v0_1 / fconvert.s(6f)
    v2_2 = v0_1 * fconvert.s(5f)
    
    if (not(v0_1 * v3_2 > v2_2))
        v2_2 = v0_1 * float.s(x23_1 - 1)
    
    v1_2 = float.s(*(arg2 + 0xc)) / (v3_2 + fconvert.s(-1f))
    v0_1 = v2_2 * fconvert.s(-0.5f)
    
    if (v1_2 <= 0f)
        v8.d = float.s(0x453b8000)
    else
        v2_2 = v2_2 * fconvert.s(0.5f)
        
        if (v1_2 >= fconvert.s(1f))
            v8.d = float.s(0x453b8000)
            v0_1 = v2_2
        else
            v0_1 = v0_1 + (v2_2 - v0_1) * v1_2
            v8.d = float.s(0x453b8000)
else
    v0_1 = 0f
    v8.d = float.s(0x453b8000)
float cosp
float sinp
int64_t result = sincosf(&sinp, &cosp, v0_1 * fconvert.s(0.5f))
float cosp_1 = cosp
float sinp_1 = sinp
int32_t var_90
int64_t v14
v14.d = var_90
int64_t v12
v12.d = *QI
int64_t v11
v11.d = *(QI + 4)
int64_t v13
v13.d = *(QI + 0xc)
float var_98
float v25_2 = var_98 * var_98
float var_9c
float v26_2 = var_9c * var_98
float var_94
float v27_2 = v14.d f* var_94
float v28_2 = v14.d f* var_98
float v29_2 = var_9c * var_94
float v30_2 = var_98 * var_94
int64_t v15
v15.d = sinp_1 * *VZ
float v5_4 = sinp_1 * *(VZ + 4)
float v4_4 = sinp_1 * *(VZ + 8)
float v24_2 = var_9c * var_9c
float v31_2 = v14.d f* var_9c
float var_f0 = v8.d f* *(VY + 4)
float v22_2 = v14.d f* v14.d
float v0_3 = v13.d f* v13.d
int64_t v9
v9.d = v12.d f* v12.d
float var_a8 = v8.d f* *VY
float var_a4 = v8.d f* *(VY + 8)
int64_t v10
v10.d = v11.d f* v11.d
v8.d = v22_2 + v24_2
float v2_4 = v26_2 - v27_2
float v7_2 = v26_2 + v27_2
float var_c4 = v30_2 - v31_2
float var_c0 = v28_2 + v29_2
sinp_1 = v29_2 - v28_2
v26_2 = v9.d f+ v0_3
v0_3 = v0_3 f- v9.d
v28_2 = v15.d f* v5_4
v29_2 = cosp_1 * v4_4
float sinp_2 = sinp_1
float var_b8 = v7_2
sinp_1 = v31_2 + v30_2
v30_2 = v8.d f- v25_2
v8.d = v26_2 f- v10.d
v9.d = v10.d f+ v0_3
v10.d = v0_3 f- v10.d
float v23_2 = cosp_1 * cosp_1
v27_2 = v15.d f* v15.d
float var_100 = v28_2 - v29_2
float var_108 = v28_2 + v29_2
float v20_2 = v23_2 + v27_2
float v16_2 = v23_2 - v27_2
v0_3 = cosp_1 * v5_4
v23_2 = v15.d f* v4_4
float sinp_3 = sinp_1
float var_b0 = v2_4
v24_2 = v22_2 - v24_2
float var_118 = v0_3 + v23_2
float var_114 = v23_2 - v0_3
v0_3 = v5_4 * v4_4
v23_2 = cosp_1 f* v15.d
v26_2 = var_94 * var_94
float v3_5 = *(QI + 8)
float var_11c = v0_3 - v23_2
float var_110 = v23_2 + v0_3
float var_cc = v30_2 - v26_2
float var_c8 = v24_2 + v25_2 - v26_2
float var_d0 = v24_2 - v25_2 + v26_2
float cosp_3 = v11.d f* v13.d
sinp_1 = v12.d f* v3_5
v0_3 = v11.d f* v3_5
v2_4 = v12.d f* v13.d
float v17_2 = float.s(0xc4320000)
v25_2 = float.s(0xc3e78000)
float v19_2 = sinp_1 - cosp_3
v7_2 = v0_3 + v2_4
v24_2 = v0_3 - v2_4
float var_ec = v19_2
float var_e8 = v7_2
float var_12c = v19_2 * v25_2 + v7_2 * v17_2
v7_2 = v0_3 + v2_4 + v2_4 - v0_3
v27_2 = sinp_1 + cosp_3
v2_4 = sinp_1 + cosp_3 + cosp_3
cosp_3 = v12.d f* v11.d
v0_3 = v3_5 f* v13.d
sinp_1 = v2_4 - sinp_1
v2_4 = cosp_3 - v0_3
v19_2 = cosp_3 + v0_3
v0_3 = cosp_3 + v0_3 + v0_3 - cosp_3
cosp_3 = v5_4 * v5_4
v20_2 = v20_2 - cosp_3
float v21_2 = v16_2 + cosp_3
cosp_3 = v16_2 - cosp_3
v16_2 = v4_4 * v4_4
float var_128 = cosp_3 + v16_2
cosp_3 = cosp_1
v30_2 = v3_5 * v3_5
cosp_1 = v8.d f- v30_2
v8.d = v10.d f- v30_2
v22_2 = v9.d f- v30_2
v23_2 = v30_2 f+ v10.d
float var_10c = v2_4
float var_124 = v20_2 - v16_2
float var_120 = v21_2 - v16_2
v29_2 = cosp_3 f* v8.d
v20_2 = cosp_3 * v7_2
v26_2 = cosp_3 * sinp_1
v28_2 = cosp_3 * v0_3
v10.d = v4_4 * v0_3
v31_2 = v5_4 * v0_3
v9.d = v15.d f* v0_3
cosp_3 = v15.d f* v7_2
v16_2 = v15.d f* v8.d
v21_2 = v5_4 * sinp_1
v30_2 = v4_4 * sinp_1
v0_3 = v5_4 f* v8.d
v8.d = v4_4 f* v8.d
v4_4 = v4_4 * v7_2
v5_4 = v5_4 * v7_2
v7_2 = v2_4 * v17_2
v2_4 = float.s(0x43678000)
float var_e0_1 = v2_4
v17_2 = cosp_1 * v2_4
v2_4 = float.s(0x43b20000)
v17_2 = v7_2 - v17_2
float var_e4 = v2_4
float cosp_2 = cosp_1
float var_f8 = v19_2
v15.d = v15.d f* sinp_1
sinp_1 = 0f
v7_2 = v19_2 * v25_2 - v22_2 * v2_4
cosp_1 = var_12c - v23_2 * sinp_1
v2_4 = v16_2 + v20_2
v0_3 = v4_4 + v0_3 + v26_2
v17_2 = v17_2 - v27_2 * sinp_1
v20_2 = v24_2 * sinp_1
sinp_1 = v31_2 + v2_4 - v30_2
v2_4 = v15.d f+ v8.d f+ v28_2 - v5_4
float var_104 = v22_2
v4_4 = cosp_1 - var_a4
v5_4 = var_128 * v4_4
v4_4 = v4_4 + v4_4
v15.d = var_f0
v17_2 = v17_2 - var_a8
float var_f4 = v23_2
cosp_1 = var_124 * v17_2
v17_2 = v17_2 + v17_2
v7_2 = v7_2 - v20_2 f- v15.d
cosp_3 = v29_2 - cosp_3 - v21_2 f- v10.d
v20_2 = var_120 * v7_2
v7_2 = v7_2 + v7_2
v0_3 = v0_3 f- v9.d
float v28_3 = v24_2
v5_4 = v5_4 + var_114 * v17_2 + var_110 * v7_2
v23_2 = v12.d f* cosp_3 + v13.d f* sinp_1
v16_2 = var_118 * v4_4 + cosp_1 + var_100 * v7_2
v7_2 = v13.d f* cosp_3 - v12.d f* sinp_1 - v11.d f* v0_3 - v3_5 * v2_4
v24_2 = v11.d f* cosp_3 + v13.d f* v0_3
v4_4 = var_11c * v4_4 + v20_2 + var_108 * v17_2
v20_2 = v11.d f* v2_4
cosp_3 = v12.d f* v0_3 + v3_5 * cosp_3 + v13.d f* v2_4
v2_4 = v3_5 * sinp_1 + v24_2 - v12.d f* v2_4
v0_3 = v20_2 + v23_2 - v3_5 * v0_3
sinp_1 = cosp_3 - v11.d f* sinp_1
v4_4 = *(V0 + 4) + v4_4
cosp_1 = v13.d f* v2_4
v26_2 = v11.d f* v7_2
cosp_3 = *V0 + v16_2
v5_4 = *(V0 + 8) + v5_4
v16_2 = v13.d f* v7_2
v19_2 = v13.d f* sinp_1
v20_2 = v3_5 * sinp_1
v21_2 = v11.d f* sinp_1
sinp_1 = v12.d f* sinp_1
v22_2 = v12.d f* v0_3
v23_2 = v12.d f* v7_2
v24_2 = v12.d f* v2_4
v25_2 = v11.d f* v2_4
v2_4 = v3_5 * v2_4
v7_2 = v3_5 * v7_2
v12.d = cosp_2
v10.d = var_f8
v8.d = var_10c
v3_5 = v3_5 * v0_3 + v26_2 + cosp_1
v17_2 = v13.d f* v0_3
v0_3 = v11.d f* v0_3
v7_2 = v24_2 + v7_2 + v19_2
v11.d = var_ec
sinp_1 = v3_5 - sinp_1
v3_5 = v5_4 + v5_4
v19_2 = v4_4 + v4_4
v0_3 = v7_2 - v0_3
v7_2 = v27_2 * v3_5
v9.d = var_f4
cosp_1 = v12.d f* cosp_3
cosp_3 = cosp_3 + cosp_3
v16_2 = v16_2 - v22_2 - v25_2 - v20_2
v2_4 = v21_2 + v23_2 + v17_2 - v2_4
v3_5 = v28_3 * v3_5 + var_104 * v4_4 + v10.d f* cosp_3
v4_4 = v9.d f* v5_4 + v11.d f* cosp_3 + var_e8 * v19_2
v25_2 = var_98 * v16_2
v26_2 = var_94 * v2_4
v7_2 = v7_2 + cosp_1 + v8.d f* v19_2 + var_e0_1
v3_5 = v3_5 + var_e4
v19_2 = var_94 * v0_3
v4_4 = v4_4 + 0f
v5_4 = v14.d f* v16_2 - var_9c * v2_4
v21_2 = v12.d f* v7_2
v7_2 = v7_2 + v7_2
cosp_3 = var_9c * v16_2 + v14.d f* v2_4
cosp_1 = v9.d f* v4_4
v4_4 = v4_4 + v4_4
v2_4 = var_9c * sinp_1 + var_94 * v16_2 + v14.d f* v0_3 - var_98 * v2_4
v16_2 = var_104 * v3_5 + v10.d f* v7_2
v3_5 = v3_5 + v3_5
int32_t* entry_x8
entry_x8[2] = v26_2 + v25_2 + v14.d f* sinp_1 - var_9c * v0_3
entry_x8[3] = v2_4
v2_4 = v28_3 * v4_4 + v16_2
v5_4 = v5_4 - var_98 * sinp_1
sinp_1 = var_98 * v0_3 + cosp_3 - var_94 * sinp_1
v0_3 = var_a8 + v27_2 * v4_4 + v21_2 + v8.d f* v3_5
v3_5 = var_a4 + cosp_1 + v11.d f* v7_2 + var_e8 * v3_5
v4_4 = var_d0 * v3_5
v3_5 = v3_5 + v3_5
v2_4 = v15.d f+ v2_4
v7_2 = var_cc * v0_3
v0_3 = v0_3 + v0_3
v17_2 = var_c8 * v2_4
v2_4 = v2_4 + v2_4
float var_a0
float var_88
entry_x8[6] = var_88 + var_a0 * (var_c4 * v3_5 + v17_2 + var_b8 * v0_3)
float var_84
entry_x8[7] = var_84 + var_a0 * (v4_4 + sinp_2 * v0_3 + sinp_3 * v2_4)
entry_x8[4] = v5_4 - v19_2
float var_8c
entry_x8[5] = var_8c + var_a0 * (var_c0 * v3_5 + v7_2 + var_b0 * v2_4)
*entry_x8 = var_a0
entry_x8[1] = sinp_1
return result
