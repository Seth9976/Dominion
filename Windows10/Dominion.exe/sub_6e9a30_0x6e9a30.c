// 函数: sub_6e9a30
// 地址: 0x6e9a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const edx = &data_801800
char* eax = *arg1
int32_t* ecx = arg1[0xf]
float xmm2 = arg1[0x13]

if (eax != 0)
    edx = eax

uint32_t eax_1
float xmm1_1

if (ecx == 0)
    float xmm0_2
    eax_1, xmm0_2 = sub_6b43a0(arg1[0xe], edx, xmm2, arg1[0x14])
    xmm1_1 = xmm0_2 f* arg1[0x12]
else
    float xmm0 = arg1[0x12]
    int32_t* var_18_1 = ecx
    float xmm0_1
    eax_1, xmm0_1 = sub_6417e0(ecx, edx, arg1[0x10], xmm2)
    xmm1_1 = xmm0_1 * xmm0

if (not(arg1[6] f< xmm1_1))
    arg1[0xa] = 0
    arg1[0xb] = 0
    return eax_1

int32_t var_18_2 = 0
float xmm0_4 = sub_6eaa50(arg1)
float xmm0_5 = arg1[4]

if (not(xmm0_4 <= xmm0_5))
    arg1[0xa] = arg1[0xa] f- (xmm0_4 - xmm0_5)

float xmm0_9 = arg1[0x12] f* 3f
float var_10
float var_c
sub_6ead20(arg1, &var_10, &var_c)
int32_t var_18_4 = arg1[1]
char* eax_2
float xmm0_10
eax_2, xmm0_10 = sub_6eaa50(arg1)
float xmm1_5 = arg1[4]
float xmm0_12 = xmm0_9 + xmm0_10

if (not(xmm1_5 <= xmm0_10))
    arg1[0xa] = arg1[0xa] f- (xmm0_10 - xmm1_5)
    return eax_2

float xmm1_6 = xmm1_5 f+ arg1[6]

if (not(xmm0_12 <= xmm1_6))
    arg1[0xa] = xmm1_6 - xmm0_12 f+ arg1[0xa]

return eax_2
