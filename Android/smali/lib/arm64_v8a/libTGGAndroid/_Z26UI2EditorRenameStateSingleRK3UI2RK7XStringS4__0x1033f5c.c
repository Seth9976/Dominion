// 函数: _Z26UI2EditorRenameStateSingleRK3UI2RK7XStringS4_
// 地址: 0x1033f5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char** result = UI2FindOverride(arg1, arg3)

if (result == 0)
    result = UI2FindOverride(arg1, arg2)
    
    if (result != 0)
        return DefDeepCopyString(result, XString::operator char const*()) __tailcall

return result
