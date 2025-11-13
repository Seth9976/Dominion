// 函数: _Z16AnimationSetRateP9Structuref
// 地址: 0xc7a4ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
StructureAnim* x19 = *(arg1 + 0x38)

if (x19 == 0)
    return 

AnimSet** i_1 = *(x19 + 8)

if (i_1 == 0)
    return 

v9.d = 0f
AnimSet** i

do
    AnimSet* x20_1 = *i_1
    i = i_1[1]
    arg1 = AnimSetGetClip(x19, x20_1)
    float v0
    
    if (*(x20_1 + 0x24) == 2)
        v0 = v9.d
    else
        v0 = arg2.q.d f/ (float.s(**(arg1 + 0x10)) / *arg1)
    
    i_1 = i
    *x20_1 = v0
while (i != 0)
