// 函数: _Z10UI2DrawIntR3UI2
// 地址: 0x102a968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *(arg1 + 0x1710)

if (v0.d f== 0f)
    return 

UI2& x19_1 = arg1
*gNumDrawItems += 1
int32_t x8_1 = *(arg1 + 0x1724)
int32_t var_b4_1
int128_t v2

if (x8_1 == 0)
    var_b4_1 = 0
else
    int32_t x0_1
    x0_1, v0, v2 = Draw3DLayer(zx.q(*(x19_1 + 0x1728)) | zx.q(x8_1 << 0x10))
    var_b4_1 = x0_1

int32_t x8_2 = data_24b4978
int128_t var_b0 = data_24b4968
int32_t var_a0_1 = x8_2
v0.d = *(x19_1 + 0x16b0)
int64_t v1 = *(arg1 + 0x175c)
v2.q = *(arg1 + 0x16c4)
v0.d = v1.d f* v0.d
v0:4.d = v1:4.d f* v0.d
int128_t v0_1 = vadd_f32(v2, v0)
int64_t var_78 = v2.q
int64_t var_70_1 = v0_1.q
int32_t x8_3 = *(x19_1 + 0x1450)
int32_t x8_4
int64_t x8_6
int32_t x21_1

if (x8_3 != 1)
    if (x8_3 == 4)
        x8_4 = 3
        goto label_102aa30
    
    if (x8_3 == 3)
        x8_4 = 0xc
        goto label_102aa30
    
    x21_1 = 0
    x8_6 = *(x19_1 + 0x1638)
    
    if (x8_6 != 0)
        goto label_102aa68
    
    goto label_102ab00

x8_4 = -1
label_102aa30:
int32_t var_68_1 = x8_4
IntersectClipRect(&var_78)
int128_t var_90
v0_1 = var_90
x21_1 = 1
var_b0 = v0_1
int32_t var_80
int32_t var_a0_2 = var_80
x8_6 = *(x19_1 + 0x1638)

if (x8_6 == 0)
label_102ab00:
    uint64_t x8_13 = zx.q(*(x19_1 + 0x167c) - 1)
    
    if (x8_13.d u<= 0xa)
        switch (x8_13)
            case 0
                UI2DrawImageSlow(x19_1, false)
            case 1
                operator==(x19_1 + 0x1650, "tbl_global_play")
            case 2
                if (zx.d(*(arg1 + 0x15b4)) == 0 || zx.d(*(arg1 + 0x1859)) == 0)
                    UI2DrawText(x19_1)
                else
                    UITextBox::Draw()
            case 4
                UI2DrawImageSlow(x19_1, false)
                UI2DrawText(x19_1)
            case 6
                UI2DrawModel(x19_1)
            case 7
                Flanim* x0_23 = *(x19_1 + 0x13c8)
                
                if (x0_23 != 0)
                    FlanimDraw(x0_23)
            case 8
                ParticleSystem* x0_25
                x0_25, v0_1 = ParticleTryToGet(zx.q(*(x19_1 + 0x13d8)))
                
                if (x0_25 != 0)
                    ParticleDraw(x0_25)
            case 9
                uint32_t x0_26 = *(x19_1 + 0x13c0)
                
                if (x0_26 != 0)
                    SpineDraw(x0_26, *(x19_1 + 0x1630))
            case 0xa
                UI2DrawQuadloop(x19_1)
    
    goto label_102aa70

label_102aa68:
int32_t x0_4
x0_4, v0_1 = x8_6(x19_1, v0_1)

