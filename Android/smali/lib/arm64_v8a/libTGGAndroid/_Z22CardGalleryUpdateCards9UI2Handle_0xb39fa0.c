// 函数: _Z22CardGalleryUpdateCards9UI2Handle
// 地址: 0xb39fa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = RectScreen()
int32_t var_b8 = v0
int32_t var_b4 = v1
int32_t var_b0 = v2
int32_t var_ac = v3
UI2SetState(zx.q(x20), UIS_GAME, 0xffffffff, 0)
GetKingdomConfig(GetActiveGameSetup())
int64_t x9 = 0
int32_t x22 = *(gCardGallery + 0xc)
char const* const x23 = "OOOOOO@OOOOCOOF"
int64_t x24_1
int32_t i

do
    x24_1 = x9
    i = *(&data_7ef624 + x9 * 0x1044)
    x9 = x24_1 + 1
    x23 = &x23[0x1044]
while (i != *(gCardGallery + 8))
int64_t x19 = 0
int32_t i_5 = 0
int32_t x25 = 0
void* var_4cf0
uint64_t x25_1

while (true)
    int32_t x9_2 = *(&data_7ef624 + x24_1 * 0x1044 + muls.dp.d(x19.d, 0x104) + (sx.q(i_5) << 2) + 8)
    int64_t x8_3 = sx.q(x19.d)
    
    if (x9_2 == 0)
        i_5 = 0
        
        if (*(&data_7ef624 + x24_1 * 0x1044 + x8_3 * 0x104 + 0x10c) == 0)
            x25_1 = 0
            break
    
    if (x9_2 == 0)
        x19 = x8_3 + 1
    else
        x19 = x8_3
    
    int64_t fp_1 = x19 * 0x104
    int64_t x26_1 = zx.q(i_5) << 0x20 s>> 0x1e
    uint64_t x8_7 = 0
    int64_t x9_4
    
    if ((IsLandscape(zx.q(*(&data_7ef624 + x24_1 * 0x1044 + fp_1 + x26_1 + 8)), 0x18) & 1) != 0)
        x9_4 = 9
    else
        x9_4 = 8
    
    while (true)
        if (*(x23 + fp_1 + x26_1 + (x8_7 << 2)) == 0)
            if (x25 != x22)
                i_5 = 0
                x8_7 = 0
                x19 = zx.q(x19.d + 1)
            
            break
        
        x8_7 += 1
        
        if (x9_4 == x8_7)
            x8_7 = zx.q(x9_4.d)
            break
    
    if (x25 == x22)
        x25_1 = zx.q(*(&data_7ef624 + x24_1 * 0x1044 + muls.dp.d(x19.d, 0x104) + 4))
        void* x9_9 = &(&data_7ef624 + x24_1 * 0x1044 + muls.dp.d(x19.d, 0x104) + 4)[sx.q(i_5) + 1]
        i_5 = x8_7.d
        var_4cf0 = x9_9
        break
    
    x25 += 1
    i_5 += x8_7.d

int32_t x0_5 = GetCardsetZoom(*(gDomClient + 0x82e28))
int32_t i_1

if (x0_5 s< i_5 && x0_5 != 0xffffffff)
    i_1 = *(var_4cf0 + (sx.q(x0_5) << 2))

