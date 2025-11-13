// 函数: sub_700aa0
// 地址: 0x700aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
(*__glewGenBuffers)(1, &var_8)
void* ecx = data_147ded4
void* eax_1 = var_8

if (*(ecx + 0x409c) != eax_1)
    *(ecx + 0x409c) = eax_1
    (*__glewBindBuffer)(0x8892, eax_1)
    void* eax_3 = data_147b06c
    *(eax_3 + 0x10) += 1

ebx.b = arg5
void* var_20_2 = ((zx.d(ebx.b) ^ 1) << 2) + 0x88e0
int32_t var_24 = arg2
int32_t var_28 = arg3
(*__glewBufferData)(0x8892)
int32_t* eax_8 = sub_706a30(arg1 + 0x424c)
*eax_8 = var_8
eax_8[2] = arg3
eax_8[3].b = ebx.b
eax_8[1] = 0
eax_8[0x37] = arg4
return eax_8[0x52]
