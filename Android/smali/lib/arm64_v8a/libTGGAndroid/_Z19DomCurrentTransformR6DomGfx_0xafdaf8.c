// 函数: _Z19DomCurrentTransformR6DomGfx
// 地址: 0xafdaf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x3b0)
DomGfx& x20 = arg1

if (x9 != 1)
    if (*(x20 + 0x308) == 1)
        goto label_afdb60
    
    goto label_afdb28

*(x20 + 0x430) = x20

if (*(x20 + 0x308) == 1)
label_afdb60:
    *(x20 + 0x388) = x20
    
    if (*(x20 + 0x260) != 1)
        goto label_afdb30
    
    goto label_afdb70

label_afdb28:

if (*(x20 + 0x260) != 1)
label_afdb30:
    
    if (x9 == 1)
        goto label_afdb88
    
    goto label_afdb38

label_afdb70:
*(x20 + 0x2e0) = x20
int128_t v0
int128_t v1
int128_t v2

if (x9 != 1)
label_afdb38:
    
    if (x9 != 0)
        pthread_kill(pthread_self(), 6)
        LocationT<DomLoc>* x0_2
        bool* x1
        x0_2, x1 = XNoReturn()
        return CalcTransform<DomLoc>(x0_2, x1) __tailcall
    
    v0 = *(x20 + 0x448)
    v1 = *(x20 + 0x438)
else
label_afdb88:
    arg1, v0, v1, v2 = CalcUITransform_Int(x20 + 0x3b8, nullptr)
    int32_t var_40
    v0.d = var_40
    v1.d = *TI
    int128_t var_30
    
    if (v0.d f!= v1.d)
    label_afdc18:
        *(x20 + 0x3d0) = var_40.o
        *(x20 + 0x3e0) = var_30
        v1 = var_40.o
        v0 = var_30
    else
        v0.d = var_30:4.d
        v1.d = *(TI + 0x14)
        
        if (v0.d f!= v1.d)
            goto label_afdc18
        
        v0.d = var_30:8.d
        v1.d = *(TI + 0x18)
        
        if (v0.d f!= v1.d)
            goto label_afdc18
        
        v0.d = var_30:0xc.d
        v1.d = *(TI + 0x1c)
        
        if (v0.d f!= v1.d)
            goto label_afdc18
        
        v0.d = var_30.d
        v1.d = *(TI + 0x10)
        
        if (v0.d f!= v1.d)
            goto label_afdc18
        
        int32_t var_3c
        v0.d = var_3c
        v1.d = *(TI + 4)
        
        if (v0.d f!= v1.d)
            goto label_afdc18
        
        int32_t var_38
        v0.d = var_38
        v1.d = *(TI + 8)
        
        if (v0.d f!= v1.d)
            goto label_afdc18
        
        int32_t var_34
        v0.d = var_34
        v1.d = *(TI + 0xc)
        
        if (not(v0.d f== v1.d))
            goto label_afdc18
        
        v0.d = *(x20 + 0x3d0)
        void* __offset(DomGfx, 0x3d0) x8_2
        
        if (v0.d f== 0f)
            x8_2 = &data_7afde0
        else
            x8_2 = x20 + 0x3d0
        
        v0 = *(x8_2 + 0x10)
        v1 = *x8_2

int128_t* entry_x8
*entry_x8 = v1
entry_x8[1] = v0

if (*(x20 + 0x21d0) != *(gDomClient + 0x1f8c0))
    return 

v0.q = *(entry_x8 + 0x14)
v1.d = *(entry_x8 + 0x1c)
v2.q = *(gDomClient + 0x1f8c4)
v1.d = v1.d f+ 0f
*(entry_x8 + 0x14) = vadd_f32(v2, v0)
*(entry_x8 + 0x1c) = v1.d
