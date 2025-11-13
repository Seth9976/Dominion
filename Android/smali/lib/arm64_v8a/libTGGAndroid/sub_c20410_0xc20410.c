// 函数: sub_c20410
// 地址: 0xc20410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg2
float v1 = *arg1
v0 - v1

if (v0 < v1 || (not(v0 > v1) && not(arg2[1] f>= arg1[1])))
    v1 = *arg3
    v1 - v0
    
    if (v1 >= v0 && (v1 > v0 || not(arg3[1] f< arg2[1])))
        int64_t x8_3 = *arg1
        *arg1 = *arg2
        *arg2 = x8_3
        v0 = *arg3
        v1 = float.s(x8_3.d)
        v0 - v1
        
        if (v0 >= v1)
            if (not(v0 <= v1))
                return 1
            
            if (not(arg3[1] < float.s((x8_3 u>> 0x20).d)))
                return 1
        
        *arg2 = *arg3
        *arg3 = x8_3
        return 2
    
    int64_t x9 = *arg1
    *arg1 = *arg3
    *arg3 = x9
    return 1

v1 = *arg3
v1 - v0

if (v1 >= v0)
    if (not(v1 <= v0))
        return 0
    
    if (not(arg3[1] f< arg2[1]))
        return 0

int64_t x9_1 = *arg2
*arg2 = *arg3
*arg3 = x9_1
v0 = *arg2
v1 = *arg1
v0 - v1

if (v0 >= v1)
    if (not(v0 <= v1))
        return 1
    
    if (not(arg2[1] f< arg1[1]))
        return 1

int64_t x9_2 = *arg1
*arg1 = *arg2
*arg2 = x9_2
return 2
