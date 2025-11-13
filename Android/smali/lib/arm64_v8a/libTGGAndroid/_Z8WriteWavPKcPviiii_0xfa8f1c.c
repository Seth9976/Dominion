// 函数: _Z8WriteWavPKcPviiii
// 地址: 0xfa8f1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(arg1, "wb")
int32_t x22_1

if (fp == 0)
    XTrace("failed to open wav file for writing: %s")
    x22_1 = 0
else
    int32_t buf_2
    __builtin_strncpy(&buf_2, "RIFF", 4)
    int32_t var_5c_1 = arg3 + 0x24
    int32_t var_58
    __builtin_strncpy(&var_58, "WAVE", 4)
    char const* const x0_11
    
    if (fwrite(&buf_2, 0xc, 1, fp) != 1)
        x0_11 = "failed to write wav file (riff): %s"
    label_fa90c4:
        XTrace(x0_11)
        fclose(fp)
        x22_1 = 0
    else
        int64_t buf_3 = 0x1020746d66
        
        if (fwrite(&buf_3, 8, 1, fp) != 1)
            x0_11 = "failed to write wav file (wave): %s"
            goto label_fa90c4
        
        int32_t x8_1 = arg6 * arg4
        int32_t x9_2 = x8_1 * arg5
        int32_t x9_3
        
        if (x9_2 s< 0)
            x9_3 = x9_2 + 7
        else
            x9_3 = x9_2
        
        int32_t x8_2
        
        if (x8_1 s< 0)
            x8_2 = x8_1 + 7
        else
            x8_2 = x8_1
        
        int16_t buf_1 = 1
        int16_t var_ee_1 = arg4.w
        int128_t var_e0
        __builtin_memset(&var_e0, 0, 0x80)
        int32_t var_ec_1 = arg5
        int32_t var_e8_1 = x9_3 s>> 3
        uint16_t var_e4_1 = (x8_2 u>> 3).w
        int16_t var_e2_1 = arg6.w
        
        if (fwrite(&buf_1, 0x10, 1, fp) != 1)
            x0_11 = "failed to write wav format: %s"
            goto label_fa90c4
        
        int64_t buf
        __builtin_strncpy(&buf, "data", 8)
        buf:4.d = arg3
        
        if (fwrite(&buf, 8, 1, fp) != 1)
            XTrace("failed to write wav file (data): %s")
            x22_1 = 0
        else
            x22_1 = 1
            
            if (fwrite(arg2, sx.q(arg3), 1, fp) != 1)
                XTrace("failed to write wav file (data2): %s")
                x22_1 = 0
        
        fclose(fp)

return zx.q(x22_1)
