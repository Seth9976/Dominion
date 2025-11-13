// 函数: _Z12UI2MakeGroupv
// 地址: 0x103e564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_80 = v15
int64_t v14
int64_t var_78 = v14
int64_t v13
int64_t var_70 = v13
int64_t v12
int64_t var_68 = v12
int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
uint64_t i_2 = zx.q(*(gUI2Editor + 0x704c))

if (i_2.d == 0)
    return 

int32_t x2_1

if (i_2.d s< 1)
    x2_1 = -1
else
    int64_t (* x10_1)() = gUI2Editor + 0x604c
    x2_1 = -1
    uint64_t i
    
    do
        int32_t x11_1 = *x10_1
        x10_1 += 4
        bool z_1
        
        if (x2_1 s<= x11_1)
            z_1 = x2_1 == 0xffffffff
        else
            z_1 = true
        
        if (z_1)
            x2_1 = x11_1
        
        i = i_2
        i_2 -= 1
    while (i != 1)

void* x0_2 = UI2ElementByIndexRec(*gUI2 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8, 
    *(gUI2Editor + 0x6008), x2_1)
int64_t v0_1 = GameGetTimeSimulation()
UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
v9 = UI2PropDynamic<float>::Eval(v0_1.d)
v10 = UI2PropDynamic<float>::Eval(v0_1.d)
int64_t v0_7 = UI2PropDynamic<float>::Eval(v0_1.d)
int32_t v0_9 = UI2PropDynamic<float>::Eval(v0_1.d)
int32_t x8_1 = *(gUI2Editor + 0x704c)
v14.d = v9.d f+ v0_7.d
v15.d = v10.d f+ v0_9
int32_t var_90 = v9.d
int32_t var_8c_1 = v10.d
int32_t var_88_1 = v14.d
int32_t var_84_1 = v15.d

if (x8_1 s> 1)
    int64_t x22_1 = 0
    int64_t i_1
    
    do
        UI2GetIndex(zx.q(*(gUI2Editor + (x22_1 << 2) + 0x6050)))
        int64_t v0_11 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_13 = UI2PropDynamic<float>::Eval(v0_1.d)
        int64_t v0_15 = UI2PropDynamic<float>::Eval(v0_1.d)
        float v0_17 = UI2PropDynamic<float>::Eval(v0_1.d)
        float v1_1 = v0_11.d f+ v0_15.d
        
        if (v9.d f< v0_11.d)
            v9.d = v9.d
        else
            v9.d = v0_11.d
        
        v0_17 = v0_13.d f+ v0_17
        
        if (v14.d f> v1_1)
            v14.d = v14.d
        else
            v14.d = v1_1
        
        i_1 = x22_1 + 2
        
        if (v10.d f< v0_13.d)
            v10.d = v10.d
        else
            v10.d = v0_13.d
        
        x22_1 += 1
        
        if (v15.d f> v0_17)
            v15.d = v15.d
        else
            v15.d = v0_17
    while (i_1 s< sx.q(*(gUI2Editor + 0x704c)))
    var_90 = v9.d
    int32_t var_8c_2 = v10.d
    int32_t var_88_2 = v14.d
    int32_t var_84_2 = v15.d

UI2* x0_15
int128_t v0_18
x0_15, v0_18 = UI2EditorCreateItemAt(6, "newGroup", &var_90, zx.q(*(x0_2 + 0x1690)))
v0_18.q = var_90.q
int32_t x19_2 = *(x0_15 + 0x1690)
double var_38 = vneg_f32(v0_18)
UI2Move(1, x0_15, &var_38)
*(gUI2Editor + 0x604c) = x19_2
*(gUI2Editor + 0x704c) = 1
UI2CreateUndoCheckpoint(true)
UI2Free(gUI2Editor + 0x6010)
