// 函数: _Z21StructureIntersectRayRK3RayR22StructureIntersectData
// 地址: 0xfd4de4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Structure* i = nullptr
int32_t x22 = 0
int128_t v4
v4.d = 0f
Structure** x23 = **gpGameData
label_fd4e20:
Structure* i_1

if (i == 0)
    i_1 = *x23
    i = i_1
else
    i_1 = *x23
    i += 0x98

int128_t v0
int128_t v2

for (; i u< i_1 + zx.q(x23[1].d) * 0x98; i += 0x98)
    int32_t j = *(i + 0x90)
    
    if (j u>> 0x10 != 0)
        int64_t* x8_2 = *arg2
        
        if (x8_2 != 0)
            int32_t* x8_3 = *x8_2
            
            if (x8_3 != 0)
                while (*x8_3 != j)
                    x8_3 = *(x8_3 + 8)
                    
                    if (x8_3 == 0)
                        goto label_fd4e8c
                
                goto label_fd4e20
        
    label_fd4e8c:
        int64_t x8_4 = *(arg2 + 8)
        int128_t var_50_1 = v4
        
        if (x8_4 != 0)
            int32_t x0_1
            x0_1, v0, v2, v4 = x8_4(arg2)
            v4 = var_50_1
            
            if ((x0_1 & 1) == 0)
                goto label_fd4e20
        
        float var_34
        int32_t x0_3
        x0_3, v0, v2, v4 = StructureSpecificIntersectRay(i, arg1, *(arg2 + 0x18), &var_34)
        
        if ((x0_3 & 1) == 0)
            v4 = var_50_1
            goto label_fd4e20
        
        v0.d = var_34
        v4 = var_50_1
        
        if (x22 != 0 && v0.d f>= v4.d)
            goto label_fd4e20
        
        x22 = *(i + 0x90)
        v4 = v0
        goto label_fd4e20

if (x22 != 0)
    v0.q = *(arg1 + 0xc)
    v2.q = *arg1
    float v3 = *(arg1 + 8)
    v0.d = v0.d f* v4.d
    v0:4.d = v0:4.d f* v4.d
    float v1 = v4.d f* *(arg1 + 0x14)
    *(arg2 + 0x1c) = vadd_f32(v0, v2)
    *(arg2 + 0x24) = v1 + v3
    *(arg2 + 0x28) = x22

return zx.q(x22 != 0 ? 1 : 0)
