// 函数: _Z30Trigger_AssociatedSetCardsListRK7CardIDs
// 地址: 0xaa27a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()

if (*x0 == 3)
    uint64_t x1_1 = zx.q(x0[7])
    
    if ((x1_1.d & 0x30) == 0)
        void* x0_2 = AbilityGetRegistered(*(x0 + 8), x1_1)
        DomGame* x20_2 = *(x0 + 8)
        FromList(arg1)
        void var_cc8
        return ToAssociatedCards(x20_2, x0_2 + 0x80, x0_2 + 0x84, x0_2 + 0x88, &var_cc8)

pthread_kill(pthread_self(), 6)
XNoReturn()
return Quartermaster() __tailcall
