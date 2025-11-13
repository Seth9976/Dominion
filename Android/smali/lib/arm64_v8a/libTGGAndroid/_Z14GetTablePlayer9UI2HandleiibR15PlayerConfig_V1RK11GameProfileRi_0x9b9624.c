// 函数: _Z14GetTablePlayer9UI2HandleiibR15PlayerConfig_V1RK11GameProfileRi
// 地址: 0x9b9624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg5 + 0x14)
int32_t x19 = arg1

if ((arg4.d & 1) == 0)
    if (x9 == 0x3e8 && *(arg5 + 0x18) == *(arg6 + 0x4320))
    label_9b96a0:
        AssignName(arg5, XString::operator char const*())
        *(arg5 + 0x10) = *(arg6 + 0x10)
        *arg7 = arg2
else if (x9 == 1 && *(arg5 + 0x18) == *(arg6 + 0x42ac))
    goto label_9b96a0

uint64_t result

if (arg3 == 6)
label_9b96cc:
    int64_t x22_1 = sx.q(arg2)
    
    if (*((x22_1 << 6) + 0x11d09c8) == "tblPlayers" && *((x22_1 << 6) + 0x11d09c0) == x19
            && *((x22_1 << 6) + 0x11d09d0) == arg2 && *((x22_1 << 6) + 0x11d09d8) == 0
            && (UI2Exists(zx.q(*((x22_1 << 6) + 0x11d09f8))) & 1) != 0)
        return zx.q(*((x22_1 << 6) + 0x11d09f8))
    
    result = UI2GetHandle(zx.q(x19), "tblPlayers", arg2)
    *((x22_1 << 6) + 0x11d09f8) = result.d
    
    if (result.d != 0)
        *((x22_1 << 6) + 0x11d09c8) = "tblPlayers"
        *((x22_1 << 6) + 0x11d09c0) = x19
        *((x22_1 << 6) + 0x11d09d0) = arg2
        *((x22_1 << 6) + 0x11d09d8) = 0
else
    if (arg3 != 5)
        if (arg3 == 4)
            goto label_9b96cc
        
        pthread_kill(pthread_self(), 6)
        return IsRealPlayer(XNoReturn()) __tailcall
    
    if (arg2 == 0)
        if (data_11ce538 == "tblPlayerMe" && data_11ce498 == x19
                && (UI2Exists(zx.q(data_11ce4a0)) & 1) != 0)
            return zx.q(data_11ce4a0)
        
        result = UI2GetHandle(zx.q(x19), "tblPlayerMe", 0)
        data_11ce4a0 = result.d
        
        if (result.d != 0)
            data_11ce538 = "tblPlayerMe"
            data_11ce498 = x19
    else
        if (*(((sx.q(arg2) - 1) << 6) + 0x11d0bc8) == "tblPlayers"
                && *(((sx.q(arg2) - 1) << 6) + 0x11d0bc0) == x19
                && *(((sx.q(arg2) - 1) << 6) + 0x11d0bd0) == arg2 - 1
                && *(((sx.q(arg2) - 1) << 6) + 0x11d0bd8) == 0
                && (UI2Exists(zx.q(*(((sx.q(arg2) - 1) << 6) + 0x11d0bf8))) & 1) != 0)
            return zx.q(*(((sx.q(arg2) - 1) << 6) + 0x11d0bf8))
        
        result = UI2GetHandle(zx.q(x19), "tblPlayers", arg2 - 1)
        *(((sx.q(arg2) - 1) << 6) + 0x11d0bf8) = result.d
        
        if (result.d != 0)
            *(((sx.q(arg2) - 1) << 6) + 0x11d0bc8) = "tblPlayers"
            *(((sx.q(arg2) - 1) << 6) + 0x11d0bc0) = x19
            *(((sx.q(arg2) - 1) << 6) + 0x11d0bd0) = arg2 - 1
            *(((sx.q(arg2) - 1) << 6) + 0x11d0bd8) = 0

return result
