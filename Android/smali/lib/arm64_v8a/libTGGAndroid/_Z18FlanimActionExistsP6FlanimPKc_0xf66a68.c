// 函数: _Z18FlanimActionExistsP6FlanimPKc
// 地址: 0xf66a68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = FlanimGetDef(*arg1)
uint64_t i_1 = zx.q(x0_1[1].d)

if (i_1.d s>= 1)
    char** x20_1 = *x0_1
    uint64_t i
    
    do
        if (strcasecmp(arg2, *x20_1) == 0)
            return zx.q(x20_1 != 0 ? 1 : 0)
        
        i = i_1
        i_1 -= 1
        x20_1 = &x20_1[3]
    while (i != 1)

return zx.q(nullptr != 0 ? 1 : 0)
