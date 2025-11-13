// 函数: _Z20XAssertDisposeForAppv
// 地址: 0x1062044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = *gXLogFileHandle

if (fp != 0)
    fp = fclose(fp)
    *gXLogFileHandle = 0

return fp
