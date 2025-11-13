// 函数: _Z20VoipServerGotMessageP14NetworkMessage
// 地址: 0x105f8ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x0_1 = NetIdGetProtocol(zx.q(*arg1))
int32_t x8_1 = *(arg1 + 8)
void* __offset(NetworkMessage, 0xc) x19

if (x0_1 == 0)
    x19 = arg1 + 0x10
else
    x19 = arg1 + 0xc

int32_t x21

if (x0_1 == 0)
    x21 = x8_1 - 4
else
    x21 = x8_1

int64_t result = NetIdGetProtocol(zx.q(*arg1))
uint64_t x8_2 = zx.q(*(gVoipServer + 8))

if (x8_2.d != 0)
    void* x25_1 = *gVoipServer
    
    if (result.d == 0)
        void* x26_1 = x25_1
    label_105f9fc:
        x26_1 += 0x34
        bool cond:2_1
        
        do
            if (*(x26_1 - 4) u>= 0x10000)
                result = CompareNetworkAddress(arg1 + 0xed48, x26_1 - 0x28)
                
                if ((result.d & 1) != 0)
                    x8_2 = zx.q(*(gVoipServer + 8))
                    x25_1 = x26_1 - 0x34
                    goto label_105fa54
                
                x25_1 = *gVoipServer
                x8_2 = zx.q(*(gVoipServer + 8))
                
                if (x25_1 + x8_2 * 0x34 u> x26_1)
                    goto label_105f9fc
                
                goto label_105f9a0
            
            cond:2_1 = x26_1 u< x25_1 + x8_2 * 0x34
            x26_1 += 0x34
        while (cond:2_1)
    else
        int64_t x9_1 = x25_1 + x8_2 * 0x34
        
        while (true)
            if (zx.d(*(x25_1 + 0x32)) == 0)
                x25_1 += 0x34
                
                if (x25_1 u>= x9_1)
                    break
            else
                if (*(x25_1 + 4) == *arg1)
                label_105fa54:
                    *x19 = *x25_1
                    
                    if (x8_2.d != 0)
                        uint64_t x9_7 = zx.q(x8_2.d)
                        void* x8_5 = *gVoipServer
                        size_t x20_2 = sx.q(x21)
                        void* x28_1 = x8_5
                        
                        while (true)
                            if (zx.d(*(x28_1 + 0x32)) != 0)
                                if (*(x25_1 + 0x2c) == *(x28_1 + 0x2c)
                                        && (x25_1 != x28_1 || zx.d(*(gVoipServer + 0x28)) != 0))
                                    if (*(x28_1 + 8) == 0)
                                        result = NetworkSendMessage(zx.q(*(x28_1 + 4)), 0xbb9, 
                                            x20_2.d, x19)
                                    else
                                        int32_t var_2e8 = 0xbb9
                                        void var_2e4
                                        memcpy(&var_2e4, x19, x20_2)
                                        result = NetUDPSend(zx.q(*(x28_1 + 8)), x28_1 + 0xc, 
                                            x20_2.d + 4, &var_2e8)
                                
                                x8_5 = *gVoipServer
                                x9_7 = zx.q(*(gVoipServer + 8))
                                x28_1 += 0x34
                                
                                if (x8_5 + x9_7 * 0x34 u<= x28_1)
                                    break
                            else
                                x28_1 += 0x34
                                
                                if (x28_1 u>= x8_5 + x9_7 * 0x34)
                                    break
                    
                    goto label_105f9c0
                
                x25_1 += 0x34
                
                if (x9_1 u<= x25_1)
                    break

label_105f9a0:

if ((zx.d(data_24b89b8) & 1) == 0)
    data_24b89b8 = 1
    result = XTrace("Server got voip from unknown client")

label_105f9c0:

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
