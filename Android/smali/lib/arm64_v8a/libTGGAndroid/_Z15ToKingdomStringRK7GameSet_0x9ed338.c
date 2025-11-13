// 函数: _Z15ToKingdomStringRK7GameSet
// 地址: 0x9ed338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1

if (x9 == 1)
    void* x0_4 = GetActiveProfile()
    uint64_t x8_1 = zx.q(*(arg1 + 4))
    XString* entry_x8
    
    if ((x8_1.d & 0x80000000) == 0 && x8_1.d s< *(x0_4 + 0x7558))
        return XString::XString(entry_x8) __tailcall
    
    return XString::XString(entry_x8) __tailcall

if (x9 != 2)
    pthread_kill(pthread_self(), 6)
    return GetKingdomConfig(XNoReturn()) __tailcall

ToSetupConfig(DomSetGet(*(arg1 + 4)))
void var_19b0
return ToKingdomString(&var_19b0)
