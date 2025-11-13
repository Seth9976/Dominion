// 函数: _Z15FriendAddCommitRK13UI2CommitInfo
// 地址: 0x9be188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::operator=(gFriendDlg + 0x10)
char* x0_2 = XString::operator char const*()
char* x0_3 = stristr(x0_2, "@")
size_t result

if (x0_3 != 0 && x0_3 != x0_2)
    char* x0_4 = stristr(x0_3, ".")
    
    if (x0_4 == 0)
        goto label_9be1f0
    
    result = strlen(x0_4)
    
    if (result u> 2)
        goto label_9be1fc
    
    goto label_9be1f0

label_9be1f0:
result = IsValidCode(x0_2)

if ((result.d & 1) != 0)
label_9be1fc:
    
    if (zx.d(*(arg1 + 0x1c)) != 0)
        return FriendAddOk() __tailcall

return result
