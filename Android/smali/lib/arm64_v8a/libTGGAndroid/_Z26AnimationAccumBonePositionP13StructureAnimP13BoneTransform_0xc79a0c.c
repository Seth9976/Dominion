// 函数: _Z26AnimationAccumBonePositionP13StructureAnimP13BoneTransform
// 地址: 0xc79a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8

if (*(arg1 + 0x18) == 0)
    return 

int64_t* i_1 = *(arg1 + 8)
StructureAnim* x19_1 = arg1

if (i_1 == 0)
    return 

v8.d = 0f
int64_t* i = i_1

do
    void* x9_1 = *i
    int32_t x10_1 = *(x9_1 + 0x28)
    bool z_1
    
    if (x10_1 != 2)
        z_1 = x10_1 == 4
    else
        z_1 = true
    
    if (not(z_1))
        v8.d = v8.d f+ *(x9_1 + 0x1c)
    
    i = i[1]
while (i != 0)

if (i_1 == 0)
    return 

v9.d = fconvert.s(1f)

do
    AnimSet* x21_1 = *i_1
    i_1 = i_1[1]
    int32_t x5_1
    arg1, x5_1 = AnimSetGetClip(x19_1, x21_1)
    int32_t x8_1 = *(x21_1 + 0x28)
    
    if (x8_1 != 2)
        float v1_1
        
        if (x8_1 == 4)
            v1_1 = v9.d
        else
            v1_1 = *(x21_1 + 0x1c) f/ v8.d
        
        AnimDefAccumBonePosition(arg1, x21_1 + 0x34, *(x21_1 + 0xb4), zx.q(*(x21_1 + 0xb8)), arg2, 
            x5_1, *(x21_1 + 4), v1_1)
while (i_1 != 0)

AnimSet** i_2 = *(x19_1 + 8)

if (i_2 == 0)
    return 

do
    AnimSet* x21_2 = *i_2
    i_2 = i_2[1]
    int32_t x3_2
    arg1, x3_2 = AnimSetGetClip(x19_1, x21_2)
    
    if (*(x21_2 + 0x28) == 2)
        AnimDefAccumDifferenceBonePosition(*(x19_1 + (sx.q(*(x21_2 + 0x30)) << 4) + 0x30), arg1, 
            arg2, x3_2, *(x21_2 + 4), *(x21_2 + 0x2c))
while (i_2 != 0)
