// 函数: _Z21UI2ClickActiveElement9UI2Handle
// 地址: 0x102b7f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_70 = v12
int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
int32_t x19 = arg1
int64_t (* const x9_3)()
int64_t (* const x11_1)()

if (*(gUI2Editor + 0x704c) != 1)
label_102b84c:
    UI2EditorSyncSelection(zx.q(x19))
    void* x8_2 = *gUI2 + mulu.dp.d(x19 & 0xffff, 0x19a8)
    *(gUI2Editor + 0x604c) = *(x8_2 + 0x1690)
    *(gUI2Editor + 0x704c) = 1
    uint64_t i_3 = zx.q(*(gUI2Editor + 0x6000))
    
    if (i_3.d s>= 1)
        x9_3 = gUI2Editor
        x11_1 = gUI2Editor
        uint64_t i
        
        do
            if (*x11_1 == x8_2)
                goto label_102b8d4
            
            i = i_3
            i_3 -= 1
            x11_1 += 0x18
        while (i != 1)
else
    if ((AppIsKeyDown(0) & 1) != 0)
        goto label_102b84c
    
    if ((AppIsKeyDown(0) & 1) != 0)
        goto label_102b84c
    
    int32_t var_68
    void* result = GetCursorPosition(&var_68)
    int32_t i_4 = *(gUI2Editor + 0x604c)
    int64_t x8_12
    
    if (i_4 s>= 1)
        v8.d = var_68
        int32_t var_64
        v9.d = var_64
        XAsset* x21_1 = *(gUI2Editor + 0x6008)
        v10.d = *V20
        v11.d = *(V20 + 4)
        v12.d = 0f
        UI2* x22_1 = *gUI2 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8
        int32_t i_1
        
        do
            i_1 = i_4
            i_4 -= 1
            result = UI2ElementByIndexRec(x22_1, x21_1, i_4)
            void* result_1 = result
            
            while (zx.d(*(result_1 + 0x15)) == 0)
                if (zx.d(*(result_1 + 0x16)) != 0)
                    break
                
                result_1 = *(result_1 + 0x17d0)
                
                if (result_1 == 0)
                    float v1_2 = *(result + 0x16c0)
                    float v3_2 = *(result + 0x16b4)
                    float v5_2 = *(result + 0x16b8)
                    float v6_2 = *(result + 0x16bc)
                    float v0_2 = *(result + 0x16b0)
                    float v22_2 = v1_2 * v1_2
                    float v23_2 = v3_2 * v3_2
                    float v21_2 = v5_2 * v5_2
                    float v2_2 = v11.d f* v0_2
                    float v20_2 = v6_2 * v6_2
                    float v17_2 = v3_2 * v5_2
                    float v24_2 = v1_2 * v6_2
                    float v4_2 = v10.d f* v0_2
                    float v16_2 = v17_2 - v24_2
                    float v19_2 = v22_2 + v23_2 - v21_2 - v20_2
                    float v7_2 = *(result + 0x16c4)
                    float v25_2 = v0_2 f* v12.d
                    v25_2 = v25_2 + v25_2
                    float v18_2 = v25_2 * (v1_2 * v5_2 + v3_2 * v6_2)
                    
                    if (v7_2 + v18_2 + v4_2 * v19_2 + (v2_2 + v2_2) * v16_2 f> v8.d)
                        goto label_102b968
                    
                    v3_2 = v5_2 * v6_2 - v1_2 * v3_2
                    v5_2 = v22_2 - v23_2 + v21_2 - v20_2
                    v6_2 = *(result + 0x175c) * v0_2
                    v17_2 = v17_2 + v24_2
                    v1_2 = *(result + 0x16c8)
                    v0_2 = *(result + 0x1760) * v0_2
                    v3_2 = v25_2 * v3_2
                    
                    if (v1_2 + v3_2 + (v6_2 + v6_2) * v17_2 + v0_2 * v5_2 f< v9.d)
                        goto label_102b968
                    
                    if (v7_2 + v18_2 + v6_2 * v19_2 + (v0_2 + v0_2) * v16_2 f< v8.d)
                        goto label_102b968
                    
                    if (v1_2 + v3_2 + (v4_2 + v4_2) * v17_2 + v2_2 * v5_2 f> v9.d)
                        goto label_102b968
                    
                    int32_t x8_8 = *(result + 0x19a0)
                    
                    if (x8_8 == 0)
                        goto label_102baec
                    
                    *(gUI2Editor + 0x604c) = *(*gUI2 + zx.q(x8_8.w) * 0x19a8 + 0x1690)
                    x8_12 = sx.q(*(gUI2Editor + 0x88060))
                    goto label_102bbc0
            
        label_102b968:
        while (i_1 s> 1)
    
label_102baec:
    
    if (x19 == 0)
        if ((zx.d(*(gUI2Editor + 0x7056)) | zx.d(*(gUI2Editor + 0x7054))) != 0)
            return result
        
        *(gUI2Editor + 0x704c) = 0
        x8_12 = sx.q(*(gUI2Editor + 0x88060))
    label_102bbc0:
        return memcpy(gUI2Editor + x8_12 * 0x1020 + 0x6040, gUI2Editor + 0x6048, 0x1018)
    
    UI2EditorSyncSelection(zx.q(x19))
    void* i_2 = *gUI2 + mulu.dp.d(x19 & 0xffff, 0x19a8)
    *(gUI2Editor + 0x604c) = *(i_2 + 0x1690)
    *(gUI2Editor + 0x704c) = 1
    uint64_t x10_3 = zx.q(*(gUI2Editor + 0x6000))
    
    if (x10_3.d s>= 1)
        int64_t (* const x11_3)() = gUI2Editor
        
        while (*x11_3 != i_2)
            uint64_t temp1_1 = x10_3
            x10_3 -= 1
            x11_3 += 0x18
            
            if (temp1_1 == 1)
                goto label_102b8bc
        
        *(gUI2Editor + 0x7050) = *(x11_3 + 0xc)
        return memcpy(gUI2Editor + sx.q(*(gUI2Editor + 0x88060)) * 0x1020 + 0x6040, 
            gUI2Editor + 0x6048, 0x1018)

label_102b8bc:
pthread_kill(pthread_self(), 6)
x9_3, x11_1 = XNoReturn()
label_102b8d4:
*(x9_3 + 0x7050) = *(x11_1 + 0xc)
return memcpy(x9_3 + sx.q(*(x9_3 + 0x88060)) * 0x1020 + 0x6040, x9_3 + 0x6048, 0x1018) __tailcall
