// 函数: sub_752f80
// 地址: 0x752f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_3 = data_147ded8
int32_t* result

if (eax_3 == 0)
    result = malloc(0xa0)
else
    result = eax_3(0xa0, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x73)

if (result != 0)
    memset(result, 0, 0xa0)

int32_t ecx = data_19e277c
data_19e277c = ecx + 1
uint32_t eax_1 = zx.d(ecx.w) << 0xb
result[0xb] = eax_1
result[0xa] = result
result[0x1e] = 0x3f800000
result[0x1f] = 0x3f800000
result[0x20] = 0x3f800000
result[0x21] = 0x3f800000
sub_752330(&result[0x1e])
sub_752290(eax_1, arg1, result, 2, sub_752b00, sub_752bd0)
return result
