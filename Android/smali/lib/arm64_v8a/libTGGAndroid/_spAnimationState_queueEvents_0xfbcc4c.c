// 函数: _spAnimationState_queueEvents
// 地址: 0xfbcc4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
v11.d = *(arg2 + 0x40)
int64_t v12
v12.d = *(arg2 + 0x44)
int64_t v8
v8.d = v12.d f- v11.d
int64_t result
float v0
v0, result = fmodf(*(arg2 + 0x58), v8.d)
uint64_t x21 = zx.q(*(arg1 + 0x38))
int64_t x22 = *(arg1 + 0x40)
float v10 = v0
uint64_t x23

if (x21.d s< 1)
    x23 = 0
else
    x23 = 0
    
    while (true)
        v0 = *(*(x22 + (x23 << 3)) + 8)
        
        if (v0 < v10)
            break
        
        if (not(v0 f> v12.d))
            result = _spEventQueue_event(*(arg1 + 0x48), arg2, v0)
        
        x23 += 1
        
        if (x21 == x23)
            x23 = zx.q(x21.d)
            
            if (*(arg2 + 0x2c) != 0)
                goto label_fbcce0
            
            goto label_fbcd0c

if (*(arg2 + 0x2c) == 0)
label_fbcd0c:
    
    if (not(v12.d f> arg3) && not(*(arg2 + 0x48) f>= v12.d))
        result = _spEventQueue_complete(*(arg1 + 0x48), arg2)
else
label_fbcce0:
    
    if (v8.d f== 0f)
        result = _spEventQueue_complete(*(arg1 + 0x48), arg2)
    else
        v0, result = fmodf(*(arg2 + 0x54), v8.d)
        
        if (v10 > v0)
            result = _spEventQueue_complete(*(arg1 + 0x48), arg2)

if (x23.d s< x21.d)
    void** x22_1 = x22 + (zx.q(x23.d) << 3)
    uint64_t i_1 = x21 - zx.q(x23.d)
    uint64_t i
    
    do
        v0 = *(*x22_1 + 8)
        
        if (not(v0 f< v11.d))
            result = _spEventQueue_event(*(arg1 + 0x48), arg2, v0)
        
        i = i_1
        i_1 -= 1
        x22_1 = &x22_1[1]
    while (i != 1)

return result