if (x0_5 s>= i_5 || x0_5 == 0xffffffff || i_1 == 0)
    void* x0_7 = GetActiveProfile()
    uint64_t x8_11 = zx.q(*(x0_7 + 0x6454))
    
    if (x8_11.d s< 1)
        i_1 = 0
    label_b3a268:
        void* x0_8 = GetActiveProfile()
        uint64_t x8_13 = zx.q(*(x0_8 + 0x6f48))
        
        if (x8_13.d s>= 1)
            if (*(x0_8 + 0x6458) == i_1)
                UI2SetState(zx.q(x20), &data_1830690, 0xffffffff, 0)
            else
                int64_t x12_4 = 0
                int64_t x11_4
                
                do
                    x11_4 = x12_4
                    
                    if (x8_13 - 1 == x12_4)
                        break
                    
                    x12_4 = x11_4 + 1
                while (*(x0_8 + 0x645c + (x11_4 << 2)) != i_1)
                
                if (x11_4 + 1 u< x8_13)
                    UI2SetState(zx.q(x20), &data_1830690, 0xffffffff, 0)
    else if (*(x0_7 + 0x5964) == 0)
        UI2SetState(zx.q(x20), &data_1830690, 0xffffffff, 0)
    else
        int64_t x11_3 = 0
        int64_t x12_3
        
        do
            x12_3 = x11_3
            
            if (x8_11 - 1 == x11_3)
                break
            
            x11_3 = x12_3 + 1
        while (*(x0_7 + 0x5968 + (x12_3 << 2)) != 0)
        
        i_1 = 0
        
        if (x12_3 + 1 u>= x8_11)
            goto label_b3a268
        
        UI2SetState(zx.q(x20), &data_1830690, 0xffffffff, 0)
else
    data_182a734 = i_1
    void* x0_6 = GetActiveProfile()
    uint64_t x8_9 = zx.q(*(x0_6 + 0x6454))
    
    if (x8_9.d s< 1)
        goto label_b3a268
    
    if (*(x0_6 + 0x5964) == i_1)
        UI2SetState(zx.q(x20), &data_1830690, 0xffffffff, 0)
    else
        int64_t x12_1 = 0
        int64_t x11_2
        
        do
            x11_2 = x12_1
            
            if (x8_9 - 1 == x12_1)
                break
            
            x12_1 = x11_2 + 1
        while (*(x0_6 + 0x5968 + (x11_2 << 2)) != i_1)
        
        if (x11_2 + 1 u>= x8_9)
            goto label_b3a268
        
        UI2SetState(zx.q(x20), &data_1830690, 0xffffffff, 0)

uint64_t x0_10 = zx.q(data_182a734)
char var_4c90[0xbf0]

if (x0_10.d != 0)
    if ((*(DomDefGet(x0_10, 0x18) + 0xc8) & 0x3028047200800) != 0)
        UI2SetState(zx.q(x20), &data_18306c0, 0xffffffff, 0)
    
    int32_t i_2 = data_182a734
    void* x0_13 = GetActiveProfile()
    uint64_t x8_15 = zx.q(*(x0_13 + 0x6f48))
    
    if (x8_15.d s>= 1)
        int64_t x11_5
        
        if (*(x0_13 + 0x6458) != i_2)
            int64_t x12_6 = 0
            
            do
                x11_5 = x12_6
                
                if (x8_15 - 1 == x12_6)
                    break
                
                x12_6 = x11_5 + 1
            while (*(x0_13 + 0x645c + (x11_5 << 2)) != i_2)
        
        if (*(x0_13 + 0x6458) == i_2 || x11_5 + 1 u< x8_15)
            UI2SetState(zx.q(x20), &data_1830648, 0xffffffff, 0)
    
    int32_t i_3 = data_182a734
    void* x0_15 = GetActiveProfile()
    uint64_t x8_16 = zx.q(*(x0_15 + 0x6454))
    
    if (x8_16.d s>= 1)
        int64_t x11_6
        
        if (*(x0_15 + 0x5964) != i_3)
            int64_t x12_8 = 0
            
            do
                x11_6 = x12_8
                
                if (x8_16 - 1 == x12_8)
                    break
                
                x12_8 = x11_6 + 1
            while (*(x0_15 + 0x5968 + (x11_6 << 2)) != i_3)
        
        if (*(x0_15 + 0x5964) == i_3 || x11_6 + 1 u< x8_16)
            UI2SetState(zx.q(x20), &data_1830660, 0xffffffff, 0)
    
    *(ArtistDefGet(zx.q(*(DomDefGet(zx.q(data_182a734), 0x18) + 0x60))) + 8)
    XString::XString(&var_4c90)
    UI2SetText(zx.q(x20), &data_1830780, &var_4c90, 0xffffffff)
    XString::~XString()
    void* x0_23 = GetActiveProfile()
    uint64_t i_7 = zx.q(*(x0_23 + 0x6454))
    
    if (i_7.d s>= 1)
        int32_t x19_1 = 0
        int32_t x22_1 = 0
        void* x24_2 = x0_23 + 0x5964
        uint64_t i_4
        
        do
            uint64_t x0_24 = zx.q(*x24_2)
            x24_2 += 4
            int32_t x0_25 = IsLandscape(x0_24, 0x18)
            i_4 = i_7
            i_7 -= 1
            x19_1 += not.d(x0_25) & 1
            x22_1 += x0_25 & 1
        while (i_4 != 1)
    
    IsLandscape(zx.q(data_182a734), 0x18)
    XFormatString("(%d/%d)")
    UI2SetText(zx.q(x20), &data_18306d8, &var_4c90, 0xffffffff)
    XString::~XString()

