// 函数: _Z23StructureUnbindMaterial11StructureID
// 地址: 0xfd28e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(arg1.d) & 0xffff
int64_t x19 = ***gpGameData

if (zx.d(*(x19 + mulu.dp.d(x20.d, 0x98) + 0x30)) == 0)
    return 

*(x19 + mulu.dp.d(x20.d, 0x98) + 0x30) = 0

if (*(x19 + x20 * 0x98 + 0x40) s>= 1)
    int64_t i = 0
    
    do
        int32_t* x25_1 = *(x19 + x20 * 0x98 + 0x48) + (i << 4)
        uint64_t x1_1 = zx.q(*x25_1)
        
        if (x1_1.d s>= 1)
            int64_t x26_1 = 0
            int64_t x27_1 = 0
            
            do
                MaterialStateUnbind(*(x25_1 + 8) + x26_1)
                x1_1 = sx.q(*x25_1)
                x27_1 += 1
                x26_1 += 0x1a20
            while (x27_1 s< x1_1)
        
        MaterialStateFree(*(x25_1 + 8), x1_1.d)
        i += 1
    while (i s< sx.q(*(x19 + x20 * 0x98 + 0x40)))

void* x19_1 = x19 + x20 * 0x98
XFree(*(x19_1 + 0x48))
*(x19_1 + 0x48) = 0
*(x19 + x20 * 0x98 + 0x40) = 0