if ((x0_4 & 1) == 0)
label_102aa70:
    uint64_t x20_2 = zx.q(*(x19_1 + 0x1970))
    
    if (x20_2.d != 0)
        uint64_t x8_7 = zx.q(*(x19_1 + 0x153c))
        
        if (x8_7.d u> 4)
            pthread_kill(pthread_self(), 6)
            return IsEditorAsset(XNoReturn()) __tailcall
        
        switch (x8_7)
            case 0
                uint64_t x24_1 = 0
                bool cond:1_1
                
                do
                    uint64_t x8_11 = zx.q(*(x19_1 + (x24_1 << 0x20 s>> 0x1e) + 0x1870))
                    int64_t x9_4 = *gUI2
                    v0_1.d = *(x9_4 + x8_11 * 0x19a8 + 0x1710)
                    
                    if (not(v0_1.d f== 0f))
                        UI2DrawInt(x9_4 + x8_11 * 0x19a8)
                    
                    cond:1_1 = x20_2.d == x24_1.d + 1
                    x24_1 = zx.q(x24_1.d + 1)
                while (not(cond:1_1))
            case 1
                uint64_t x23_3 = zx.q(*(x19_1 + 0x1500))
                
                if (x23_3.d s>= 1)
                    uint64_t x24_3 = zx.q(*(x19_1 + 0x14fc))
                    
                    if (x24_3.d s>= 1)
                        bool cond:3_1
                        
                        do
                            int64_t fp_2 = 0
                            
                            do
                                int64_t x9_9 = sx.q(*(x19_1 + 0x1970))
                                int64_t x8_25
                                uint64_t x12_6
                                
                                if (x9_9.d == 0)
                                label_102acfc:
                                    x12_6 = 0
                                    x8_25 = *gUI2
                                else
                                    int64_t x11_5 = fp_2 + (x23_3 - 1) * x24_3
                                    int64_t i_5 = x9_9 & 0xffffffff
                                    
                                    if (x11_5 s< x9_9)
                                        x12_6 = zx.q(*(x19_1 + (x11_5 << 2) + 0x1870))
                                        x8_25 = *gUI2
                                    
                                    if (x11_5 s>= x9_9
                                            || *(x8_25 + (x12_6 & 0xffff) * 0x19a8 + 0x1658)
                                            != x11_5.d)
                                        if (i_5.d s< 1)
                                            goto label_102acfc
                                        
                                        x8_25 = *gUI2
                                        void* __offset(UI2, 0x1870) x12_7 = x19_1 + 0x1870
                                        int64_t i_3 = i_5
                                        int64_t i
                                        
                                        do
                                            int32_t x14_4 = *x12_7
                                            
                                            if (*(x8_25 + zx.q(x14_4.w) * 0x19a8 + 0x1658)
                                                    == x11_5.d)
                                                x12_6 = zx.q(x14_4)
                                                goto label_102ad94
                                            
                                            i = i_3
                                            i_3 -= 1
                                            x12_7 += 4
                                        while (i != 1)
                                        goto label_102ad98
                                    
                                label_102ad94:
                                    
                                    if (x12_6.d == 0)
                                    label_102ad98:
                                        
                                        if (i_5.d s< 1)
                                            goto label_102acfc
                                        
                                        x12_6 = zx.q(*(x19_1 + 0x1870))
                                        
                                        if (*(x8_25 + x12_6 * 0x19a8 + 0x1658) != 0)
                                            int64_t x9_11 = (x9_9 & 0xffffffff) - 1
                                            int16_t* x10_12 = x19_1 + 0x1874
                                            
                                            do
                                                if (x9_11 == 0)
                                                    goto label_102acfc
                                                
                                                x12_6 = zx.q(*x10_12)
                                                x10_12 = &x10_12[2]
                                                x9_11 -= 1
                                            while (*(x8_25 + x12_6 * 0x19a8 + 0x1658) != 0)
                                        
                                        x8_25 = *gUI2
                                
                                UI2DrawInt(x8_25 + mulu.dp.d(x12_6.d & 0xffff, 0x19a8))
                                fp_2 += 1
                            while (fp_2 != x24_3)
                            
                            cond:3_1 = x23_3 s<= 1
                            x23_3 -= 1
                        while (not(cond:3_1))
            case 2
                pthread_kill(pthread_self(), 6)
                return IsEditorAsset(XNoReturn()) __tailcall
            case 3
                int32_t x23_1 = *(x19_1 + 0x1500)
                
                if (x23_1 s>= 1)
                    int32_t x24_2 = *(x19_1 + 0x14fc)
                    
                    if (x24_2 s>= 1)
                        int32_t x25_1 = 0
                        
                        do
                            int32_t fp_1 = 0
                            
                            do
                                uint64_t i_4 = zx.q(*(x19_1 + 0x1970))
                                int32_t x8_17
                                
                                if (*(x19_1 + 0x151c) == 1)
                                    x8_17 = x23_1 + not.d(x25_1)
                                else
                                    x8_17 = x25_1
                                
                                int64_t x8_15
                                uint64_t x11_3
                                
                                if (i_4.d == 0)
                                label_102ab84:
                                    x11_3 = 0
                                    x8_15 = *gUI2
                                else
                                    int32_t x10_6 = x24_2 + not.d(fp_1) + x8_17 * x24_2
                                    
                                    if (i_4.d s> x10_6)
                                        x11_3 = zx.q(*(x19_1 + (sx.q(x10_6) << 2) + 0x1870))
                                        x8_15 = *gUI2
                                    
                                    if (i_4.d s<= x10_6
                                            || *(x8_15 + (x11_3 & 0xffff) * 0x19a8 + 0x1658)
                                            != x10_6)
                                        if (i_4.d s< 1)
                                            goto label_102ab84
                                        
                                        x8_15 = *gUI2
                                        void* __offset(UI2, 0x1870) x11_4 = x19_1 + 0x1870
                                        uint64_t i_2 = i_4
                                        uint64_t i_1
                                        
                                        do
                                            int32_t x13_1 = *x11_4
                                            
                                            if (*(x8_15 + zx.q(x13_1.w) * 0x19a8 + 0x1658) == x10_6)
                                                x11_3 = zx.q(x13_1)
                                                goto label_102ac2c
                                            
                                            i_1 = i_2
                                            i_2 -= 1
                                            x11_4 += 4
                                        while (i_1 != 1)
                                        goto label_102ac30
                                    
                                label_102ac2c:
                                    
                                    if (x11_3.d == 0)
                                    label_102ac30:
                                        
                                        if (i_4.d s< 1)
                                            goto label_102ab84
                                        
                                        x11_3 = zx.q(*(x19_1 + 0x1870))
                                        
                                        if (*(x8_15 + x11_3 * 0x19a8 + 0x1658) != 0)
                                            int64_t x9_6 = i_4 - 1
                                            int16_t* x10_9 = x19_1 + 0x1874
                                            
                                            do
                                                if (x9_6 == 0)
                                                    goto label_102ab84
                                                
                                                x11_3 = zx.q(*x10_9)
                                                x10_9 = &x10_9[2]
                                                x9_6 -= 1
                                            while (*(x8_15 + x11_3 * 0x19a8 + 0x1658) != 0)
                                        
                                        x8_15 = *gUI2
                                
                                UI2DrawInt(x8_15 + mulu.dp.d(x11_3.d & 0xffff, 0x19a8))
                                fp_1 += 1
                            while (fp_1 != x24_2)
                            
                            x25_1 += 1
                        while (x25_1 != x23_1)
            case 4
                uint64_t x23_2 = x20_2 << 0x20
                bool cond:0_1
                
                do
                    UI2DrawInt(*gUI2 + zx.q(*
                        (x19_1 + ((x23_2 + (zx.q(not.d(x23_2.d)) << 0x20)) s>> 0x20 << 2) + 0x1870))
                        * 0x19a8)
                    cond:0_1 = x20_2.d != x23_2.d + 1
                    x23_2 = (x23_2 & 0xffffffff00000000) | zx.q(x23_2.d + 1)
                while (cond:0_1)

