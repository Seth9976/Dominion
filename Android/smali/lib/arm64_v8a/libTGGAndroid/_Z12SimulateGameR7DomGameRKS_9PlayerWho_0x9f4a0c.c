// 函数: _Z12SimulateGameR7DomGameRKS_9PlayerWho
// 地址: 0x9f4a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memcpy(arg1, arg2, 0x1a64)
memcpy(arg1 + 0x1a68, arg2 + 0x1a68, sx.q(*(arg1 + 0x1528)) * 0x68)
memcpy(arg1 + 0x15f68, arg2 + 0x15f68, sx.q(*(arg1 + 0x19ac)) << 5)
uint64_t x8_1 = zx.q(*(arg1 + 0xd40))

if (x8_1.d s>= 1)
    int64_t i = 0
    
    do
        void* x22_1 = arg1 + 0x17f68 + i
        void* x23_1 = arg2 + 0x17f68 + i
        memcpy(x22_1, x23_1, 0x2ac)
        memcpy(x22_1 + 0x2b0, x23_1 + 0x2b0, sx.q(*(arg1 + 0x181a4 + i)) << 2)
        memcpy(x22_1 + 0xf30, x23_1 + 0xf30, sx.q(*(arg1 + 0x181b4 + i)) << 2)
        memcpy(x22_1 + 0x1bb0, x23_1 + 0x1bb0, sx.q(*(arg1 + 0x181cc + i)) << 2)
        memcpy(x22_1 + 0x2830, x23_1 + 0x2830, sx.q(*(arg1 + 0x181e4 + i)) << 2)
        memcpy(x22_1 + 0x34b0, x23_1 + 0x34b0, sx.q(*(arg1 + 0x181ec + i)) << 2)
        memcpy(x22_1 + 0x4130, x23_1 + 0x4130, sx.q(*(arg1 + 0x181f0 + i)) << 2)
        memcpy(x22_1 + 0x4db0, x23_1 + 0x4db0, sx.q(*(arg1 + 0x181f4 + i)) << 2)
        i += 0x5a30
    while (x8_1 * 0x5a30 != i)

memcpy(arg1 + 0x39c88, arg2 + 0x39c88, sx.q(*(arg1 + 0x19b8)) << 2)
memcpy(arg1 + 0x3a908, arg2 + 0x3a908, sx.q(*(arg1 + 0x1a10)) << 3)
int64_t result = memcpy(arg1 + 0x3c208, arg2 + 0x3c208, sx.q(*(arg1 + 0x19c0)) * 0xb8)
*(arg1 + 0x60808) = 0xffffffff
*(arg1 + 0x150c) = 3
*(arg1 + 0x1520) = arg3
return result
