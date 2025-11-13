// 函数: _Z15RectScaleFactorRK5RectFS1_11ItemScaling
// 地址: 0x101c998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 u<= 0xe)
    int128_t v1
    v1.q = *arg2
    int128_t v0
    v0.q = *(arg2 + 8)
    int128_t v3
    v3.q = *arg1
    int128_t v2
    v2.q = *(arg1 + 8)
    int128_t v0_1 = vsub_f32(v0, v1)
    double v0_2 = vdiv_f32(vsub_f32(v2, v3), v0_1)
    int128_t v1_1
    v1_1.d = v0_2:4.d
    
    switch (arg3)
        case 0, 1, 5
            v1_1.d = v0_2:4.d
            return 
        case 9
            if (v0_2.d f< v1_1.d)
                v0_2.d = v0_2.d
            else
                v0_2.d = v1_1.d
            
        label_101ca08:
            v2.q = *V21
            v0_2.d = v2.d f* v0_2.d
            v0_2:4.d = v2:4.d f* v0_2.d
            v1_1.d = v0_2:4.d
            return 
        case 0xa
            if (v0_2.d f> v1_1.d)
                v0_2.d = v0_2.d
            else
                v0_2.d = v1_1.d
            
            goto label_101ca08
        case 0xb
            v1_1.q = *V21
            v0_2.d = v1_1.d f* v0_2:4.d
            v0_2:4.d = v1_1:4.d f* v0_2:4.d
            v1_1.d = v0_2:4.d
            return 
        case 0xc
            v1_1.q = *V21
            v0_2.d = v1_1.d f* v0_2.d
            v0_2:4.d = v1_1:4.d f* v0_2.d
            v1_1.d = v0_2:4.d
            return 
        case 0xe
            v1_1.d = (*V21):4.d
            return 

pthread_kill(pthread_self(), 6)
Vec2* x0_1
int64_t x1
float v0_3
x0_1, x1, v0_3 = XNoReturn()
return TableScale(x0_1, x1, v0_3) __tailcall
