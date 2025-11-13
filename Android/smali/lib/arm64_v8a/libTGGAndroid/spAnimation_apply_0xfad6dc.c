// 函数: spAnimation_apply
// 地址: 0xfad6dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_70 = v11
uint64_t x25 = zx.q(*(arg1 + 0xc))
int128_t v10 = arg9
int128_t v9 = arg8
void* x23 = arg1

if (arg3 != 0)
    v11.d = *(x23 + 8)
    
    if (not(v11.d f== 0f))
        int128_t v0_1
        v0_1, arg1 = fmodf(v10.d, v11.d)
        v10 = v0_1
        
        if (not(v9.d f<= 0f))
            int128_t v0_3
            v0_3, arg1 = fmodf(v9.d, v11.d)
            v9 = v0_3

if (x25.d s< 1)
    return 

int64_t i = 0

do
    void* x0 = *(*(x23 + 0x10) + i)
    (**(x0 + 8))(x0, arg2, arg4, arg5, zx.q(arg6), zx.q(arg7), v9, v10, arg10)
    i += 8
while (x25 << 3 != i)
