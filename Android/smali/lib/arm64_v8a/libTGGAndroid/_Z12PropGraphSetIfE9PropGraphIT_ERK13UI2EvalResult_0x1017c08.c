// 函数: _Z12PropGraphSetIfE9PropGraphIT_ERK13UI2EvalResult
// 地址: 0x1017c08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8
int32_t* x19 = entry_x8
__builtin_memset(x19, 0, 0x3c)
x19[0xd] = 0xffffffff
UI2EvalResult const& x20 = arg1
double v0

if (*(arg1 + 4) != 1)
    x19[0xc] = 1
    int32_t x8_6 = *x20
    
    if (x8_6 == 3)
        v0, arg1 = atof(XString::operator char const*())
        int32_t x8_7 = *x20
        v0.d = fconvert.s(v0)
        *x19 = v0.d
        
        if (x8_7 == 3)
            v0, arg1 = atof(XString::operator char const*())
            v0.d = fconvert.s(v0)
            x19[1] = v0.d
            return arg1
        
        if (x8_7 == 2)
            goto label_1017d88
        
        if (x8_7 == 1)
            goto label_1017d74
    else
        if (x8_6 == 2)
            v0.d = *(x20 + 0x18)
            *x19 = v0.d
        label_1017d88:
            v0.d = *(x20 + 0x30)
            x19[1] = v0.d
            return arg1
        
        if (x8_6 == 1)
            v0.d = *(x20 + 0x18)
            v0.d = float.s(v0.d)
            *x19 = v0.d
        label_1017d74:
            v0.d = *(x20 + 0x30)
            v0.d = float.s(v0.d)
            x19[1] = v0.d
            return arg1
else
    int32_t x8_1 = *(x20 + 0x88)
    x19[0xc] = x8_1
    
    if (x8_1 s< 1)
        return arg1
    
    int64_t x21_1 = 0
    void* __offset(UI2EvalResult, 0x40) x22_1 = x20 + 0x40
    
    while (true)
        x19[2] = *x22_1
        v0.d = *(x22_1 - 0x38)
        x19[3] = v0.d
        int32_t x8_4 = *x20
        
        if (x8_4 == 3)
            v0, arg1 = atof(XString::operator char const*())
            int32_t x8_5 = *x20
            v0.d = fconvert.s(v0)
            *x19 = v0.d
            
            if (x8_5 == 3)
                v0, arg1 = atof(XString::operator char const*())
                v0.d = fconvert.s(v0)
            else if (x8_5 == 2)
                v0.d = *(x22_1 - 0x10)
            else
                if (x8_5 != 1)
                    break
                
                v0.d = *(x22_1 - 0x10)
                v0.d = float.s(v0.d)
        else if (x8_4 == 2)
            v0.d = *(x22_1 - 0x28)
            *x19 = v0.d
            v0.d = *(x22_1 - 0x10)
        else
            if (x8_4 != 1)
                break
            
            v0.d = *(x22_1 - 0x28)
            v0.d = float.s(v0.d)
            *x19 = v0.d
            v0.d = *(x22_1 - 0x10)
            v0.d = float.s(v0.d)
        
        x19[1] = v0.d
        x21_1 += 1
        x22_1 += 0x40
        x19 = &x19[4]
        
        if (x21_1 s>= sx.q(*(x20 + 0x88)))
            return arg1
pthread_kill(pthread_self(), 6)
UI2* x0_9
Vec2I* x1
x0_9, x1 = XNoReturn()
return UI2ClampScrollDelta(x0_9, x1) __tailcall
