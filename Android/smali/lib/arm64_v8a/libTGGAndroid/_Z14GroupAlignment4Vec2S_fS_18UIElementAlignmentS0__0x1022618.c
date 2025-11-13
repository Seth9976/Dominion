// 函数: _Z14GroupAlignment4Vec2S_fS_18UIElementAlignmentS0_
// 地址: 0x1022618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v1
int128_t entry_v2
float entry_v3
float entry_v4
int32_t entry_v6

if (arg1.d == 0 || arg2 == 0)
    if (arg1.d == 0)
        if (arg2 == 0)
            return 
        
    label_1022688:
        
        if (arg2 == 1)
            entry_v2.d = entry_v6 f- (entry_v3 f- entry_v1.d) * entry_v4
            return 
    else if (arg1.d == 1)
        float entry_v5
        entry_v2.d = (entry_v1.d f- arg3) * entry_v4 + (arg3 f- entry_v2.d) * entry_v4 + entry_v5
        
        if (arg2 != 0)
            goto label_1022688
        
        return 
else if (arg1.d == 1 && arg2 == 1)
    entry_v1.d = entry_v3 f- entry_v1.d
    entry_v1.d = entry_v1.d f* entry_v4
    entry_v2.d = entry_v6 f- entry_v1.d
    return 
pthread_kill(pthread_self(), 6)
int64_t x0_1
int64_t x1
int64_t x2
char* x3
x0_1, x1, x2, x3 = XNoReturn()
return GroupAlignmentRect(x0_1, x1, x2, x3) __tailcall
