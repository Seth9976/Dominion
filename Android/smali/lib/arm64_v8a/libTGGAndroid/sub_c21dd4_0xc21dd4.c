// 函数: sub_c21dd4
// 地址: 0xc21dd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = arg2[1]
float v1 = arg1[1]
v0 - v1

if (v0 < v1 || (not(v0 > v1) && *arg2 s< *arg1))
    v1 = arg3[1]
    v1 - v0
    
    if (v1 >= v0 && (v1 > v0 || *arg3 s>= *arg2))
        int64_t x8_6 = *arg1
        *arg1 = *arg2
        *arg2 = x8_6
        v0 = arg3[1]
        v1 = float.s((x8_6 u>> 0x20).d)
        v0 - v1
        
        if (v0 >= v1)
            if (not(v0 <= v1))
                return 1
            
            if (*arg3 s>= x8_6.d)
                return 1
        
        *arg2 = *arg3
        *arg3 = x8_6
        return 2
    
    int64_t x9_2 = *arg1
    *arg1 = *arg3
    *arg3 = x9_2
    return 1

v1 = arg3[1]
v1 - v0

if (v1 >= v0)
    if (not(v1 <= v0))
        return 0
    
    if (*arg3 s>= *arg2)
        return 0

int64_t x9_3 = *arg2
*arg2 = *arg3
*arg3 = x9_3
v0 = arg2[1]
v1 = arg1[1]
v0 - v1

if (v0 >= v1)
    if (not(v0 <= v1))
        return 1
    
    if (*arg2 s>= *arg1)
        return 1

int64_t x9_4 = *arg1
*arg1 = *arg2
*arg2 = x9_4
return 2
