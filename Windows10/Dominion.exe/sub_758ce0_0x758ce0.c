// 函数: sub_758ce0
// 地址: 0x758ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_758d60(*arg1)
sub_759100(arg1, result)
result[0xc] = arg1[0xc]
int32_t ecx_3 = data_147ded8
int32_t _Size = arg1[0xc] << 2
int32_t eax_1

if (ecx_3 == 0)
    eax_1 = malloc(_Size)
else
    eax_1 = ecx_3(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathAttachment.c", 0x2f)

result[0xd] = eax_1
memcpy(eax_1, arg1[0xd], arg1[0xc] << 2)
result[0xe] = arg1[0xe]
result[0xf] = arg1[0xf]
return result