int32_t x0_30

if (data_182abb8 == "tbl_zoom" && data_182a858 == x20)
    x0_30 = UI2Exists(zx.q(data_182a860))

int32_t x21

if (data_182abb8 != "tbl_zoom" || data_182a858 != x20 || (x0_30 & 1) == 0)
    int32_t x0_32 = UI2GetHandle(zx.q(x20), "tbl_zoom", 0)
    x21 = x0_32
    data_182a860 = x0_32
    
    if (x0_32 != 0)
        data_182abb8 = "tbl_zoom"
        data_182a858 = x20
else
    x21 = data_182a860

int32_t x0_34
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1

if (data_182abc0 == "tbl_zoom_landscape" && data_182a868 == x20)
    x0_34, v0_1, v1_1, v2_1, v3_1 = UI2Exists(zx.q(data_182a870))

int128_t var_1a90
int128_t var_1a68
int128_t var_1a58

if (data_182abc0 != "tbl_zoom_landscape" || data_182a868 != x20 || (x0_34 & 1) == 0)
    int32_t x0_36
    x0_36, v0_1, v1_1, v2_1, v3_1 = UI2GetHandle(zx.q(x20), "tbl_zoom_landscape", 0)
    data_182a870 = x0_36
    
    if (x0_36 == 0)
    label_b3a604:
        v0_1 = *(TI + 0x10)
        v2_1 = *TI
        v3_1 = *(TI + 0x10)
        var_1a68 = *TI
        var_1a58 = v0_1
        var_1a90 = v2_1
        int128_t var_1a80_1 = v3_1
    else
        data_182abc0 = "tbl_zoom_landscape"
        data_182a868 = x20
        UI2GetTransform(zx.q(x21))
        v0_1, v1_1, v2_1, v3_1 = UI2GetTransform(zx.q(x0_36))
else
    int32_t x22_2 = data_182a870
    
    if (x22_2 == 0)
        goto label_b3a604
    
    UI2GetTransform(zx.q(x21))
    v0_1, v1_1, v2_1, v3_1 = UI2GetTransform(zx.q(x22_2))

v1_1.d = *(gCardGallery + 0x14)
v2_1.d = 0f
v0_1.d = *PI

if (not(v1_1.d f<= 0f))
    v2_1.d = fconvert.s(1f)
    bool cond:7_1 = v1_1.d f>= v2_1.d
    v2_1 = v0_1
    
    if (not(cond:7_1))
        v2_1.d = v1_1.d f* v1_1.d
        v1_1.d = v1_1.d f+ v1_1.d
        v3_1.d = fconvert.s(3f)
        v1_1.d = v3_1.d f- v1_1.d
        v1_1.d = v2_1.d f* v1_1.d
        v2_1.d = v1_1.d f* v1_1.d
        v1_1.d = v1_1.d f+ v1_1.d
        v1_1.d = v3_1.d f- v1_1.d
        v1_1.d = v2_1.d f* v1_1.d
        v1_1.d = v0_1.d f* v1_1.d
        v2_1.d = 0f
        v2_1.d = v1_1.d f+ v2_1.d

