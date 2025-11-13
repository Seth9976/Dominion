// 函数: _Z18StateTreeLookupIntPPK9StateTreeRiPK8UI2StateP20StateTreeQueryResultS3_PK9AttribMap
// 地址: 0x1014d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(*arg2)

if (x25.d s< 1)
    return 

StateTree const** x24_1 = arg1
int64_t x26_1 = 0

do
    void* x28_1 = *arg3
    void* fp_1 = x24_1[x26_1]
    arg1 = XHashKey(*(x28_1 + 0x10))
    
    for (int64_t* i = *(*(fp_1 + 0x10) + ((zx.q(*(fp_1 + 0x18)) & zx.q(arg1.d)) << 3)); i != 0; 
            i = i[2])
        if (*(x28_1 + 0x10) == *i)
            int64_t x9_5 = sx.q(*arg2)
            int64_t* x28_2 = i[1]
            *arg2 = x9_5.d + 1
            x24_1[x9_5] = x28_2
            void* x8_1 = *x28_2
            
            if (x8_1 != 0)
                if ((zx.d(*(x8_1 + 0x10)) & 1) == 0)
                    goto label_1014de4
                
                if ((AttribMapHasStateName(arg6, *(*arg3 + 0x10)).d & 1) != 0)
                    x8_1 = *x28_2
                label_1014de4:
                    int64_t x9_1 = sx.q(*arg5)
                    int32_t x10_1 = x28_2[1].d
                    int64_t* x9_2 = arg4 + x9_1 * 0x18
                    *arg5 = x9_1.d + 1
                    *x9_2 = x8_1
                    x9_2[1] = arg3
                    x9_2[2].d = x10_1
            
            break
    
    x26_1 += 1
while (x26_1 != x25)
