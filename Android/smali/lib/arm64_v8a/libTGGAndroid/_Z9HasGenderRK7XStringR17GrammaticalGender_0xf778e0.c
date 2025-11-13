// 函数: _Z9HasGenderRK7XStringR17GrammaticalGender
// 地址: 0xf778e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8

if ((ModsHasEntry(arg1, "p", nullptr) & 1) == 0)
    if ((ModsHasEntry(arg1, "m", nullptr) & 1) == 0)
        if ((ModsHasEntry(arg1, "f", nullptr) & 1) == 0)
            if ((ModsHasEntry(arg1, "n", nullptr) & 1) == 0)
                return 0
            
            x8 = 4
        else
            x8 = 3
    else
        x8 = 2
else
    x8 = 5

*arg2 = x8
return 1