v1_1.d = *TI
v0_1.d = v0_1.d f- v2_1.d
v3_1.d = *HALF_PI
int64_t v8
v8.d = *(TI + 0x14)
int64_t v13
v13.d = *(TI + 0x18)
int32_t var_4cf8 = v1_1.d
v1_1.d = *TWO_PI
int64_t v14
v14.d = *(TI + 0x1c)
int64_t v12
v12.d = fconvert.s(0.5f)
v0_1.d = v1_1.d f- v0_1.d

if (v2_1.d f> v3_1.d)
    v0_1.d = v0_1.d
else
    v0_1.d = v2_1.d

v0_1.d = v0_1.d f* v12.d
float cosp
float sinp
sincosf(&sinp, &cosp, v0_1.d)
int64_t v9
v9.d = cosp
float sinp_1 = sinp
int64_t v15
v15.d = sinp_1 f* *VY
int64_t v11
v11.d = sinp_1 f* *(VY + 4)
int64_t v10
v10.d = sinp_1 f* *(VY + 8)
float v2_3 = RectScreen()
float v3_3 = *(TI + 0xc)
float v5 = *(TI + 0x10)
float v4 = *(TI + 4)
float v17 = *(TI + 8)
float v0_2 = v2_3 f* v12.d
float var_4d00 = v0_2
float v18 = v5 * v5
float v19 = v4 * v4
float v16 = v4 * v17
float v21 = v3_3 * v5
float v7 = v5 * fneg(v3_3)
float v1_3 = v4 * v3_3
float v20 = v17 * v3_3
float v22 = v17 * v5
float v23 = v4 * v5
float v29 = v9.d f* v17
float v30 = v19 + v18
v18 = v18 - v19
v2_3 = v5 * fneg(v4)
float v24 = v9.d f* v5 - v15.d f* v4
float v25 = v16 - v21
v21 = v16 + v21
v12.d = v16 - v7
v7 = v16 + v7
v16 = v17 * v17
float v31 = v9.d f* v3_3
float v6 = v5 * fneg(v17)
float v26 = v9.d f* v4 + v15.d f* v5
v9.d = v1_3 + v22
float v28 = v29 + v11.d f* v5
v29 = v20 - v23
v23 = v20 + v23
float v27 = v20 - v2_3
v2_3 = v20 + v2_3
v20 = v30 - v16
v30 = v16 + v18
v18 = v18 - v16
v16 = v14.d f+ v14.d
v22 = v1_3 - v22
v19 = v31 + v10.d f* v5
v31 = v1_3 + v6
v6 = v1_3 - v6
v1_3 = v16 f* v9.d
v16 = v16 * v29
v29 = v8.d f+ v8.d
v21 = v29 * v21
v22 = v29 * v22
v29 = v13.d f+ v13.d
v9.d = v29 * v25
v24 = v24 - v11.d f* v17
v25 = v10.d f* v17 + v26
v26 = v15.d f* v3_3 + v28
v19 = v11.d f* v4 + v19
v28 = v0_2 + v0_2
float var_4d10 = v1_3
v23 = v29 * v23
v7 = v28 * v7
v28 = v28 * v6
v6 = v3_3 * v3_3
v1_3 = 0f
v20 = v20 - v6
v29 = v30 - v6
v18 = v6 + v18
v22 = v22 + v23
v6 = v10.d f* v3_3
v23 = v11.d f* v3_3
v30 = v10.d f* v4
v10.d = v15.d f* v17
v11.d = v12.d f* v1_3
v12.d = v2_3 * v1_3
v15.d = v24 - v6
v6 = v25 - v23
v23 = v26 - v30
v2_3 = v19 f- v10.d
v19 = v0_2 * v20
v25 = v28 f+ v12.d
v26 = v18 * v1_3
v20 = v8.d f* v20
v24 = v29 * v1_3
v28 = v13.d f* v29
v18 = v14.d f* v18
v13.d = v15.d f* v23
v14.d = v11.d f+ v19
v19 = v6 * v2_3
v11.d = v23 * v2_3
v25 = v25 + v26
v8.d = v15.d f* v6
v26 = v9.d f+ v20
v9.d = v5 f* v15.d
v29 = v15.d f* v15.d
v10.d = v6 * v6
v30 = v6 * v23
v12.d = v15.d f* v2_3
v0_2 = v7 + v24
v28 = v21 + v28
v24 = v22 + v18
v22 = v13.d f+ v19
v13.d = v19 f- v13.d
v21 = v11.d f- v8.d
v19 = v8.d f+ v11.d
v8.d = v5 * v6
v9.d = v9.d f+ v4 * v6
v1_3 = v30 f- v12.d
v18 = v30 f+ v12.d
v30 = v29 f+ v10.d
v29 = v29 f- v10.d
v10.d = v8.d f- v4 f* v15.d
v8.d = v17 f* v15.d
v11.d = v5 * v23 f- v8.d
v12.d = v5 * v2_3 - v3_3 f* v15.d
v5 = *TI
v7 = 0f
float var_4d08 = v1_3
v31 = v31 * v7 f+ v14.d
v0_2 = v27 * v7 + v0_2
v27 = fconvert.s(1f) / v5
v20 = v23 * v23
v14.d = var_4d10 + v26
v26 = v30 - v20
v30 = v10.d f- v3_3 * v23
v10.d = v17 * v6
v10.d = v12.d f- v10.d
v12.d = var_4cf8
v16 = v16 + v28
v28 = v20 + v29
v20 = v29 - v20
v29 = v17 * v23 f+ v9.d
v9.d = fneg(v27)
v23 = v4 * v23
v4 = v4 * v2_3
v12.d = v12.d f* v5
v6 = v3_3 * v6
v3_3 = v3_3 * v2_3
v1_3 = v17 * v2_3
v2_3 = v2_3 * v2_3
v17 = v5 f* v14.d
v8.d = var_1a58.d
v25 = v25 f* v9.d
v31 = v31 f* v9.d
v0_2 = v0_2 f* v9.d
v9.d = var_1a68:4.d
float var_4cf8_1 = v5 * v24 + v7
v4 = v6 + v11.d f- v4
v6 = v23 f+ v10.d
float var_4d10_1 = v5 * v16 + v7
v23 = v0_2 + v0_2
v5 = v0_2 * (v28 - v2_3)
v24 = v26 - v2_3
v26 = v25 + v25
v2_3 = v2_3 + v20
v3_3 = v3_3 + v29
v1_3 = v1_3 + v30
v20 = v31 * v24
v24 = v31 + v31
v22 = v22 * v26
v21 = v21 * v26
v2_3 = v25 * v2_3
v25 = v3_3 * v3_3
v26 = v1_3 * v1_3
v28 = v1_3 * v4
v29 = v3_3 * v6
v30 = v3_3 * v4
v31 = v1_3 * v6
v10.d = v4 * v6
v14.d = v3_3 * v1_3
v15.d = v8.d f* v3_3
v18 = v18 * v24
v24 = v13.d f* v24
v13.d = v9.d f* v1_3
float var_4d00_1 = var_4d00 + v17
v7 = var_4d08 * v23
v19 = v19 * v23
v23 = v28 - v29
v28 = v28 + v29
v29 = v25 + v26
v25 = v25 - v26
v26 = v30 + v31
v30 = v31 - v30
v31 = v10.d f- v14.d
v10.d = v14.d f+ v10.d
v14.d = v9.d f* v3_3
v13.d = v15.d f- v13.d
v15.d = var_1a68:8.d
v16 = v8.d f* v1_3 f+ v14.d
v14.d = var_1a68:0xc.d
v0_2 = v8.d f* v4 + v15.d f* v3_3
v3_3 = v8.d f* v6 + v14.d f* v3_3
v17 = var_1a58:0xc.d
v7 = v20 + v7
v5 = v5 + v18
v18 = v24 + v19
v19 = var_1a58:4.d
v20 = v17 + v17
v24 = v20 * v26
v26 = var_1a58:8.d
v20 = v20 * v31
v31 = v19 + v19
v28 = v31 * v28
v30 = v31 * v30
v31 = v26 + v26
v8.d = v4 * v4
v23 = v31 * v23
v31 = v31 f* v10.d
v29 = v29 f- v8.d
v10.d = v8.d f+ v25
v25 = v25 f- v8.d
v8.d = v15.d f* v4
v8.d = v13.d f- v8.d
v13.d = v14.d f* v4
v4 = v9.d f* v4
v9.d = v9.d f* v6
v0_2 = v9.d f+ v0_2
v9.d = v15.d f* v1_3
var_1a68:8.d = v0_2 - v14.d f* v1_3
var_1a68:0xc.d = v9.d f+ v3_3 - v4
v5 = v21 + v5
v21 = v12.d f* v27
v27 = v14.d f* v6
v9.d = v15.d f* v6
v6 = v6 * v6
v11.d = var_1a68.d
var_1a68.d = v21 f* v11.d
var_1a68:4.d = v13.d f+ v16 f- v9.d
var_1a58.d = v8.d f- v27
var_1a58:4.d = var_4d00_1 + v12.d f* (v22 + v7) + v21 * (v24 + v23 + v19 * (v29 - v6))
var_1a58:8.d = var_4d10_1 + v12.d f* v5 + v21 * (v20 + v28 + v26 * (v10.d f- v6))
var_1a58:0xc.d = var_4cf8_1 + v12.d f* (v2_3 + v18) + v21 * (v30 + v31 + v17 * (v6 + v25))
void var_1a48
int32_t x0_41 = ExistingKingdomCards(&var_1a48, &var_4c90)
int64_t result

