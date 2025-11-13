// 函数: _Z29GLDupCheck_glUniformMatrix4fviiPK4Mat4
// 地址: 0xf8a29c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_v0
int32_t entry_v1
int32_t entry_v2
int32_t entry_v3
int32_t entry_v4
int32_t entry_v5
int32_t entry_v6
int32_t entry_v7

if (arg2 s>= 1)
    uint64_t i_1 = zx.q(arg2)
    void var_3ff0
    void* x9_1 = &var_3ff0
    void* __offset(Mat4, 0x20) x10_1 = arg3 + 0x20
    uint64_t i
    
    do
        entry_v0 = *(x10_1 - 0x20)
        entry_v1 = *(x10_1 - 0x1c)
        entry_v2 = *(x10_1 - 0x10)
        entry_v3 = *(x10_1 - 0xc)
        entry_v4 = *x10_1
        entry_v5 = *(x10_1 + 4)
        entry_v6 = *(x10_1 + 0x10)
        entry_v7 = *(x10_1 + 0x14)
        int32_t v16 = *(x10_1 - 0x18)
        int32_t v17 = *(x10_1 - 0x14)
        int32_t v18 = *(x10_1 - 8)
        int32_t v19 = *(x10_1 - 4)
        int32_t v20 = *(x10_1 + 8)
        int32_t v21 = *(x10_1 + 0xc)
        int32_t v22 = *(x10_1 + 0x18)
        int32_t v23 = *(x10_1 + 0x1c)
        i = i_1
        i_1 -= 1
        *(x9_1 - 0x20) = entry_v0
        *(x9_1 - 0x1c) = entry_v2
        *(x9_1 - 0x18) = entry_v4
        *(x9_1 - 0x14) = entry_v6
        *(x9_1 - 0x10) = entry_v1
        *(x9_1 - 0xc) = entry_v3
        *(x9_1 - 8) = entry_v5
        *(x9_1 - 4) = entry_v7
        *x9_1 = v16
        *(x9_1 + 4) = v18
        *(x9_1 + 8) = v20
        *(x9_1 + 0xc) = v22
        *(x9_1 + 0x10) = v17
        *(x9_1 + 0x14) = v19
        *(x9_1 + 0x18) = v21
        *(x9_1 + 0x1c) = v23
        x9_1 += 0x40
        x10_1 += 0x40
    while (i != 1)

void var_4010
return glUniformMatrix4fv(arg1, arg2, 0, &var_4010, entry_v0, entry_v1, entry_v2, entry_v3, 
    entry_v4, entry_v5, entry_v6, entry_v7)
