// 函数: sub_758240
// 地址: 0x758240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t i = 0

if (*(arg1 + 0x788) s> 0)
    void* ebx_1 = arg1 + 0x1c8
    
    do
        ov_raw_seek(ebx_1, 0, 0)
        i += 1
        ebx_1 += 0x2e0
    while (i s< *(arg1 + 0x788))

*(arg1 + 0x10) &= 0xfffeffff
*(arg1 + 0x78c) = 0
*(arg1 + 0x790) = 0
*(arg1 + 0x794) = 0
*(arg1 + 0x79c) = 0
*(arg1 + 0x60) = (zx.o(0)).q
return 0