if (*(x19_1 + 0x1530) != 0)
    int32_t x8_28 = *(x19_1 + 0x1978)
    
    if (x8_28 != 0)
        UI2DrawInt(*gUI2 + zx.q(x8_28.w) * 0x19a8)
    
    int32_t x8_30 = *(x19_1 + 0x197c)
    
    if (x8_30 != 0)
        UI2DrawInt(*gUI2 + zx.q(x8_30.w) * 0x19a8)
    
    int32_t x8_32 = *(x19_1 + 0x1980)
    
    if (x8_32 != 0)
        UI2DrawInt(*gUI2 + zx.q(x8_32.w) * 0x19a8)
    
    int32_t x8_34 = *(x19_1 + 0x1984)
    
    if (x8_34 != 0)
        UI2DrawInt(*gUI2 + zx.q(x8_34.w) * 0x19a8)
    
    int32_t x8_36 = *(x19_1 + 0x1988)
    
    if (x8_36 != 0)
        UI2DrawInt(*gUI2 + zx.q(x8_36.w) * 0x19a8)

if (*(x19_1 + 0x15f8) != 0)
    int32_t x8_39 = *(x19_1 + 0x1978)
    
    if (x8_39 != 0)
        UI2DrawInt(*gUI2 + zx.q(x8_39.w) * 0x19a8)

arg1 = *(x19_1 + 0x13d0)

if (arg1 != 0)
    ParticleDraw(arg1)

if (x21_1 != 0)
    SetClipRect(&var_b0)

if (*(x19_1 + 0x1724) != 0)
    Draw3DLayer(zx.q(var_b4_1))
