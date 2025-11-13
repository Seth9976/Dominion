// 函数: sub_702970
// 地址: 0x702970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = memset(arg2, 0xff, 0x3c)
int32_t i = 0
void* ecx_1 = *(arg1 + 0x350)

if (*(ecx_1 + 0x3f4) s> 0)
    int32_t* edx_1 = 0x3fc
    
    do
        int32_t ebx_1 = *(edx_1 + ecx_1 - 4)
        
        if (ebx_1 - 0x53 u<= 0x29)
            switch (ebx_1)
                case 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59
                    arg2[ebx_1 - 0x50] = *(edx_1 + ecx_1)
                case 0x5d
                    *arg2 = *(edx_1 + ecx_1)
                case 0x5e
                    arg2[1] = *(edx_1 + ecx_1)
                case 0x5f
                    arg2[2] = *(edx_1 + ecx_1)
                case 0x68
                    arg2[0xc] = *(edx_1 + ecx_1)
                case 0x7a
                    arg2[0xd] = *(edx_1 + ecx_1 - 0x3f0)
                case 0x7b
                    arg2[0xe] = *(edx_1 + ecx_1 - 0x3f0)
                case 0x7c
                    arg2[0xb] = *(edx_1 + ecx_1)
        
        result = arg1
        i += 1
        edx_1 = &edx_1[5]
        ecx_1 = *(result + 0x350)
    while (i s< *(ecx_1 + 0x3f4))

return result
