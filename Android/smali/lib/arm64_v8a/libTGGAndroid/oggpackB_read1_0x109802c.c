// 函数: oggpackB_read1
// 地址: 0x109802c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = *arg1
int64_t x8 = arg1[4]
uint64_t result

if (x9_1 s>= x8)
    *arg1 = x8
    arg1[1].d = 1
    result = -1
    arg1[3] = 0
else
    char* x10_1 = arg1[3]
    int32_t x8_1 = arg1[1].d
    result = zx.q(zx.d(*x10_1) u>> (7 - x8_1)) & 1
    arg1[1].d = x8_1 + 1
    
    if (x8_1 s>= 7)
        arg1[1].d = 0
        arg1[3] = &x10_1[1]
        *arg1 = x9_1 + 1

return result
