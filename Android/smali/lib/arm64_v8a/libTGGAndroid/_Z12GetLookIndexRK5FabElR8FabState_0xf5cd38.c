// 函数: _Z12GetLookIndexRK5FabElR8FabState
// 地址: 0xf5cd38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = StructureGetDef(*(arg1 + 0x60))
int64_t x21 = sx.q(*(x0_1 + 0x58))

if (x21.d s>= 1)
    int64_t* x22_1 = *(x0_1 + 0x50)
    char* s2 = *(arg1 + 0x80)
    int64_t x19_1 = 0
    
    do
        if (strcasecmp(*x22_1, s2) == 0)
            return zx.q(x19_1.d)
        
        x19_1 += 1
        x22_1 = &x22_1[3]
    while (x19_1 s< x21)

return zx.q(0xffffffff.d)
