// 函数: sub_6e1920
// 地址: 0x6e1920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = *(arg1 + 4)
uint32_t i

for (i = sx.d(*edx) - 9; i u<= 0x17; i = sx.d(*edx) - 9)
    i = zx.d(lookup_table_6e197c[i])
    void* eax_1
    bool cond:0_1
    
    switch (jump_table_6e196c[i])
        case 0x6e193e
            edx = &edx[1]
        case 0x6e1941
            cond:0_1 = edx[1] == 0xa
            eax_1 = &edx[1]
        label_6e1951:
            
            if (cond:0_1)
                edx = eax_1
            
            edx = &edx[1]
            *(arg1 + 0xc) += 1
            *(arg1 + 8) = edx
        case 0x6e194a
            cond:0_1 = edx[1] == 0xd
            eax_1 = &edx[1]
            goto label_6e1951
        case 0x6e1969
            break
    
    *(arg1 + 4) = edx

return i
