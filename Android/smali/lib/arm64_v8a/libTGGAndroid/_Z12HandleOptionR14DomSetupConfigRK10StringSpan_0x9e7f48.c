// 函数: _Z12HandleOptionR14DomSetupConfigRK10StringSpan
// 地址: 0x9e7f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s1 = *arg2
size_t n = *(arg2 + 8)

if (strncasecmp(s1, "Colonies", n) != 0 && strncasecmp(s1, "Colony", n) != 0
        && strncasecmp(s1, "Platinum", n) != 0)
    if (strncasecmp(s1, "No Colonies", n) != 0 && strncasecmp(s1, "No Platinum", n) != 0)
        if (strncasecmp(s1, "Shelters", n) == 0)
            *(arg1 + 0xc00) = 1
            return 1
        
        if (strncasecmp(s1, "No Shelters", n) != 0)
            return 0
        
        *(arg1 + 0xc00) = 2
        return 1
    
    *(arg1 + 0xbfc) = 2
    return 1

*(arg1 + 0xbfc) = 1
return 1
