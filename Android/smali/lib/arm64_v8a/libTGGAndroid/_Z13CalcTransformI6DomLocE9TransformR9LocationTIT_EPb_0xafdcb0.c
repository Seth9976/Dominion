// 函数: _Z13CalcTransformI6DomLocE9TransformR9LocationTIT_EPb
// 地址: 0xafdcb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1
LocationT<DomLoc>& x20 = arg1
int128_t v0
int128_t v1

if (x9 == 1)
    arg1, v0, v1 = CalcUITransform_Int(x20 + 8, arg2)
    int32_t var_40
    v0.d = var_40
    v1.d = *TI
    int128_t var_30
    
    if (v0.d f!= v1.d)
    label_afdd80:
        *(x20 + 0x20) = var_40.o
        *(x20 + 0x30) = var_30
        v1 = var_40.o
        v0 = var_30
    else
        v0.d = var_30:4.d
        v1.d = *(TI + 0x14)
        
        if (v0.d f!= v1.d)
            goto label_afdd80
        
        v0.d = var_30:8.d
        v1.d = *(TI + 0x18)
        
        if (v0.d f!= v1.d)
            goto label_afdd80
        
        v0.d = var_30:0xc.d
        v1.d = *(TI + 0x1c)
        
        if (v0.d f!= v1.d)
            goto label_afdd80
        
        v0.d = var_30.d
        v1.d = *(TI + 0x10)
        
        if (v0.d f!= v1.d)
            goto label_afdd80
        
        int32_t var_3c
        v0.d = var_3c
        v1.d = *(TI + 4)
        
        if (v0.d f!= v1.d)
            goto label_afdd80
        
        int32_t var_38
        v0.d = var_38
        v1.d = *(TI + 8)
        
        if (v0.d f!= v1.d)
            goto label_afdd80
        
        int32_t var_34
        v0.d = var_34
        v1.d = *(TI + 0xc)
        
        if (not(v0.d f== v1.d))
            goto label_afdd80
        
        v0.d = *(x20 + 0x20)
        
        if (v0.d f== 0f)
            v1 = data_7afde0
            v0 = data_7afdf0
        else
            v1 = *(x20 + 0x20)
            v0 = *(x20 + 0x30)
else
    if (x9 != 0)
        pthread_kill(pthread_self(), 6)
        return IsReveal(XNoReturn()) __tailcall
    
    if (arg2 != 0)
        *arg2 = false
    
    v0 = *(x20 + 0x98)
    v1 = *(x20 + 0x88)

int128_t* entry_x8
*entry_x8 = v1
entry_x8[1] = v0
return arg1
