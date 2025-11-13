// 函数: jcv_delauney_next
// 地址: 0xc11880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x8 = *arg1
float v0

if (x8 == 0)
    x8 = arg1[1]
    
    while (true)
        x8 = *x8
        
        if (x8 == 0)
            goto label_c1196c
        
        v0 = *(x8 + 0x1c) - *(x8 + 0x24)
        
        if (v0 < 0f)
            v0 = fneg(v0)
        
        if (not(v0 >= float.s(0x34000000)))
            v0 = x8[3].d f- x8[4].d
            
            if (v0 < 0f)
                v0 = fneg(v0)
            
            if (v0 < float.s(0x34000000))
                continue
        
        arg1[1] = x8
        
        if (x8[1] == 0)
            goto label_c1190c
        
        break
else
    *arg1 = 0
    arg1[1] = x8
    
    if (x8[1] == 0)
        goto label_c1190c

do
    if (x8[2] != 0)
        *arg2 = x8
        int64_t* x9 = x8[1]
        arg2[1] = x9
        int64_t* x8_1 = x8[2]
        arg2[2] = x8_1
        arg2[3] = *x9
        arg2[4] = *x8_1
        return 1
    
label_c1190c:
    x8 = *x8
    
    if (x8 == 0)
        break
    
    v0 = *(x8 + 0x1c) - *(x8 + 0x24)
    
    if (v0 < 0f)
        v0 = fneg(v0)
    
    if (not(v0 >= float.s(0x34000000)))
        v0 = x8[3].d f- x8[4].d
        
        if (v0 < 0f)
            v0 = fneg(v0)
        
        if (v0 < float.s(0x34000000))
            break
    
    arg1[1] = x8
while (x8[1] != 0)

label_c1196c:
arg1[1] = 0
return zx.q(x8.d)
