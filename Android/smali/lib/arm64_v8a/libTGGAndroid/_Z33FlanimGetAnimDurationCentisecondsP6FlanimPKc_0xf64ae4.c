// 函数: _Z33FlanimGetAnimDurationCentisecondsP6FlanimPKc
// 地址: 0xf64ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1
int128_t v0
x0_1, v0 = FlanimGetDef(*arg1)
void** x0_6
void* x22_2

if (arg2 == 0)
    if (x0_1[0xb].d != 0)
        x0_6 = FlanimGetDef(*arg1)
        x22_2 = x0_6 + 0x54
    label_f64bc0:
        *x22_2
        return x0_6
else
    uint64_t x21 = zx.q(x0_1[1].d)
    
    if (x21.d s< 1)
    label_f64b34:
        *arg1
        XString::operator char const*()
        x0_1, v0 = XTrace("missing flanim action %s in %s")
    else
        void* x22_1 = *x0_1 + 0xc
        
        while (true)
            x0_1, v0 = strcasecmp(arg2, *(x22_1 - 0xc))
            
            if (x0_1.d == 0)
                break
            
            uint64_t temp0_1 = x21
            x21 -= 1
            x22_1 += 0x18
            
            if (temp0_1 == 1)
                goto label_f64b34
        
        if (*x22_1 - *(x22_1 - 4) != 0xffffffff)
            x0_6 = FlanimGetDef(*arg1)
            uint64_t i_1 = zx.q(x0_6[1].d)
            void** x20_1 = x0_6
            
            if (i_1.d s>= 1)
                x22_2 = *x20_1 + 0x10
                uint64_t i
                
                do
                    x0_6 = strcasecmp(arg2, *(x22_2 - 0x10))
                    
                    if (x0_6.d == 0)
                        goto label_f64bc0
                    
                    i = i_1
                    i_1 -= 1
                    x22_2 += 0x18
                while (i != 1)
            
            x22_2 = x20_1 + 0x54
            goto label_f64bc0
v0.d = 0f
return x0_1
