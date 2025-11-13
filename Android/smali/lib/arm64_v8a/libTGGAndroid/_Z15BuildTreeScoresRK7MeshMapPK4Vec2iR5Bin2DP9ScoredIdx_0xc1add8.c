// 函数: _Z15BuildTreeScoresRK7MeshMapPK4Vec2iR5Bin2DP9ScoredIdx
// 地址: 0xc1add8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int32_t x22
int32_t var_98
float v0
float v1
int64_t v8
int64_t v9
int64_t v10
int64_t v11

if (arg3 s<= 1)
    int64_t i = 0
    x22 = 0
    void* __offset(MeshMap, 0x8) x23_1 = arg1 + 8
    v8.d = fconvert.s(1f)
    v9.d = fconvert.s(0.5f)
    v10.d = fconvert.s(-0.5f)
    v11.d = fconvert.s(-0.25f)
    
    do
        v12.d = *(x23_1 - 8)
        v13.d = *(x23_1 - 4)
        var_98 = v12.d
        int32_t var_94_2 = v13.d
        
        if (not(*x23_1 <= float.s(0x3dcccccd)) && not(v13.d f> float.s(0x3f79999a))
                && not(v12.d f< float.s(0x3ccccccd)) && not(v12.d f> float.s(0x3ffccccd))
                && not(v13.d f< float.s(0x3ccccccd))
                && (Bin2DQuery(arg4, &var_98, 0, float.s(0x3ca3d70a)) & 1) == 0
                && (Bin2DQuery(arg4, &var_98, 2, float.s(0x3d99999a)) & 1) == 0)
            v0 = v8.d f- v12.d
            v1 = v9.d f- v13.d
            void* x8_7 = arg5 + (sx.q(x22) << 3)
            *x8_7 = i.d
            v0 = v0 * v0 + v1 * v1
            x22 += 1
            v1 = *arg2 f- v12.d
            float v2_2 = *(arg2 + 4) f- v13.d
            v0 = v0 - (v1 * v1 + v2_2 * v2_2)
            *(x8_7 + 4) = v0
            *(x8_7 + 4) = v0 + fabs(*x23_1 f+ v10.d) f* v11.d
        
        i += 1
        x23_1 += 0xc
    while (i != 0x4000)
else
    int64_t i_1 = 0
    x22 = 0
    v8.d = fconvert.s(1f)
    v9.d = fconvert.s(0.5f)
    v10.d = fconvert.s(-0.5f)
    v11.d = fconvert.s(-0.25f)
    
    do
        int32_t* x19_1 = arg1 + i_1 * 0xc
        v12.d = *x19_1
        v13.d = x19_1[1]
        var_98 = v12.d
        int32_t var_94_1 = v13.d
        
        if (not(x19_1[2] f<= float.s(0x3dcccccd)) && not(v13.d f> float.s(0x3f79999a))
                && not(v12.d f< float.s(0x3ccccccd)) && not(v12.d f> float.s(0x3ffccccd))
                && not(v13.d f< float.s(0x3ccccccd))
                && (Bin2DQuery(arg4, &var_98, 0, float.s(0x3ca3d70a)) & 1) == 0
                && (Bin2DQuery(arg4, &var_98, 2, float.s(0x3d99999a)) & 1) == 0)
            void* __offset(Vec2, 0xc) x10_1 = arg2 + 0xc
            int64_t j_1 = zx.q(arg3) - 1
            void* x8_4 = arg5 + (sx.q(x22) << 3)
            *x8_4 = i_1.d
            v0 = *arg2 f- v12.d
            v1 = *(arg2 + 4) f- v13.d
            v0 = fneg(v0 * v0 + v1 * v1)
            *(x8_4 + 4) = v0
            float v2_1
            int64_t j
            
            do
                v1 = *(x10_1 - 4) f- v12.d
                v2_1 = *x10_1 f- v13.d
                v1 = fneg(v1 * v1 + v2_1 * v2_1)
                
                if (not(v0 >= v1))
                    v0 = v1
                    *(x8_4 + 4) = v1
                
                j = j_1
                j_1 -= 1
                x10_1 += 8
            while (j != 1)
            v1 = v8.d f- v12.d
            v2_1 = v9.d f- v13.d
            v0 = v1 * v1 + v2_1 * v2_1 + v0
            *(x8_4 + 4) = v0
            x22 += 1
            *(x8_4 + 4) = v0 + fabs(x19_1[2] f+ v10.d) f* v11.d
        
        i_1 += 1
    while (i_1 != 0x4000)
return zx.q(x22)