if (i_5 == 0)
label_b3b18c:
    
    do
        result = UI2Free(CardsetGetUI(*(gDomClient + 0x82e28), i_5))
        i_5 += 1
    while (i_5 != 9)
else
    int32_t x0_42 = GetCurrentLanguage()
    TranslationString(zx.q(x0_42), 
        LookupTranslationSafe(*(x25_1 * 0x18 + &data_11499a0), zx.q(x0_42)), 
        (0x7f8fffe06 u>> x25_1).b & 1)
    char var_4cb0[0x20]
    XString::XString(&var_4cb0)
    UI2SetText(zx.q(x20), &data_1830708, &var_4cb0, 0xffffffff)
    XString::~XString()
    
    if (i_5 s< 1)
        goto label_b3b18c
    
    v9.d = v3_1.d
    v8.d = v2_1.d
    var_4d00_1.q = zx.q(x0_41)
    var_4cf8_1.q = zx.q(i_5)
    int64_t i_6 = 0
    int32_t fp_2 = 0
    v10.d = fconvert.s(5f)
    v11.d = fconvert.s(1f)
    v12.d = 0f
    var_4d08.q = &var_4c90 | 4
    
    do
        int32_t j_1 = *(var_4cf0 + (i_6 << 2))
        uint64_t x0_53
        void* x9_35
        
        if (j_1 != 0x130c)
            if ((IsLandscape(zx.q(j_1), 0x18) & 1) == 0)
                int32_t x0_59
                
                if (*((i_6 << 6) + 0x1835060) == "tblCards" && *((i_6 << 6) + 0x1835058) == x20
                        && i_6 == zx.q(*((i_6 << 6) + 0x1835068))
                        && *((i_6 << 6) + 0x1835070) == 0)
                    var_4d10_1.q = &(&data_1834458)[i_6 * 0x10]
                    x0_59 = UI2Exists(zx.q(*((i_6 << 6) + 0x1835090)))
                
                if (*((i_6 << 6) + 0x1835060) != "tblCards" || *((i_6 << 6) + 0x1835058) != x20
                        || i_6 != zx.q(*((i_6 << 6) + 0x1835068)) || *((i_6 << 6) + 0x1835070) != 0
                        || (x0_59 & 1) == 0)
                    x0_53 = UI2GetHandle(zx.q(x20), "tblCards", i_6.d)
                    *((i_6 << 6) + 0x1835090) = x0_53.d
                    
                    if (x0_53.d != 0)
                        x9_35 = &(&data_1834458)[i_6 * 0x10]
                        *((i_6 << 6) + 0x1835060) = "tblCards"
                        *((i_6 << 6) + 0x1835058) = x20
                        *(x9_35 + 0xc10) = i_6.d
                        *(x9_35 + 0xc18) = 0
                else
                    x0_53 = zx.q(*(var_4d10_1.q + 0xc38))
            else
                int32_t x0_57
                
                if (*((i_6 << 6) + 0x1835260) == "tblCardsLandscape"
                        && *(&data_1835258 + (i_6 << 6)) == x20
                        && i_6 == zx.q(*((i_6 << 6) + 0x1835268))
                        && *((i_6 << 6) + 0x1835270) == 0)
                    var_4d10_1.q = (i_6 << 6) + 0x1835290
                    x0_57 = UI2Exists(zx.q(*((i_6 << 6) + 0x1835290)))
                
                if (*((i_6 << 6) + 0x1835260) != "tblCardsLandscape"
                        || *(&data_1835258 + (i_6 << 6)) != x20
                        || i_6 != zx.q(*((i_6 << 6) + 0x1835268)) || *((i_6 << 6) + 0x1835270) != 0
                        || (x0_57 & 1) == 0)
                    x0_53 = UI2GetHandle(zx.q(x20), "tblCardsLandscape", i_6.d)
                    *((i_6 << 6) + 0x1835290) = x0_53.d
                    
                    if (x0_53.d != 0)
                        *((i_6 << 6) + 0x1835260) = "tblCardsLandscape"
                        *(&data_1835258 + (i_6 << 6)) = x20
                        *((i_6 << 6) + 0x1835268) = i_6.d
                        *((i_6 << 6) + 0x1835270) = 0
                else
                    x0_53 = zx.q(*var_4d10_1.q)
        else
            int32_t x0_51
            
            if (*((i_6 << 6) + 0x1835060) == "tblCards" && *((i_6 << 6) + 0x1835058) == x20
                    && *((i_6 << 6) + 0x1835068) == 4 && *((i_6 << 6) + 0x1835070) == 0)
                var_4d10_1.q = &(&data_1834458)[i_6 * 0x10]
                x0_51 = UI2Exists(zx.q(*((i_6 << 6) + 0x1835090)))
            
            if (*((i_6 << 6) + 0x1835060) == "tblCards" && *((i_6 << 6) + 0x1835058) == x20
                    && *((i_6 << 6) + 0x1835068) == 4 && *((i_6 << 6) + 0x1835070) == 0
                    && (x0_51 & 1) != 0)
                x0_53 = zx.q(*(var_4d10_1.q + 0xc38))
            else
                x0_53 = UI2GetHandle(zx.q(x20), "tblCards", 4)
                *((i_6 << 6) + 0x1835090) = x0_53.d
                
                if (x0_53.d != 0)
                    x9_35 = &(&data_1834458)[i_6 * 0x10]
                    *((i_6 << 6) + 0x1835060) = "tblCards"
                    *((i_6 << 6) + 0x1835058) = x20
                    *(x9_35 + 0xc10) = 4
                    *(x9_35 + 0xc18) = 0
        UI2GetTransform(x0_53)
        int32_t x0_63
        int128_t v0_3
        int128_t v1_4
        x0_63, v0_3, v1_4 = IsLandscape(zx.q(j_1), 0x18)
        int128_t* x8_53
        
        if ((x0_63 & 1) != 0)
            x8_53 = &var_1a90
        else
            x8_53 = &var_1a68
        
        v1_4 = x8_53[1]
        Cardset* x0_64 = *(gDomClient + 0x82e28)
        int128_t var_4cd0 = *x8_53
        int128_t var_4cc0_1 = v1_4
        UI2Handle* x0_65 = CardsetGetUI(x0_64, i_6.d)
        int64_t var_4cd8 = 0
        int64_t j_2
        
        if (x0_41 s< 1)
        label_b3afb8:
            j_2 = 0
        else
            void* x9_40 = var_4d08.q
            j_2 = var_4d00_1.q
            int64_t j
            
            do
                int32_t x10_13 = *(x9_40 - 4)
                
                if (x10_13 == 1)
                    if (*x9_40 == j_1)
                        j_2 = 1
                        break
                else if (x10_13 == 0)
                    goto label_b3afb8
                
                j = j_2
                j_2 -= 1
                x9_40 += 0x10
            while (j != 1)
        
        var_4cd8:2.b = (j_2.d).b
        void* x19_5 = gCardGallery + (i_6 << 2)
        int32_t x0_67 = CardsetGalleryIsZoomed(*(gDomClient + 0x82e28), i_6.d)
        float v0_4 = *gSecondsPerUpdate
        
        if ((x0_67 & 1) != 0)
            v0_4 = v0_4 f* v10.d
        else
            v0_4 = fneg(v0_4 f* v10.d)
        
        v0_4 = *(x19_5 + 0x18) + v0_4
        float temp0_1 = vmin_f32(v0_4, v11.d)
        
        v0_4 = v0_4 < 0f ? v12.d : temp0_1
        
        *(x19_5 + 0x18) = v0_4
        var_4cd8:4.d = v0_4
        
        if (((fp_2 | (v0_4 == 0f ? 1 : 0)) & 1) == 0)
            void var_a8
            
            if ((TryCardToDLC(zx.q(j_1), &var_a8) & 1) != 0
                    && ProfileDLCState(GameSepcific_GetDlcDef(&var_a8)) == 1)
                UI2SetState(zx.q(x20), &data_1830738, 0xffffffff, 0)
            
            fp_2 = 1
        
        var_4cd8:1.b = ((*(DomDefGet(zx.q(j_1), 0x18) + 0xc8) & 0x3028047200800) == 0 ? 1 : 0).b
        void* x0_76 = GetActiveProfile()
        uint64_t x8_58 = zx.q(*(x0_76 + 0x6454))
        char x8_28
        
        if (x8_58.d s< 1)
        label_b3b0f4:
            void* x0_77 = GetActiveProfile()
            uint64_t x8_59 = zx.q(*(x0_77 + 0x6f48))
            
            if (x8_59.d s< 1)
                x8_28 = 0
            else if (*(x0_77 + 0x6458) == j_1)
                x8_28 = 1
            else
                int64_t x12_12 = 0
                int64_t x11_8
                
                do
                    x11_8 = x12_12
                    
                    if (x8_59 - 1 == x12_12)
                        break
                    
                    x12_12 = x11_8 + 1
                while (*(x0_77 + 0x645c + (x11_8 << 2)) != j_1)
                
                x8_28 = (x11_8 + 1 u< x8_59 ? 1 : 0).b
        else if (*(x0_76 + 0x5964) == j_1)
            x8_28 = 1
        else
            int64_t x12_10 = 0
            int64_t x11_7
            
            do
                x11_7 = x12_10
                
                if (x8_58 - 1 == x12_10)
                    break
                
                x12_10 = x11_7 + 1
            while (*(x0_76 + 0x5968 + (x11_7 << 2)) != j_1)
            
            if (x11_7 + 1 u>= x8_58)
                goto label_b3b0f4
            
            x8_28 = 1
        
        var_4cd8.b = x8_28
        char var_4d30_1 = (v8.d f> v9.d ? 1 : 0).b
        char var_4d38_1 = 0
        int32_t var_4d40_1 = *(gCardGallery + 4)
        result = DeclareCardsetCard(zx.q(j_1), 0x36b1, x0_65, &var_b8, &var_4cb0, &var_4cd0, 
            &var_4cd8, zx.q(*gCardGallery))
        i_6 += 1
    while (i_6 != var_4cf8_1.q)
    
    if (i_5 s<= 8)
        goto label_b3b18c

return result
