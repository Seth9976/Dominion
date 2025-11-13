// 函数: _Z17NetworkInitForAppv
// 地址: 0xf83d08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gNetworkInterface == 0)
    return 

void* x0 = XPooledCalloc(0x98)
__builtin_memset(x0, 0, 0x18)
__builtin_memset(x0 + 0x68, 0, 0x14)
__builtin_memset(x0 + 0x80, 0, 0x14)
__builtin_memset(x0 + 0x48, 0, 0x1c)
*(x0 + 0x18) = 1
*(x0 + 0x40) = 1
__builtin_memset(x0 + 0x20, 0, 0x20)
*gNetwork = x0
*(x0 + 0x28) = XMalloc(0x200)
*(x0 + 0x34) = 0x20
*(x0 + 0x48) = "NetListens"
*(x0 + 0x40) = 0xd48d
int64_t* x19_1 = *gNetwork
*x19_1 = XMalloc(0x8e500)
*(x19_1 + 0xc) = 0xfd0
x19_1[4] = "NetLocs"
x19_1[3].d = 0xd951
jump(***gNetworkInterface)
