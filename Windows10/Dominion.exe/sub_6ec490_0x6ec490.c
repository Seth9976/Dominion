// 函数: sub_6ec490
// 地址: 0x6ec490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
char** var_8 = arg3
void* edi = &data_8d0b80
int32_t i_1 = 0x1c
int32_t i

do
    if (*esi != *edi)
        int32_t edx = *(arg5 + arg2 * 0xc + 0x160)
        int32_t var_1c = edx
        int128_t* eax_5 = ((edx + 0x11) << 5) + arg5
        *eax_5 = *arg4
        eax_5[1] = *(arg4 + 0x10)
        sub_63df30(arg3, "\tfloat2 uv = MultiplyMatrixVec(float3(arg_uv, 1.0), gTexAnim%d).xy;\n")
        return arg3
    
    esi = &esi[1]
    edi += 4
    i = i_1
    i_1 -= 4
while (i u>= 4)
sub_63d720(arg3, "\tfloat2 uv = arg_uv;\n")
return arg3
