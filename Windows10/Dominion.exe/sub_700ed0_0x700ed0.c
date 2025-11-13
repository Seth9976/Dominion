// 函数: sub_700ed0
// 地址: 0x700ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* eax = data_147ded4
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi

if (*(eax + 0x4098) != 0)
    *(eax + 0x4098) = 0
    (*__glewBindVertexArray)(0)
    void* eax_2 = data_147b06c
    *(eax_2 + 0x14) += 1

(*__glewGenBuffers)(1, &var_8)
(*__glewBindBuffer)(0x8893, var_8)
int32_t* eax_5 = sub_706a30(arg1 + 0x424c)
*eax_5 = var_8
void* ecx_1
ecx_1.b = arg4
eax_5[1] = 1
eax_5[3].b = arg5
eax_5[2] = arg3
void* var_1c_1 = ((zx.d(arg5) ^ 1) << 2) + 0x88e0
int32_t var_20 = arg2
*(eax_5 + 0x13e) = ecx_1.b
(*__glewBufferData)(0x8893, arg3)
return eax_5[0x52]
