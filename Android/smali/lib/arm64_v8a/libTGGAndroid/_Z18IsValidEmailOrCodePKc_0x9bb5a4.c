// 函数: _Z18IsValidEmailOrCodePKc
// 地址: 0x9bb5a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = stristr(arg1, "@")

if (x0 != 0 && x0 != arg1)
    char* x0_1 = stristr(x0, ".")
    
    if (x0_1 != 0 && strlen(x0_1) u> 2)
        return 1

return IsValidCode(arg1) __tailcall
