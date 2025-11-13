// 函数: _Z8CalcFluxRK7MeshMapPfPi
// 地址: 0xc1657c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_10030[0x2000]
float entry_v0

for (int64_t i = 0; i != 0x4000; i += 1)
    var_10030[i] = i.d
    arg2[i] = 0x38800000
    int64_t x15_3 = sx.q(*(arg1 + (i << 2) + 0xeffc0))
    int32_t j = *(arg1 + (x15_3 << 2) + 0xfffc0)
    int32_t j_1
    
    if (j == 0xffffffff)
        j_1 = -1
    else
        void* x17_1 = arg1 + 0xfffc4 + (x15_3 << 2)
        j_1 = -1
        entry_v0 = float.s(0x47c34f80)
        
        do
            float v1 = *(arg1 + muls.dp.d(j, 0xc) + 8)
            v1 - entry_v0
            
            if (not(v1 > entry_v0))
                j_1 = j
            
            j = *x17_1
            x17_1 += 4
            
            if (not(v1 > entry_v0))
                entry_v0 = v1
        while (j != 0xffffffff)
    
    arg3[i] = j_1

MeshMap const& var_28 = arg1
int64_t __saved_fp
int64_t result = sub_c209e4(&var_10030, &__saved_fp, &var_28, entry_v0)

for (int64_t i_1 = 0; i_1 != 0x10000; i_1 += 4)
    int64_t x9_1 = sx.q(*(&var_10030 + i_1))
    uint64_t x10_1 = zx.q(arg3[x9_1])
    
    if ((x10_1.d & 0x80000000) == 0)
        arg2[x10_1] = arg2[x9_1] + arg2[x10_1]

return result
