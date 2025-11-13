// 函数: _Z13SnapshotOwnerv
// 地址: 0xae4830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(DomGetContext() + 0x80)
int32_t x9 = *x8

if (x9 == 2)
    return zx.q(x8[4])

if (x9 == 1)
    return zx.q(x8[2])

pthread_kill(pthread_self(), 6)
XNoReturn()
return SnapshotWhereFrom() __tailcall
