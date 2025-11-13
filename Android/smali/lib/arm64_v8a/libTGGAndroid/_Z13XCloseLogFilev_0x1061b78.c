// 函数: _Z13XCloseLogFilev
// 地址: 0x1061b78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* result = *gXLogFileHandle

if (result == 0)
    return result

return fclose(result) __tailcall
