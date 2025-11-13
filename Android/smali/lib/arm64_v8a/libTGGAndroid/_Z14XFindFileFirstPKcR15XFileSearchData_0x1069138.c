// 函数: _Z14XFindFileFirstPKcR15XFileSearchData
// 地址: 0x1069138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DIR* dirp = opendir(arg1)
*arg2 = dirp

if (dirp == 0)
    return dirp

struct dirent64* x0 = readdir(dirp)
*(arg2 + 8) = x0

if (x0 != 0)
    return 1

closedir(*arg2)
return nullptr
