// 函数: _Z11ToTransformRK11UITransform
// 地址: 0xae8f2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v0 = *arg1
int32_t* entry_x8
entry_x8[7] = 0
float v1 = fconvert.s(1f)
*(entry_x8 + 0x14) = v0
int64_t v3
v3.d = *(arg1 + 0x20)
v0.d = *(arg1 + 0x24)
float v2 = fconvert.s(0.5f)
bool cond:0 = v3.d f< 0f
int64_t v4 = *VZ
v3.d = v0.d f+ v1
v0.d = v1 f- v0.d
v0.d = v0.d f* v2
v1 = sqrt(v3.d f* v2)
v0.d = sqrt(v0.d)
v3.d = v4.d f* v0.d
v3:4.d = v4:4.d f* v0.d
v0.d = v0.d f* *(VZ + 8)

if (cond:0)
    v1 = fneg(v1)

*(entry_x8 + 4) = v3
entry_x8[3] = v0.d
entry_x8[4] = v1
v0.d = *(arg1 + 0xc)
*entry_x8 = v0.d
