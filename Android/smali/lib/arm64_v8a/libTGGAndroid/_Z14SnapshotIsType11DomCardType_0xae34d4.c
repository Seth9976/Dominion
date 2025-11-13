// 函数: _Z14SnapshotIsType11DomCardType
// 地址: 0xae34d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(DomGetContext() + 0x80)
int32_t x9 = *x8
void* x8_1

if (x9 == 0)
    x8_1 = &x8[0xe]
else
    if (x9 != 1)
        pthread_kill(pthread_self(), 6)
        return IsFirstActionPlayed(XNoReturn()) __tailcall
    
    x8_1 = &x8[6]

return zx.q((*x8_1 & arg1) != 0 ? 1 : 0)
