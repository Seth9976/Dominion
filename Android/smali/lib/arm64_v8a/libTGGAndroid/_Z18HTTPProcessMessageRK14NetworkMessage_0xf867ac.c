// 函数: _Z18HTTPProcessMessageRK14NetworkMessage
// 地址: 0xf867ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x1 = *(arg1 + 4)

if (x1 - 0xfa0 u>= 3 && x1 != 0x3ea)
    XTrace("unknown http message type %d")
    pthread_kill(pthread_self(), 6)
    return NetworkCloseConnection(XNoReturn()) __tailcall

int64_t* x0 = *gAppInterface
int64_t result = (*(*x0 + 0x88))(x0, arg1)

if (*(arg1 + 4) == 0xfa0)
    int32_t x8_4 = *arg1
    
    if (x8_4 != 0)
        int64_t* x10_1 = *gNetwork
        uint64_t x9_1 = zx.q(x8_4.w)
        
        if (x9_1.d u< x10_1[1].d)
            int64_t x10_2 = *x10_1
            
            if (*(x10_2 + x9_1 * 0x90 + 0x88) == x8_4)
                return NetLocFree(x10_2 + x9_1 * 0x90) __tailcall

return result
