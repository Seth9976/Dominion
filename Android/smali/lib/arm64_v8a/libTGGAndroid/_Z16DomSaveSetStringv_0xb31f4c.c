// 函数: _Z16DomSaveSetStringv
// 地址: 0xb31f4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gDomSetSave + 8)

if (x9 != 2)
    if (x9 == 1)
        return ToKingdomString(gDomClient + 0x2147c) __tailcall
    
    if (x9 != 0)
        pthread_kill(pthread_self(), 6)
        return NumExpansions(XNoReturn()) __tailcall

GetKingdomConfig(GetActiveGameSetup())
void var_19b0
return ToKingdomString(&var_19b0)
