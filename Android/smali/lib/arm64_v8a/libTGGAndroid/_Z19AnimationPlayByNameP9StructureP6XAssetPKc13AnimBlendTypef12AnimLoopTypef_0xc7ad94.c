// 函数: _Z19AnimationPlayByNameP9StructureP6XAssetPKc13AnimBlendTypef12AnimLoopTypef
// 地址: 0xc7ad94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *StructureGetDef(arg2)
uint64_t x8 = zx.q(*(x9 + 0x60))

if (x8.d s>= 1)
    int64_t i = 0
    int64_t* x26_1 = *(x9 + 0x68) + 8
    
    do
        if (strcmp(*x26_1, arg3) == 0)
            if (i.d != 1)
                return AnimationPlay(arg1, arg2, (neg.q(i)).d, zx.q(arg4), zx.q(arg6), arg5, arg7)
                    __tailcall
            
            break
        
        i -= 1
        x26_1 = &x26_1[3]
    while (neg.q(x8) != i)

XTrace("can't find anim clip: %s")
return 0
