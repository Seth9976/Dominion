// 函数: _Z19DefBinWritePackDataR5XListIP6XAssetEP7__sFILEb
// 地址: 0xc85bc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x23 + 0x28)
int64_t buf = 0x75850434b
int32_t var_f8 = *(arg1 + 0x10)

if (fwrite(&buf, 0xc, 1, arg2) != 1)
label_c85c6c:
    
    if (*(x23 + 0x28) == x9)
        return 0
else
    int64_t* i = *arg1
    int32_t x22_1 = 0xc + *(arg1 + 0x10) * 0xa8
    
    while (i != 0)
        int64_t* i_1 = i[1]
        void buf_1
        DefBinWriteMakeAssetEntry(&buf_1, *i, x22_1)
        int32_t var_e0
        x22_1 += var_e0
        i = i_1
        
        if (fwrite(&buf_1, 0xa8, 1, arg2) != 1)
            goto label_c85c6c
    
    int32_t x0_5 = DefBinWritePackAssets(arg1, arg2, arg3 & 1)
    
    if (*(x23 + 0x28) == x9)
        return zx.q(x0_5) & 1

__stack_chk_fail()
noreturn
