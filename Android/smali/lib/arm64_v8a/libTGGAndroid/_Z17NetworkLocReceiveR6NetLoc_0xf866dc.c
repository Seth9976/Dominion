// 函数: _Z17NetworkLocReceiveR6NetLoc
// 地址: 0xf866dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x24)
int64_t result
int32_t x8_1

if (x8 - 1 u< 4)
    result = NetLocTCPReceive(arg1)
    x8_1 = *(arg1 + 0x24)
    
    if (x8_1 u<= 5)
    label_f8670c:
        int32_t x8_2 = 1 << x8_1
        
        if ((x8_2 & 0xc) != 0)
            return AppendHttpResponse(arg1) __tailcall
        
        if ((x8_2 & 0x11) != 0)
            return result
        
        return EnqueueWholeReceivedNetworkMessages(arg1) __tailcall
else if (x8 == 0)
    result = NetLocUDPReceive(arg1)
    x8_1 = *(arg1 + 0x24)
    
    if (x8_1 u<= 5)
        goto label_f8670c
else if (x8 == 5)
    return EnqueueWholeReceivedNetworkMessages(arg1) __tailcall
pthread_kill(pthread_self(), 6)
return NetworkLocSend(XNoReturn()) __tailcall
