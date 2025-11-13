// 函数: _Z17TransformFromMat4RK4Mat4
// 地址: 0xf63d58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 0x1c)
float v18 = *(arg1 + 0x28)
float v2 = *(arg1 + 0x2c)
float v16 = fconvert.s(1f)
float* entry_x8
entry_x8[5] = *(arg1 + 0xc)
entry_x8[6] = v1
entry_x8[7] = v2
float v0 = *arg1
v1 = *(arg1 + 4)
v2 = *(arg1 + 8)
float v3 = sqrt(v0 * v0 + v1 * v1 + v2 * v2)
*entry_x8 = v3
float v5 = v16 / v3
float v6 = v0 * v5
v0 = v1 * v5
v1 = v2 * v5
float v7 = *(arg1 + 0x14) * v5
v3 = v5 * *(arg1 + 0x20)
float v17 = v5 * v18
v18 = v6 + v7
float v19 = v18 + v17
v2 = *(arg1 + 0x10) * v5
float v4 = *(arg1 + 0x18) * v5
v5 = v5 * *(arg1 + 0x24)

if (not(v19 <= 0f))
    v7 = fconvert.s(0.5f)
    v4 = v5 - v4
    v5 = v2 - v0
    v2 = sqrt(v19 + v16)
    v6 = v7 / v2
    entry_x8[1] = v4 * v6
    entry_x8[2] = (v1 - v3) * v6
    entry_x8[3] = v5 * v6
    entry_x8[4] = v2 * v7
    return 

if (v7 <= v6)
    if (v17 <= v6)
        v2 = v0 + v2
        v4 = v5 - v4
        v5 = fconvert.s(0.5f)
        v0 = sqrt(v6 - (v7 + v17) + fconvert.s(1f))
        v1 = v1 + v3
        v3 = v0 * v5
        
        if (v0 != 0f)
            v5 = v5 / v0
        else
            v5 = v0
        
        entry_x8[1] = v3
        entry_x8[2] = v2 * v5
        entry_x8[3] = v1 * v5
        entry_x8[4] = v4 * v5
        return 
else if (not(v17 > v7))
    v4 = v4 + v5
    v5 = v2 + v0
    v1 = v1 - v3
    v3 = fconvert.s(0.5f)
    v0 = sqrt(v7 - (v6 + v17) + fconvert.s(1f))
    v2 = v0 * v3
    
    if (v0 != 0f)
        v3 = v3 / v0
    else
        v3 = v0
    
    entry_x8[1] = v5 * v3
    entry_x8[2] = v2
    entry_x8[3] = v4 * v3
    entry_x8[4] = v1 * v3
    return 

v0 = v2 - v0
v2 = v1 + v3
v16 = fconvert.s(0.5f)
v3 = sqrt(v17 - v18 + fconvert.s(1f))
v4 = v4 + v5

if (v3 != 0f)
    v5 = v16 / v3
else
    v5 = v3

entry_x8[1] = v2 * v5
entry_x8[2] = v4 * v5
entry_x8[3] = v3 * v16
entry_x8[4] = v0 * v5
