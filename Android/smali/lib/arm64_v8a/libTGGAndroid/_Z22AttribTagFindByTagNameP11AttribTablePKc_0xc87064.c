// 函数: _Z22AttribTagFindByTagNameP11AttribTablePKc
// 地址: 0xc87064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = sx.q(*(arg1 + 0x10))

if (x20.d s>= 1)
    int64_t x21_1 = 0
    char** x22_1 = *(arg1 + 8) + 8
    
    do
        if (strcasecmp(*x22_1, arg2) == 0)
            return zx.q(x22_1[-1].d)
        
        x21_1 += 1
        x22_1 = &x22_1[0xd]
    while (x21_1 s< x20)

return 0xffffffff
