// 函数: _Z22GetLandscapePileByType11DomCardType
// 地址: 0xac1cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
void* x0 = DomGetContext()
int32_t x21 = 0x22

if ((CardIs(zx.q(*DomBoardPile(*(x0 + 8), 0x22)), x19) & 1) == 0)
    x21 = 0x23
    
    if ((CardIs(zx.q(*DomBoardPile(*(x0 + 8), 0x23)), x19) & 1) == 0)
        x21 = 0x24
        
        if ((CardIs(zx.q(*DomBoardPile(*(x0 + 8), 0x24)), x19) & 1) == 0)
            x21 = 0x25
            
            if ((CardIs(zx.q(*DomBoardPile(*(x0 + 8), 0x25)), x19) & 1) == 0)
                pthread_kill(pthread_self(), 6)
                XNoReturn()
                return ProphecyWhere() __tailcall

return zx.q(x21)
