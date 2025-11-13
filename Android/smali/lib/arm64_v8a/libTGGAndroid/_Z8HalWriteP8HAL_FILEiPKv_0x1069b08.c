// 函数: _Z8HalWriteP8HAL_FILEiPKv
// 地址: 0x1069b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void const* entry_buf
void const* entry_buf_1 = entry_buf
uint64_t entry_x20
uint64_t var_10 = entry_x20
FILE* fp = *arg1

if (fp != 0)
    entry_x20 = zx.q(arg2)
    entry_buf = arg3
    
    if (fseek(fp, sx.q(*(arg1 + 0x10)), 0) != 0)
        return 0
    
    goto label_1069b70

if (*(arg1 + 8) != 0)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_1069b70:
    size_t result = fwrite(entry_buf, sx.q(entry_x20.d), 1, *arg1)
    
    if (result == 1)
        *(arg1 + 0x10) += entry_x20.d
        return result

return 0
