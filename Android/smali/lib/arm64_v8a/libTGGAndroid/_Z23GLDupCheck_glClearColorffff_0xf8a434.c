// 函数: _Z23GLDupCheck_glClearColorffff
// 地址: 0xf8a434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v9 = arg3
int128_t v8 = arg4
int128_t v10 = arg1
int128_t v11 = arg2
float* x8_1 = *gOpenGLInterface + 0x4234

if (not(*x8_1 != arg1) && not(x8_1[1] f!= v11.d) && not(x8_1[2] f!= v9.d) && not(x8_1[3] f!= v8.d))
    return 

glClearColor(v10, v11, v9, v8)
int32_t* x8_3 = *gOpenGLInterface + 0x4234
*x8_3 = v10.d
x8_3[1] = v11.d
x8_3[2] = v9.d
x8_3[3] = v8.d
