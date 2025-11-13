// 函数: _Z10UI2DoClickv
// 地址: 0x102bcbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_60 = v12
int64_t v11
int64_t var_58 = v11
int64_t v10
int64_t var_50 = v10
int64_t v9
int64_t var_48 = v9
int64_t v8
int64_t var_40 = v8

if (*(gUI2Editor + 0x704c) != 1 || (AppIsKeyDown(0).d & 1) != 0 || (AppIsKeyDown(0).d & 1) != 0)
    return 

int32_t var_68
GetCursorPosition(&var_68)
int32_t i_1 = *(gUI2Editor + 0x604c)
int64_t x8_7

if (i_1 s>= 1)
    v8.d = var_68
    int32_t var_64
    v9.d = var_64
    XAsset* x20_1 = *(gUI2Editor + 0x6008)
    v10.d = *V20
    v11.d = *(V20 + 4)
    v12.d = 0f
    UI2* x21_1 = *gUI2 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8
    int32_t i
    
    do
        i = i_1
        i_1 -= 1
        void* x0 = UI2ElementByIndexRec(x21_1, x20_1, i_1)
        void* x8_2 = x0
        
        while (zx.d(*(x8_2 + 0x15)) == 0)
            if (zx.d(*(x8_2 + 0x16)) != 0)
                break
            
            x8_2 = *(x8_2 + 0x17d0)
            
            if (x8_2 == 0)
                float v1_1 = *(x0 + 0x16c0)
                float v3_1 = *(x0 + 0x16b4)
                float v5_1 = *(x0 + 0x16b8)
                float v6_1 = *(x0 + 0x16bc)
                float v0_1 = *(x0 + 0x16b0)
                float v22_1 = v1_1 * v1_1
                float v23_1 = v3_1 * v3_1
                float v21_1 = v5_1 * v5_1
                float v2_1 = v11.d f* v0_1
                float v20_1 = v6_1 * v6_1
                float v17_1 = v3_1 * v5_1
                float v24_1 = v1_1 * v6_1
                float v4_1 = v10.d f* v0_1
                float v16_1 = v17_1 - v24_1
                float v19_1 = v22_1 + v23_1 - v21_1 - v20_1
                float v7_1 = *(x0 + 0x16c4)
                float v25_1 = v0_1 f* v12.d
                v25_1 = v25_1 + v25_1
                float v18_1 = v25_1 * (v1_1 * v5_1 + v3_1 * v6_1)
                
                if (v7_1 + v18_1 + v4_1 * v19_1 + (v2_1 + v2_1) * v16_1 f> v8.d)
                    goto label_102bd5c
                
                v3_1 = v5_1 * v6_1 - v1_1 * v3_1
                v5_1 = v22_1 - v23_1 + v21_1 - v20_1
                v6_1 = *(x0 + 0x175c) * v0_1
                v17_1 = v17_1 + v24_1
                v1_1 = *(x0 + 0x16c8)
                v0_1 = *(x0 + 0x1760) * v0_1
                v3_1 = v25_1 * v3_1
                
                if (v1_1 + v3_1 + (v6_1 + v6_1) * v17_1 + v0_1 * v5_1 f< v9.d)
                    goto label_102bd5c
                
                if (v7_1 + v18_1 + v6_1 * v19_1 + (v0_1 + v0_1) * v16_1 f< v8.d)
                    goto label_102bd5c
                
                if (v1_1 + v3_1 + (v4_1 + v4_1) * v17_1 + v2_1 * v5_1 f> v9.d)
                    goto label_102bd5c
                
                int32_t x8_3 = *(x0 + 0x19a0)
                
                if (x8_3 == 0)
                    goto label_102bef4
                
                *(gUI2Editor + 0x604c) = *(*gUI2 + zx.q(x8_3.w) * 0x19a8 + 0x1690)
                x8_7 = sx.q(*(gUI2Editor + 0x88060))
                goto label_102bf28
        
    label_102bd5c:
    while (i s> 1)

label_102bef4:

if ((zx.d(*(gUI2Editor + 0x7056)) | zx.d(*(gUI2Editor + 0x7054))) != 0)
    return 

*(gUI2Editor + 0x704c) = 0
x8_7 = sx.q(*(gUI2Editor + 0x88060))
label_102bf28:
memcpy(gUI2Editor + x8_7 * 0x1020 + 0x6040, gUI2Editor + 0x6048, 0x1018)
