// 函数: _Z15StateTreeLookupPK9StateTreeRK16UI2StateBindingsiP20StateTreeQueryResultPK9AttribMap
// 地址: 0x1014ec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_268[0x40]
var_268[0] = arg1
int32_t x8 = *(arg2 + 8)
int32_t x21

if (x8 s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    int32_t x28_1 = 1
    int32_t var_274_1 = arg3
    
    do
        int64_t x9_1 = *arg2
        
        if (*(x9_1 + i * 0x30 + 0xc) != 0xffffffff)
            int32_t x10_4 = *(x9_1 + i * 0x30 + 8)
            
            if ((x10_4 == arg3 || x10_4 == 0xffffffff) && x28_1 s>= 1)
                int64_t fp_1 = 0
                void** x27_1 = x9_1 + i * 0x30
                uint64_t x20_1 = zx.q(x28_1)
                
                do
                    void* x23_1 = *x27_1
                    void* x25_1 = var_268[fp_1]
                    int32_t x0_1 = XHashKey(*(x23_1 + 0x10))
                    
                    for (int64_t* j =
                            *(*(x25_1 + 0x10) + ((zx.q(*(x25_1 + 0x18)) & zx.q(x0_1)) << 3)); j != 0; 
                            j = j[2])
                        if (*(x23_1 + 0x10) == *j)
                            int64_t* x23_2 = j[1]
                            var_268[sx.q(x28_1)] = x23_2
                            void* x8_1 = *x23_2
                            x28_1 += 1
                            
                            if (x8_1 != 0)
                                if ((zx.d(*(x8_1 + 0x10)) & 1) == 0)
                                    goto label_1014f78
                                
                                if ((AttribMapHasStateName(arg5, *(*x27_1 + 0x10)) & 1) != 0)
                                    x8_1 = *x23_2
                                label_1014f78:
                                    int32_t x9_2 = x23_2[1].d
                                    void* x10_5 = arg4 + muls.dp.d(x21, 0x18)
                                    x21 += 1
                                    *x10_5 = x8_1
                                    *(x10_5 + 8) = x27_1
                                    *(x10_5 + 0x10) = x9_2
                            
                            break
                    
                    fp_1 += 1
                while (fp_1 != x20_1)
                
                x8 = *(arg2 + 8)
                arg3 = var_274_1
        
        i += 1
    while (i s< sx.q(x8))

std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult> var_68
std::__ndk1::__sort<std::__ndk1::__less<StateTreeQueryResult, StateTreeQueryResult>&, StateTreeQueryResult*>(
    arg4, arg4 + muls.dp.d(x21, 0x18), &var_68)
return zx.q(x21)
