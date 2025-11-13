// 函数: sub_571cb0
// 地址: 0x571cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi_2 = &arg3[arg2 * 8]
*(edi_2 + 0x152dc) += arg4
int32_t ecx = arg3[0x541]

if (ecx != 3 && ecx != 5 && ecx != 4 && ecx != 6)
    ecx.b = ecx == 2
    sub_61b1b0((arg2 + 0xa97) << 5, 0x14, ecx.b, *(edi_2 + 0x152cc), arg2, arg4, nullptr, 
        *(edi_2 + 0x152c8), *(edi_2 + 0x152d0), *(edi_2 + 0x152d4), 0, 0, arg3[(arg2 + 0xa97) * 8], 
        arg3[(arg2 + 0xa97) * 8 + 1])

int32_t edx = *(edi_2 + 0x152cc)

if (edx == 0xffffffff || (arg6 & 2) != 0)
    return 

int32_t ecx_1 = *(edi_2 + 0x152c8)

if (ecx_1 == 0xe01)
    return 

arg1 = arg3[0x541]

if (arg1 == 3 || arg1 == 5 || arg1 == 4 || arg1 == 6 || arg3[0x540].b != 0)
    return 

int32_t eax_2 = edx

if (edx == arg3[0x673])
    eax_2 = arg3[0x674]

sub_59f9b0(eax_2, edx, arg3, eax_2, 0xb, arg5, nullptr, 0, ecx_1, arg4, 0, 0)
