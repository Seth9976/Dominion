// 函数: _Z16InputBoxValidatePKc
// 地址: 0x9bb320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gGameDlgManager + 0x208))

if (x8.d u> 4)
    pthread_kill(pthread_self(), 6)
    return IsValidName(XNoReturn()) __tailcall

switch (x8)
    case 0
        return 1
    case 1
        return zx.q(zx.d(*arg1) != 0 ? 1 : 0)
    case 2
        char* x0_1 = stristr(arg1, "@")
        uint64_t result = 0
        
        if (x0_1 != 0 && x0_1 != arg1)
            result = stristr(x0_1, ".")
            
            if (result != 0)
                return zx.q(strlen(result) u> 2 ? 1 : 0)
        
        return result
    case 3
        return IsValidCode(arg1) __tailcall
    case 4
        char* x0_6 = stristr(arg1, "@")
        
        if (x0_6 != 0 && x0_6 != arg1)
            char* x0_7 = stristr(x0_6, ".")
            
            if (x0_7 != 0 && strlen(x0_7) u> 2)
                return 1
        
        return IsValidCode(arg1) __tailcall
