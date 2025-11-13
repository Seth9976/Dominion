// 函数: _Z34CalcPlayerInPlayTransformNewPlayer9UI2HandleR6DomLoc
// 地址: 0xaf6af0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg1
int32_t x0_1

if (*(arg2 + 0x40) == "tbl_global_play" && *(arg2 + 0x38) == x22 && *(arg2 + 0x48) == 0xffffffff)
    x0_1 = UI2Exists(zx.q(*(arg2 + 0x70)))

int32_t x21

if (*(arg2 + 0x40) != "tbl_global_play" || *(arg2 + 0x38) != x22 || *(arg2 + 0x48) != 0xffffffff
        || (x0_1 & 1) == 0)
    int32_t x0_3 = UI2GetHandle(zx.q(x22), "tbl_global_play")
    x21 = x0_3
    *(arg2 + 0x70) = x0_3
    
    if (x0_3 != 0)
        *(arg2 + 0x40) = "tbl_global_play"
        *(arg2 + 0x38) = x22
        *(arg2 + 0x48) = 0xffffffff
else
    x21 = *(arg2 + 0x70)

void* x23 = *(arg2 + 0x78)
uint64_t x10 = zx.q(*(gDomClient + 0x205e8))
void* i_1
int64_t x10_1
void* i

if (x10.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    x10_1 = i_1 + x10 * 0x21d8
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x10_1)
            goto label_af6c78

int32_t x24_1

if (x10.d == 0 || i == 0xffffffff)
label_af6c78:
    x24_1 = 1
else
    x24_1 = 1
    
    do
        if (*(i + 0x2c) == 3 && *(i + 0x58) == *(gDomClient + 0x205c4) && *(i + 0x5c) == 0x3e9
                && *(i + 0x60) == 0)
            if (i == 0)
                goto label_af6c78
            
            int32_t x8_3 = *(i + 0x88)
            
            x24_1 = x8_3 s> 1 ? x8_3 : 1
            
            break
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x10_1)
            goto label_af6c78
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x10_1)
                goto label_af6c78
    while (i != 0xffffffff)

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = RectScreen()
int64_t v11
v11.d = (v2 - v0) / (v3 - v1)
int32_t x0_5 = IsLandscape(gDomClient + 0x20728, zx.q(*(x23 + 0x98)))
float v0_1
float v1_1
float v2_1
float v3_1
v0_1, v1_1, v2_1, v3_1 = UI2GetRect(zx.q(x21))
float v10 = v2_1
v2_1 = float.s(0x44320000)
float v8 = v0_1
float v9 = v1_1
v0_1 = v3_1 - v1_1
v3_1 = float.s(0x43d70000)
float v4 = float.s(0x3fe10e10)
float v16 = v0_1 / v2_1
float v17 = v0_1 / v3_1
v11.d f- v4
bool cond:1 = v11.d f< v4
bool cond:2 = v11.d f< v4
bool cond:3 = v11.d f< v4
bool cond:4 = v11.d f< v4
float v6 = fconvert.s(10f)
v4 = float.s(0x43e78000)
float v20

v20 = cond:1 ? v16 : v17

float v18 = float.s(0x4437c000)

if (not(cond:2))
    v2_1 = v3_1

v3_1 = float.s(x24_1 - 1) * v6
float v19 = v20 * v4 / v18
v1_1 = float.s(*(arg2 + 0xc))
float v5 = 0f
v6 = v1_1 * v6
v1_1 = v1_1 * v4
float v7 = v19 * v18 * float.s(x24_1)

v18 = cond:3 ? v1_1 : v5

if (cond:4)
    v1_1 = v5

int32_t temp0 = x0_5 & 1

if (temp0 != 0)
    v11.d = v19
else
    v11.d = v20

if (temp0 != 0)
    v2_1 = v4

int64_t v13
v13.d = v3_1 * v16 + v7
int64_t v12
v12.d = fconvert.s(0.5f)
int64_t v14
v14.d = v6 * v16 + v16 * v18 + v17 * v1_1 + v19 * v5
int64_t v15
v15.d = (v0_1 - v2_1 f* v11.d) f* v12.d
int64_t result
float v0_2
int128_t v3_2
result, v0_2, v3_2 = UI2TableGetTop(zx.q(x21))
int32_t* entry_x8
entry_x8[7] = 0
v3_2 = *QI
entry_x8[5] = v0_2 + v14.d f+ (v8 + v10 f- v13.d) f* v12.d
entry_x8[6] = v9 f+ v15.d
*(entry_x8 + 4) = v3_2
*entry_x8 = v11.d
return result
