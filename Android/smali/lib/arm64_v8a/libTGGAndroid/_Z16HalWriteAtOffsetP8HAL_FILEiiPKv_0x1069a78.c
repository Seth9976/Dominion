// 函数: _Z16HalWriteAtOffsetP8HAL_FILEiiPKv
// 地址: 0x1069a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = *arg1

if (fp != 0)
    if (fseek(fp, sx.q(arg2), 0) == 0)
        return zx.q(fwrite(arg4, sx.q(arg3), 1, *arg1) == 1 ? 1 : 0)
    
    return 0

if (*(arg1 + 8) == 0)
    return 0

pthread_kill(pthread_self(), 6)
HAL_FILE* x0_7
int32_t x1_2
void* x2
x0_7, x1_2, x2 = XNoReturn()
return HalWrite(x0_7, x1_2, x2) __tailcall
