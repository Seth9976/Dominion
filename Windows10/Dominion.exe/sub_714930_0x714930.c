// 函数: sub_714930
// 地址: 0x714930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t xmm2
int32_t var_c = xmm2
int32_t xmm3
int32_t xmm1 = xmm3
int32_t var_10 = arg2
int32_t esi = 0
int32_t var_8 = xmm1
int32_t ebx = *(arg3 + 8)

if (ebx s<= 0)
    return 

do
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
    void* eax_1 = *(*(arg3 + 0xc) + (esi << 2))
    int32_t* ecx = *(eax_1 + 4)
    int32_t* var_28_1 = ecx
    int32_t var_28_2 = arg4
    int32_t var_2c_1 = 0
    int32_t var_30_1 = 0
    int32_t var_34_1 = xmm1
    int32_t var_38_1 = xmm2
    (*ecx)(eax_1, arg2)
    xmm1 = var_8
    esi += 1
    xmm2 = var_c
    arg2 = var_10
while (esi s< ebx)
