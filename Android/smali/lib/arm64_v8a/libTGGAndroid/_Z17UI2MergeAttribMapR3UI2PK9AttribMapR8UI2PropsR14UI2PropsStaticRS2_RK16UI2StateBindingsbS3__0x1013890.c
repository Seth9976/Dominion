// 函数: _Z17UI2MergeAttribMapR3UI2PK9AttribMapR8UI2PropsR14UI2PropsStaticRS2_RK16UI2StateBindingsbS3_
// 地址: 0x1013890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t var_64 = 0

if (*arg5 s< 1)
    return 

int32_t i = 0
float var_c70[0x100]
AttribMap* var_870

do
    AttribMap const* var_c80_1 = arg8
    UI2PropsStatic& var_c98_1 = arg4
    void* __offset(UI2, 0xc18) var_c90_1 = arg1 + 0xc18
    char var_c88_1 = arg7 & 1
    UI2Props& var_ca0_1 = arg3
    UI2MergeAttribute(arg5, zx.q(i), arg1, arg2, arg6, &var_64, &var_870, &var_c70)
    i += 1
while (i s< *arg5)

uint64_t x26_2 = zx.q(var_64)

if (x26_2.d s< 1)
    return 

AttribMap** x27_1 = &var_870
float* x28_2 = &var_c70
v8.d = fconvert.s(1f)

while (true)
    float v0_1 = *x28_2
    AttribMap* x5_1 = *x27_1
    
    if (v0_1 f!= v8.d)
        UI2MergeAttribMapFractional(arg1, arg2, arg3, arg4, arg1 + 0xc18, x5_1, arg6, arg7 & 1, 
            v0_1)
        x27_1 = &x27_1[1]
        uint64_t temp0_1 = x26_2
        x26_2 -= 1
        x28_2 = &x28_2[1]
        
        if (temp0_1 == 1)
            break
    else
        UI2MergeAttribMap(arg1, arg2, arg3, arg4, x5_1, arg6, false, nullptr)
        x27_1 = &x27_1[1]
        uint64_t temp1_1 = x26_2
        x26_2 -= 1
        x28_2 = &x28_2[1]
        
        if (temp1_1 == 1)
            break
