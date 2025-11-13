// 函数: _Z12GetPlayIndex6CardID
// 地址: 0xaa1d7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x9_1 = *(x0 + 8) + sx.q(*(x0 + 0x18)) * 0x5a30
int64_t result_1 = sx.q(*(x9_1 + 0x181cc))
int64_t result
bool cond:0_1

do
    result = result_1 - 1
    
    if (result_1 s< 1)
        pthread_kill(pthread_self(), 6)
        return HarborVillage_Trigger(XNoReturn()) __tailcall
    
    cond:0_1 = *(x9_1 + 0x19b14 + (result_1 << 2)) != arg1
    result_1 = result
while (cond:0_1)
return result
