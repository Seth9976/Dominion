// 函数: _Z14NetworkLocSendR6NetLoc
// 地址: 0xf86774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_4 = *(arg1 + 0x24)

if (x8_4 - 1 u>= 4)
    if (x8_4 == 0)
        return NetLocUPDSend(arg1) __tailcall
    
    if (x8_4 == 5)
        return NetLoopbackSend(arg1) __tailcall
else if (*(arg1 + 0x3c) == 4)
    return NetLocTCPSend(arg1) __tailcall
