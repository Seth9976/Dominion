// 函数: _Z26DefBinWriteItemsToPackFilePKcR5XListIP6XAssetEb
// 地址: 0xc85cc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
MakeDirectoriesInFullPath(arg1)
FILE* fp = fopen(arg1, "wb")

if (fp == 0)
    goto label_c85da8

int64_t buf = 0x75850434b
int32_t var_108_1 = *(arg2 + 0x10)

if (fwrite(&buf, 0xc, 1, fp) != 1)
label_c85d90:
    fclose(fp)
label_c85d98:
    unlink(arg1)
    fp = nullptr
label_c85da8:
    
    if (*(x24 + 0x28) == x8)
        return fp
else
    int64_t* i = *arg2
    int32_t x23_1 = 0xc + *(arg2 + 0x10) * 0xa8
    
    while (i != 0)
        int64_t* i_1 = i[1]
        void buf_1
        DefBinWriteMakeAssetEntry(&buf_1, *i, x23_1)
        int32_t var_f0
        x23_1 += var_f0
        i = i_1
        
        if (fwrite(&buf_1, 0xa8, 1, fp) != 1)
            goto label_c85d90
    
    int32_t x0_9 = DefBinWritePackAssets(arg2, fp, arg3 & 1)
    fclose(fp)
    
    if ((x0_9 & 1) == 0)
        goto label_c85d98
    
    if (*(x24 + 0x28) == x8)
        return 1

__stack_chk_fail()
noreturn
