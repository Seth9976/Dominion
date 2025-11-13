// 函数: sub_6ea9d0
// 地址: 0x6ea9d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const edx = &data_801800
char* eax = *arg1
int32_t* ecx = arg1[0xf]

if (eax != 0)
    edx = eax

float xmm0

if (ecx == 0)
    xmm0 = sub_6b43a0(arg1[0xe], edx, arg1[0x13], arg1[0x14])
else
    int32_t* var_8_1 = ecx
    xmm0 = sub_6417e0(ecx, edx, arg1[0x10], arg1[0x13])

int32_t result = arg1[0x1b]

if (not(arg1[6] f>= xmm0 f* arg1[0x12]))
    if (result == 2)
        return 1
    
    if (result == 5)
        return 4
    
    if (result == 8)
        return result - 1

return result
