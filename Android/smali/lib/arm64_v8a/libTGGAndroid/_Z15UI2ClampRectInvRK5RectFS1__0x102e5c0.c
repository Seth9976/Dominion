// 函数: _Z15UI2ClampRectInvRK5RectFS1_
// 地址: 0x102e5c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.d = *arg1
int128_t v4
v4.d = *(arg1 + 4)
int128_t v3
v3.d = *(arg1 + 8)
int128_t v5

if (not(v1.d f<= *arg2))
    v1.d = v3.d f- v1.d
    v1.d = *(arg2 + 4)
    v5.d = *(arg1 + 0xc)
    
    if (not(v4.d f<= v1.d))
    label_102e644:
        v3.d = v5.d f- v4.d
        v3.d = v3.d f+ v1.d
        return 
else if (v3.d f>= *(arg2 + 8))
    v1.d = *(arg2 + 4)
    v5.d = *(arg1 + 0xc)
    
    if (not(v4.d f<= v1.d))
        goto label_102e644
else
    v1.d = *(arg2 + 4)
    v5.d = *(arg1 + 0xc)
    
    if (v4.d f> v1.d)
        goto label_102e644

v3.d = *(arg2 + 0xc)

if (v5.d f>= v3.d)
    return 

v1.d = v5.d f- v4.d
v1.d = v3.d f- v1.d
